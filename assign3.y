%{
	#include <bits/stdc++.h>
	#include "assign3.cpp"
	#include <stdio.h>
	#include <stdlib.h>
	#include <stdarg.h>
	#include <string.h>

	using namespace std;

	vector<string> code;

 	int yylex(void);
    extern int yylineno;
    void yyerror(const char *s)
    {

        fprintf(stderr,"Error detected in line %d.\n",yylineno);
    }
    bool flagtoPrintSymbolTable = true;
    int scope = 0;
    string varType = "";
    string funcName = "global";
    std::vector<allVariables> tempParams;
    std::vector<string> funcChecker;
    bool structFlag = false;
    std::vector<string> ThreeAddrCode;
    int variableIndex=1;
%}

%union
{
    node *Node;
}

%error-verbose
%token <Node> BREAK
%token <Node> CASE
%token <Node> CHAR
%token <Node> CONST
%token <Node> CONTINUE
%token <Node> DO
%token <Node> ELSE
%token <Node> ELLIPSIS
%token <Node> FLOAT
%token <Node> FOR
%token <Node> GOTO
%token <Node> IF
%token <Node> INT
%token <Node> MAIN
%token <Node> RETURN
%token <Node> STRUCT
%token <Node> SWITCH
%token <Node> SIZEOF
%token <Node> TYPEDEF
%token <Node> VOID
%token <Node> WHILE
%token <Node> FUNC_NAME
%token <Node>  TYPEDEF_NAME ENUMERATION_CONSTANT

/* Assignment operators */
%token <Node>  AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token <Node>  SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token <Node>  XOR_ASSIGN OR_ASSIGN

/* logical operators */
%token <Node> PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP

/* names and literal values */
%token <Node> IDENTIFIER
%token <Node> CHARLITERAL
%token <Node> STRING
%token <Node> INTNUM
%token <Node> FLOATNUM

%type<Node> program start_statement statement  simple_declaration
%type <Node> type_class declaration_list assignment
%type <Node> assignment_expression init_declator declarator
%type  <Node> compound_statement block_item block_item_list
%type <Node> instructions selection_statement expression unary_operator unary_expression
%start program
%%
program : start_statement
		{
			if(flagtoPrintSymbolTable)
				PrintSymbolTable();
		}
		;

start_statement
	: start_statement statement
	{
		$$ = addNode("start_statement",$1,$2);
	}
	| statement
	{
		$$=addNode("start_statement",$1);
	}
	;

statement
    : simple_declaration
    {
		$$=addNode("statement",$1);
    }
    | function_declaration
    {
        // cout<<"starting here:\n";
    }
    | struct_specifier
    | instructions
    {
        // cout<<"instructions\n";
    }
    ;

statement : error ';' start_statement {}
		;

simple_declaration
    : type_class declaration_list ';'
    {
		$$=addNode("simple_declaration",$1,$2);
        $$->childType = $1->children[0]->nodeValue;
       // cout<<"simple_declaration->type_class declaration_list\n";
        varType="";

    }
    | assignment ';'
    {
        $$=addNode("simple_declaration",$1);
        $$->childType = $1->childType;
        if (structFlag)
        {
            cout<<"No assignments allowed inside the structure\n";
            flagtoPrintSymbolTable = false;
        }

    }
    ;

assignment
    : IDENTIFIER '=' assignment_expression
    {
        //PrintSymbolTable();
        // cout<<"assignment->IDENTIFIER  \n";

        if(!lookup($1->nodeValue,funcName,scope) && !lookup($1->nodeValue,"global",0))
        {
            cout<<"Error: Variable " << $1->nodeValue<< " is not declared \n";
            flagtoPrintSymbolTable = false;
        }
        else
        {
            // cout << "Here: "<< getType($1,funcName,scope) << " fgf"<< $3->childType;
            if(getType($1,funcName,scope) != $3->childType)
            {
                printf("Error: Type mismatch errro in line no. %d\n",yylineno);
                //cout<<$1->childType << " "<< $3->childType <<std::endl;
                flagtoPrintSymbolTable = false;
            }
            $$ = addNode("assignment",$1,$3);
            $$->Operator = "=";
            string Leftname = "T"+to_string(variableIndex);
            variableIndex++;
            $3->threeAddrName = Leftname;
            string Rightname = "T"+to_string(variableIndex);
            variableIndex++;
            $$->threeAddrName = Rightname;
            $1->threeAddrName = $1->nodeValue;
        }

        GenerateCode($$);
    }
    | {}
    ;



