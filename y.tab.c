/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 3 "uccompiler.y"

 #include "ast.h"
 #include "y.tab.h"  
 #include <stddef.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 //#include <stdarg.h>

int yylex(void);
void yyerror(char *);

extern int erro;
extern int flag;
extern int syn_line, syn_column;

extern char *yytext;
char *s;

extern char*category_name[];
struct node *program;
struct node * tempor;


#line 96 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 236 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_CHRLIT = 4,                     /* CHRLIT  */
  YYSYMBOL_DECIMAL = 5,                    /* DECIMAL  */
  YYSYMBOL_NATURAL = 6,                    /* NATURAL  */
  YYSYMBOL_RESERVED = 7,                   /* RESERVED  */
  YYSYMBOL_ASSIGN = 8,                     /* ASSIGN  */
  YYSYMBOL_COMMA = 9,                      /* COMMA  */
  YYSYMBOL_PLUS = 10,                      /* PLUS  */
  YYSYMBOL_MINUS = 11,                     /* MINUS  */
  YYSYMBOL_MUL = 12,                       /* MUL  */
  YYSYMBOL_DIV = 13,                       /* DIV  */
  YYSYMBOL_MOD = 14,                       /* MOD  */
  YYSYMBOL_OR = 15,                        /* OR  */
  YYSYMBOL_AND = 16,                       /* AND  */
  YYSYMBOL_BITWISEAND = 17,                /* BITWISEAND  */
  YYSYMBOL_BITWISEOR = 18,                 /* BITWISEOR  */
  YYSYMBOL_BITWISEXOR = 19,                /* BITWISEXOR  */
  YYSYMBOL_EQ = 20,                        /* EQ  */
  YYSYMBOL_NE = 21,                        /* NE  */
  YYSYMBOL_LE = 22,                        /* LE  */
  YYSYMBOL_GE = 23,                        /* GE  */
  YYSYMBOL_LT = 24,                        /* LT  */
  YYSYMBOL_GT = 25,                        /* GT  */
  YYSYMBOL_NOT = 26,                       /* NOT  */
  YYSYMBOL_LPAR = 27,                      /* LPAR  */
  YYSYMBOL_RPAR = 28,                      /* RPAR  */
  YYSYMBOL_LBRACE = 29,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 30,                    /* RBRACE  */
  YYSYMBOL_SEMI = 31,                      /* SEMI  */
  YYSYMBOL_IF = 32,                        /* IF  */
  YYSYMBOL_ELSE = 33,                      /* ELSE  */
  YYSYMBOL_WHILE = 34,                     /* WHILE  */
  YYSYMBOL_CHAR = 35,                      /* CHAR  */
  YYSYMBOL_INT = 36,                       /* INT  */
  YYSYMBOL_VOID = 37,                      /* VOID  */
  YYSYMBOL_SHORT = 38,                     /* SHORT  */
  YYSYMBOL_DOUBLE = 39,                    /* DOUBLE  */
  YYSYMBOL_RETURN = 40,                    /* RETURN  */
  YYSYMBOL_LOWER_THAN_ELSE = 41,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_FunctionsAndDeclarations = 43,  /* FunctionsAndDeclarations  */
  YYSYMBOL_FunctionDefinition = 44,        /* FunctionDefinition  */
  YYSYMBOL_FunctionBody = 45,              /* FunctionBody  */
  YYSYMBOL_DeclarationsAndStatements = 46, /* DeclarationsAndStatements  */
  YYSYMBOL_FunctionDeclaration = 47,       /* FunctionDeclaration  */
  YYSYMBOL_FunctionDeclarator = 48,        /* FunctionDeclarator  */
  YYSYMBOL_ParameterList = 49,             /* ParameterList  */
  YYSYMBOL_ParameterDeclaration = 50,      /* ParameterDeclaration  */
  YYSYMBOL_Declaration = 51,               /* Declaration  */
  YYSYMBOL_DeclaratorList = 52,            /* DeclaratorList  */
  YYSYMBOL_TypeSpec = 53,                  /* TypeSpec  */
  YYSYMBOL_Declarator = 54,                /* Declarator  */
  YYSYMBOL_StatementError = 55,            /* StatementError  */
  YYSYMBOL_Statement = 56,                 /* Statement  */
  YYSYMBOL_StatementList = 57,             /* StatementList  */
  YYSYMBOL_Expr = 58,                      /* Expr  */
  YYSYMBOL_ExprList = 59,                  /* ExprList  */
  YYSYMBOL_ArgList = 60                    /* ArgList  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   389

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  137

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    64,    64,    66,    68,    72,    73,    74,    82,    89,
      93,    97,    99,   101,   107,   115,   121,   126,   129,   133,
     137,   142,   143,   147,   148,   152,   153,   154,   155,   156,
     160,   164,   171,   172,   176,   177,   179,   186,   188,   197,
     206,   212,   215,   217,   221,   228,   235,   239,   243,   247,
     251,   255,   259,   263,   267,   271,   275,   279,   283,   287,
     291,   295,   299,   303,   306,   309,   312,   316,   317,   318,
     319,   320,   322,   325,   326,   329,   332,   336,   337
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER", "CHRLIT",
  "DECIMAL", "NATURAL", "RESERVED", "ASSIGN", "COMMA", "PLUS", "MINUS",
  "MUL", "DIV", "MOD", "OR", "AND", "BITWISEAND", "BITWISEOR",
  "BITWISEXOR", "EQ", "NE", "LE", "GE", "LT", "GT", "NOT", "LPAR", "RPAR",
  "LBRACE", "RBRACE", "SEMI", "IF", "ELSE", "WHILE", "CHAR", "INT", "VOID",
  "SHORT", "DOUBLE", "RETURN", "LOWER_THAN_ELSE", "$accept",
  "FunctionsAndDeclarations", "FunctionDefinition", "FunctionBody",
  "DeclarationsAndStatements", "FunctionDeclaration", "FunctionDeclarator",
  "ParameterList", "ParameterDeclaration", "Declaration", "DeclaratorList",
  "TypeSpec", "Declarator", "StatementError", "Statement", "StatementList",
  "Expr", "ExprList", "ArgList", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-71)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      87,   -15,   -71,   -71,   -71,   -71,   -71,    82,   -71,   -71,
     -71,     6,   -71,   -71,   -71,   -71,   -71,     7,    -9,    -4,
     -71,   259,    41,    63,   -71,   -71,    22,   -71,   -17,   -71,
     -71,   -71,   259,   259,   259,   241,   279,    -5,   -71,    32,
     145,   -71,   -71,    -6,    36,   199,   105,   -71,    22,   -71,
     279,    -3,    62,   -71,   230,   -71,   -71,   -71,    44,     8,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     259,   259,   259,   259,   259,   259,   259,    41,   -71,   -71,
      54,   -71,   -71,   -71,   157,   259,   259,   -71,    -2,   -71,
     -71,   -71,   259,   -71,    58,   -71,   279,    10,   -71,   -71,
     279,    18,    18,   -71,   -71,   -71,   295,   311,   359,   327,
     343,   364,   364,   261,   261,   261,   261,   -71,   -71,   -71,
      56,   -71,   -71,    28,    53,   -71,   279,   -71,   259,   -71,
     189,   189,   279,    71,   -71,   189,   -71
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    25,    26,    27,    28,    29,     0,     2,     3,
       4,     0,    22,     1,     5,     6,     7,    30,     0,     0,
      23,     0,     0,     0,    15,     8,     0,    21,    67,    69,
      70,    68,     0,     0,     0,     0,    31,     0,    17,    20,
       0,    10,    35,     0,     0,     0,     0,    12,     0,    11,
      76,     0,    30,    24,     0,    63,    64,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,    19,
       0,    37,    45,    32,     0,     0,     0,    41,     0,     9,
      14,    13,     0,    34,     0,    72,    77,     0,    74,    71,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    18,    43,    33,
       0,    36,    44,     0,     0,    42,    75,    73,     0,    66,
       0,     0,    78,    39,    40,     0,    38
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -71,   -71,    89,   -71,   -71,    98,   -71,   -71,    35,    68,
     -71,   -20,   101,   -70,   -22,   -71,   -21,   -27,   -71
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     7,     8,    25,    46,     9,    18,    37,    38,    10,
      19,    11,    20,    82,    83,    84,    50,    51,    97
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      36,    49,    39,    48,    77,    26,    92,    92,    59,    17,
      54,    55,    56,    57,   122,    21,    12,    92,    88,   128,
      23,    85,    24,    78,    91,    52,    48,    27,    93,   125,
      63,    64,    65,    96,    22,    79,    99,    92,   129,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   130,    39,   123,   124,
     133,   134,    92,    86,     1,   136,    28,    29,    30,    31,
      21,   126,    98,    32,    33,    16,     2,     3,     4,     5,
       6,   131,    13,     1,   118,   119,   127,   119,     1,    34,
      35,    47,    40,    41,    42,    43,    14,    44,     2,     3,
       4,     5,     6,    45,   135,    15,     1,   132,    28,    29,
      30,    31,   117,     0,    90,    32,    33,     2,     3,     4,
       5,     6,     2,     3,     4,     5,     6,    53,     0,     0,
       0,    34,    35,     0,    40,    89,    42,    43,     0,    44,
       2,     3,     4,     5,     6,    45,    80,     0,    28,    29,
      30,    31,     0,     0,     0,    32,    33,     0,   120,     0,
      28,    29,    30,    31,     0,     0,     0,    32,    33,     0,
       0,    34,    35,     0,    40,    81,    42,    43,     0,    44,
       0,     0,     0,    34,    35,    45,    40,   121,    42,    43,
     120,    44,    28,    29,    30,    31,     0,    45,     0,    32,
      33,     0,    28,    29,    30,    31,     0,     0,     0,    32,
      33,     0,     0,     0,     0,    34,    35,     0,    40,     0,
      42,    43,     0,    44,     0,    34,    35,     0,     0,    45,
      87,    94,     0,    28,    29,    30,    31,     0,     0,     0,
      32,    33,    58,     0,    28,    29,    30,    31,     0,     0,
       0,    32,    33,     0,     0,     0,    34,    35,    95,     0,
       0,     0,    28,    29,    30,    31,     0,    34,    35,    32,
      33,    61,    62,    63,    64,    65,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,    35,    60,     0,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    61,    62,    63,    64,    65,
       0,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    61,    62,    63,    64,    65,     0,     0,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    61,    62,    63,
      64,    65,     0,     0,    68,     0,    70,    71,    72,    73,
      74,    75,    76,    61,    62,    63,    64,    65,     0,     0,
      68,     0,     0,    71,    72,    73,    74,    75,    76,    61,
      62,    63,    64,    65,    61,    62,    63,    64,    65,    71,
      72,    73,    74,    75,    76,     0,    73,    74,    75,    76
};

static const yytype_int16 yycheck[] =
{
      21,    23,    22,    23,     9,     9,     9,     9,    35,     3,
      27,    32,    33,    34,    84,     8,    31,     9,    45,     9,
      29,    27,    31,    28,    46,     3,    46,    31,    31,    31,
      12,    13,    14,    54,    27,     3,    28,     9,    28,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    28,    77,    85,    86,
     130,   131,     9,    27,     1,   135,     3,     4,     5,     6,
       8,    92,    28,    10,    11,     7,    35,    36,    37,    38,
      39,    28,     0,     1,    30,    31,    28,    31,     1,    26,
      27,    23,    29,    30,    31,    32,     7,    34,    35,    36,
      37,    38,    39,    40,    33,     7,     1,   128,     3,     4,
       5,     6,    77,    -1,    46,    10,    11,    35,    36,    37,
      38,    39,    35,    36,    37,    38,    39,    26,    -1,    -1,
      -1,    26,    27,    -1,    29,    30,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    10,    11,    -1,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    10,    11,    -1,
      -1,    26,    27,    -1,    29,    30,    31,    32,    -1,    34,
      -1,    -1,    -1,    26,    27,    40,    29,    30,    31,    32,
       1,    34,     3,     4,     5,     6,    -1,    40,    -1,    10,
      11,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    10,
      11,    -1,    -1,    -1,    -1,    26,    27,    -1,    29,    -1,
      31,    32,    -1,    34,    -1,    26,    27,    -1,    -1,    40,
      31,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      10,    11,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    10,    11,    -1,    -1,    -1,    26,    27,    28,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    26,    27,    10,
      11,    10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    27,     8,    -1,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    10,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    10,    11,    12,    13,    14,    -1,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    10,    11,    12,
      13,    14,    -1,    -1,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    10,    11,    12,    13,    14,    -1,    -1,
      17,    -1,    -1,    20,    21,    22,    23,    24,    25,    10,
      11,    12,    13,    14,    10,    11,    12,    13,    14,    20,
      21,    22,    23,    24,    25,    -1,    22,    23,    24,    25
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    35,    36,    37,    38,    39,    43,    44,    47,
      51,    53,    31,     0,    44,    47,    51,     3,    48,    52,
      54,     8,    27,    29,    31,    45,     9,    31,     3,     4,
       5,     6,    10,    11,    26,    27,    58,    49,    50,    53,
      29,    30,    31,    32,    34,    40,    46,    51,    53,    56,
      58,    59,     3,    54,    27,    58,    58,    58,     1,    59,
       8,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     9,    28,     3,
       1,    30,    55,    56,    57,    27,    27,    31,    59,    30,
      51,    56,     9,    31,     1,    28,    58,    60,    28,    28,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    50,    30,    31,
       1,    30,    55,    59,    59,    31,    58,    28,     9,    28,
      28,    28,    58,    55,    55,    33,    55
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    43,    43,    43,    43,    43,    44,    45,
      45,    46,    46,    46,    46,    47,    48,    49,    49,    50,
      50,    51,    51,    52,    52,    53,    53,    53,    53,    53,
      54,    54,    55,    55,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    57,    57,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    59,    59,    60,    60
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     2,     2,     3,     3,
       2,     1,     1,     2,     2,     3,     4,     1,     3,     2,
       1,     3,     2,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     1,     2,     2,     1,     3,     2,     7,     5,
       5,     2,     3,     3,     2,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     4,     1,     1,     1,
       1,     3,     3,     4,     3,     3,     1,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* FunctionsAndDeclarations: FunctionDefinition  */
