#include "allNodes.h"

// using namespace std;

std::vector<symbolTable> globalSymbolTable;

/* returns the index with given func name*/
int returnIndexInTable(string funcName)
{
    for (int i = 0; i < globalSymbolTable.size(); ++i)
    {
        if (globalSymbolTable[i].funcName == funcName)
            return i;
    }
    return -1;
}

int returnIndexinVector(std::vector<allVariables> &v,int scope,string varName)
{
    int Size = v.size();
    for (int i = 0; i < Size; ++i)
    {
        if (v[i].var_name == varName && v[i].scope == scope)
        {
            return i;
        }
    }
    return -1;
}


bool ifVarExistOrNot(int indexinGlobalTable,int scope,string varName)
{
    int Param = returnIndexinVector(globalSymbolTable[indexinGlobalTable].paramListPtr,scope,varName);
    int Localvar = returnIndexinVector(globalSymbolTable[indexinGlobalTable].localVariables,scope,varName);
    if(Param >= 0) return true;
    if(Localvar >= 0) return true;
    return false;
}

/*Normal Symbol Table*/
// void insertData(node* incomingIdentifier,int scope,string type = NULL)
// {
//     // cout <<"inserting..." <<incomingIdentifier->nodeValue << std::endl;
//     allVariables newData;
//     newData.var_name = incomingIdentifier->nodeValue;
//     newData.scope = scope;
//     newData.varType = type;

//     globalSymbolTable.push_back(newData);

// }

/* Dummy Insertion */
void dummyInsert()
{
    symbolTable firstEntry;
    firstEntry.funcName = "global";
    globalSymbolTable.push_back(firstEntry);
}

/* function symbol table */
void insertData(string funcName, string funcReturnType, int numParams = 0)
{
    if (globalSymbolTable.size()==0)
        dummyInsert();
    symbolTable newEntry;
    newEntry.funcName = funcName;
    newEntry.funcReturnType = funcReturnType;
    newEntry.numParams = numParams;
    globalSymbolTable.push_back(newEntry);
}

/* var or params */
void insertData(string varName,string funcName,string varType,string paramOrVar,int scope )
{
    if (globalSymbolTable.size()==0)
        dummyInsert();
    int indexwithFuncname = returnIndexInTable(funcName);
    if (indexwithFuncname >= 0)
    {
        allVariables newData;
        newData.var_name = varName;
        newData.varType = varType;
        newData.paramOrVar = paramOrVar;
        newData.scope = scope;
        if (paramOrVar == "params")
            globalSymbolTable[indexwithFuncname].paramListPtr.push_back(newData);
        else
            globalSymbolTable[indexwithFuncname].localVariables.push_back(newData);
    }
}


bool lookup(string varName,string funcName, int scope)
{
    // if (funcName != "global")
    // {
    //     int indexinFunction = returnIndexInTable(funcName);
    //     if(indexinFunction >= 0)
    //     {
    //         bool varPresent = ifVarExistOrNot(indexinFunction,scope,varName);
    //         if(varPresent) return true;
    //     }
    // }
    // funcName = "global";
    int indexinGlobal = returnIndexInTable(funcName);
    if(indexinGlobal >= 0)
    {
        bool varPresent = ifVarExistOrNot(indexinGlobal,scope,varName);
        if(varPresent) return true;
    }
    return false;
}

bool lookup(string funcName)
{
    int indexinGlobal = returnIndexInTable(funcName);
    if(indexinGlobal >= 0 ) return true;
    return false;
}

void PrintVector(std::vector<allVariables> &v)
{
    for (int i = 0; i < v.size(); ++i)
        cout << v[i].var_name << "\t" << v[i].varType << "\t" << v[i].scope << std::endl;
}

