/* João Paiva 2021216669 - Salomé Costa 2021218601 */

%{
 #include "ast.h"
 #include "y.tab.h"  
 #include <stddef.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

int yylex(void);
void yyerror(char *);

extern int erro;
extern int flag;
extern int syn_line, syn_column;

extern char *yytext;
char *s;

extern char*category_name[];
struct node *program;          /*ponteiro para o nó raiz*/
struct node * t;

%}

%union {
    char *lexeme;              /*armazena os valores dos simbolos terminais e nao terminais*/
    struct node *node;
}

%token<lexeme> IDENTIFIER CHRLIT DECIMAL NATURAL
%token ASSIGN COMMA PLUS MINUS MUL DIV MOD OR AND BITWISEAND BITWISEOR BITWISEXOR 
%token EQ NE LE GE LT GT NOT LPAR RPAR LBRACE 
%token RBRACE SEMI IF ELSE WHILE  
%token<lexeme> CHAR INT VOID SHORT DOUBLE RETURN

%type<node> FunctionsAndDeclarations FunctionDefinition FunctionBody DeclarationsAndStatements FunctionDeclaration FunctionDeclarator ParameterList   
%type<node> ExprList ParameterDeclaration Declaration TypeSpec DeclaratorList Declarator Statement StatementError StatementList Expr ArgList

%right ASSIGN
%left COMMA
%left OR
%left AND
%left BITWISEOR
%left BITWISEXOR
%left BITWISEAND
%left EQ NE
%left LT GT LE GE
%left PLUS MINUS
%left MUL DIV MOD
%right NOT
%left LPAR RPAR
%right ELSE
%left LBRACE RBRACE

%%

FunctionsAndDeclarations
    : FunctionDefinition                                        {if(flag==2){$$ = program = newnode(Program, NULL);
                                                                                          addchild($$, $1);}}
    | FunctionDeclaration                                       {if(flag==2){$$ = program = newnode(Program, NULL);
                                                                                          addchild($$, $1);}}
    | Declaration                                               {if(flag==2){$$ = program = newnode(Program, NULL);
                                                                                            {if($1!=NULL){
                                                                                                addchild($$, $1);}}}}                                                               

    | FunctionsAndDeclarations FunctionDefinition               {if(flag==2){$$ = $1;addchild($$, $2);}}
    | FunctionsAndDeclarations FunctionDeclaration              {if(flag==2){$$ = $1;addchild($$, $2);}}
    | FunctionsAndDeclarations Declaration                      {if(flag==2){{if($1==NULL){
                                                                                $$=$2;}
                                                                               else{$$ = $1;
                                                                                    if($2!=NULL){
                                                                                        addchild($$, $2);}}}}}
    ;

FunctionDefinition
    : TypeSpec FunctionDeclarator FunctionBody                  {if(flag==2){$$ = newnode(FuncDefinition, NULL);
                                                                                   addchild($$,$1);
                                                                                   addchild($$,$2);
                                                                                   addchild($$,$3);}}
    ;

FunctionBody
    : LBRACE DeclarationsAndStatements RBRACE                   {if(flag==2){$$=newnode(FuncBody,NULL);
                                                                                {if($2!=NULL){
                                                                                    addchild($$,$2);}}}}
    
    | LBRACE RBRACE                                             {if(flag==2){$$=newnode(FuncBody,NULL);}}
    ; 

DeclarationsAndStatements
    : Statement                                                 {if(flag==2){if($1!=NULL){$$=$1;}}}

    | Declaration                                               {if(flag==2){if($1!=NULL){$$=$1;}}}

    | DeclarationsAndStatements Statement                       {if(flag==2){if($1==NULL){
                                                                              $$=$2;}
                                                                              else{$$=$1;
                                                                                if($2!=NULL){
                                                                                    addsibling($$,$2);}}}}

    | DeclarationsAndStatements Declaration                     {if(flag==2){if($1==NULL){
                                                                               $$=$2;}
                                                                              else{$$=$1;
                                                                                 if($2!=NULL){
                                                                                    addsibling($$,$2);}}}}
    ;

FunctionDeclaration
    : TypeSpec FunctionDeclarator SEMI                          {if(flag==2){$$ = newnode(FuncDeclaration, NULL);
                                                                                   addchild($$,$1);
                                                                                   addchild($$,$2);}}
    ;

FunctionDeclarator
    : IDENTIFIER LPAR ParameterList RPAR                        {if(flag==2){$$ = newnode(Identifier,$1); 
                                                                                   addsibling($$,$3);}}
    ;

ParameterList
    : ParameterDeclaration                                      {if(flag==2){$$ = newnode(ParamList,NULL);
                                                                                   addchild($$,$1);}}

    | ParameterList COMMA ParameterDeclaration                  {if(flag==2){$$ = $1 ;addchild($1, $3);}}
    ;