#line 64 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = program = newnode(Program, NULL);
                                                                                          addchild((yyval.node), (yyvsp[0].node));}}
#line 1413 "y.tab.c"
    break;

  case 3: /* FunctionsAndDeclarations: FunctionDeclaration  */
#line 66 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = program = newnode(Program, NULL);
                                                                                          addchild((yyval.node), (yyvsp[0].node));}}
#line 1420 "y.tab.c"
    break;

  case 4: /* FunctionsAndDeclarations: Declaration  */
#line 68 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = program = newnode(Program, NULL);
                                                                                            {if((yyvsp[0].node)!=NULL){
                                                                                                addchild((yyval.node), (yyvsp[0].node));}}}}
#line 1428 "y.tab.c"
    break;

  case 5: /* FunctionsAndDeclarations: FunctionsAndDeclarations FunctionDefinition  */
#line 72 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = (yyvsp[-1].node);addchild((yyval.node), (yyvsp[0].node));}}
#line 1434 "y.tab.c"
    break;

  case 6: /* FunctionsAndDeclarations: FunctionsAndDeclarations FunctionDeclaration  */
#line 73 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = (yyvsp[-1].node);addchild((yyval.node), (yyvsp[0].node));}}
#line 1440 "y.tab.c"
    break;

  case 7: /* FunctionsAndDeclarations: FunctionsAndDeclarations Declaration  */
