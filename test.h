

/*来自于词法分析器*/
extern int yylineno;//行号
extern char* yytext;//词
void yyerror(char *s,...);//错误处理函数

/*抽象语法树的结点*/
struct ast
{
    int line; //行号
    char* name;//语法单元的名字
    struct ast *parent;//父节点
    struct ast **children;//所有孩子节点序号
    int child_num;
    struct ast *l;//左孩子
    struct ast *r;//右孩子
    int nodeId;
    union//共用体用来存放ID/TYPE/INTEGER/FLOAT结点的值
    {
    char* idtype;
    int intgr;
    float flt;
    };
};

/*构造抽象语法树,变长参数，name:语法单元名字；num:变长参数中语法结点个数*/
struct ast *newast(char* name,int num,...);

void check(struct ast*);
/*遍历抽象语法树，level为树的层数*/
void eval(struct ast*,int level);