type_class
    : VOID
    {
		$$=addNode("type_class",$1);
		$$->childType = $1->nodeName;
        //cout<<"type_class->INT\n";
        varType = "void";
    }
    | CHAR
    {
        $$=addNode("type_class",$1);
        $$->childType = $1->nodeName;
        //cout<<"type_class->INT\n";
        varType = "char";
    }
    | INT
    {
        $$=addNode("type_class",$1);
        $$->childType = $1->nodeName;
        //cout<<"type_class->INT\n";
        varType = "int";
    }
    | FLOAT
    {
        $$=addNode("type_class",$1);
        $$->childType = $1->nodeName;
        //cout<<"type_class->INT\n";
        varType = "float";
    }
    ;


struct_specifier
    : structHeader '{' struct_declaration_list '}' ';'
    {
        scope--;
        if (scope>=1)
        {
            cout<<"Error: struct should be declared globally\n";
            flagtoPrintSymbolTable = false;
        }
        structFlag = false;
        funcName = "global";
    }
    | STRUCT IDENTIFIER ';'
    ;

structHeader
    : STRUCT IDENTIFIER
    {
        scope++;
        structFlag = true;
        string currentStructName = $2->nodeValue;
        funcName = currentStructName;

        // cout<<funcName << "sunil\n";
        if (globalSymbolTable.size() == 0)
            dummyInsert();
        int index=returnIndexinVector(globalSymbolTable[0].localVariables,0,currentStructName);
        if (!lookup(currentStructName) && index < 0)
        {
            insertData(currentStructName,$1->nodeValue);
        }
        else
        {
            cout<<"Error in line "<<yylineno<<std::endl;
            cout<<"Name " << currentStructName <<"already exists\n";
            flagtoPrintSymbolTable = false;
        }

    }

struct_declaration_list
    :
    {
        cout << "structure can't be empty.\n";
        flagtoPrintSymbolTable = false;
    }
    | simple_declaration
    | struct_declaration_list simple_declaration
    ;


declaration_list
    : declaration_list ',' init_declator
    {
        $$=addNode("declaration_list",$1,$3);
        $$->childType = $1->childType;
    }
    | init_declator
    {
       $$=addNode("declaration_list",$1);
       $$->childType = $1->childType;
       //cout<<"declaration_list->init_declator\n";
    }
    ;

init_declator
    : declarator '=' assignment_expression
    {
        if (structFlag)
        {
            cout<<"Error: assignments not allowed inside structure\n";
            flagtoPrintSymbolTable = false;
        }
        $$=addNode("init_declator",$1,$3);
        $$->childType = $1->childType;
        //handle this with getleafnode function
        // cout<<"1-----" << $1->childType << " gap------" << $3->childType<<std::endl;
        if($1->childType != $3->childType)
        {
            printf("Error: Type mismatch errro in line no. %d\n",yylineno);
            flagtoPrintSymbolTable = false;
        }
        $$=addNode("init_declator",$1);
        $$->childType = $1->childType;
        if (funcName == $1->children[0]->nodeValue )
        {
            cout<<"Error in line " << yylineno << ", Variable name can't be equal to function name\n";
            flagtoPrintSymbolTable = false;
        }
        if (!lookup($1->children[0]->nodeValue,funcName,scope))
        {
            insertData($1->children[0]->nodeValue,funcName,varType,"var",scope);
            $$->Operator = "=";
            string Leftname = "T"+to_string(variableIndex);
            variableIndex++;
            // $3->threeAddrName = Leftname;
            string Rightname = "T"+to_string(variableIndex);
            variableIndex++;
            // $$->threeAddrName = Rightname;
            // $1->threeAddrName = $1->childType;
            $1->threeAddrName = Leftname;
            $3->threeAddrName = Rightname;
            cout<<Leftname<<" "<<Rightname << " "<<std::endl;
            $$->threeAddrName = "T"+to_string(variableIndex);
            variableIndex++;
            GenerateCode($$);
        }
        else
        {
            cout<<"Error in line: "<<yylineno<<" Variable Name already exists.\n";
            flagtoPrintSymbolTable = false;
        }
    }
    | declarator
    {
        $$=addNode("init_declator",$1);
        $$->childType = $1->nodeName;
        if (!lookup($1->children[0]->nodeValue,funcName,scope))
        {
            insertData($1->children[0]->nodeValue,funcName,varType,"var",scope);
        }
        else
        {
            cout<<"Error in line: "<<yylineno<<" Variable Name already exists.\n";
            flagtoPrintSymbolTable = false;
        }
    }
    ;