#line 74 "uccompiler.y"
                                                                {if(flag==2){{if((yyvsp[-1].node)==NULL){
                                                                                (yyval.node)=(yyvsp[0].node);}
                                                                               else{(yyval.node) = (yyvsp[-1].node);
                                                                                    if((yyvsp[0].node)!=NULL){
                                                                                        addchild((yyval.node), (yyvsp[0].node));}}}}}
#line 1450 "y.tab.c"
    break;

  case 8: /* FunctionDefinition: TypeSpec FunctionDeclarator FunctionBody  */
#line 82 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(FuncDefinition, NULL);
                                                                                   addchild((yyval.node),(yyvsp[-2].node));
                                                                                   addchild((yyval.node),(yyvsp[-1].node));
                                                                                   addchild((yyval.node),(yyvsp[0].node));}}
#line 1459 "y.tab.c"
    break;

  case 9: /* FunctionBody: LBRACE DeclarationsAndStatements RBRACE  */
#line 89 "uccompiler.y"
                                                                {if(flag==2){(yyval.node)=newnode(FuncBody,NULL);
                                                                                {if((yyvsp[-1].node)!=NULL){
                                                                                    addchild((yyval.node),(yyvsp[-1].node));}}}}
#line 1467 "y.tab.c"
    break;

  case 10: /* FunctionBody: LBRACE RBRACE  */