ParameterDeclaration
    : TypeSpec IDENTIFIER                                       {if(flag==2){$$ = newnode(ParamDeclaration,NULL);
                                                                                   addchild($$,$1);
                                                                                   addchild($$,newnode(Identifier,$2));}}

    | TypeSpec                                                  {if(flag==2){$$ = newnode(ParamDeclaration,NULL);
                                                                                   addchild($$,$1);}}
    ;

Declaration
    : TypeSpec DeclaratorList SEMI                              {if(flag==2){$$=$2;}}
    | error SEMI                                                {if(flag==2){$$=NULL;}}
    ;

DeclaratorList
    : Declarator                                                {if(flag==2){$$=$1;}}
    | DeclaratorList COMMA Declarator                           {if(flag==2){$$ = $1; addsibling($$,$3);}}
    ;

TypeSpec
    : CHAR                                                      {if(flag==2){$$ = t = newnode(Char,NULL);}}
    | INT                                                       {if(flag==2){$$ = t = newnode(Int,NULL);}}
    | VOID                                                      {if(flag==2){$$ = t = newnode(Void,NULL);}}
    | SHORT                                                     {if(flag==2){$$ = t = newnode(Short,NULL);}}
    | DOUBLE                                                    {if(flag==2){$$ = t = newnode(Double,NULL);}}
    ;
    
Declarator
    : IDENTIFIER                                                {if(flag==2){$$ = newnode(Declaration,NULL);
                                                                                   addchild($$,t);
                                                                                   addchild($$,newnode(Identifier,$1));}}

    | IDENTIFIER ASSIGN Expr                                    {if(flag==2){$$ = newnode(Declaration,NULL);
                                                                                   addchild($$,t);
                                                                                   addchild($$,newnode(Identifier,$1));
                                                                                   addchild($$, $3);}}
    ;

StatementError
    : Statement                                                 {if(flag==2){$$=$1;}}
    |error SEMI                                                 {$$=NULL;} 
    ;

Statement
    : ExprList SEMI                                             {if(flag==2){$$=$1;}}
    | SEMI                                                      {if(flag==2){$$=NULL;}}

    | LBRACE StatementList RBRACE                               {if(flag==2){if($2!=NULL )
                                                                                {if(countSiblings($2)>=1){
                                                                                    $$=newnode(StatList,NULL);
                                                                                        addchild($$,$2);}
                                                                                    else{$$=$2;}}
                                                                              else{$$=NULL;}}}

    | LBRACE RBRACE                                             {if(flag==2){$$=NULL;}}

    | IF LPAR ExprList RPAR StatementError ELSE StatementError      {if(flag==2){$$ = newnode(If, NULL);
                                                                                    addchild($$,$3);
                                                                                if($5==NULL){
                                                                                    addchild($$,newnode(Null,NULL));}
                                                                                else{addchild($$,$5);}
                                                                                if($7==NULL){
                                                                                    addchild($$,newnode(Null,NULL));}
                                                                                    else{addchild($$,$7);}}}

    | IF LPAR ExprList RPAR StatementError                          {if(flag==2){$$ = newnode(If, NULL);
                                                                                   addchild($$,$3);
                                                                                   if($5==NULL)
                                                                                        {addchild($$,newnode(Null,NULL));}
                                                                                   else{addchild($$,$5);}
                                                                                        addchild($$,newnode(Null,NULL));}}
                                                                                    
    

    | WHILE LPAR ExprList RPAR StatementError                       {if(flag==2){$$ = newnode(While, NULL);
                                                                                    addchild($$,$3);
                                                                                    if($5==NULL){
                                                                                        addchild($$,newnode(Null,NULL));}
                                                                                    else{addchild($$,$5);}}}

    | RETURN SEMI                                               {if(flag==2){$$ = newnode(Return, NULL);
                                                                                   addchild($$,newnode(Null,NULL));}}

    | RETURN ExprList SEMI                                      {if(flag==2){$$ = newnode(Return, NULL);
                                                                                   addchild($$,$2);}}
    | LBRACE error RBRACE                                       {if(flag==2){;}}
    ;

StatementList
    : StatementList StatementError                              {if(flag==2){if($$==NULL) 
                                                                                {$$=$2;}
                                                                              else{$$=$1;
                                                                                if($2!=NULL){
                                                                                addsibling($$,$2);}
                                                                                else{$2=NULL;}}}}

    |StatementError                                            {if($1!=NULL){$$ = $1;}
                                                                else{$$=NULL;}}
                                                                
    ;

