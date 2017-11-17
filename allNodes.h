#include <bits/stdc++.h>
using namespace std;

// enum dataTypes
// {
//     INT=0,FLOAT,CHAR
// };

// struct simpleSymbolTable
// {
//     string var_name;
//     string varType;
//     int scope;
// };

struct allVariables
{
	string var_name;
    string varType;
    string paramOrVar;
    int dimension[10];
    int scope;
    allVariables()
    {
        int size = sizeof(dimension) / sizeof(dimension[0]);
        for (int i = 0; i < size; ++i)
            dimension[i] = 0;
    }
};

struct symbolTable
{
    string funcName;
    string funcReturnType;
    std::vector<allVariables> paramListPtr;
    std::vector<allVariables> localVariables;
    int numParams;

    symbolTable()
    {
        numParams = 0;
        funcName = "";
        funcReturnType = "void";
    }
};

// struct findFuncNameIndex
// {
//     string funcName;
//     findFuncNameIndex(string funcName) : id(id) {}
//     bool operator () ( const monster& m ) const
//     {
//         return m.id == id;
//     }
// };

// it = std::find_if( monsters.begin(), monsters.end(), findFuncNameIndex(monsterID));

struct node
{
	node *children[10];
	node *parent;
    string nodeName;
    string nodeValue;
    string code;
    string childType;
    string Operator;
    string threeAddrName;

    node()
    {
    	for (int i = 0; i < 10; ++i)
    	{
	    	children[i]= NULL;
    	}
    	parent = NULL;
    }
};

