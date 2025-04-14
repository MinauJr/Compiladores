/* João Paiva 2021216669 - Salomé Costa 2021218601 */

%{
    #include "y.tab.h"
    #include "ast.h"
    #include <stdio.h>
    #include <string.h>
    //#include <ctype.h>
    
    #define YY_USER_ACTION { syn_line = line; syn_column = column; column += yyleng; }
    #define PASS_TOKEN() yylval.lexeme = strdup(yytext);

    int yyparse(void);
    void yyerror(char *);

    int line = 1, column = 1;
    int syn_line = 1, syn_column = 1;

    int flag = 0;
    //int flagY = 0;
    int erro = 0;
    int inicolumn;
    extern struct node *program;
    
%}
%option noyywrap

digit [0-9]
nondigit [a-zA-Z_]
whitespace [ \t]
breakline [\n|\r\n|\r]
reserved "["|"]"|"++"|"--"|auto|break|case|const|continue|default|do|enum|extern|float|for|goto|long|register|restrict|signed|sizeof|static|struct|switch|typedef|union|unsigned|volatile
exponent [eE][+-]?{digit}+
ex "\'" 
ch ([^\n\r'\\]|\\['"\\"nt]|\\([0-7]{1,3})|\t)

%x COMMENT COM
%%

"/*"                         {BEGIN(COMMENT);inicolumn=column-yyleng;}
<COMMENT>"*/"                {BEGIN(INITIAL); }
<COMMENT>"\t"                {;} 
<COMMENT>("\n"|"\r\n"|"\r")  {line++;column=1;}
<COMMENT>.                   {/* Ignore characters within comments */; }
<COMMENT><<EOF>>             {{printf("Line %d, column %d: unterminated comment\n", line,inicolumn);BEGIN(INITIAL);};}

"//"                         {BEGIN(COM);}
<COM>"\t"                    {;}
<COM>.                       {;}
<COM>("\n"|"\r\n"|"\r")      {line++;column=1;BEGIN(INITIAL);} 


else          {if(flag==1) printf("ELSE\n"); if(flag != 1)return ELSE;}
char          {if(flag==1) printf("CHAR\n"); if(flag != 1)return CHAR;}
while         {if(flag==1) printf("WHILE\n");if(flag != 1)return WHILE;}
if            {if(flag==1) printf("IF\n"); if(flag != 1)return IF;}
int           {if(flag==1) printf("INT\n"); if(flag != 1)return INT;}
short         {if(flag==1) printf("SHORT\n"); if(flag != 1)return SHORT;}
double        {if(flag==1) printf("DOUBLE\n");if(flag != 1)return DOUBLE;}
return        {if(flag==1) printf("RETURN\n");if(flag != 1)return RETURN;}
void          {if(flag==1) printf("VOID\n"); if(flag != 1)return VOID;}


{reserved}                             {if(flag==1) printf("RESERVED(%s)\n",yytext);if(flag != 1){PASS_TOKEN();return RESERVED;}}
{digit}+                               {if(flag==1) printf("NATURAL(%s)\n", yytext);if(flag != 1){PASS_TOKEN();return NATURAL;}}
{digit}+\.{digit}*{exponent}?          {if(flag==1) printf("DECIMAL(%s)\n", yytext);if(flag != 1){PASS_TOKEN();return DECIMAL;}}
\.{digit}+{exponent}?                  {if(flag==1) printf("DECIMAL(%s)\n", yytext);if(flag != 1){PASS_TOKEN();return DECIMAL;}}
{digit}+{exponent}                     {if(flag==1) printf("DECIMAL(%s)\n", yytext);if(flag != 1){PASS_TOKEN();return DECIMAL;}}
{nondigit}+({nondigit}|{digit})*       {if(flag==1) printf("IDENTIFIER(%s)\n", yytext);if(flag != 1){PASS_TOKEN();return IDENTIFIER;}}

";"                      {if(flag==1) printf("SEMI\n"); if(flag != 1)return SEMI;}
"=="                     {if(flag==1) printf("EQ\n"); if(flag != 1)return EQ;}
">="                     {if(flag==1) printf("GE\n"); if(flag != 1)return GE;}
">"                      {if(flag==1) printf("GT\n"); if(flag != 1)return GT;}
"{"                      {if(flag==1) printf("LBRACE\n"); if(flag != 1)return LBRACE;}
"<="                     {if(flag==1) printf("LE\n"); if(flag != 1)return LE;}
"("                      {if(flag==1) printf("LPAR\n"); if(flag != 1)return LPAR;}
"<"                      {if(flag==1) printf("LT\n"); if(flag != 1)return LT;}
"}"                      {if(flag==1) printf("RBRACE\n"); if(flag != 1)return RBRACE;}
")"                      {if(flag==1) printf("RPAR\n"); if(flag != 1)return RPAR;}
"!="                     {if(flag==1) printf("NE\n"); if(flag != 1)return NE;}
"!"                      {if(flag==1) printf("NOT\n");if(flag != 1)return NOT;}
"||"                     {if(flag==1) printf("OR\n"); if(flag != 1)return OR;}
"&&"                     {if(flag==1) printf("AND\n"); if(flag != 1)return AND;}
"&"                      {if(flag==1) printf("BITWISEAND\n"); if(flag != 1)return BITWISEAND;}
"|"                      {if(flag==1) printf("BITWISEOR\n"); if(flag != 1)return BITWISEOR;}
"^"                      {if(flag==1) printf("BITWISEXOR\n");if(flag != 1)return BITWISEXOR;}
"="                      {if(flag==1) printf("ASSIGN\n"); if(flag != 1)return ASSIGN;}
"*"                      {if(flag==1) printf("MUL\n"); if(flag != 1)return MUL;}
","                      {if(flag==1) printf("COMMA\n"); if(flag != 1)return COMMA;}
"/"                      {if(flag==1) printf("DIV\n"); if(flag != 1)return DIV;}
"-"                      {if(flag==1) printf("MINUS\n"); if(flag != 1)return MINUS;}
"%"                      {if(flag==1) printf("MOD\n"); if(flag != 1)return MOD;}
"+"                      {if(flag==1) printf("PLUS\n");if(flag != 1)return PLUS;}


{whitespace}             {;}
{breakline}              {line++; column=1;}

'([^\n\r'\\]|\\['"\\"nt]|\\([0-7]{1,3})|\t)'  {if(flag==1) printf("CHRLIT(%s)\n", yytext); if(flag != 1){PASS_TOKEN();return CHRLIT;}}             

{ex}(({ch})*|([^\n\r'])*)     {printf("Line %d, column %d: unterminated char constant\n",line,inicolumn);}
{ex}({ch}|\\[^\n'])*{ex}      {printf("Line %d, column %d: invalid char constant (%s)\n",line,inicolumn,yytext);}
.                             {printf("Line %d, column %d: unrecognized character (%s)\n",line,column-yyleng,yytext);}

<<EOF>>                       {YY_USER_ACTION;return 0;}

%%
extern int yylex();
extern int flag;
extern int flagY;
int main(int argc, char* argv[]) {
    if (argc > 1){
        if (strcmp(argv[1], "-l") == 0){
            flag = 1;
            yylex();
        }   
        else if(strcmp(argv[1], "-t") == 0){
            flag = 2;
            yyparse();
            
            if(erro == 0){
                show(program,0);
            }
        }
            
    }
    if (argc == 1){
        flag = 0;
        yyparse();
        yylex();
    }
    deallocate(program);
    return 0;
}

