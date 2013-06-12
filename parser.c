/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_OR = 258,
     T_AND = 259,
     T_NOTEQUAL = 260,
     T_EQUAL = 261,
     T_GREATEREQUAL = 262,
     T_LESSEREQUAL = 263,
     T_GREATER = 264,
     T_LESSER = 265,
     T_MINUS = 266,
     T_PLUS = 267,
     T_SLASH = 268,
     T_STAR = 269,
     T_NOT = 270,
     T_PROGRAM = 271,
     T_VAR = 272,
     T_PROCEDURE = 273,
     T_FUNCTION = 274,
     T_BEGIN = 275,
     T_END = 276,
     T_IF = 277,
     T_THEN = 278,
     T_ELSE = 279,
     T_WHILE = 280,
     T_FOR = 281,
     T_TO = 282,
     T_DO = 283,
     T_ASSIGNMENT = 284,
     T_LPAR = 285,
     T_RPAR = 286,
     T_SEMICOLON = 287,
     T_COLON = 288,
     T_COMMA = 289,
     T_DOT = 290,
     T_PRINT_INT = 291,
     T_PRINT_CHAR = 292,
     T_PRINT_BOOL = 293,
     T_PRINT_LINE = 294,
     TYPE_IDENTIFIER = 295,
     IDENTIFIER = 296,
     INT_LITERAL = 297,
     BOOL_LITERAL = 298,
     CHAR_LITERAL = 299
   };
#endif
/* Tokens.  */
#define T_OR 258
#define T_AND 259
#define T_NOTEQUAL 260
#define T_EQUAL 261
#define T_GREATEREQUAL 262
#define T_LESSEREQUAL 263
#define T_GREATER 264
#define T_LESSER 265
#define T_MINUS 266
#define T_PLUS 267
#define T_SLASH 268
#define T_STAR 269
#define T_NOT 270
#define T_PROGRAM 271
#define T_VAR 272
#define T_PROCEDURE 273
#define T_FUNCTION 274
#define T_BEGIN 275
#define T_END 276
#define T_IF 277
#define T_THEN 278
#define T_ELSE 279
#define T_WHILE 280
#define T_FOR 281
#define T_TO 282
#define T_DO 283
#define T_ASSIGNMENT 284
#define T_LPAR 285
#define T_RPAR 286
#define T_SEMICOLON 287
#define T_COLON 288
#define T_COMMA 289
#define T_DOT 290
#define T_PRINT_INT 291
#define T_PRINT_CHAR 292
#define T_PRINT_BOOL 293
#define T_PRINT_LINE 294
#define TYPE_IDENTIFIER 295
#define IDENTIFIER 296
#define INT_LITERAL 297
#define BOOL_LITERAL 298
#define CHAR_LITERAL 299




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "base.h"
#include "parser.h"
#include "ast.h"
#include "symbol_table.h"

#include "typecheck_visitor.h"
#include "simpleprinter_visitor.h"
#include "graphprinter_visitor.h"
#include "c_codegen_visitor.h"
#include "llvm_codegen_visitor.h"

bool simple_flag = FALSE;
bool graph_flag = FALSE;
bool c_flag = FALSE;
bool llvm_flag = FALSE;

int opts;

/*extern char *yytext;*/
extern FILE *yyin;

static void yyerror (/*YYLTYPE *locp, */const char *msg);
/*int yylex (YYSTYPE *yylval_param, YYLTYPE *yylloc_param);*/

