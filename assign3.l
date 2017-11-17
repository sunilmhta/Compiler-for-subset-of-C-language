D   [0-9]
NZ  [1-9]
L   [a-zA-Z_]
A   [a-zA-Z_0-9]
WS  [ \t\v\n\f]
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdarg.h>
    #include <string.h>
    #include "helplexer.cpp"
    #include "y.tab.h"
    int oldstate;

%}
%x COMMENT
%option yylineno

%%
"break"					{ return(BREAK); }
"case"					{ return(CASE); }
"char"					{ yylval.Node = makeNodeInTree("CHAR","char");return(CHAR);return(CHAR); }
"continue"				{ return(CONTINUE); }
"do"					{ return(DO); }
"else"					{ return(ELSE); }
"float"					{ yylval.Node = makeNodeInTree("FLOAT","float");return(FLOAT);return(FLOAT); }
"for"					{ return(FOR); }
"if"					{ return(IF); }
"int"					{ yylval.Node = makeNodeInTree("INT","int");return(INT); }
"return"				{ return(RETURN); }
"sizeof"				{ return(SIZEOF); }
"struct"				{ yylval.Node = makeNodeInTree("STRUCT","struct");return(STRUCT); }
"typedef"				{ return(TYPEDEF); }
"void"					{ yylval.Node = makeNodeInTree("VOID","void");return(VOID);return(VOID); }
"while"					{ return(WHILE); }

[a-zA-Z_]+[a-zA-Z0-9]* {yylval.Node = makeNodeInTree("IDENTIFIER",yytext);return IDENTIFIER;}
{NZ}+{D}*     {yylval.Node = makeNodeInTree("INTNUM",yytext);return INTNUM;}
"0"     {yylval.Node = makeNodeInTree("INTNUM","0");return INTNUM;}
{D}+"."{D}+   { return FLOATNUM;}


  /* strings */
'.' 					{return CHARLITERAL;}
\"(\\.|\"\"|[^"\n])*\"    { return STRING; }
'(\\.|[^'\n])*$         { return *yytext; }
\"(\\.|[^"\n])*$        { return *yytext ;}


(?i:COMMENT)  { return COMMENT; }
">>="					{ return RIGHT_ASSIGN; }
"<<="					{ return LEFT_ASSIGN; }
"+="					{ return ADD_ASSIGN; }
"-="					{ return SUB_ASSIGN; }
"*="					{ return MUL_ASSIGN; }
"/="					{ return DIV_ASSIGN; }
"%="					{ return MOD_ASSIGN; }
"&="					{ return AND_ASSIGN; }
"^="					{ return XOR_ASSIGN; }
"|="					{ return OR_ASSIGN; }
">>"					{ return RIGHT_OP; }
"<<"					{ return LEFT_OP; }
"++"					{ return INC_OP; }
"--"					{ return DEC_OP; }
"->"					{ return PTR_OP; }
"&&"					{ return AND_OP; }
"||"					{ return OR_OP; }
"<="					{ return LE_OP; }
">="					{ return GE_OP; }
"=="					{ return EQ_OP; }
"!="					{ return NE_OP; }
";"					    { return ';'; }
("{"|"<%")				{ return '{'; }
("}"|"%>")				{ return '}'; }
","					    { return ','; }
":"					    { return ':'; }
"="					    { yylval.Node = makeNodeInTree("ADD","=");return '='; }
"("					    { yylval.Node = makeNodeInTree("ADD","(");return '('; }
")"					    { yylval.Node = makeNodeInTree("ADD",")");return ')'; }
("["|"<:")	            { return '['; }
("]"|":>")			    { return ']'; }
"."					    { return '.'; }
"&"					    { return '&'; }
"!"					    { return '!'; }
"~"					    { return '~'; }
"-"					    { yylval.Node = makeNodeInTree("ADD","-");return '-'; }
"+"					    { yylval.Node = makeNodeInTree("ADD","+");return '+'; }
"*"					    { yylval.Node = makeNodeInTree("ADD","*");return '*'; }
"/"					    { yylval.Node = makeNodeInTree("ADD","/");return '/'; }
"%"					    { return '%'; }
"<"					    { return '<'; }
">"					    { return '>'; }
"^"					    { return '^'; }
"|"					    { return '|'; }
"?"					    { return '?'; }

"//".*            ;
"/*"                { oldstate = YY_START; BEGIN COMMENT; }
<COMMENT>"*/"       { BEGIN oldstate; }
<COMMENT>.|\n   ;
<COMMENT><<EOF>>    {printf("unclosed comment"); return -1; }


{WS}+					{ /* whitespace separates tokens */ }
.					    { return *yytext; }

%%

int yywrap(void)        /* called at end of input */
{
    return 1;           /* terminate now */
}
