#ifndef _AST_H
#define _AST_H
#include <stdio.h>

enum category {  Program,   FuncDefinition, FuncDeclaration,   ParamList,   FuncBody,   ParamDeclaration,  Declaration,   StatList,   If,   Natural,   Decimal, While, Return, Add, Sub, Mul, Div, Mod, Or, Store, Comma,Call, And, BitWiseAnd,BitWiseOr,BitWiseXor, Eq,Ne,Le,Ge,Lt,Gt, Plus, Minus, Not, ChrLit,Char,Identifier,Int,Short,Double , Void,Null,FuncDeclarator,Declarator,expList,DeclarationsAndStatements,DeclaratorList,Statement,Error};
#define names { "Program", "FuncDefinition","FuncDeclaration", "ParamList", "FuncBody", "ParamDeclaration", "Declaration", "StatList", "If", "Natural", "Decimal", "While", "Return", "Add", "Sub", "Mul", "Div", "Mod","Or","Store", "Comma","Call", "And", "BitWiseAnd","BitWiseOr","BitWiseXor", "Eq","Ne","Le","Ge","Lt","Gt", "Plus", "Minus", "Not", "ChrLit","Char","Identifier","Int","Short","Double","Void","Null","FuncDeclarator","Declarator","expList","DeclarationsAndStatements","DeclaratorList","Statement","Error" }

struct node {
    enum category category;
    char *token;
    struct node *parent;
    struct node_list *children;
    struct node_list *siblings;
};

struct node_list {
    struct node *node;
    struct node_list *next;
};

struct node *newnode(enum category category, char *token);
void addchild(struct node *parent, struct node *child);
struct node *getchild(struct node *parent, int position);
int countchildren(struct node *node);
void show(struct node *root, int depth); 
void deallocate(struct node *root);

void addsibling(struct node *node, struct node *sibling);
void deleteNode(struct node *node);
int countSiblings(struct node *node);
#endif