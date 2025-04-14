/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    CHRLIT = 259,                  /* CHRLIT  */
    DECIMAL = 260,                 /* DECIMAL  */
    NATURAL = 261,                 /* NATURAL  */
    RESERVED = 262,                /* RESERVED  */
    ASSIGN = 263,                  /* ASSIGN  */
    COMMA = 264,                   /* COMMA  */
    PLUS = 265,                    /* PLUS  */
    MINUS = 266,                   /* MINUS  */
    MUL = 267,                     /* MUL  */
    DIV = 268,                     /* DIV  */
    MOD = 269,                     /* MOD  */
    OR = 270,                      /* OR  */
    AND = 271,                     /* AND  */
    BITWISEAND = 272,              /* BITWISEAND  */
    BITWISEOR = 273,               /* BITWISEOR  */
    BITWISEXOR = 274,              /* BITWISEXOR  */
    EQ = 275,                      /* EQ  */
    NE = 276,                      /* NE  */
    LE = 277,                      /* LE  */
    GE = 278,                      /* GE  */
    LT = 279,                      /* LT  */
    GT = 280,                      /* GT  */
    NOT = 281,                     /* NOT  */
    LPAR = 282,                    /* LPAR  */
    RPAR = 283,                    /* RPAR  */
    LBRACE = 284,                  /* LBRACE  */
    RBRACE = 285,                  /* RBRACE  */
    SEMI = 286,                    /* SEMI  */
    IF = 287,                      /* IF  */
    ELSE = 288,                    /* ELSE  */
    WHILE = 289,                   /* WHILE  */
    CHAR = 290,                    /* CHAR  */
    INT = 291,                     /* INT  */
    VOID = 292,                    /* VOID  */
    SHORT = 293,                   /* SHORT  */
    DOUBLE = 294,                  /* DOUBLE  */
    RETURN = 295,                  /* RETURN  */
    LOWER_THAN_ELSE = 296          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define CHRLIT 259
#define DECIMAL 260
#define NATURAL 261
#define RESERVED 262
#define ASSIGN 263
#define COMMA 264
#define PLUS 265
#define MINUS 266
#define MUL 267
#define DIV 268
#define MOD 269
#define OR 270
#define AND 271
#define BITWISEAND 272
#define BITWISEOR 273
#define BITWISEXOR 274
#define EQ 275
#define NE 276
#define LE 277
#define GE 278
#define LT 279
#define GT 280
#define NOT 281
#define LPAR 282
#define RPAR 283
#define LBRACE 284
#define RBRACE 285
#define SEMI 286
#define IF 287
#define ELSE 288
#define WHILE 289
#define CHAR 290
#define INT 291
#define VOID 292
#define SHORT 293
#define DOUBLE 294
#define RETURN 295
#define LOWER_THAN_ELSE 296

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 28 "uccompiler.y"

    char *lexeme;
    struct node *node;

#line 154 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
