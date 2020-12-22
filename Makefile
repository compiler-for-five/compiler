result:yacc.y lex.l AST.h;
	bison -o yacc.tab.c yacc.y -d
	flex -o lex.yy.c lex.l
	byacc -vd yacc.y
	g++ -o parser yacc.tab.c lex.yy.c AST.cpp