#line 93 "uccompiler.y"
                                                                {if(flag==2){(yyval.node)=newnode(FuncBody,NULL);}}
#line 1473 "y.tab.c"
    break;

  case 11: /* DeclarationsAndStatements: Statement  */
#line 97 "uccompiler.y"
                                                                {if(flag==2){if((yyvsp[0].node)!=NULL){(yyval.node)=(yyvsp[0].node);}}}
#line 1479 "y.tab.c"
    break;

  case 12: /* DeclarationsAndStatements: Declaration  */
#line 99 "uccompiler.y"
                                                                {if(flag==2){if((yyvsp[0].node)!=NULL){(yyval.node)=(yyvsp[0].node);}}}
#line 1485 "y.tab.c"
    break;

  case 13: /* DeclarationsAndStatements: DeclarationsAndStatements Statement  */
#line 101 "uccompiler.y"
                                                                {if(flag==2){if((yyvsp[-1].node)==NULL){
                                                                              (yyval.node)=(yyvsp[0].node);}
                                                                              else{(yyval.node)=(yyvsp[-1].node);
                                                                                if((yyvsp[0].node)!=NULL){
                                                                                    addsibling((yyval.node),(yyvsp[0].node));}}}}
#line 1495 "y.tab.c"
    break;

  case 14: /* DeclarationsAndStatements: DeclarationsAndStatements Declaration  */