declarator
    : IDENTIFIER
    {
        $$ = addNode("identifer",$1);
        $$->childType = varType;
        $1->threeAddrName = $1->nodeValue;
    }
    | declarator '[' ']'
    | declarator '[' INTNUM ']'
    ;


parameter_list
    : parameter_declaration
    | parameter_list ',' parameter_declaration
    ;

parameter_declaration
    :
    | type_class declarator
    {
        allVariables temp;
        temp.var_name = $2->children[0]->nodeValue;
        temp.varType = $1->children[0]->nodeValue;
        temp.scope = scope;
        temp.paramOrVar = "params";
        for (int i = 0; i < tempParams.size(); ++i)
        {
            if (tempParams[i].var_name == temp.var_name)
            {
                cout<<"Variable name "<<temp.var_name << " already exists.\n";
                flagtoPrintSymbolTable = false;
                break;
            }
        }
        tempParams.push_back(temp);
    }
    ;

assignment_expression
    : IDENTIFIER
    {
        if(lookup($1->nodeValue,funcName,scope) || lookup($1->nodeValue,"global",0) )
        {
            $$=addNode("assignment_expression",$1);
            std::string currentIdentifierType = getType($1,funcName,scope);
            $$->childType = currentIdentifierType;
        }
        else
        {
            cout<<"Error: Variable " << $1->nodeValue<< " is not declared \n";
            flagtoPrintSymbolTable = false;
        }
        $1->threeAddrName = $1 -> nodeValue;
    }
    | INTNUM
    {
        $$=addNode("assignment_expression");
        $$->childType = "int";
        $1->threeAddrName = $1 -> nodeValue;
        // cout<<"assignment_expression->INTNUM\n";
        // cout<<$$->childType<<std::endl;
    }
    | FLOATNUM
    {
        $$=addNode("assignment_expression");
        $$->childType = "float";

    }
    | CHARLITERAL
    {
        $$=addNode("assignment_expression");
        $$->childType = "char";

    }
    | assignment_expression unary_operator assignment_expression
    {
        // cout<<"assi2+assi2\n";
        if($1->childType != $3->childType)
        {
            // cout<<"assi+assi\n";
            printf("Error: Type mismatch errro in line no. %d\n",yylineno);
            flagtoPrintSymbolTable = false;
        }
        $$=addNode("assignment_expression",$1,$3);
        $$->Operator = $2 -> children[0] -> nodeValue;
        $$->childType = $1->childType;
        // string Rootname = "T"+to_string(variableIndex);
        string Leftname = "T"+to_string(variableIndex);
        $1-> threeAddrName = Leftname;
        variableIndex++;
        string Rightname = "T"+to_string(variableIndex);
        $3-> threeAddrName = Rightname;
        // cout << "Left: "<<Leftname << " Rightname: " << Rightname << std::endl;
        variableIndex++;
    }
    | '(' assignment_expression ')'
    {
        $$=addNode("assignment_expression",$2);
        $$->childType = $2->childType;

    }
    ;

/*----------------------------------------------------------------------------*/
                        /*If statement*/
compound_statement
    : '{' '}'
    | '{' {scope++;} block_item_list '}'
    {
        scope--;
    }
    ;

block_item_list
    : block_item
    | block_item_list block_item
    ;

block_item
    : simple_declaration
    {
        // cout <<"simple_declaration\n";
    }
    | instructions
    ;


instructions
    : compound_statement
    | selection_statement
    | expression_statement
    | iteration_statement
    | jump_statement
    ;

expression_statement
    : ';'
    | expression ';'
    ;

selection_statement
    : IF '(' ifExpression ')' instructions ELSE instructions
    | IF '(' ifExpression ')' instructions
    ;

ifExpression
    : '(' ifExpression ')' conditional_operators '(' ifExpression ')'
    | assignment_expression conditional_operators assignment_expression
    | assignment_expression
    ;

conditional_operators
    : '='
    | LE_OP
    | GE_OP
    | EQ_OP
    | NE_OP
    | '<'
    | '>'
    ;

/*---------------------------for loop---------------------------------------*/