static struct AstNode *ast;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 42 "parser.y"
{
    char* lexeme;
    int integer;
    int boolean;
    char character;
    int type;
    struct AstNode *astnode;
}
/* Line 193 of yacc.c.  */
#line 225 "parser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 250 "parser.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   165

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNRULES -- Number of states.  */
#define YYNSTATES  169

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    12,    13,    15,    16,    19,    25,
      28,    29,    33,    35,    36,    39,    40,    43,    45,    47,
      59,    73,    74,    77,    78,    82,    86,    87,    92,    94,
      98,    99,   102,   103,   107,   109,   111,   113,   115,   117,
     119,   121,   123,   125,   132,   137,   144,   146,   148,   150,
     152,   157,   162,   167,   171,   175,   180,   187,   189,   193,
     195,   199,   201,   205,   207,   210,   212,   214,   216,   220,
     225,   226,   229,   230,   234,   236,   238,   240,   242,   244,
     246,   248,   250,   252,   254,   256,   258,   260,   262,   264,
     266,   268
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,    47,    48,    54,    62,    -1,    16,    92,
      32,    -1,    -1,    49,    -1,    -1,    50,    49,    -1,    17,
      51,    33,    40,    32,    -1,    53,    52,    -1,    -1,    34,
      53,    52,    -1,    92,    -1,    -1,    56,    55,    -1,    -1,
      56,    55,    -1,    57,    -1,    58,    -1,    18,    92,    30,
      59,    31,    32,    48,    20,    64,    21,    32,    -1,    19,
      92,    30,    59,    31,    33,    40,    32,    48,    20,    64,
      21,    32,    -1,    -1,    61,    60,    -1,    -1,    34,    61,
      60,    -1,    92,    33,    40,    -1,    -1,    20,    64,    21,
      35,    -1,    66,    -1,    20,    64,    21,    -1,    -1,    66,
      65,    -1,    -1,    32,    66,    65,    -1,    67,    -1,    68,
      -1,    76,    -1,    70,    -1,    77,    -1,    78,    -1,    84,
      -1,    71,    -1,    69,    -1,    22,    79,    23,    67,    24,
      68,    -1,    22,    79,    23,    63,    -1,    22,    79,    23,
      67,    24,    67,    -1,    72,    -1,    73,    -1,    74,    -1,
      75,    -1,    36,    30,    79,    31,    -1,    37,    30,    79,
      31,    -1,    38,    30,    79,    31,    -1,    39,    30,    31,
      -1,    92,    29,    79,    -1,    25,    79,    28,    63,    -1,
      26,    76,    27,    79,    28,    63,    -1,    80,    -1,    80,
      90,    80,    -1,    81,    -1,    80,    88,    81,    -1,    82,
      -1,    81,    89,    82,    -1,    83,    -1,    91,    83,    -1,
      92,    -1,    93,    -1,    84,    -1,    30,    79,    31,    -1,
      92,    30,    85,    31,    -1,    -1,    87,    86,    -1,    -1,
      34,    87,    86,    -1,    79,    -1,    12,    -1,    11,    -1,
       3,    -1,    14,    -1,    13,    -1,     4,    -1,    10,    -1,
       8,    -1,     9,    -1,     7,    -1,     6,    -1,     5,    -1,
      15,    -1,    41,    -1,    42,    -1,    43,    -1,    44,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   155,   155,   172,   183,   184,   195,   196,   204,   215,
     227,   228,   236,   241,   242,   254,   255,   263,   264,   268,
     289,   312,   313,   325,   326,   334,   345,   346,   350,   351,
     355,   356,   368,   369,   377,   378,   382,   383,   384,   385,
     386,   387,   391,   392,   405,   417,   430,   431,   432,   433,
     437,   448,   459,   470,   480,   492,   504,   517,   518,   531,
     532,   547,   548,   563,   564,   576,   577,   578,   579,   583,
     595,   596,   608,   609,   617,   629,   636,   643,   653,   660,
     667,   677,   684,   691,   698,   705,   712,   722,   726,   739,
     747,   755
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_OR", "T_AND", "T_NOTEQUAL", "T_EQUAL",
  "T_GREATEREQUAL", "T_LESSEREQUAL", "T_GREATER", "T_LESSER", "T_MINUS",
  "T_PLUS", "T_SLASH", "T_STAR", "T_NOT", "T_PROGRAM", "T_VAR",
  "T_PROCEDURE", "T_FUNCTION", "T_BEGIN", "T_END", "T_IF", "T_THEN",
  "T_ELSE", "T_WHILE", "T_FOR", "T_TO", "T_DO", "T_ASSIGNMENT", "T_LPAR",
  "T_RPAR", "T_SEMICOLON", "T_COLON", "T_COMMA", "T_DOT", "T_PRINT_INT",
  "T_PRINT_CHAR", "T_PRINT_BOOL", "T_PRINT_LINE", "TYPE_IDENTIFIER",
  "IDENTIFIER", "INT_LITERAL", "BOOL_LITERAL", "CHAR_LITERAL", "$accept",
  "Program", "ProgramDecl", "VarDeclList", "MultiVarDecl", "VarDecl",
  "IdentifierList", "MultiIdentifier", "SingleIdentifier", "ProcFuncList",
  "MultiProcFuncDecl", "ProcFuncDecl", "ProcDecl", "FuncDecl", "ParamList",
  "MultiParam", "SingleParam", "ProgramBody", "Statements",
  "StatementList", "MultiStatement", "Statement", "StatementMatched",
  "StatementUnmatched", "IfStatement", "IfStatementMatched",
  "PrintStatement", "PrintIntStatement", "PrintCharStatement",
  "PrintBoolStatement", "PrintLineStatement", "Assignment",
  "WhileStatement", "ForStatement", "Expression", "SimpleExpression",
  "Term", "NotFactor", "Factor", "Call", "CallParamList",
  "MultiCallParameter", "CallParameter", "AddOp", "MulOp", "RelOp",
  "NotOp", "Identifier", "Literal", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    48,    48,    49,    49,    50,    51,
      52,    52,    53,    54,    54,    55,    55,    56,    56,    57,
      58,    59,    59,    60,    60,    61,    62,    62,    63,    63,
      64,    64,    65,    65,    66,    66,    67,    67,    67,    67,
      67,    67,    68,    68,    69,    70,    71,    71,    71,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    79,    80,
      80,    81,    81,    82,    82,    83,    83,    83,    83,    84,
      85,    85,    86,    86,    87,    88,    88,    88,    89,    89,
      89,    90,    90,    90,    90,    90,    90,    91,    92,    93,
      93,    93
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     3,     0,     1,     0,     2,     5,     2,
       0,     3,     1,     0,     2,     0,     2,     1,     1,    11,
      13,     0,     2,     0,     3,     3,     0,     4,     1,     3,
       0,     2,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     6,     4,     6,     1,     1,     1,     1,
       4,     4,     4,     3,     3,     4,     6,     1,     3,     1,
       3,     1,     3,     1,     2,     1,     1,     1,     3,     4,
       0,     2,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     4,    88,     0,     1,     0,    13,     5,
       6,     3,     0,    10,    12,     0,     0,    26,    15,    17,
      18,     7,     0,     0,     9,     0,     0,    30,     2,    14,
      15,     0,    10,    21,    21,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    34,    35,    42,    37,    41,    46,
      47,    48,    49,    36,    38,    39,    40,     0,    16,     8,
      11,     0,    23,     0,     0,    87,     0,    89,    90,    91,
       0,    57,    59,    61,    63,    67,     0,    65,    66,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
      70,     0,     0,    22,     0,     0,     0,     0,    77,    86,
      85,    84,    82,    83,    81,    76,    75,     0,     0,    80,
      79,    78,     0,    64,     0,     0,     0,     0,     0,    53,
      27,    32,    54,    74,     0,    72,     4,    23,    25,     0,
      68,    30,    44,    28,    34,    60,    58,    62,    55,     0,
      50,    51,    52,    33,    69,     0,    71,     0,    24,     0,
       0,     0,     0,    72,    30,     4,    29,    45,    43,    56,
      73,     0,     0,     0,    30,    19,     0,     0,    20
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     8,     9,    10,    12,    24,    13,    17,
      29,    30,    19,    20,    61,    93,    62,    28,   132,    42,
      88,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,   123,    71,    72,    73,    74,    75,
     124,   146,   125,   107,   112,   108,    76,    77,    78
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -124
static const yytype_int8 yypact[] =
{
      -3,   -24,    19,     4,  -124,    -9,  -124,   -24,    -8,  -124,
       4,  -124,     7,    -4,  -124,   -24,   -24,    24,    -8,  -124,
    -124,  -124,    22,   -24,  -124,    39,    40,    38,  -124,  -124,
      -8,    41,    -4,   -24,   -24,     5,     5,   -24,    42,    48,
      50,    52,    47,    53,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,    36,  -124,  -124,
    -124,    56,    55,    57,    66,  -124,     5,  -124,  -124,  -124,
      61,   109,    14,  -124,  -124,  -124,    51,    68,  -124,    71,
      73,    72,     5,     5,     5,    75,    67,    38,  -124,     5,
       5,    76,   -24,  -124,    63,    74,    78,    17,  -124,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,     5,     5,  -124,
    -124,  -124,     5,  -124,    17,     5,    79,    80,    91,  -124,
    -124,    53,  -124,  -124,    92,    70,     4,    55,  -124,    84,
    -124,    38,  -124,  -124,   103,    14,    13,  -124,  -124,   101,
    -124,  -124,  -124,  -124,  -124,     5,  -124,   111,  -124,   100,
     112,    38,    17,    70,    38,     4,  -124,  -124,  -124,  -124,
    -124,   113,   115,   104,    38,  -124,   116,   107,  -124
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -124,  -124,  -124,  -117,   130,  -124,  -124,   110,   118,  -124,
     114,   135,  -124,  -124,   120,    18,    54,  -124,  -107,  -123,
      26,   -85,   -92,    -2,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,   119,  -124,  -124,   -32,    44,    58,    43,    81,   -26,
    -124,    -5,    15,  -124,  -124,  -124,  -124,    -1,  -124
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
       5,    56,   121,    70,    79,   134,    14,   138,   150,   147,
      15,    16,   133,     1,    25,    26,    98,     4,   109,     6,
      65,     7,    14,    11,   105,   106,    57,   110,   111,   133,
      23,   161,    63,    63,    96,    66,    81,   131,   162,    35,
      22,   166,    36,    37,    27,   159,     4,    67,    68,    69,
     116,   117,   118,    38,    39,    40,    41,   122,     4,   157,
      35,    56,    31,    36,    37,    89,    90,   133,    86,    33,
      34,    56,    82,    59,    38,    39,    40,    41,    83,     4,
      84,    66,    85,   139,    97,    87,    57,    91,    56,    92,
      94,    63,     4,    67,    68,    69,    57,    95,    90,   114,
     115,    89,   120,   128,   145,    56,   119,   129,   126,   130,
     140,   141,    98,    57,    99,   100,   101,   102,   103,   104,
     105,   106,   142,   144,   149,    56,    56,   151,    56,   152,
      57,   154,   155,   156,   163,   164,   165,   167,    56,   168,
      21,    32,    60,    18,    58,   148,   127,   143,   160,   158,
      57,    57,   136,    57,    64,   137,    80,   113,     0,     0,
     153,     0,     0,    57,     0,   135
};