#line 107 "uccompiler.y"
                                                                {if(flag==2){if((yyvsp[-1].node)==NULL){
                                                                               (yyval.node)=(yyvsp[0].node);}
                                                                              else{(yyval.node)=(yyvsp[-1].node);
                                                                                 if((yyvsp[0].node)!=NULL){
                                                                                    addsibling((yyval.node),(yyvsp[0].node));}}}}
#line 1505 "y.tab.c"
    break;

  case 15: /* FunctionDeclaration: TypeSpec FunctionDeclarator SEMI  */
#line 115 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(FuncDeclaration, NULL);
                                                                                   addchild((yyval.node),(yyvsp[-2].node));
                                                                                   addchild((yyval.node),(yyvsp[-1].node));}}
#line 1513 "y.tab.c"
    break;

  case 16: /* FunctionDeclarator: IDENTIFIER LPAR ParameterList RPAR  */
#line 121 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(Identifier,(yyvsp[-3].lexeme)); 
                                                                                   addsibling((yyval.node),(yyvsp[-1].node));}}
#line 1520 "y.tab.c"
    break;

  case 17: /* ParameterList: ParameterDeclaration  */
#line 126 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(ParamList,NULL);
                                                                                   addchild((yyval.node),(yyvsp[0].node));}}
#line 1527 "y.tab.c"
    break;

  case 18: /* ParameterList: ParameterList COMMA ParameterDeclaration  */
#line 129 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = (yyvsp[-2].node) ;addchild((yyvsp[-2].node), (yyvsp[0].node));}}
#line 1533 "y.tab.c"
    break;

  case 19: /* ParameterDeclaration: TypeSpec IDENTIFIER  */
#line 133 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(ParamDeclaration,NULL);
                                                                                   addchild((yyval.node),(yyvsp[-1].node));
                                                                                   addchild((yyval.node),newnode(Identifier,(yyvsp[0].lexeme)));}}
#line 1541 "y.tab.c"
    break;

  case 20: /* ParameterDeclaration: TypeSpec  */
#line 137 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(ParamDeclaration,NULL);
                                                                                   addchild((yyval.node),(yyvsp[0].node));}}
#line 1548 "y.tab.c"
    break;

  case 21: /* Declaration: TypeSpec DeclaratorList SEMI  */
#line 142 "uccompiler.y"
                                                                {if(flag==2){(yyval.node)=(yyvsp[-1].node);}}
#line 1554 "y.tab.c"
    break;

  case 22: /* Declaration: error SEMI  */
#line 143 "uccompiler.y"
                                                                {if(flag==2){(yyval.node)=NULL;}}
#line 1560 "y.tab.c"
    break;

  case 23: /* DeclaratorList: Declarator  */
#line 147 "uccompiler.y"
                                                                {if(flag==2){(yyval.node)=(yyvsp[0].node);}}
#line 1566 "y.tab.c"
    break;

  case 24: /* DeclaratorList: DeclaratorList COMMA Declarator  */
#line 148 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = (yyvsp[-2].node); addsibling((yyval.node),(yyvsp[0].node));}}
#line 1572 "y.tab.c"
    break;

  case 25: /* TypeSpec: CHAR  */
#line 152 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(Char,NULL);}}
#line 1578 "y.tab.c"
    break;

  case 26: /* TypeSpec: INT  */
#line 153 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) =  newnode(Int,NULL);}}
#line 1584 "y.tab.c"
    break;

  case 27: /* TypeSpec: VOID  */
#line 154 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) =  newnode(Void,NULL);}}
#line 1590 "y.tab.c"
    break;

  case 28: /* TypeSpec: SHORT  */
#line 155 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) =  newnode(Short,NULL);}}
#line 1596 "y.tab.c"
    break;

  case 29: /* TypeSpec: DOUBLE  */
#line 156 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) =  newnode(Double,NULL);}}
#line 1602 "y.tab.c"
    break;

  case 30: /* Declarator: IDENTIFIER  */
#line 160 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(Declaration,NULL);
                                                                                   
                                                                                   addchild((yyval.node),newnode(Identifier,(yyvsp[0].lexeme)));}}
#line 1610 "y.tab.c"
    break;

  case 31: /* Declarator: IDENTIFIER ASSIGN Expr  */
#line 164 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(Declaration,NULL);
                                                                                   
                                                                                   addchild((yyval.node),newnode(Identifier,(yyvsp[-2].lexeme)));
                                                                                   addchild((yyval.node), (yyvsp[0].node));}}
#line 1619 "y.tab.c"
    break;

  case 32: /* StatementError: Statement  */
#line 171 "uccompiler.y"
                                                                {if(flag==2){(yyval.node)=(yyvsp[0].node);}}