Expr
    : Expr ASSIGN Expr                                          {if(flag==2){$$ = newnode(Store,NULL);
                                                                                    addchild($$,$1);
                                                                                    addchild($$,$3);}}

    | Expr PLUS Expr                                            {if(flag==2){$$ = newnode(Add, NULL);
                                                                                   addchild($$, $1);
                                                                                   addchild($$, $3);}}

    | Expr MINUS Expr                                           {if(flag==2){$$ = newnode(Sub, NULL);
                                                                                   addchild($$, $1);
                                                                                   addchild($$, $3);}} 

    | Expr MUL Expr                                             {if(flag==2){ $$ = newnode(Mul, NULL);
                                                                                    addchild($$, $1);
                                                                                    addchild($$, $3);}}

    | Expr DIV Expr                                             {if(flag==2){$$ = newnode(Div, NULL);
                                                                                   addchild($$, $1);
                                                                                   addchild($$, $3);}} 

    | Expr MOD Expr                                             {if(flag==2){$$ = newnode(Mod, NULL);
                                                                                   addchild($$, $1);
                                                                                   addchild($$, $3);}}

    | Expr OR Expr                                              {if(flag==2){$$ = newnode(Or, NULL);
                                                                                   addchild($$, $1);
                                                                                   addchild($$, $3);}}

    | Expr AND Expr                                             {if(flag==2){$$ = newnode(And, NULL);
                                                                                   addchild($$, $1);
                                                                                   addchild($$, $3);}}

    | Expr BITWISEAND Expr                                      {if(flag==2){$$ = newnode(BitWiseAnd, NULL);
                                                                                   addchild($$, $1);
                                                                                   addchild($$, $3);}}

    | Expr BITWISEOR Expr                                       {if(flag==2){$$ = newnode(BitWiseOr, NULL);
                                                                                   addchild($$, $1);
                                                                                   addchild($$, $3);}}

    | Expr BITWISEXOR Expr                                      {if(flag==2){$$ = newnode(BitWiseXor, NULL);
                                                                                   addchild($$, $1);
                                                                                   addchild($$, $3);}}

    | Expr EQ Expr                                              {if(flag==2){$$ = newnode(Eq, NULL);
                                                                                   addchild($$, $1);
                                                                                   addchild($$, $3);}}

    | Expr NE Expr                                              {if(flag==2){$$ = newnode(Ne, NULL);
                                                                                   addchild($$, $1);
                                                                                   addchild($$, $3);}}

    | Expr LE Expr                                              {if(flag==2){$$ = newnode(Le, NULL);
                                                                                   addchild($$, $1);
                                                                                   addchild($$, $3);}}

    | Expr GE Expr                                              {if(flag==2){$$ = newnode(Ge, NULL);
                                                                                   addchild($$, $1);
                                                                                   addchild($$, $3);}}

    | Expr LT Expr                                              {if(flag==2){$$ = newnode(Lt, NULL);
                                                                                   addchild($$, $1);
                                                                                   addchild($$, $3);}}

    | Expr GT Expr                                              {if(flag==2){$$ = newnode(Gt, NULL);
                                                                                   addchild($$, $1);
                                                                                   addchild($$, $3);}}

    | PLUS Expr     %prec NOT                                   {if(flag==2){$$ = newnode(Plus, NULL);
                                                                                   addchild($$, $2);}}

    | MINUS Expr    %prec NOT                                   {if(flag==2){$$ = newnode(Minus, NULL);
                                                                                   addchild($$, $2);}}

    | NOT Expr                                                  {if(flag==2){$$ = newnode(Not, NULL);
                                                                                   addchild($$, $2);}}

    | IDENTIFIER LPAR ArgList RPAR                              {if(flag==2){$$ = newnode(Call,NULL);
                                                                                   addchild($$,newnode(Identifier,$1));
                                                                                   addchild($$,$3);}}

    | IDENTIFIER                                                {if(flag==2){$$ = newnode(Identifier, $1);}}
    | NATURAL                                                   {if(flag==2){$$ = newnode(Natural, $1);}}
    | CHRLIT                                                    {if(flag==2){$$ = newnode(ChrLit, $1);}}
    | DECIMAL                                                   {if(flag==2){$$ = newnode(Decimal, $1);}}
    | LPAR ExprList RPAR                                        {if(flag==2){$$ = $2;}}
    
    | IDENTIFIER LPAR  RPAR                                     { if(flag==2){$$ = newnode(Call,NULL);
                                                                                   addchild($$,newnode(Identifier,$1));}}
    
    | IDENTIFIER LPAR error RPAR                                {if(flag==2){;}}
    | LPAR error RPAR                                           {if(flag==2){;}}
    ;

ExprList: ExprList COMMA Expr                                   {if(flag==2){$$ = newnode(Comma,NULL);
                                                                                   addchild($$,$1);
                                                                                   addchild($$,$3);}}
    |Expr                                                       {if(flag==2){$$ = $1;}}
    ;

ArgList
    : Expr                 %prec NOT                            {if(flag==2){$$ = $1;}}
    | ArgList COMMA Expr   %prec NOT                            {if(flag==2){$$=$1;addsibling($$,$3);}}
    ;

%%
void yyerror(char *s) {
    printf("Line %d, column %d: %s: %s\n", syn_line, syn_column, s, yytext);
    erro++;
}
