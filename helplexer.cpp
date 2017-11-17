#include "allNodes.h"

node *makeNodeInTree(string name, string value)
{
	// string nodeName;
 //    string nodeValue;
 //    string name;
 //    string code;
	// std::cout<<"Name: " << name << " Value: "<< value<<std::endl;
	node *newNode = new node();
	newNode-> nodeName = name;
	newNode-> nodeValue = value;
	return newNode;
}