#line 1625 "y.tab.c"
    break;

  case 33: /* StatementError: error SEMI  */
#line 172 "uccompiler.y"
                                                                {(yyval.node)=NULL;}
#line 1631 "y.tab.c"
    break;

  case 34: /* Statement: ExprList SEMI  */
#line 176 "uccompiler.y"
                                                                {if(flag==2){(yyval.node)=(yyvsp[-1].node);}}
#line 1637 "y.tab.c"
    break;

  case 35: /* Statement: SEMI  */
#line 177 "uccompiler.y"
                                                                {if(flag==2){(yyval.node)=NULL;}}
#line 1643 "y.tab.c"
    break;

  case 36: /* Statement: LBRACE StatementList RBRACE  */
#line 179 "uccompiler.y"
                                                                {if(flag==2){if((yyvsp[-1].node)!=NULL )
                                                                                {if(countSiblings((yyvsp[-1].node))>=1){
                                                                                    (yyval.node)=newnode(StatList,NULL);
                                                                                        addchild((yyval.node),(yyvsp[-1].node));}
                                                                                    else{(yyval.node)=(yyvsp[-1].node);}}
                                                                              else{(yyval.node)=NULL;}}}
#line 1654 "y.tab.c"
    break;

  case 37: /* Statement: LBRACE RBRACE  */
#line 186 "uccompiler.y"
                                                                {if(flag==2){(yyval.node)=NULL;}}
#line 1660 "y.tab.c"
    break;

  case 38: /* Statement: IF LPAR ExprList RPAR StatementError ELSE StatementError  */
#line 188 "uccompiler.y"
                                                                    {if(flag==2){(yyval.node) = newnode(If, NULL);
                                                                                    addchild((yyval.node),(yyvsp[-4].node));
                                                                                if((yyvsp[-2].node)==NULL){
                                                                                    addchild((yyval.node),newnode(Null,NULL));}
                                                                                else{addchild((yyval.node),(yyvsp[-2].node));}
                                                                                if((yyvsp[0].node)==NULL){
                                                                                    addchild((yyval.node),newnode(Null,NULL));}
                                                                                    else{addchild((yyval.node),(yyvsp[0].node));}}}
#line 1673 "y.tab.c"
    break;

  case 39: /* Statement: IF LPAR ExprList RPAR StatementError  */
#line 197 "uccompiler.y"
                                                                    {if(flag==2){(yyval.node) = newnode(If, NULL);
                                                                                   addchild((yyval.node),(yyvsp[-2].node));
                                                                                   if((yyvsp[0].node)==NULL)
                                                                                        {addchild((yyval.node),newnode(Null,NULL));}
                                                                                   else{addchild((yyval.node),(yyvsp[0].node));}
                                                                                        addchild((yyval.node),newnode(Null,NULL));}}
#line 1684 "y.tab.c"
    break;

  case 40: /* Statement: WHILE LPAR ExprList RPAR StatementError  */
#line 206 "uccompiler.y"
                                                                    {if(flag==2){(yyval.node) = newnode(While, NULL);
                                                                                    addchild((yyval.node),(yyvsp[-2].node));
                                                                                    if((yyvsp[0].node)==NULL){
                                                                                        addchild((yyval.node),newnode(Null,NULL));}
                                                                                    else{addchild((yyval.node),(yyvsp[0].node));}}}
#line 1694 "y.tab.c"
    break;

  case 41: /* Statement: RETURN SEMI  */
#line 212 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(Return, NULL);
                                                                                   addchild((yyval.node),newnode(Null,NULL));}}
#line 1701 "y.tab.c"
    break;

  case 42: /* Statement: RETURN ExprList SEMI  */
#line 215 "uccompiler.y"
                                                                    {if(flag==2){(yyval.node) = newnode(Return, NULL);
                                                                                   addchild((yyval.node),(yyvsp[-1].node));}}
#line 1708 "y.tab.c"
    break;

  case 43: /* Statement: LBRACE error RBRACE  */
#line 217 "uccompiler.y"
                                                                {if(flag==2){;}}
#line 1714 "y.tab.c"
    break;

  case 44: /* StatementList: StatementList StatementError  */
#line 221 "uccompiler.y"
                                                                {if(flag==2){if((yyval.node)==NULL) 
                                                                                {(yyval.node)=(yyvsp[0].node);}
                                                                              else{(yyval.node)=(yyvsp[-1].node);
                                                                                if((yyvsp[0].node)!=NULL){
                                                                                addsibling((yyval.node),(yyvsp[0].node));}
                                                                                else{(yyvsp[0].node)=NULL;}}}}
#line 1725 "y.tab.c"
    break;

  case 45: /* StatementList: StatementError  */