static const yytype_int16 yycheck[] =
{
       1,    27,    87,    35,    36,    97,     7,   114,   131,   126,
      18,    19,    97,    16,    15,    16,     3,    41,     4,     0,
      15,    17,    23,    32,    11,    12,    27,    13,    14,   114,
      34,   154,    33,    34,    66,    30,    37,    20,   155,    22,
      33,   164,    25,    26,    20,   152,    41,    42,    43,    44,
      82,    83,    84,    36,    37,    38,    39,    89,    41,   151,
      22,    87,    40,    25,    26,    29,    30,   152,    21,    30,
      30,    97,    30,    32,    36,    37,    38,    39,    30,    41,
      30,    30,    30,   115,    23,    32,    87,    31,   114,    34,
      33,    92,    41,    42,    43,    44,    97,    31,    30,    28,
      27,    29,    35,    40,    34,   131,    31,    33,    32,    31,
      31,    31,     3,   114,     5,     6,     7,     8,     9,    10,
      11,    12,    31,    31,    40,   151,   152,    24,   154,    28,
     131,    20,    32,    21,    21,    20,    32,    21,   164,    32,
      10,    23,    32,     8,    30,   127,    92,   121,   153,   151,
     151,   152,   108,   154,    34,   112,    37,    76,    -1,    -1,
     145,    -1,    -1,   164,    -1,   107
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    46,    47,    41,    92,     0,    17,    48,    49,
      50,    32,    51,    53,    92,    18,    19,    54,    56,    57,
      58,    49,    33,    34,    52,    92,    92,    20,    62,    55,
      56,    40,    53,    30,    30,    22,    25,    26,    36,    37,
      38,    39,    64,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    84,    92,    55,    32,
      52,    59,    61,    92,    59,    15,    30,    42,    43,    44,
      79,    80,    81,    82,    83,    84,    91,    92,    93,    79,
      76,    92,    30,    30,    30,    30,    21,    32,    65,    29,
      30,    31,    34,    60,    33,    31,    79,    23,     3,     5,
       6,     7,     8,     9,    10,    11,    12,    88,    90,     4,
      13,    14,    89,    83,    28,    27,    79,    79,    79,    31,
      35,    66,    79,    79,    85,    87,    32,    61,    40,    33,
      31,    20,    63,    66,    67,    81,    80,    82,    63,    79,
      31,    31,    31,    65,    31,    34,    86,    48,    60,    40,
      64,    24,    28,    87,    20,    32,    21,    67,    68,    63,
      86,    64,    48,    21,    20,    32,    64,    21,    32
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug=1;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;
#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 156 "parser.y"
    {
        struct AstNode *ast_node;

        ast_node = ast_node_new("Program", PROGRAM, VOID,
                                yylloc.last_line, NULL);
        ast_node_add_child(ast_node, (yyvsp[(1) - (4)].astnode)); // ProgramDecl
        ast_node_add_child(ast_node, (yyvsp[(2) - (4)].astnode)); // VarDeclList
        ast_node_add_child(ast_node, (yyvsp[(3) - (4)].astnode)); // ProcFuncList
        ast_node_add_child(ast_node, (yyvsp[(4) - (4)].astnode)); // ProgramBody
        (yyval.astnode) = ast_node;

        ast = ast_node;
    ;}
    break;

  case 3:
#line 173 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new("ProgramDecl", PROGRAM_DECL, VOID,
                                yylloc.last_line, NULL);
        ast_node_add_child(ast_node, (yyvsp[(2) - (3)].astnode));
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 4:
#line 183 "parser.y"
    { (yyval.astnode) = NULL; ;}
    break;

  case 5:
#line 185 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new("VarDeclList", VARDECL_LIST, VOID,
                                yylloc.last_line, NULL);
        ast_node_add_child(ast_node, (yyvsp[(1) - (1)].astnode));
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 6:
#line 195 "parser.y"
    { (yyval.astnode) = NULL; ;}
    break;

  case 7:
#line 197 "parser.y"
    {
        ast_node_add_sibling((yyvsp[(1) - (2)].astnode), (yyvsp[(2) - (2)].astnode));
        (yyval.astnode) = (yyvsp[(1) - (2)].astnode);
    ;}
    break;

  case 8:
#line 205 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new("VarDecl", VARDECL, (yyvsp[(4) - (5)].type),
                                yylloc.last_line, NULL);
        ast_node_add_child(ast_node, (yyvsp[(2) - (5)].astnode));
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 9:
#line 216 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new("IdentifierList", IDENT_LIST, VOID,
                                yylloc.last_line, NULL);
        ast_node_add_sibling((yyvsp[(1) - (2)].astnode), (yyvsp[(2) - (2)].astnode));
        ast_node_add_child(ast_node, (yyvsp[(1) - (2)].astnode));
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 10:
#line 227 "parser.y"
    { (yyval.astnode) = NULL; ;}
    break;

  case 11:
#line 229 "parser.y"
    {
        ast_node_add_sibling((yyvsp[(2) - (3)].astnode), (yyvsp[(3) - (3)].astnode));
        (yyval.astnode) = (yyvsp[(2) - (3)].astnode);
    ;}
    break;

  case 12:
#line 236 "parser.y"
    { (yyval.astnode) = (yyvsp[(1) - (1)].astnode); ;}
    break;

  case 13:
#line 241 "parser.y"
    { (yyval.astnode) = NULL; ;}
    break;

  case 14:
#line 243 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new("ProcFuncList", PROCFUNC_LIST, VOID,
                                yylloc.last_line, NULL);
        ast_node_add_sibling((yyvsp[(1) - (2)].astnode), (yyvsp[(2) - (2)].astnode));
        ast_node_add_child(ast_node, (yyvsp[(1) - (2)].astnode));
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 15:
#line 254 "parser.y"
    { (yyval.astnode) = NULL; ;}
    break;

  case 16:
#line 256 "parser.y"
    {
        ast_node_add_sibling((yyvsp[(1) - (2)].astnode), (yyvsp[(2) - (2)].astnode));
        (yyval.astnode) = (yyvsp[(1) - (2)].astnode);
    ;}
    break;

  case 17:
#line 263 "parser.y"
    { (yyval.astnode) = (yyvsp[(1) - (1)].astnode); ;}
    break;

  case 18:
#line 264 "parser.y"
    { (yyval.astnode) = (yyvsp[(1) - (1)].astnode); ;}
    break;

  case 19:
#line 270 "parser.y"
    {
        Symbol *symtab;
        struct AstNode *ast_node;

        ast_node = ast_node_new("ProcDecl", PROCEDURE, VOID,
                                yylloc.last_line, NULL);
        ast_node_add_child(ast_node, (yyvsp[(2) - (11)].astnode));  // Identifier
        ast_node_add_child(ast_node, (yyvsp[(4) - (11)].astnode));  // ParamList
        ast_node_add_child(ast_node, (yyvsp[(7) - (11)].astnode));  // VarDeclList
        ast_node_add_child(ast_node, (yyvsp[(9) - (11)].astnode));  // Statements

        // Tabela de simbolos local
        ast_node->symbol = symbol_new(NULL);

        (yyval.astnode) = ast_node;
    ;}
    break;

  case 20:
#line 291 "parser.y"
    {
        Symbol *symtab;
        struct AstNode *ast_node;

        ast_node = ast_node_new("FuncDecl", FUNCTION, (yyvsp[(7) - (13)].type),
                                yylloc.last_line, NULL);
        ast_node_add_child(ast_node, (yyvsp[(2) - (13)].astnode));  // Identifier
        ast_node_add_child(ast_node, (yyvsp[(4) - (13)].astnode));  // ParamList
        ast_node_add_child(ast_node, (yyvsp[(9) - (13)].astnode));  // VarDeclList
        ast_node_add_child(ast_node, (yyvsp[(11) - (13)].astnode)); // Statements

        (yyvsp[(2) - (13)].astnode)->symbol->type = (yyvsp[(7) - (13)].type);

        // Tabela de simbolos local
        ast_node->symbol = symbol_new(NULL);

        (yyval.astnode) = ast_node;
    ;}
    break;

  case 21:
#line 312 "parser.y"
    { (yyval.astnode) = NULL; ;}
    break;

  case 22:
#line 314 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new("ParamList", PARAM_LIST, VOID,
                                yylloc.last_line, NULL);
        ast_node_add_sibling((yyvsp[(1) - (2)].astnode), (yyvsp[(2) - (2)].astnode));
        ast_node_add_child(ast_node, (yyvsp[(1) - (2)].astnode));
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 23:
#line 325 "parser.y"
    { (yyval.astnode) = NULL; ;}
    break;

  case 24:
#line 327 "parser.y"
    {
        ast_node_add_sibling((yyvsp[(2) - (3)].astnode), (yyvsp[(3) - (3)].astnode));
        (yyval.astnode) = (yyvsp[(2) - (3)].astnode);
    ;}
    break;

  case 25:
#line 335 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new("Parameter", PARAMETER, (yyvsp[(3) - (3)].type),
                                yylloc.last_line, NULL);
        ast_node_add_child(ast_node, (yyvsp[(1) - (3)].astnode));  // Identifier
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 26:
#line 345 "parser.y"
    { (yyval.astnode) = NULL; ;}
    break;

  case 27:
#line 346 "parser.y"
    { (yyval.astnode) = (yyvsp[(2) - (4)].astnode); ;}
    break;

  case 28:
#line 350 "parser.y"
    { (yyval.astnode) = (yyvsp[(1) - (1)].astnode); ;}
    break;

  case 29:
#line 351 "parser.y"
    { (yyval.astnode) = (yyvsp[(2) - (3)].astnode); ;}
    break;

  case 30:
#line 355 "parser.y"
    { (yyval.astnode) = NULL; ;}
    break;

  case 31:
#line 357 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new("StatementList", STATEMENT_LIST, VOID,
                                yylloc.last_line, NULL);
        ast_node_add_sibling((yyvsp[(1) - (2)].astnode), (yyvsp[(2) - (2)].astnode));
        ast_node_add_child(ast_node, (yyvsp[(1) - (2)].astnode));
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 32:
#line 368 "parser.y"
    { (yyval.astnode) = NULL; ;}
    break;

  case 33:
#line 370 "parser.y"
    {
        ast_node_add_sibling((yyvsp[(2) - (3)].astnode), (yyvsp[(3) - (3)].astnode));
        (yyval.astnode) = (yyvsp[(2) - (3)].astnode);
    ;}
    break;

  case 34:
#line 377 "parser.y"
    { (yyval.astnode) = (yyvsp[(1) - (1)].astnode) ;}
    break;

  case 35:
#line 378 "parser.y"
    { (yyval.astnode) = (yyvsp[(1) - (1)].astnode) ;}
    break;

  case 36:
#line 382 "parser.y"
    { (yyval.astnode) = (yyvsp[(1) - (1)].astnode); ;}
    break;

  case 37:
#line 383 "parser.y"
    { (yyval.astnode) = (yyvsp[(1) - (1)].astnode); ;}
    break;

  case 38:
#line 384 "parser.y"
    { (yyval.astnode) = (yyvsp[(1) - (1)].astnode); ;}
    break;

  case 39:
#line 385 "parser.y"
    { (yyval.astnode) = (yyvsp[(1) - (1)].astnode); ;}
    break;

  case 40:
#line 386 "parser.y"
    { (yyval.astnode) = (yyvsp[(1) - (1)].astnode); ;}
    break;

  case 41:
#line 387 "parser.y"
    { (yyval.astnode) = (yyvsp[(1) - (1)].astnode); ;}
    break;

  case 42:
#line 391 "parser.y"
    { (yyval.astnode) = (yyvsp[(1) - (1)].astnode); ;}
    break;

  case 43:
#line 393 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new("IfStatement", IF_STMT, VOID,
                                yylloc.last_line, NULL);
        ast_node_add_child(ast_node, (yyvsp[(2) - (6)].astnode));
        ast_node_add_child(ast_node, (yyvsp[(4) - (6)].astnode));
        ast_node_add_child(ast_node, (yyvsp[(6) - (6)].astnode));
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 44:
#line 406 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new("IfStatement", IF_STMT, VOID,
                                yylloc.last_line, NULL);
        ast_node_add_child(ast_node, (yyvsp[(2) - (4)].astnode));
        ast_node_add_child(ast_node, (yyvsp[(4) - (4)].astnode));
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 45:
#line 418 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new("IfStatement", IF_STMT, VOID,
                                yylloc.last_line, NULL);
        ast_node_add_child(ast_node, (yyvsp[(2) - (6)].astnode));
        ast_node_add_child(ast_node, (yyvsp[(4) - (6)].astnode));
        ast_node_add_child(ast_node, (yyvsp[(6) - (6)].astnode));
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 46:
#line 430 "parser.y"
    { (yyval.astnode) = (yyvsp[(1) - (1)].astnode); ;}
    break;

  case 47:
#line 431 "parser.y"
    { (yyval.astnode) = (yyvsp[(1) - (1)].astnode); ;}
    break;

  case 48:
#line 432 "parser.y"
    { (yyval.astnode) = (yyvsp[(1) - (1)].astnode); ;}
    break;

  case 49:
#line 433 "parser.y"
    { (yyval.astnode) = (yyvsp[(1) - (1)].astnode); ;}
    break;

  case 50:
#line 438 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new("PrintIntStatement", PRINTINT_STMT, VOID,
                                yylloc.last_line, NULL);
        ast_node_add_child(ast_node, (yyvsp[(3) - (4)].astnode));
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 51:
#line 449 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new("PrintCharStatement", PRINTCHAR_STMT, VOID,
                                yylloc.last_line, NULL);
        ast_node_add_child(ast_node, (yyvsp[(3) - (4)].astnode));
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 52:
#line 460 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new("PrintBoolStatement", PRINTBOOL_STMT, VOID,
                                yylloc.last_line, NULL);
        ast_node_add_child(ast_node, (yyvsp[(3) - (4)].astnode));
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 53:
#line 471 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new("PrintLineStatement", PRINTLINE_STMT, VOID,
                                yylloc.last_line, NULL);
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 54:
#line 481 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new("Assignment", ASSIGNMENT_STMT, VOID,
                                yylloc.last_line, NULL);
        ast_node_add_child(ast_node, (yyvsp[(1) - (3)].astnode));
        ast_node_add_child(ast_node, (yyvsp[(3) - (3)].astnode));
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 55:
#line 493 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new("WhileStatement", WHILE_STMT, VOID,
                                yylloc.last_line, NULL);
        ast_node_add_child(ast_node, (yyvsp[(2) - (4)].astnode));
        ast_node_add_child(ast_node, (yyvsp[(4) - (4)].astnode));
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 56:
#line 505 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new("ForStatement", FOR_STMT, VOID,
                                yylloc.last_line, NULL);
        ast_node_add_child(ast_node, (yyvsp[(2) - (6)].astnode)); // Assignment
        ast_node_add_child(ast_node, (yyvsp[(4) - (6)].astnode)); // Expression
        ast_node_add_child(ast_node, (yyvsp[(6) - (6)].astnode)); // Statements
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 57:
#line 517 "parser.y"
    { (yyval.astnode) = (yyvsp[(1) - (1)].astnode); ;}
    break;

  case 58:
#line 519 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new("RelExpression", REL_EXPR, BOOLEAN,
                                yylloc.last_line, NULL);
        ast_node_add_child(ast_node, (yyvsp[(1) - (3)].astnode));
        ast_node_add_child(ast_node, (yyvsp[(2) - (3)].astnode));
        ast_node_add_child(ast_node, (yyvsp[(3) - (3)].astnode));
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 59:
#line 531 "parser.y"
    { (yyval.astnode) = (yyvsp[(1) - (1)].astnode); ;}
    break;

  case 60:
#line 533 "parser.y"
    {
        struct AstNode *ast_node;
        Type type = ((struct AstNode *) (yyvsp[(2) - (3)].astnode))->type;

        ast_node = ast_node_new("AddExpression", ADD_EXPR, type,
                                yylloc.last_line, NULL);
        ast_node_add_child(ast_node, (yyvsp[(1) - (3)].astnode));
        ast_node_add_child(ast_node, (yyvsp[(2) - (3)].astnode));
        ast_node_add_child(ast_node, (yyvsp[(3) - (3)].astnode));
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 61:
#line 547 "parser.y"
    { (yyval.astnode) = (yyvsp[(1) - (1)].astnode); ;}
    break;

  case 62:
#line 549 "parser.y"
    {
        struct AstNode *ast_node;
        Type type = ((struct AstNode *) (yyvsp[(2) - (3)].astnode))->type;

        ast_node = ast_node_new("MulExpression", MUL_EXPR, type,
                                yylloc.last_line, NULL);
        ast_node_add_child(ast_node, (yyvsp[(1) - (3)].astnode));
        ast_node_add_child(ast_node, (yyvsp[(2) - (3)].astnode));
        ast_node_add_child(ast_node, (yyvsp[(3) - (3)].astnode));
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 63:
#line 563 "parser.y"
    { (yyval.astnode) = (yyvsp[(1) - (1)].astnode); ;}
    break;

  case 64:
#line 565 "parser.y"
    {
        struct AstNode *ast_node;
        struct AstNode *op_ast_node;
        ast_node = ast_node_new("NotFactor", NOTFACTOR, BOOLEAN,
                                yylloc.last_line, NULL);
        ast_node_add_child(ast_node, (yyvsp[(2) - (2)].astnode));
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 65:
#line 576 "parser.y"
    { (yyval.astnode) = (yyvsp[(1) - (1)].astnode); ;}
    break;

  case 66:
#line 577 "parser.y"
    { (yyval.astnode) = (yyvsp[(1) - (1)].astnode); ;}
    break;

  case 67:
#line 578 "parser.y"
    { (yyval.astnode) = (yyvsp[(1) - (1)].astnode); ;}
    break;

  case 68:
#line 579 "parser.y"
    { (yyval.astnode) = (yyvsp[(2) - (3)].astnode); ;}
    break;

  case 69:
#line 584 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new("Call", CALL, VOID,
                                yylloc.last_line, NULL);
        ast_node_add_child(ast_node, (yyvsp[(1) - (4)].astnode));
        ast_node_add_child(ast_node, (yyvsp[(3) - (4)].astnode));
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 70:
#line 595 "parser.y"
    { (yyval.astnode) = NULL; ;}
    break;

  case 71:
#line 597 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new("CallParamList", CALLPARAM_LIST, VOID,
                                yylloc.last_line, NULL);
        ast_node_add_sibling((yyvsp[(1) - (2)].astnode), (yyvsp[(2) - (2)].astnode));
        ast_node_add_child(ast_node, (yyvsp[(1) - (2)].astnode));
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 72:
#line 608 "parser.y"
    { (yyval.astnode) = NULL; ;}
    break;

  case 73:
#line 610 "parser.y"
    {
        ast_node_add_sibling((yyvsp[(2) - (3)].astnode), (yyvsp[(3) - (3)].astnode));
        (yyval.astnode) = (yyvsp[(2) - (3)].astnode);
    ;}
    break;

  case 74:
#line 618 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new("CallParameter", CALLPARAM,
                                ((struct AstNode *) (yyvsp[(1) - (1)].astnode))->type,
                                yylloc.last_line, NULL);
        ast_node_add_child(ast_node, (yyvsp[(1) - (1)].astnode));
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 75:
#line 630 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new((yyvsp[(1) - (1)].lexeme), T_PLUS, INTEGER,
                                yylloc.last_line, NULL);
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 76:
#line 637 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new((yyvsp[(1) - (1)].lexeme), T_MINUS, INTEGER,
                                yylloc.last_line, NULL);
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 77:
#line 644 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new((yyvsp[(1) - (1)].lexeme), T_OR, BOOLEAN,
                                yylloc.last_line, NULL);
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 78:
#line 654 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new((yyvsp[(1) - (1)].lexeme), T_STAR, INTEGER,
                                yylloc.last_line, NULL);
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 79:
#line 661 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new((yyvsp[(1) - (1)].lexeme), T_SLASH, INTEGER,
                                yylloc.last_line, NULL);
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 80:
#line 668 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new((yyvsp[(1) - (1)].lexeme), T_AND, BOOLEAN,
                                yylloc.last_line, NULL);
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 81:
#line 678 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new((yyvsp[(1) - (1)].lexeme), T_LESSER, BOOLEAN,
                                yylloc.last_line, NULL);
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 82:
#line 685 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new((yyvsp[(1) - (1)].lexeme), T_LESSEREQUAL, BOOLEAN,
                                yylloc.last_line, NULL);
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 83:
#line 692 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new((yyvsp[(1) - (1)].lexeme), T_GREATER, BOOLEAN,
                                yylloc.last_line, NULL);
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 84:
#line 699 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new((yyvsp[(1) - (1)].lexeme), T_GREATEREQUAL, BOOLEAN,
                                yylloc.last_line, NULL);
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 85:
#line 706 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new((yyvsp[(1) - (1)].lexeme), T_EQUAL, BOOLEAN,
                                yylloc.last_line, NULL);
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 86:
#line 713 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new((yyvsp[(1) - (1)].lexeme), T_NOTEQUAL, BOOLEAN,
                                yylloc.last_line, NULL);
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 87:
#line 722 "parser.y"
    { (yyval.astnode) = NULL; ;}
    break;

  case 88:
#line 727 "parser.y"
    {
        struct AstNode *ast_node;

        ast_node = ast_node_new("Identifier", IDENTIFIER, VOID,
                                yylloc.last_line, NULL);
        ast_node->symbol = symbol_new((yyvsp[(1) - (1)].lexeme));
        //ast_node->symbol->decl_linenum = yylloc.last_line;
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 89:
#line 740 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new("IntLiteral", INT_LITERAL, INTEGER,
                                yylloc.last_line, NULL);
        value_set_from_int(&ast_node->value, (yyvsp[(1) - (1)].integer));
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 90:
#line 748 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new("BoolLiteral", BOOL_LITERAL, BOOLEAN,
                                yylloc.last_line, NULL);
        value_set_from_bool(&ast_node->value, (yyvsp[(1) - (1)].boolean));
        (yyval.astnode) = ast_node;
    ;}
    break;

  case 91:
#line 756 "parser.y"
    {
        struct AstNode *ast_node;
        ast_node = ast_node_new("CharLiteral", CHAR_LITERAL, CHAR,
                                yylloc.last_line, NULL);
        value_set_from_char(&ast_node->value, (yyvsp[(1) - (1)].character));
        (yyval.astnode) = ast_node;
    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2403 "parser.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 765 "parser.y"


static void
yyerror (/*YYLTYPE *locp,*/ const char *msg)
{
    fprintf(stderr, "Error: line %d: %s\n", yyget_lineno(), msg);
}

int
main (int argc, char **argv)
{
    Visitor *visitor;

    opterr = 0;

    while ((opts = getopt (argc, argv, "sgcl")) != -1) {
        switch (opts) {
            case 's':
                simple_flag = TRUE;
                break;
            case 'g':
                graph_flag = TRUE;
                break;
            case 'c':
                c_flag = TRUE;
                break;
            case 'l':
                llvm_flag = TRUE;
                break;
            /*case 'o':
                output = optarg;
                break;
            case '?':
                if (optopt == 'o')
                    fprintf (stderr, "Option -%c requires an argument.\n",
                             optopt);
                else if (isprint (optopt))
                    fprintf (stderr, "Unknown option `-%c'.\n", optopt);
                else
                    fprintf (stderr,
                             "Unknown option character `\\x%x'.\n", optopt);
            */
            default:
                return 1;
        }
    }

    if (argc > optind)
        yyin = fopen(argv[optind], "r");
    else
        yyin = stdin;

    /*yylloc.first_line = yylloc.last_line = 1;
    yylloc.first_column = yylloc.last_column = 0;*/

    yyparse();

    /* Verificacao de tipos. */
    visitor = typecheck_new();
    ast_node_accept(ast, visitor);

    if (ast_node_check_errors(ast)) {
        fprintf(stderr, "Too many errors to compile.\n");
        if (!graph_flag)
            return 1;
    }

    /* Mostra estrutura da AST em forma de texto. */
    if (simple_flag)
        visitor = simpleprinter_new();

    /* Desenha grafo da AST. */
    else if (graph_flag)
        visitor = graphprinter_new();

    /* Gera codigo em linguagem C. */
    else if (c_flag)
        visitor = c_codegen_new();

    /* Gera codigo em assembly LLVM. */
    else if (llvm_flag)
        visitor = llvm_codegen_new();

    else
        visitor = NULL;

    if (visitor != NULL)
        ast_node_accept(ast, visitor);

    return 0;
}