iteration_statement
    : WHILE '(' expression ')' instructions
    | DO instructions WHILE '(' expression ')' ';'
    {
        // cout<<"1\n";
    }
    | FOR '(' expression_statement expression_statement ')' instructions
    {
        // cout<<"2\n";
    }
    | FOR '(' expression_statement expression_statement expression ')' instructions
    {
        // cout<<"3\n";
    }
    | temp_statement expression temp_statement2
    {
        // cout << "for statement:\n";
    }
    | temp_statement temp_statement2
    ;

temp_statement
    : FOR  '(' {scope++;} simple_declaration expression_statement {}
    ;

temp_statement2
    : ')' {scope--;} instructions
    ;
/*----------------------------------------------------------------------------*/
expression
    : primary_expression
    {
        // cout<<"1*"<<std::endl;

    }
    | expressionAssignment
    {
        // cout<<"1"<<std::endl;
    }
    | expression ',' expressionAssignment
    ;

expressionAssignment
    : conditional_expression
    {
        // cout<<"2"<<std::endl;

    }
    | unary_expression assignment_operator expressionAssignment
    {
        // cout<<"2*"<<std::endl;

    }
    ;

conditional_expression
    : logical_and_expression
    {
        // cout<<"3"<<std::endl;

    }
    | logical_or_expression OR_OP logical_and_expression
    {
        // cout<<"3*"<<std::endl;

    }
    ;

logical_and_expression
    : inclusive_or_expression
    {
        // cout<<"4"<<std::endl;

    }
    | logical_and_expression AND_OP inclusive_or_expression
    {
        // cout<<"4*"<<std::endl;

    }
    ;

logical_or_expression
    : logical_and_expression
    {
        // cout<<"5"<<std::endl;

    }
    | logical_or_expression OR_OP logical_and_expression
    {
        // cout<<"5*"<<std::endl;

    }
    ;

inclusive_or_expression
    : exclusive_or_expression
    {
        // cout<<"6"<<std::endl;

    }
    | inclusive_or_expression '|' exclusive_or_expression
    {
        // cout<<"6*"<<std::endl;

    }
    ;

exclusive_or_expression
    : and_expression
    {
        // cout<<"7"<<std::endl;

    }
    | exclusive_or_expression '^' and_expression
    {
        // cout<<"7*"<<std::endl;

    }
    ;

and_expression
    : equality_expression
    | and_expression '&' equality_expression
    ;

equality_expression
    : relational_expression
    | equality_expression EQ_OP relational_expression
    | equality_expression NE_OP relational_expression
    ;

relational_expression
    : shift_expression
    | relational_expression '<' shift_expression
    | relational_expression '>' shift_expression
    | relational_expression LE_OP shift_expression
    | relational_expression GE_OP shift_expression
    ;

shift_expression
    : additive_expression
    | shift_expression LEFT_OP additive_expression
    | shift_expression RIGHT_OP additive_expression
    ;

additive_expression
    : multiplicative_expression
    | additive_expression '+' multiplicative_expression
    | additive_expression '-' multiplicative_expression
    ;

multiplicative_expression
    : cast_expression
    | multiplicative_expression '*' cast_expression
    | multiplicative_expression '/' cast_expression
    | multiplicative_expression '%' cast_expression
    ;

cast_expression
    : unary_expression
    | '(' type_class ')' cast_expression
    ;

unary_expression
    : postfix_expression
    | INC_OP unary_expression
    | DEC_OP unary_expression
    | unary_operator cast_expression
    | '=' assignment_expression
    ;
postfix_expression
    : primary_expression
    | postfix_expression '[' expression ']'
    | postfix_expression '(' ')'
    | postfix_expression '.' IDENTIFIER
    | postfix_expression PTR_OP IDENTIFIER
    | postfix_expression INC_OP
    | postfix_expression DEC_OP
    ;

primary_expression
    : IDENTIFIER
    {
        // if (!lookup(funcName,))
        {
            /* code */
        }
    }
    | INTNUM
    | FLOATNUM
    | CHARLITERAL
    | STRING
    | '(' expression ')'
    ;

assignment_operator
    : '='
    | MUL_ASSIGN
    | DIV_ASSIGN
    | MOD_ASSIGN
    | ADD_ASSIGN
    | SUB_ASSIGN
    | LEFT_ASSIGN
    | RIGHT_ASSIGN
    | AND_ASSIGN
    | XOR_ASSIGN
    | OR_ASSIGN
    ;