#line 228 "uccompiler.y"
                                                               {if((yyvsp[0].node)!=NULL){(yyval.node) = (yyvsp[0].node);}
                                                                else{(yyval.node)=NULL;}}
#line 1732 "y.tab.c"
    break;

  case 46: /* Expr: Expr ASSIGN Expr  */
#line 235 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(Store,NULL);
                                                                                    addchild((yyval.node),(yyvsp[-2].node));
                                                                                    addchild((yyval.node),(yyvsp[0].node));}}
#line 1740 "y.tab.c"
    break;

  case 47: /* Expr: Expr PLUS Expr  */
#line 239 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(Add, NULL);
                                                                                   addchild((yyval.node), (yyvsp[-2].node));
                                                                                   addchild((yyval.node), (yyvsp[0].node));}}
#line 1748 "y.tab.c"
    break;

  case 48: /* Expr: Expr MINUS Expr  */
#line 243 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(Sub, NULL);
                                                                                   addchild((yyval.node), (yyvsp[-2].node));
                                                                                   addchild((yyval.node), (yyvsp[0].node));}}
#line 1756 "y.tab.c"
    break;

  case 49: /* Expr: Expr MUL Expr  */
#line 247 "uccompiler.y"
                                                                {if(flag==2){ (yyval.node) = newnode(Mul, NULL);
                                                                                    addchild((yyval.node), (yyvsp[-2].node));
                                                                                    addchild((yyval.node), (yyvsp[0].node));}}
#line 1764 "y.tab.c"
    break;

  case 50: /* Expr: Expr DIV Expr  */
#line 251 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(Div, NULL);
                                                                                   addchild((yyval.node), (yyvsp[-2].node));
                                                                                   addchild((yyval.node), (yyvsp[0].node));}}
#line 1772 "y.tab.c"
    break;

  case 51: /* Expr: Expr MOD Expr  */
#line 255 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(Mod, NULL);
                                                                                   addchild((yyval.node), (yyvsp[-2].node));
                                                                                   addchild((yyval.node), (yyvsp[0].node));}}
#line 1780 "y.tab.c"
    break;

  case 52: /* Expr: Expr OR Expr  */
#line 259 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(Or, NULL);
                                                                                   addchild((yyval.node), (yyvsp[-2].node));
                                                                                   addchild((yyval.node), (yyvsp[0].node));}}
#line 1788 "y.tab.c"
    break;

  case 53: /* Expr: Expr AND Expr  */
#line 263 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(And, NULL);
                                                                                   addchild((yyval.node), (yyvsp[-2].node));
                                                                                   addchild((yyval.node), (yyvsp[0].node));}}
#line 1796 "y.tab.c"
    break;

  case 54: /* Expr: Expr BITWISEAND Expr  */
#line 267 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(BitWiseAnd, NULL);
                                                                                   addchild((yyval.node), (yyvsp[-2].node));
                                                                                   addchild((yyval.node), (yyvsp[0].node));}}
#line 1804 "y.tab.c"
    break;

  case 55: /* Expr: Expr BITWISEOR Expr  */
#line 271 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(BitWiseOr, NULL);
                                                                                   addchild((yyval.node), (yyvsp[-2].node));
                                                                                   addchild((yyval.node), (yyvsp[0].node));}}
#line 1812 "y.tab.c"
    break;

  case 56: /* Expr: Expr BITWISEXOR Expr  */
#line 275 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(BitWiseXor, NULL);
                                                                                   addchild((yyval.node), (yyvsp[-2].node));
                                                                                   addchild((yyval.node), (yyvsp[0].node));}}
#line 1820 "y.tab.c"
    break;

  case 57: /* Expr: Expr EQ Expr  */
#line 279 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(Eq, NULL);
                                                                                   addchild((yyval.node), (yyvsp[-2].node));
                                                                                   addchild((yyval.node), (yyvsp[0].node));}}
#line 1828 "y.tab.c"
    break;

  case 58: /* Expr: Expr NE Expr  */
#line 283 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(Ne, NULL);
                                                                                   addchild((yyval.node), (yyvsp[-2].node));
                                                                                   addchild((yyval.node), (yyvsp[0].node));}}
#line 1836 "y.tab.c"
    break;

  case 59: /* Expr: Expr LE Expr  */
#line 287 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(Le, NULL);
                                                                                   addchild((yyval.node), (yyvsp[-2].node));
                                                                                   addchild((yyval.node), (yyvsp[0].node));}}
#line 1844 "y.tab.c"
    break;

  case 60: /* Expr: Expr GE Expr  */
#line 291 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(Ge, NULL);
                                                                                   addchild((yyval.node), (yyvsp[-2].node));
                                                                                   addchild((yyval.node), (yyvsp[0].node));}}