void PrintSymbolTable()
{
    for(int i=0;i<globalSymbolTable.size();i++)
    {
        cout<<"Func\t\tReturnType\t\tNumParam\n";
        cout<<globalSymbolTable[i].funcName << "\t\t" << globalSymbolTable[i].funcReturnType;
        cout << "\t\t\t" << globalSymbolTable[i].numParams << std::endl;
        if (globalSymbolTable[i].funcName != "global")
        {
            cout<<"\nPARAMETERS LIST:\n";
            cout<<"Name\tType\tScope\n";
            PrintVector(globalSymbolTable[i].paramListPtr);
        }
        cout<<"\nVARIABLES LIST:\n";
        cout<<"Name\tType\tScope\n";
        PrintVector(globalSymbolTable[i].localVariables);
        string line="-------------------------------";
        cout<<line+line+line<<std::endl;
    }

}

node* addNode(string type, node* a=NULL, node* b=NULL, node* c=NULL, node* d=NULL, node* e=NULL, node* f=NULL, node* g=NULL, node* h=NULL, node* i=NULL, string val="")
{
        // static int no = 1;
        node *newNode;
        newNode = new node();

        newNode->children[0] = a;
        newNode->children[1] = b;
        newNode->children[2] = c;
        newNode->children[3] = d;
        newNode->children[4] = e;
        newNode->children[5] = f;
        newNode->children[6] = g;
        newNode->children[7] = h;
        newNode->children[8] = i;
        newNode->children[9] = NULL;
        newNode->nodeName=type;
        // newNode->node_no = no * 10;
        newNode->nodeValue=val;

        // no++;
        // newNode->line_no=line;

        return newNode;
}

/*Type of identifier*/
string getTypeHelper(node *currentNode,string funcName,int scope)
{
    string varName = currentNode->nodeValue;
    // cout<<varName<<" inside\n";
    int index=returnIndexInTable(funcName);
    // if(index == -1) cout<<"WRONG\n";
    if (index >= 0)
    {
        int Param = returnIndexinVector(globalSymbolTable[index].paramListPtr,scope,varName);
        // cout<<"Param: "<<Param<<std::endl;
        if (Param >= 0)
            return globalSymbolTable[index].paramListPtr[Param].varType;
        int Localvar = returnIndexinVector(globalSymbolTable[index].localVariables,scope,varName);
        // cout<<"Localvar: "<<Localvar<<std::endl;
        // cout<<"Type: "<<globalSymbolTable[index].localVariables[Localvar].varType<<std::endl;
        if (Localvar >= 0)
            return globalSymbolTable[index].localVariables[Localvar].varType;
    }

    index=returnIndexInTable("global");
    if (index >= 0)
    {
        int Param = returnIndexinVector(globalSymbolTable[index].paramListPtr,scope,varName);
        if (Param >= 0)
            return globalSymbolTable[index].paramListPtr[Param].varType;
        int Localvar = returnIndexinVector(globalSymbolTable[index].localVariables,scope,varName);
        if (Localvar >= 0)
            return globalSymbolTable[index].localVariables[Localvar].varType;
    }
    return "";
}

string getType(node *currentNode,string funcName,int scope)
{
    while(scope>=0)
    {
        string temp = getTypeHelper(currentNode, funcName,scope);
        if (temp != "")
        {
            return temp;
        }
        scope--;
    }
    return "";
}

void updateSymboltable(string funcName,std::vector<allVariables> v)
{
    int index = returnIndexInTable(funcName);
    if(index >= 0  )
    {
        globalSymbolTable[index].paramListPtr = v;
        globalSymbolTable[index].numParams = v.size();
    }
}

node* getLeafNodeType(node *Node)
{
    while(Node->children[0])
    {
        Node = Node->children[0];
    }
    return Node;
}


int varIndex=1;

void GenerateCode(node * head)
{
    if((!head ) || (!head->children[0])) return;
    GenerateCode(head->children[0]);
    if (head->children[1])
    {
        GenerateCode(head->children[1]);
    }
    cout<<head->threeAddrName << " = " << head->children[0]->threeAddrName ;
    if (head->children[1])
    {
        cout<< " " << head->Operator << " "<<head->children[1]->threeAddrName;
    }
    cout<<std::endl;
}