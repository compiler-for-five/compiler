#ifndef SYMBOL_H
#define SYMBOL_H
#include <string>
#include <unordered_map>
#include <vector>
#include "AST.h"

#define INT_OFFSET 4

class symbol
{
protected:
    std::string idName;
    symbolType idType;
    int offset;
    int index;

public:
    symbol();
    symbol(std::string idName, symbolType idType);
    const std::string getIdName();
    inline int getOffset() { return offset; }
    inline int getIndex() { return index; }
    inline void setOffset(int offset) { this->offset = offset; }
    inline void setIndex(int index) { this->index = index; }
    symbolType &getIdType();
};


class SymbolTable
{
private:
    std::unordered_map<std::string, symbol *> symbolHashTable;
    // 只在根作用域下被初始化，用于按照索引值搜索符号
    std::vector<symbol *> *symbolArray;
    SymbolTable *parentTable;
    SymbolTable *childTable;
    SymbolTable *peerTable;
    // 根作用域保存该作用域下总符号数目
    int symbolItemCount;
    // 当前作用域的总偏移量
    int totalOffset;
    // 如果当前作用域是函数，则为true，否则为false
    bool isFunctionTable;
    // 根作用域指针
    SymbolTable *baseTable;
    symbol *findInThisTable(const std::string name);
    void visitFuncArgs(AST *arg, int &offset, int &index);
    int addSymbol(symbol *symbol);

public:
    // Judge the symbol is successfully added.
    static const int SUCCESS = 0;
    static const int FAIL = -1;
    // 如果当前作用域是函数，isFun则为true，否则为false
    // If success, return SUCCESS = 0, else return FAILED = -1.
    SymbolTable(SymbolTable *parent, bool isFun);
    int addSymbol(std::string idName, symbolType idType);
    int addArraySymbol(AST *decArray);
    // Create child symbol table, set peer table automatically
    SymbolTable *createChildTable();
    // If not found, return NULL marco.
    symbol *findSymbol(const std::string name);
    inline void setChild(SymbolTable *child) { this->childTable = child; };
    inline void setParent(SymbolTable *parent) { this->parentTable = parent; };
    inline SymbolTable *getParent() { return this->parentTable; };
    inline SymbolTable *getChild() { return this->childTable; };
    inline SymbolTable *getPeer() { return this->peerTable; }
    inline int getTotalOffset() { return this->totalOffset; }
    void printSymbolTable();
    SymbolTable * buildSymbolTable(AST *node);
};


#endif