#line 1852 "y.tab.c"
    break;

  case 61: /* Expr: Expr LT Expr  */
#line 295 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(Lt, NULL);
                                                                                   addchild((yyval.node), (yyvsp[-2].node));
                                                                                   addchild((yyval.node), (yyvsp[0].node));}}
#line 1860 "y.tab.c"
    break;

  case 62: /* Expr: Expr GT Expr  */
#line 299 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(Gt, NULL);
                                                                                   addchild((yyval.node), (yyvsp[-2].node));
                                                                                   addchild((yyval.node), (yyvsp[0].node));}}
#line 1868 "y.tab.c"
    break;

  case 63: /* Expr: PLUS Expr  */
#line 303 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(Plus, NULL);
                                                                                   addchild((yyval.node), (yyvsp[0].node));}}
#line 1875 "y.tab.c"
    break;

  case 64: /* Expr: MINUS Expr  */
#line 306 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(Minus, NULL);
                                                                                   addchild((yyval.node), (yyvsp[0].node));}}
#line 1882 "y.tab.c"
    break;

  case 65: /* Expr: NOT Expr  */
#line 309 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(Not, NULL);
                                                                                   addchild((yyval.node), (yyvsp[0].node));}}
#line 1889 "y.tab.c"
    break;

  case 66: /* Expr: IDENTIFIER LPAR ArgList RPAR  */
#line 312 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(Call,NULL);
                                                                                   addchild((yyval.node),newnode(Identifier,(yyvsp[-3].lexeme)));
                                                                                   addchild((yyval.node),(yyvsp[-1].node));}}
#line 1897 "y.tab.c"
    break;

  case 67: /* Expr: IDENTIFIER  */
#line 316 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(Identifier, (yyvsp[0].lexeme));}}
#line 1903 "y.tab.c"
    break;

  case 68: /* Expr: NATURAL  */
#line 317 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(Natural, (yyvsp[0].lexeme));}}
#line 1909 "y.tab.c"
    break;

  case 69: /* Expr: CHRLIT  */
#line 318 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(ChrLit, (yyvsp[0].lexeme));}}
#line 1915 "y.tab.c"
    break;

  case 70: /* Expr: DECIMAL  */
#line 319 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = newnode(Decimal, (yyvsp[0].lexeme));}}
#line 1921 "y.tab.c"
    break;

  case 71: /* Expr: LPAR ExprList RPAR  */
#line 320 "uccompiler.y"
                                                                    {if(flag==2){(yyval.node) = (yyvsp[-1].node);}}
#line 1927 "y.tab.c"
    break;

  case 72: /* Expr: IDENTIFIER LPAR RPAR  */
#line 322 "uccompiler.y"
                                                                { if(flag==2){(yyval.node) = newnode(Call,NULL);
                                                                                   addchild((yyval.node),newnode(Identifier,(yyvsp[-2].lexeme)));}}
#line 1934 "y.tab.c"
    break;

  case 73: /* Expr: IDENTIFIER LPAR error RPAR  */
#line 325 "uccompiler.y"
                                                                {if(flag==2){;}}
#line 1940 "y.tab.c"
    break;

  case 74: /* Expr: LPAR error RPAR  */
#line 326 "uccompiler.y"
                                                                {if(flag==2){;}}
#line 1946 "y.tab.c"
    break;

  case 75: /* ExprList: ExprList COMMA Expr  */
#line 329 "uccompiler.y"
                                                                        {if(flag==2){(yyval.node) = newnode(Comma,NULL);
                                                                                   addchild((yyval.node),(yyvsp[-2].node));
                                                                                   addchild((yyval.node),(yyvsp[0].node));}}
#line 1954 "y.tab.c"
    break;

  case 76: /* ExprList: Expr  */
#line 332 "uccompiler.y"
                                                                         {if(flag==2){(yyval.node) = (yyvsp[0].node);}}
#line 1960 "y.tab.c"
    break;

  case 77: /* ArgList: Expr  */
#line 336 "uccompiler.y"
                                                                {if(flag==2){(yyval.node) = (yyvsp[0].node);}}
#line 1966 "y.tab.c"
    break;

  case 78: /* ArgList: ArgList COMMA Expr  */
#line 337 "uccompiler.y"
                                                                {if(flag==2){(yyval.node)=(yyvsp[-2].node);addsibling((yyval.node),(yyvsp[0].node));}}
#line 1972 "y.tab.c"
    break;


#line 1976 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 342 "uccompiler.y"

void yyerror(char *s) {
    printf("Line %d, column %d: %s: %s\n", syn_line, syn_column, s, yytext);
    erro++;
}
