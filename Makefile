result:test.y test.l test.h;bison -d test.y;flex test.l;gcc test.tab.c lex.yy.c test.c;byacc -vd test.y