unary_operator
    : '&'
    {
        // $$ = addNode("unary_operator",$1);
        node* newNode = new node();
        newNode-> nodeValue = "&";
        $$ = addNode("unary_expression",newNode);

    }
    | '*'
    {
        // $$ = addNode("unary_operator",$1);
        node* newNode = new node();
             newNode-> nodeValue = "*";
             $$ = addNode("unary_expression",newNode);


    }
    | '+'
    {
        // $$ = addNode("unary_operator",$1);
        node* newNode = new node();
         newNode-> nodeValue = "+";
         $$ = addNode("unary_expression",newNode);

    }
    | '/'
    {
        // $$ = addNode("unary_operator",$1);
        node* newNode = new node();
         newNode-> nodeValue = "/";
         $$ = addNode("unary_expression",newNode);

    }
    | '-'
    {
        // $$ = addNode("unary_operator",$1);
        node* newNode = new node();
             newNode-> nodeValue = "-";
             $$ = addNode("unary_expression",newNode);

    }
    | '~'
    {
        // $$ = addNode("unary_operator",$1);
        node* newNode = new node();
             newNode-> nodeValue = "~";
             $$ = addNode("unary_expression",newNode);

    }
    | '!'
    {
        // $$ = addNode("unary_operator",$1);
        node* newNode = new node();
             newNode-> nodeValue = "!";
             $$ = addNode("unary_expression",newNode);

    }
    ;

jump_statement
    : CONTINUE ';'
    | BREAK ';'
    | RETURN ';'
    {
        int index= returnIndexInTable(funcName);
        string returnType =  globalSymbolTable[index].funcReturnType;
        if ( returnType != "void")
        {
            cout<<"Error in line " << yylineno << " Function must return " << returnType <<" value\n";
            flagtoPrintSymbolTable = false;
        }
    }
    | RETURN assignment_expression ';'
    {
        int index= returnIndexInTable(funcName);
        if (globalSymbolTable[index].funcReturnType != $2->childType)
        {
            cout<<"Error in line " << yylineno << " Function Return type mismatch\n";
            flagtoPrintSymbolTable = false;
        }
    }
    ;
/*-----------------------------functions--------------------------------------------*/

function_declaration
    : temp_function  parameter_list temp_function_end
    {
        // cout<<"1\n";
    }
    | temp_function  temp_function_end
    {
        // cout<<"second here\n";
    }
    | IDENTIFIER '(' identifier_list ')' ';'
    {
        // cout<<"Here: ";
        int indexinFunction = returnIndexInTable($1->nodeValue);
        // std::cout<<indexinFunction;
        std::vector<allVariables> v = globalSymbolTable[indexinFunction].paramListPtr;
        // reverse(v.begin(), v.end());
        if (v.size() < funcChecker.size())
        {
            std::cout<<"Too many arguments in the function call at line "<< yylineno << "\n";
            flagtoPrintSymbolTable = false;
        }
        else if (v.size() > funcChecker.size())
        {
            std::cout<<"Too few arguments in the function call at line "<< yylineno << "\n";
            flagtoPrintSymbolTable = false;
        }
        else
        {
            for (int i = 0; i < v.size(); ++i)
            {
                if(v[i].varType != funcChecker[i])
                {
                    cout<<"Error, Incompatible function arguments\n" ;
                    flagtoPrintSymbolTable = false;
                    break;
                }
            }
        }
    }
    ;

identifier_list
    :
    {

    }
    | identifier_list ',' IDENTIFIER
    {
        funcChecker.push_back(getType($3,funcName,scope));
    }
    | IDENTIFIER
    {
        funcChecker.push_back(getType($1,funcName,scope));
    }
    ;

temp_function
    : type_class declarator '('
    {
        scope++;
        // cout<<"coming here:\n";
        string currentFuncName = $2->children[0]->nodeValue;
        funcName = currentFuncName;
        // cout<<funcName << "sunil\n";
        if (!lookup(currentFuncName))
        {
            insertData(currentFuncName,$1->children[0]->nodeValue);
        }
        else
        {
            cout<<"Error in line "<<yylineno<<std::endl;
            cout<<"Function Name " << currentFuncName <<"already exists\n";
            flagtoPrintSymbolTable = false;
        }

    }
    ;

temp_function_end
    : ')' {scope--;updateSymboltable(funcName,tempParams);tempParams.clear();} compound_statement
    {
        funcName = "global";
    }
    ;



/*----------------------------------------------------------------------------------*/


%%


int main(int ac,char **av)
{
  extern FILE *yyin;
  if(ac > 1 && !(yyin = fopen(av[1], "r")))
  {
    perror(av[1]);
    exit(1);
  }
  yyparse();
  return 0;
}
