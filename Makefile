<<<<<<< HEAD
<<<<<<< HEAD
result:yacc.y lex.l AST.h;
	bison -o yacc.tab.c yacc.y -d
	flex -o lex.yy.c lex.l
	byacc -vd yacc.y
	g++ -o parser yacc.tab.c lex.yy.c AST.cpp
=======
result:test.y test.l test.h;bison -d test.y;flex test.l;gcc test.tab.c lex.yy.c test.c;byacc -vd test.y

>>>>>>> f28466167c53d653d55bdb6c79fc4358a9d62644
=======
result:yacc.y lex.l AST.h symbol.h;
	bison -o yacc.tab.c yacc.y -d
	flex -o lex.yy.c lex.l
	byacc -vd yacc.y
	g++ -o parser yacc.tab.c lex.yy.c AST.cpp symbol.cpp
>>>>>>> 6535cd75b78c1ab63a6dd197899231401199d369
