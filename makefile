all: assign3

y.tab.c y.tab.h: assign3.y allNodes.h assign3.cpp
	yacc -d assign3.y

lex.yy.c: assign3.l y.tab.h helplexer.cpp allNodes.h
	lex assign3.l

assign3: lex.yy.c y.tab.c y.tab.h
	g++ -std=c++11 -o assign3 y.tab.c lex.yy.c

clean:
	rm -f assign3 y.tab.c lex.yy.c y.tab.h assign3.tab.h assign3.tab.c