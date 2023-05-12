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
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TM_NAT = 258,
     TM_IDENT = 259,
     TM_LEFT_BRACE = 260,
     TM_RIGHT_BRACE = 261,
     TM_LEFT_BRACK = 262,
     TM_RIGHT_BRACK = 263,
     TM_LEFT_PAREN = 264,
     TM_RIGHT_PAREN = 265,
     TM_SEMICOL = 266,
     TM_COMMA = 267,
     TM_CONOL = 268,
     TM_VOID = 269,
     TM_CHAR = 270,
     TM_U8 = 271,
     TM_INT = 272,
     TM_INT64 = 273,
     TM_UINT = 274,
     TM_UINT64 = 275,
     TM_STRUCT = 276,
     TM_UNION = 277,
     TM_ENUM = 278,
     TM_WITH = 279,
     TM_REQUIRE = 280,
     TM_ENSURE = 281,
     TM___RETURN = 282,
     TM_INV = 283,
     TM_FORALL = 284,
     TM_EXISTS = 285,
     TM_LET = 286,
     TM_IF = 287,
     TM_ELSE = 288,
     TM_FOR = 289,
     TM_DO = 290,
     TM_WHILE = 291,
     TM_SWITCH = 292,
     TM_CASE = 293,
     TM_DEFAULT = 294,
     TM_RETURN = 295,
     TM_BREAK = 296,
     TM_CONTINUE = 297,
     TM_SIZEOF = 298,
     TM_ASGNOP = 299,
     TM_PLUS_ASGN = 300,
     TM_MINUS_ASGN = 301,
     TM_MUL_ASGN = 302,
     TM_DIV_ASGN = 303,
     TM_MOD_ASGN = 304,
     TM_BAND_ASGN = 305,
     TM_BOR_ASGN = 306,
     TM_XOR_ASGN = 307,
     TM_SHL_ASGN = 308,
     TM_SHR_ASGN = 309,
     TM_PLUS = 310,
     TM_MINUS = 311,
     TM_STAR = 312,
     TM_DIV = 313,
     TM_MOD = 314,
     TM_GE = 315,
     TM_LE = 316,
     TM_GT = 317,
     TM_LT = 318,
     TM_EQ = 319,
     TM_NE = 320,
     TM_AND = 321,
     TM_OR = 322,
     TM_BAND = 323,
     TM_BOR = 324,
     TM_XOR = 325,
     TM_SHR = 326,
     TM_SHL = 327,
     TM_NOTINT = 328,
     TM_NOTBOOL = 329,
     TM_INC = 330,
     TM_DEC = 331,
     TM_FIELDOF = 332,
     TM_FIELDOFPTR = 333,
     TM_COMMENT_START = 334,
     TM_COMMENT_END = 335,
     TM_ADD_ASGN = 336,
     TM_MUL = 337,
     TM_DEREF = 338,
     TM_INDEX = 339,
     TM_ADDRES = 340,
     TM_UMINUS = 341,
     TM_UPLUS = 342,
     TM_THEN = 343
   };
#endif
/* Tokens.  */
#define TM_NAT 258
#define TM_IDENT 259
#define TM_LEFT_BRACE 260
#define TM_RIGHT_BRACE 261
#define TM_LEFT_BRACK 262
#define TM_RIGHT_BRACK 263
#define TM_LEFT_PAREN 264
#define TM_RIGHT_PAREN 265
#define TM_SEMICOL 266
#define TM_COMMA 267
#define TM_CONOL 268
#define TM_VOID 269
#define TM_CHAR 270
#define TM_U8 271
#define TM_INT 272
#define TM_INT64 273
#define TM_UINT 274
#define TM_UINT64 275
#define TM_STRUCT 276
#define TM_UNION 277
#define TM_ENUM 278
#define TM_WITH 279
#define TM_REQUIRE 280
#define TM_ENSURE 281
#define TM___RETURN 282
#define TM_INV 283
#define TM_FORALL 284
#define TM_EXISTS 285
#define TM_LET 286
#define TM_IF 287
#define TM_ELSE 288
#define TM_FOR 289
#define TM_DO 290
#define TM_WHILE 291
#define TM_SWITCH 292
#define TM_CASE 293
#define TM_DEFAULT 294
#define TM_RETURN 295
#define TM_BREAK 296
#define TM_CONTINUE 297
#define TM_SIZEOF 298
#define TM_ASGNOP 299
#define TM_PLUS_ASGN 300
#define TM_MINUS_ASGN 301
#define TM_MUL_ASGN 302
#define TM_DIV_ASGN 303
#define TM_MOD_ASGN 304
#define TM_BAND_ASGN 305
#define TM_BOR_ASGN 306
#define TM_XOR_ASGN 307
#define TM_SHL_ASGN 308
#define TM_SHR_ASGN 309
#define TM_PLUS 310
#define TM_MINUS 311
#define TM_STAR 312
#define TM_DIV 313
#define TM_MOD 314
#define TM_GE 315
#define TM_LE 316
#define TM_GT 317
#define TM_LT 318
#define TM_EQ 319
#define TM_NE 320
#define TM_AND 321
#define TM_OR 322
#define TM_BAND 323
#define TM_BOR 324
#define TM_XOR 325
#define TM_SHR 326
#define TM_SHL 327
#define TM_NOTINT 328
#define TM_NOTBOOL 329
#define TM_INC 330
#define TM_DEC 331
#define TM_FIELDOF 332
#define TM_FIELDOFPTR 333
#define TM_COMMENT_START 334
#define TM_COMMENT_END 335
#define TM_ADD_ASGN 336
#define TM_MUL 337
#define TM_DEREF 338
#define TM_INDEX 339
#define TM_ADDRES 340
#define TM_UMINUS 341
#define TM_UPLUS 342
#define TM_THEN 343




/* Copy the first part of user declarations.  */
#line 1 "lang.y"

	// this part is copied to the beginning of the parser 
	#include <stdio.h>
	#include "lang.h"
	#include "lexer.h"
	void yyerror(char *);
	int yylex(void);
  struct root_list * root;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 11 "lang.y"
{
unsigned int n;
char * i;
struct func_expr * fe;
struct type * ty;
struct type_list * tyl;
struct var_list * vl;
struct var_dec * vd;
struct var_dec_list * vdl;
struct RAssertion * ra;
struct RA_list * ral;
struct Case * cs;
struct Case_list * csl;
struct expr * e;
struct expr_list * el;
struct Afuncdef * af;
struct ASepdef * as;
struct cmd * c;
struct simple_cmd * sc;
struct def * d;
struct enum_list * enl;
struct field_dec * fd;
struct field_dec_list * fdl;
struct root * r;
struct root_list * rl;
void * none;
}
/* Line 193 of yacc.c.  */
#line 310 "parser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 323 "parser.c"

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
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  23
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2282

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  211
/* YYNRULES -- Number of states.  */
#define YYNSTATES  463

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   343

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    15,    19,    24,
      29,    35,    41,    48,    53,    57,    62,    66,    71,    75,
      77,    80,    82,    85,    88,    92,    96,    98,   106,   109,
     113,   117,   119,   122,   126,   131,   135,   138,   142,   144,
     148,   151,   154,   156,   158,   162,   165,   167,   170,   173,
     175,   177,   179,   181,   183,   186,   189,   192,   195,   198,
     200,   205,   207,   209,   213,   215,   219,   223,   227,   231,
     235,   239,   243,   247,   251,   255,   259,   262,   265,   268,
     271,   277,   285,   295,   304,   313,   322,   330,   338,   346,
     353,   364,   374,   384,   394,   403,   412,   421,   429,   435,
     442,   449,   457,   465,   467,   470,   473,   475,   480,   484,
     488,   491,   496,   505,   512,   515,   517,   519,   523,   527,
     531,   535,   539,   543,   547,   551,   555,   559,   563,   567,
     571,   575,   579,   583,   587,   591,   596,   601,   604,   607,
     610,   613,   619,   622,   625,   627,   629,   631,   633,   636,
     641,   645,   649,   653,   656,   660,   664,   666,   668,   670,
     672,   674,   676,   678,   680,   683,   686,   689,   691,   695,
     699,   703,   707,   711,   715,   719,   723,   727,   731,   735,
     739,   743,   747,   751,   755,   759,   763,   766,   769,   772,
     775,   778,   781,   787,   789,   791,   793,   796,   802,   807,
     812,   816,   820,   824,   827,   831,   835,   837,   840,   842,
     844,   849
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      90,     0,    -1,    91,    -1,    92,    91,    -1,    92,    -1,
      93,    -1,   107,    11,    -1,   129,    94,    11,    -1,   129,
      94,   122,    11,    -1,   129,    94,     5,     6,    -1,   129,
      94,   122,     5,     6,    -1,   129,    94,     5,   105,     6,
      -1,   129,    94,   122,     5,   105,     6,    -1,    21,     4,
     101,    11,    -1,    21,     4,    11,    -1,    22,     4,   101,
      11,    -1,    22,     4,    11,    -1,    23,     4,   103,    11,
      -1,    23,     4,    11,    -1,    98,    -1,    57,    94,    -1,
      95,    -1,     4,    96,    -1,     9,    10,    -1,     9,    97,
      10,    -1,   107,    12,    97,    -1,   107,    -1,    79,    31,
       4,    99,    44,   124,    80,    -1,     9,    10,    -1,     9,
     100,    10,    -1,     4,    12,   100,    -1,     4,    -1,     5,
       6,    -1,     5,   102,     6,    -1,   129,   130,    11,   102,
      -1,   129,   130,    11,    -1,     5,     6,    -1,     5,   104,
       6,    -1,     4,    -1,     4,    12,   104,    -1,   105,   106,
      -1,   105,   120,    -1,   120,    -1,   106,    -1,     5,   105,
       6,    -1,     5,     6,    -1,    11,    -1,   107,    11,    -1,
     111,    11,    -1,   112,    -1,   116,    -1,   114,    -1,   115,
      -1,   113,    -1,    41,    11,    -1,    42,    11,    -1,   117,
      11,    -1,   129,   108,    -1,    57,   108,    -1,   109,    -1,
     109,     7,   130,     8,    -1,   110,    -1,     4,    -1,     9,
     108,    10,    -1,   130,    -1,   130,    44,   130,    -1,   130,
      45,   130,    -1,   130,    46,   130,    -1,   130,    47,   130,
      -1,   130,    48,   130,    -1,   130,    49,   130,    -1,   130,
      50,   130,    -1,   130,    51,   130,    -1,   130,    52,   130,
      -1,   130,    53,   130,    -1,   130,    54,   130,    -1,    75,
     130,    -1,    76,   130,    -1,   130,    75,    -1,   130,    76,
      -1,    32,     9,   130,    10,   106,    -1,    32,     9,   130,
      10,   106,    33,   106,    -1,    34,     9,   111,    11,   130,
      11,   111,    10,   106,    -1,    34,     9,    11,   130,    11,
     111,    10,   106,    -1,    34,     9,   111,    11,    11,   111,
      10,   106,    -1,    34,     9,   111,    11,   130,    11,    10,
     106,    -1,    34,     9,    11,    11,   111,    10,   106,    -1,
      34,     9,    11,   130,    11,    10,   106,    -1,    34,     9,
     111,    11,    11,    10,   106,    -1,    34,     9,    11,    11,
      10,   106,    -1,   121,    34,     9,   111,    11,   130,    11,
     111,    10,   106,    -1,   121,    34,     9,    11,   130,    11,
     111,    10,   106,    -1,   121,    34,     9,   111,    11,    11,
     111,    10,   106,    -1,   121,    34,     9,   111,    11,   130,
      11,    10,   106,    -1,   121,    34,     9,    11,    11,   111,
      10,   106,    -1,   121,    34,     9,    11,   130,    11,    10,
     106,    -1,   121,    34,     9,   111,    11,    11,    10,   106,
      -1,   121,    34,     9,    11,    11,    10,   106,    -1,    36,
       9,   130,    10,   106,    -1,   121,    36,     9,   130,    10,
     106,    -1,    35,   106,    36,     9,   130,    10,    -1,   121,
      35,   106,    36,     9,   130,    10,    -1,    37,     9,   130,
      10,     5,   118,     6,    -1,    40,    -1,    40,   130,    -1,
     119,   118,    -1,   119,    -1,    38,   130,    13,   105,    -1,
      39,    13,   105,    -1,    79,   124,    80,    -1,    79,    80,
      -1,    79,    28,   124,    80,    -1,    79,    24,   123,    25,
     124,    26,   124,    80,    -1,    79,    25,   124,    26,   124,
      80,    -1,     4,   123,    -1,     4,    -1,   125,    -1,   124,
      55,   124,    -1,   124,    56,   124,    -1,   124,    57,   124,
      -1,   124,    58,   124,    -1,   124,    59,   124,    -1,   124,
      63,   124,    -1,   124,    62,   124,    -1,   124,    60,   124,
      -1,   124,    61,   124,    -1,   124,    64,   124,    -1,   124,
      65,   124,    -1,   124,    66,   124,    -1,   124,    67,   124,
      -1,   124,    68,   124,    -1,   124,    69,   124,    -1,   124,
      70,   124,    -1,   124,    72,   124,    -1,   124,    71,   124,
      -1,    29,     4,    12,   124,    -1,    30,     4,    12,   124,
      -1,    56,   125,    -1,    55,   125,    -1,    74,   125,    -1,
      73,   125,    -1,     9,   129,   135,    10,   125,    -1,    57,
     125,    -1,    68,   125,    -1,   126,    -1,     3,    -1,    27,
      -1,     4,    -1,     4,   127,    -1,   126,     7,   124,     8,
      -1,   126,    77,     4,    -1,   126,    78,     4,    -1,     9,
     124,    10,    -1,     9,    10,    -1,     9,   128,    10,    -1,
     124,    12,   128,    -1,   124,    -1,    14,    -1,    15,    -1,
      16,    -1,    17,    -1,    18,    -1,    19,    -1,    20,    -1,
      21,     4,    -1,    22,     4,    -1,    23,     4,    -1,   131,
      -1,   130,    55,   130,    -1,   130,    56,   130,    -1,   130,
      57,   130,    -1,   130,    58,   130,    -1,   130,    59,   130,
      -1,   130,    63,   130,    -1,   130,    62,   130,    -1,   130,
      61,   130,    -1,   130,    60,   130,    -1,   130,    64,   130,
      -1,   130,    65,   130,    -1,   130,    66,   130,    -1,   130,
      67,   130,    -1,   130,    68,   130,    -1,   130,    69,   130,
      -1,   130,    70,   130,    -1,   130,    72,   130,    -1,   130,
      71,   130,    -1,    74,   131,    -1,    73,   131,    -1,    56,
     131,    -1,    55,   131,    -1,    57,   131,    -1,    68,   131,
      -1,     9,   129,   135,    10,   131,    -1,   132,    -1,     3,
      -1,     4,    -1,     4,   133,    -1,    43,     9,   129,   135,
      10,    -1,    43,     9,   129,    10,    -1,   132,     7,   130,
       8,    -1,   132,    77,     4,    -1,   132,    78,     4,    -1,
       9,   130,    10,    -1,     9,    10,    -1,     9,   134,    10,
      -1,   130,    12,   134,    -1,   130,    -1,    57,   135,    -1,
      57,    -1,   136,    -1,   136,     7,   130,     8,    -1,     7,
     130,     8,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   147,   147,   155,   159,   166,   170,   177,   181,   185,
     189,   193,   197,   201,   205,   209,   213,   217,   221,   225,
     232,   236,   243,   288,   292,   299,   303,   312,   319,   323,
     330,   334,   353,   357,   364,   368,   375,   379,   386,   390,
     404,   408,   412,   416,   423,   427,   431,   435,   439,   443,
     447,   451,   455,   459,   463,   467,   471,   478,   485,   489,
     496,   500,   507,   511,   519,   523,   527,   531,   535,   539,
     543,   547,   551,   555,   559,   563,   567,   571,   575,   579,
     586,   590,   597,   601,   605,   609,   613,   617,   621,   625,
     629,   633,   637,   641,   645,   649,   653,   657,   664,   668,
     675,   679,   686,   693,   697,   704,   708,   715,   719,   733,
     737,   744,   751,   755,   762,   766,   781,   785,   789,   793,
     797,   801,   805,   809,   813,   817,   821,   825,   829,   833,
     837,   841,   845,   849,   853,   857,   861,   868,   872,   876,
     880,   884,   888,   892,   896,   903,   907,   911,   915,   919,
     923,   927,   931,   939,   943,   950,   954,   964,   968,   972,
     976,   980,   984,   988,   992,   996,  1000,  1008,  1012,  1016,
    1020,  1024,  1028,  1032,  1036,  1040,  1044,  1048,  1052,  1056,
    1060,  1064,  1068,  1072,  1076,  1080,  1087,  1091,  1095,  1099,
    1103,  1107,  1111,  1115,  1122,  1126,  1130,  1134,  1138,  1142,
    1146,  1150,  1154,  1161,  1165,  1172,  1176,  1183,  1187,  1191,
    1198,  1202
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TM_NAT", "TM_IDENT", "TM_LEFT_BRACE",
  "TM_RIGHT_BRACE", "TM_LEFT_BRACK", "TM_RIGHT_BRACK", "TM_LEFT_PAREN",
  "TM_RIGHT_PAREN", "TM_SEMICOL", "TM_COMMA", "TM_CONOL", "TM_VOID",
  "TM_CHAR", "TM_U8", "TM_INT", "TM_INT64", "TM_UINT", "TM_UINT64",
  "TM_STRUCT", "TM_UNION", "TM_ENUM", "TM_WITH", "TM_REQUIRE", "TM_ENSURE",
  "TM___RETURN", "TM_INV", "TM_FORALL", "TM_EXISTS", "TM_LET", "TM_IF",
  "TM_ELSE", "TM_FOR", "TM_DO", "TM_WHILE", "TM_SWITCH", "TM_CASE",
  "TM_DEFAULT", "TM_RETURN", "TM_BREAK", "TM_CONTINUE", "TM_SIZEOF",
  "TM_ASGNOP", "TM_PLUS_ASGN", "TM_MINUS_ASGN", "TM_MUL_ASGN",
  "TM_DIV_ASGN", "TM_MOD_ASGN", "TM_BAND_ASGN", "TM_BOR_ASGN",
  "TM_XOR_ASGN", "TM_SHL_ASGN", "TM_SHR_ASGN", "TM_PLUS", "TM_MINUS",
  "TM_STAR", "TM_DIV", "TM_MOD", "TM_GE", "TM_LE", "TM_GT", "TM_LT",
  "TM_EQ", "TM_NE", "TM_AND", "TM_OR", "TM_BAND", "TM_BOR", "TM_XOR",
  "TM_SHR", "TM_SHL", "TM_NOTINT", "TM_NOTBOOL", "TM_INC", "TM_DEC",
  "TM_FIELDOF", "TM_FIELDOFPTR", "TM_COMMENT_START", "TM_COMMENT_END",
  "TM_ADD_ASGN", "TM_MUL", "TM_DEREF", "TM_INDEX", "TM_ADDRES",
  "TM_UMINUS", "TM_UPLUS", "TM_THEN", "$accept", "NT_WHOLE",
  "NT_ROOT_LIST", "NT_ROOT", "NT_DEF", "NT_FUNCDECDEF_EXPR",
  "NT_FUNCDECDEF_EXPR_N", "NT_FUNC_DEF", "NT_TYPE_EXPR_LIST",
  "NT_LET_COMMENT", "NT_VAR_LIST", "NT_ID_COMMA_VAR", "NT_FIELD_DEC_LIST",
  "NT_FDL_SEMICOL", "NT_ENUM_LIST", "NT_ID_COMMA_ENUM", "NT_CMD",
  "NT_LAST_CMD", "NT_VARDECL", "NT_EXPR_VD", "NT_EXPR_VD_A",
  "NT_EXPR_VD_B", "NT_SIMPLE_CMD", "NT_IF_CMD", "NT_FOR_CMD",
  "NT_WHILE_CMD", "NT_DOWHILE_CMD", "NT_SWITCH_CMD", "NT_RETURN_CMD",
  "NT_CASE_LIST", "NT_CASE_TYPE", "NT_COMMENT", "NT_INV_COMMENT",
  "NT_WITH_COMMENT", "NT_WITH_VAR_LIST", "NT_RA_EXPR", "NT_UNOP_RA_EXPR",
  "NT_RA_EXPR_F", "NT_RA_FUNC_CALL", "NT_RA_LIST", "NT_TYPE", "NT_EXPR",
  "NT_UNOP_EXPR", "NT_EXPR_F", "NT_FUNC_CALL", "NT_EXPR_LIST", "NT_PTR",
  "NT_PTR_A", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    91,    91,    92,    92,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      94,    94,    95,    96,    96,    97,    97,    98,    99,    99,
     100,   100,   101,   101,   102,   102,   103,   103,   104,   104,
     105,   105,   105,   105,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   107,   108,   108,
     109,   109,   110,   110,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     112,   112,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   114,   114,
     115,   115,   116,   117,   117,   118,   118,   119,   119,   120,
     120,   121,   122,   122,   123,   123,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   125,   125,   125,
     125,   125,   125,   125,   125,   126,   126,   126,   126,   126,
     126,   126,   126,   127,   127,   128,   128,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   131,   131,   131,   131,
     131,   131,   131,   131,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   133,   133,   134,   134,   135,   135,   135,
     136,   136
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     3,     4,     4,
       5,     5,     6,     4,     3,     4,     3,     4,     3,     1,
       2,     1,     2,     2,     3,     3,     1,     7,     2,     3,
       3,     1,     2,     3,     4,     3,     2,     3,     1,     3,
       2,     2,     1,     1,     3,     2,     1,     2,     2,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     1,
       4,     1,     1,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       5,     7,     9,     8,     8,     8,     7,     7,     7,     6,
      10,     9,     9,     9,     8,     8,     8,     7,     5,     6,
       6,     7,     7,     1,     2,     2,     1,     4,     3,     3,
       2,     4,     8,     6,     2,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     4,     2,     2,     2,
       2,     5,     2,     2,     1,     1,     1,     1,     2,     4,
       3,     3,     3,     2,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     5,     1,     1,     1,     2,     5,     4,     4,
       3,     3,     3,     2,     3,     3,     1,     2,     1,     1,
       4,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   157,   158,   159,   160,   161,   162,   163,     0,     0,
       0,     0,     0,     2,     4,     5,    19,     0,     0,   164,
     165,   166,     0,     1,     3,     6,    62,     0,     0,     0,
      21,    57,    59,    61,     0,    14,     0,    16,     0,     0,
      18,     0,     0,     0,    22,    62,     0,     0,    20,    58,
       0,     7,     0,     0,     0,    32,     0,     0,     0,     0,
       0,    13,    15,    38,    36,     0,    17,     0,     0,    23,
       0,    26,     0,    63,   194,   195,     0,     9,     0,    46,
       0,     0,     0,     0,     0,   103,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    43,
       0,     0,    49,    53,    51,    52,    50,     0,    42,     0,
      64,   167,   193,     0,     0,     0,     8,     0,   164,   165,
     166,    33,     0,     0,    37,    31,    28,     0,     0,    24,
       0,     0,   196,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   104,    54,    55,     0,   189,   188,   190,
     191,   187,   186,    76,    77,   145,   147,     0,   146,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   110,     0,
     116,   144,    11,    40,    41,    47,    48,    56,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,     0,     0,     0,   115,     0,     0,    10,     0,
      60,    35,    39,     0,    29,     0,    25,   203,   206,     0,
      44,     0,   208,     0,   209,   202,     0,     0,     0,     0,
       0,     0,     0,     0,   148,     0,     0,     0,     0,     0,
     138,   137,   142,   143,   140,   139,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   109,     0,     0,     0,     0,     0,
       0,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,   168,   169,   170,   171,   172,   176,   175,   174,
     173,   177,   178,   179,   180,   181,   182,   183,   185,   184,
       0,   200,   201,   114,     0,     0,    12,    34,    30,    27,
       0,   204,     0,   207,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   198,     0,   153,   156,     0,   152,     0,
     111,     0,     0,   117,   118,   119,   120,   121,   124,   125,
     123,   122,   126,   127,   128,   129,   130,   131,   132,   134,
     133,     0,   150,   151,     0,     0,     0,     0,   199,     0,
       0,   205,   211,   192,     0,    80,     0,     0,     0,     0,
       0,     0,    98,     0,   197,     0,   154,     0,   135,   136,
     149,     0,     0,     0,     0,     0,     0,   113,   210,     0,
      89,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,   106,   155,   141,     0,     0,     0,     0,     0,     0,
      99,     0,    81,    86,    87,     0,    88,     0,     0,     0,
       0,     0,   102,   105,    97,     0,     0,     0,     0,     0,
       0,   101,   112,    83,    84,    85,     0,     0,   108,    94,
      95,     0,    96,     0,     0,     0,    82,   107,    91,    92,
      93,     0,    90
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    12,    13,    14,    15,    29,    30,    44,    70,    16,
      68,   127,    36,    59,    41,    65,    98,    99,   100,    31,
      32,    33,   101,   102,   103,   104,   105,   106,   107,   410,
     411,   108,   109,    53,   216,   336,   170,   171,   244,   337,
      72,   110,   111,   112,   132,   229,   233,   234
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -166
static const yytype_int16 yypact[] =
{
     203,  -166,  -166,  -166,  -166,  -166,  -166,  -166,    16,    47,
      50,    41,    78,  -166,   203,  -166,  -166,    65,    14,    19,
      21,    31,    79,  -166,  -166,  -166,    85,    53,    14,    23,
    -166,  -166,    81,  -166,   371,  -166,    90,  -166,   107,    64,
    -166,   110,   114,   789,  -166,  -166,    53,    86,  -166,  -166,
     433,  -166,    87,    39,   437,  -166,   120,   130,   132,   136,
     437,  -166,  -166,   131,  -166,   142,  -166,    49,   122,  -166,
     158,   155,    53,  -166,  -166,   162,   514,  -166,  1216,  -166,
     164,   165,   899,   168,   169,   437,   173,   219,   170,   437,
     437,   437,   437,   437,   437,   437,   437,    18,   591,  -166,
     220,   221,  -166,  -166,  -166,  -166,  -166,   222,  -166,   104,
    2092,  -166,    26,   176,  1249,   668,  -166,  1369,  -166,  -166,
    -166,  -166,  1785,   179,  -166,   225,  -166,   229,  1249,  -166,
     775,  1271,  -166,  -166,   745,    12,  1506,   437,    52,   214,
     207,   437,   437,  1938,  -166,  -166,   775,  -166,  -166,  -166,
    -166,  -166,  -166,  1938,  1938,  -166,   241,  1194,  -166,  1249,
     247,   248,   518,   518,   518,   518,   518,   518,  -166,  1442,
    -166,    28,  -166,  -166,  -166,  -166,  -166,  -166,   244,   899,
     246,   437,   437,   437,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   437,   437,
    -166,  -166,   437,   263,   264,   176,   245,  2045,  -166,   822,
    -166,   775,  -166,   265,  -166,  1723,  -166,  -166,  1962,   266,
    -166,   437,    12,   267,   268,  -166,  1569,  1291,   269,   270,
    1587,  1605,    33,   896,  -166,  1668,    12,  2114,   262,   271,
    -166,  -166,  -166,  -166,  -166,  -166,  1249,  1249,  1249,  1249,
    1249,  1249,  1249,  1249,  1249,  1249,  1249,  1249,  1249,  1249,
    1249,  1249,  1249,  1249,  -166,  1249,   277,   287,    76,   256,
     437,  1938,  1938,  1938,  1938,  1938,  1938,  1938,  1938,  1938,
    1938,  1938,   101,   101,  -166,  -166,  -166,    58,    58,    58,
      58,   201,   201,  1629,  1530,   580,  1825,  2019,   231,   231,
    1387,  -166,  -166,  -166,  1249,  1249,  -166,  -166,  -166,  -166,
     437,  -166,  1405,  -166,   437,   437,   899,   172,  1803,  1326,
     437,   899,   295,  -166,   291,  -166,  1980,   292,  -166,   296,
    -166,  1249,  1249,   105,   105,  -166,  -166,  -166,    98,    98,
      98,    98,   505,   505,  1647,  1548,   657,  1843,  2210,   240,
     240,  1470,  -166,  -166,  1329,   294,   298,  1686,  -166,  2063,
    2140,  -166,  -166,  -166,  1488,   275,   899,   299,   327,  1011,
    1865,  1704,  -166,     0,  -166,  1249,  -166,   518,  2192,  2192,
    -166,  1020,  1883,  1349,   437,   899,  1249,  -166,  -166,   899,
    -166,   899,   899,   300,   899,   301,  1055,  -166,   437,   302,
     306,     0,  -166,  -166,   899,   308,  1096,  1105,  1901,  1767,
    -166,  2166,  -166,  -166,  -166,   899,  -166,   899,   899,   311,
    1998,   976,  -166,  -166,  -166,   899,   899,   313,   899,   315,
    1131,  -166,  -166,  -166,  -166,  -166,   899,   976,   976,  -166,
    -166,   899,  -166,   899,   899,   316,  -166,   976,  -166,  -166,
    -166,   899,  -166
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -166,  -166,   314,  -166,  -166,   307,  -166,  -166,   208,  -166,
    -166,   116,   320,   121,  -166,   218,   -74,   -82,    17,    38,
    -166,  -166,  -113,  -166,  -166,  -166,  -166,  -166,  -166,   -67,
    -166,   -97,  -166,  -166,   133,   157,  -153,  -166,  -166,   -38,
      15,     4,   -86,  -166,  -166,    29,  -165,  -166
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     140,   174,   134,   147,   148,   149,   150,   151,   152,   250,
     251,   252,   253,   254,   255,    18,   173,    17,    26,   231,
      19,   155,   156,    27,    34,   238,    34,   157,    50,    18,
      35,    17,    37,   212,    51,   275,    39,   174,   408,   409,
     231,   219,    40,   333,   115,   158,   159,   160,   161,    60,
     116,    20,   173,   125,    21,    74,    75,    45,   117,   126,
      71,    78,    27,   237,   122,    47,    49,   323,    63,   232,
      64,    28,    22,   162,   163,   164,    25,   334,    23,    74,
      75,   339,   136,    42,    49,    78,   165,   364,    54,   143,
     232,   166,   167,   135,    43,    88,    73,   279,   168,   153,
     154,    61,    52,   213,   214,   276,   277,    89,    90,    91,
      46,   113,   114,   192,   193,   194,   195,   196,    62,    88,
      92,    66,   174,    67,   118,    93,    94,    95,    96,   208,
     209,    89,    90,    91,   119,   228,   120,   173,   178,   179,
     180,   236,   121,   123,    92,   240,   241,    71,   124,    93,
      94,    95,    96,   256,   257,   258,   259,   260,   194,   195,
     196,   242,   258,   259,   260,   365,   128,   130,   129,   272,
     273,   131,   246,   137,   138,    74,    75,   141,   142,   146,
     215,    78,   376,    63,   144,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   377,    88,   310,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    89,    90,    91,
     145,   175,   176,   177,   413,   322,    60,   223,   373,   224,
      92,   328,   159,   239,   375,    93,    94,    95,    96,   382,
     243,   248,   249,   278,   169,   280,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   403,   405,   311,   312,   125,
     314,   217,   208,   209,   341,   325,   321,   324,   415,   330,
     329,   362,    11,   342,   367,   225,   192,   193,   194,   195,
     196,   363,   366,   429,   400,   256,   257,   258,   259,   260,
     383,   384,   386,   437,   439,   393,   387,   394,   399,   401,
     425,   427,   432,   420,   245,   431,   247,   422,   435,   423,
     424,   446,   426,   451,   228,   453,   461,   455,    24,   374,
      74,    75,   434,   380,   381,    48,    78,   402,   226,   318,
      38,   222,   317,   443,   433,   444,   445,   412,   313,   371,
       0,   174,     0,   449,   450,     0,   452,   448,     0,     0,
     174,     0,     0,     0,   456,     0,   173,     0,   392,   458,
      88,   459,   460,   457,     0,   173,     0,    55,     0,   462,
       0,     0,    89,    90,    91,     1,     2,     3,     4,     5,
       6,     7,    56,    57,    58,    92,     0,   418,   419,     0,
      93,    94,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,   430,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,     0,   361,     0,     0,     0,    74,    75,    76,    77,
      74,    75,    78,     0,    79,     0,    78,     1,     2,     3,
       4,     5,     6,     7,    56,    57,    58,     0,     0,     0,
       0,     0,     0,     0,     0,    80,     0,    81,    82,    83,
      84,   369,   370,    85,    86,    87,    88,     0,     0,     0,
      88,     0,     0,     0,     0,     0,     0,     0,    89,    90,
      91,     0,    89,    90,    91,     0,     0,     0,   388,   389,
       0,    92,     0,     0,     0,    92,    93,    94,    95,    96,
      93,    94,    97,     0,     0,     0,     0,    74,    75,    76,
     133,   155,   156,    78,     0,    79,     0,   157,     1,     2,
       3,     4,     5,     6,     7,    56,    57,    58,     0,     0,
       0,     0,     0,     0,     0,   158,    80,     0,    81,    82,
      83,    84,     0,   421,    85,    86,    87,    88,     0,     0,
     256,   257,   258,   259,   260,   261,   262,   263,   264,    89,
      90,    91,     0,   162,   163,   164,   272,   273,     0,     0,
       0,     0,    92,     0,     0,     0,   165,    93,    94,    95,
      96,   166,   167,    97,    74,    75,    76,   172,     0,     0,
      78,     0,    79,     0,     0,     1,     2,     3,     4,     5,
       6,     7,    56,    57,    58,     0,     0,     0,     0,     0,
       0,     0,     0,    80,     0,    81,    82,    83,    84,     0,
       0,    85,    86,    87,    88,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,    89,    90,    91,     0,
       0,   208,   209,     0,     0,     0,     0,     0,     0,    92,
       0,     0,     0,     0,    93,    94,    95,    96,     0,     0,
      97,    74,    75,    76,   218,     0,     0,    78,     0,    79,
       0,     0,     1,     2,     3,     4,     5,     6,     7,    56,
      57,    58,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,    81,    82,    83,    84,     0,     0,    85,    86,
      87,    88,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,    89,    90,    91,     0,     0,   272,   273,
       0,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,    93,    94,    95,    96,     0,     0,    97,    74,    75,
      76,   230,     0,     0,    78,     0,    79,     0,     0,     1,
       2,     3,     4,     5,     6,     7,    56,    57,    58,     0,
       0,     0,     0,     0,     0,     0,     0,    80,     0,    81,
      82,    83,    84,     0,     0,    85,    86,    87,    88,     1,
       2,     3,     4,     5,     6,     7,    56,    57,    58,    69,
      89,    90,    91,     1,     2,     3,     4,     5,     6,     7,
      56,    57,    58,    92,     0,     0,     0,     0,    93,    94,
      95,    96,     0,     0,    97,    74,    75,    76,   316,     0,
       0,    78,     0,    79,     0,     0,     1,     2,     3,     4,
       5,     6,     7,    56,    57,    58,     0,     0,     0,     0,
       0,     0,     0,     0,    80,     0,    81,    82,    83,    84,
       0,     0,    85,    86,    87,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,    93,    94,    95,    96,   155,
     156,    97,    74,    75,    76,   157,   335,     0,    78,     0,
      79,     0,     0,     1,     2,     3,     4,     5,     6,     7,
      56,    57,    58,   158,     0,   160,   161,     0,     0,     0,
       0,    80,     0,    81,    82,    83,    84,     0,     0,    85,
      86,    87,    88,     0,     0,     0,     0,     0,     0,     0,
       0,   162,   163,   164,    89,    90,    91,     0,     0,     0,
       0,     0,     0,     0,   165,     0,     0,    92,     0,   166,
     167,     0,    93,    94,    95,    96,     0,     0,   139,    74,
      75,    76,     0,     0,     0,    78,     0,    79,     0,     0,
       1,     2,     3,     4,     5,     6,     7,    56,    57,    58,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
      81,    82,    83,    84,    74,    75,    85,    86,    87,    88,
      78,   404,     0,    74,    75,     0,     0,     0,     0,    78,
     414,    89,    90,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,    93,
      94,    95,    96,     0,    88,    97,     0,     0,    74,    75,
       0,     0,     0,    88,    78,   428,    89,    90,    91,     0,
       0,     0,     0,     0,     0,    89,    90,    91,     0,    92,
       0,     0,     0,     0,    93,    94,    95,    96,    92,     0,
       0,     0,     0,    93,    94,    95,    96,     0,    88,    74,
      75,     0,     0,     0,     0,    78,   436,     0,    74,    75,
      89,    90,    91,     0,    78,   438,     0,     0,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,    93,    94,
      95,    96,     0,     0,    74,    75,     0,     0,     0,    88,
      78,   454,     0,     0,     0,     0,     0,     0,    88,     0,
       0,    89,    90,    91,     0,     0,     0,     0,     0,     0,
      89,    90,    91,     0,    92,     0,     0,     0,     0,    93,
      94,    95,    96,    92,    88,     0,     0,     0,    93,    94,
      95,    96,     0,     0,     0,     0,    89,    90,    91,     0,
       0,     0,     0,     0,     0,     0,     0,   155,   156,    92,
       0,     0,     0,   157,    93,    94,    95,    96,     1,     2,
       3,     4,     5,     6,     7,    56,    57,    58,     0,    74,
      75,   158,     0,   160,   161,    78,     0,     0,     0,     0,
       1,     2,     3,     4,     5,     6,     7,    56,    57,    58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   162,
     163,   164,   155,   156,     0,     0,     0,     0,   157,    88,
       0,     0,   165,     0,     0,     0,     0,   166,   167,     0,
       0,    89,    90,    91,    74,    75,   158,     0,   160,   161,
      78,   227,     0,     0,    92,     0,     0,     0,     0,    93,
      94,     0,     0,     0,    74,    75,     0,     0,     0,     0,
      78,     0,   327,     0,   162,   163,   164,     0,     0,     0,
       0,     0,     0,     0,    88,     0,     0,   165,     0,     0,
       0,     0,   166,   167,     0,     0,    89,    90,    91,    74,
      75,     0,    74,    75,    88,    78,     0,   379,    78,    92,
     391,     0,     0,     0,    93,    94,    89,    90,    91,     0,
       0,     0,    74,    75,     0,     0,     0,     0,    78,    92,
     417,     0,     0,     0,    93,    94,     0,     0,     0,    88,
       0,     0,    88,     0,     0,     0,     0,   220,     0,     0,
       0,    89,    90,    91,    89,    90,    91,     0,     0,     0,
       0,     0,    88,     0,    92,   368,     0,    92,     0,    93,
      94,     0,    93,    94,    89,    90,    91,     0,     0,     0,
       0,     0,     0,   372,     0,     0,     0,    92,     0,     0,
       0,     0,    93,    94,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   390,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   398,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,     0,   235,     0,     0,     0,
       0,     0,   274,     0,     0,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   326,
       0,     0,     0,     0,     0,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   331,   205,   206,
     207,   208,   209,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   332,   269,   270,   271,   272,
     273,     0,     0,     0,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   338,     0,
       0,     0,     0,     0,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,     0,   395,   205,   206,   207,
     208,   209,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,     0,   407,   269,   270,   271,   272,   273,
       0,     0,     0,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   441,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   221,     0,     0,     0,
       0,     0,     0,   319,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   378,     0,     0,     0,     0,     0,
       0,     0,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   406,     0,     0,     0,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,     0,     0,   205,   416,   207,   208,   209,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,     0,
       0,   269,   440,   271,   272,   273,     0,     0,     0,     0,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   320,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   385,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   447,     0,     0,     0,     0,     0,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   315,     0,     0,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,     0,     0,   205,     0,   396,
     208,   209,     0,     0,     0,     0,     0,     0,     0,     0,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,     0,     0,   210,   211,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,     0,     0,     0,
       0,     0,     0,     0,   340,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,     0,     0,     0,     0,     0,     0,     0,
     397,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,     0,
       0,     0,     0,     0,     0,     0,   442,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,     0,     0,   269,     0,
       0,   272,   273
};

static const yytype_int16 yycheck[] =
{
      82,    98,    76,    89,    90,    91,    92,    93,    94,   162,
     163,   164,   165,   166,   167,     0,    98,     0,     4,     7,
       4,     3,     4,     9,     5,   138,     5,     9,     5,    14,
      11,    14,    11,     7,    11,     7,     5,   134,    38,    39,
       7,   115,    11,    10,     5,    27,    28,    29,    30,    34,
      11,     4,   134,     4,     4,     3,     4,     4,    54,    10,
      43,     9,     9,    11,    60,    27,    28,   232,     4,    57,
       6,    57,    31,    55,    56,    57,    11,   242,     0,     3,
       4,   246,    78,     4,    46,     9,    68,    11,     7,    85,
      57,    73,    74,    78,     9,    43,    10,   179,    80,    95,
      96,    11,    79,    77,    78,    77,    78,    55,    56,    57,
      57,    24,    25,    55,    56,    57,    58,    59,    11,    43,
      68,    11,   219,     9,     4,    73,    74,    75,    76,    71,
      72,    55,    56,    57,     4,   131,     4,   219,    34,    35,
      36,   137,     6,    12,    68,   141,   142,   130,     6,    73,
      74,    75,    76,    55,    56,    57,    58,    59,    57,    58,
      59,   146,    57,    58,    59,   278,    44,    12,    10,    71,
      72,     9,   157,     9,     9,     3,     4,     9,     9,     9,
       4,     9,    10,     4,    11,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   327,    43,   212,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    55,    56,    57,
      11,    11,    11,    11,   387,   231,   221,    12,   324,    10,
      68,   237,    28,    36,   326,    73,    74,    75,    76,   331,
       9,     4,     4,     9,    97,     9,    55,    56,    57,    58,
      59,    60,    61,    62,    63,   378,   379,     4,     4,     4,
      25,   114,    71,    72,    12,     7,    10,    10,   391,     9,
      11,     4,    79,    12,   280,   128,    55,    56,    57,    58,
      59,     4,    36,   406,   376,    55,    56,    57,    58,    59,
       5,    10,    10,   416,   417,    11,    10,     9,    33,    10,
      10,    10,     6,   395,   157,    13,   159,   399,    10,   401,
     402,    10,   404,    10,   320,    10,    10,   440,    14,   325,
       3,     4,   414,   329,   330,    28,     9,    10,   130,   223,
      20,   123,   221,   425,   411,   427,   428,   385,   215,   320,
      -1,   448,    -1,   435,   436,    -1,   438,   431,    -1,    -1,
     457,    -1,    -1,    -1,   446,    -1,   448,    -1,   364,   451,
      43,   453,   454,   447,    -1,   457,    -1,     6,    -1,   461,
      -1,    -1,    55,    56,    57,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    68,    -1,   393,   394,    -1,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   408,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,    -1,   275,    -1,    -1,    -1,     3,     4,     5,     6,
       3,     4,     9,    -1,    11,    -1,     9,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    35,    36,
      37,   314,   315,    40,    41,    42,    43,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    -1,    55,    56,    57,    -1,    -1,    -1,   341,   342,
      -1,    68,    -1,    -1,    -1,    68,    73,    74,    75,    76,
      73,    74,    79,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     3,     4,     9,    -1,    11,    -1,     9,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    32,    -1,    34,    35,
      36,    37,    -1,   396,    40,    41,    42,    43,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    55,
      56,    57,    -1,    55,    56,    57,    71,    72,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    68,    73,    74,    75,
      76,    73,    74,    79,     3,     4,     5,     6,    -1,    -1,
       9,    -1,    11,    -1,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    34,    35,    36,    37,    -1,
      -1,    40,    41,    42,    43,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    55,    56,    57,    -1,
      -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    -1,    -1,
      79,     3,     4,     5,     6,    -1,    -1,     9,    -1,    11,
      -1,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    34,    35,    36,    37,    -1,    -1,    40,    41,
      42,    43,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    55,    56,    57,    -1,    -1,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    -1,    -1,    79,     3,     4,
       5,     6,    -1,    -1,     9,    -1,    11,    -1,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,
      35,    36,    37,    -1,    -1,    40,    41,    42,    43,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    10,
      55,    56,    57,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    68,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    -1,    -1,    79,     3,     4,     5,     6,    -1,
      -1,     9,    -1,    11,    -1,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    34,    35,    36,    37,
      -1,    -1,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    73,    74,    75,    76,     3,
       4,    79,     3,     4,     5,     9,    10,    -1,     9,    -1,
      11,    -1,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    27,    -1,    29,    30,    -1,    -1,    -1,
      -1,    32,    -1,    34,    35,    36,    37,    -1,    -1,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    68,    -1,    73,
      74,    -1,    73,    74,    75,    76,    -1,    -1,    79,     3,
       4,     5,    -1,    -1,    -1,     9,    -1,    11,    -1,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      34,    35,    36,    37,     3,     4,    40,    41,    42,    43,
       9,    10,    -1,     3,     4,    -1,    -1,    -1,    -1,     9,
      10,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    -1,    43,    79,    -1,    -1,     3,     4,
      -1,    -1,    -1,    43,     9,    10,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,    68,
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    68,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    -1,    43,     3,
       4,    -1,    -1,    -1,    -1,     9,    10,    -1,     3,     4,
      55,    56,    57,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    -1,    -1,     3,     4,    -1,    -1,    -1,    43,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    -1,    68,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    68,    43,    -1,    -1,    -1,    73,    74,
      75,    76,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    68,
      -1,    -1,    -1,     9,    73,    74,    75,    76,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,     3,
       4,    27,    -1,    29,    30,     9,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,     3,     4,    -1,    -1,    -1,    -1,     9,    43,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,    -1,
      -1,    55,    56,    57,     3,     4,    27,    -1,    29,    30,
       9,    10,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,
      74,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,    -1,
       9,    -1,    11,    -1,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    73,    74,    -1,    -1,    55,    56,    57,     3,
       4,    -1,     3,     4,    43,     9,    -1,    11,     9,    68,
      11,    -1,    -1,    -1,    73,    74,    55,    56,    57,    -1,
      -1,    -1,     3,     4,    -1,    -1,    -1,    -1,     9,    68,
      11,    -1,    -1,    -1,    73,    74,    -1,    -1,    -1,    43,
      -1,    -1,    43,    -1,    -1,    -1,    -1,     8,    -1,    -1,
      -1,    55,    56,    57,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    68,     8,    -1,    68,    -1,    73,
      74,    -1,    73,    74,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,     8,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    73,    74,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     8,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    10,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    10,    68,    69,
      70,    71,    72,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    10,    68,    69,    70,    71,
      72,    -1,    -1,    -1,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    10,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    10,    68,    69,    70,
      71,    72,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    10,    68,    69,    70,    71,    72,
      -1,    -1,    -1,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    10,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    11,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    68,    11,    70,    71,    72,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    68,    11,    70,    71,    72,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    13,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    26,    -1,    -1,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    68,    -1,    26,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    -1,    -1,    75,    76,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    68,    -1,
      -1,    71,    72
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    79,    90,    91,    92,    93,    98,   107,   129,     4,
       4,     4,    31,     0,    91,    11,     4,     9,    57,    94,
      95,   108,   109,   110,     5,    11,   101,    11,   101,     5,
      11,   103,     4,     9,    96,     4,    57,   108,    94,   108,
       5,    11,    79,   122,     7,     6,    21,    22,    23,   102,
     129,    11,    11,     4,     6,   104,    11,     9,    99,    10,
      97,   107,   129,    10,     3,     4,     5,     6,     9,    11,
      32,    34,    35,    36,    37,    40,    41,    42,    43,    55,
      56,    57,    68,    73,    74,    75,    76,    79,   105,   106,
     107,   111,   112,   113,   114,   115,   116,   117,   120,   121,
     130,   131,   132,    24,    25,     5,    11,   130,     4,     4,
       4,     6,   130,    12,     6,     4,    10,   100,    44,    10,
      12,     9,   133,     6,   105,   129,   130,     9,     9,    79,
     106,     9,     9,   130,    11,    11,     9,   131,   131,   131,
     131,   131,   131,   130,   130,     3,     4,     9,    27,    28,
      29,    30,    55,    56,    57,    68,    73,    74,    80,   124,
     125,   126,     6,   106,   120,    11,    11,    11,    34,    35,
      36,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      75,    76,     7,    77,    78,     4,   123,   124,     6,   105,
       8,    11,   104,    12,    10,   124,    97,    10,   130,   134,
       6,     7,    57,   135,   136,    10,   130,    11,   111,    36,
     130,   130,   129,     9,   127,   124,   129,   124,     4,     4,
     125,   125,   125,   125,   125,   125,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    80,     7,    77,    78,     9,   106,
       9,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,     4,     4,   123,    25,    26,     6,   102,   100,    80,
      12,    10,   130,   135,    10,     7,    10,    11,   130,    11,
       9,    10,    10,    10,   135,    10,   124,   128,    10,   135,
      80,    12,    12,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,     4,     4,    11,   111,    36,   130,     8,   124,
     124,   134,     8,   131,   130,   106,    10,   111,    11,    11,
     130,   130,   106,     5,    10,    12,    10,    10,   124,   124,
       8,    11,   130,    11,     9,    10,    26,    80,     8,    33,
     106,    10,    10,   111,    10,   111,    11,    10,    38,    39,
     118,   119,   128,   125,    10,   111,    11,    11,   130,   130,
     106,   124,   106,   106,   106,    10,   106,    10,    10,   111,
     130,    13,     6,   118,   106,    10,    10,   111,    10,   111,
      11,    10,    80,   106,   106,   106,    10,    13,   105,   106,
     106,    10,   106,    10,    10,   111,   106,   105,   106,   106,
     106,    10,   106
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
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
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
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



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



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


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


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

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

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 148 "lang.y"
    {
    (yyval.rl) = ((yyvsp[(1) - (1)].rl));
    root = (yyval.rl);
  ;}
    break;

  case 3:
#line 156 "lang.y"
    {
    (yyval.rl) = (RTLCons((yyvsp[(1) - (2)].r),(yyvsp[(2) - (2)].rl)));
  ;}
    break;

  case 4:
#line 160 "lang.y"
    {
    (yyval.rl) = (RTLCons((yyvsp[(1) - (1)].r),NULL));
  ;}
    break;

  case 5:
#line 167 "lang.y"
    {
    (yyval.r) = (TDefroot((yyvsp[(1) - (1)].d)));
  ;}
    break;

  case 6:
#line 171 "lang.y"
    {
    (yyval.r) = (TVarroot((yyvsp[(1) - (2)].vd)));
  ;}
    break;

  case 7:
#line 178 "lang.y"
    {
    (yyval.d) = (TFuncdec(TTypeFuncExpr_Type((yyvsp[(1) - (3)].ty),(yyvsp[(2) - (3)].fe)),TFuncExpr_Char((yyvsp[(2) - (3)].fe)),TFuncExpr_VardecList((yyvsp[(2) - (3)].fe)),NULL));
  ;}
    break;

  case 8:
#line 182 "lang.y"
    {
    (yyval.d) = (TFuncdec(TTypeFuncExpr_Type((yyvsp[(1) - (4)].ty),(yyvsp[(2) - (4)].fe)),TFuncExpr_Char((yyvsp[(2) - (4)].fe)),TFuncExpr_VardecList((yyvsp[(2) - (4)].fe)),(yyvsp[(3) - (4)].af)));
  ;}
    break;

  case 9:
#line 186 "lang.y"
    {
    (yyval.d) = (TFuncdef(TTypeFuncExpr_Type((yyvsp[(1) - (4)].ty),(yyvsp[(2) - (4)].fe)),TFuncExpr_Char((yyvsp[(2) - (4)].fe)),TFuncExpr_VardecList((yyvsp[(2) - (4)].fe)),NULL,NULL));
  ;}
    break;

  case 10:
#line 190 "lang.y"
    {
    (yyval.d) = (TFuncdef(TTypeFuncExpr_Type((yyvsp[(1) - (5)].ty),(yyvsp[(2) - (5)].fe)),TFuncExpr_Char((yyvsp[(2) - (5)].fe)),TFuncExpr_VardecList((yyvsp[(2) - (5)].fe)),NULL,(yyvsp[(3) - (5)].af)));
  ;}
    break;

  case 11:
#line 194 "lang.y"
    {
    (yyval.d) = (TFuncdef(TTypeFuncExpr_Type((yyvsp[(1) - (5)].ty),(yyvsp[(2) - (5)].fe)),TFuncExpr_Char((yyvsp[(2) - (5)].fe)),TFuncExpr_VardecList((yyvsp[(2) - (5)].fe)),(yyvsp[(4) - (5)].c),NULL));
  ;}
    break;

  case 12:
#line 198 "lang.y"
    {
    (yyval.d) = (TFuncdef(TTypeFuncExpr_Type((yyvsp[(1) - (6)].ty),(yyvsp[(2) - (6)].fe)),TFuncExpr_Char((yyvsp[(2) - (6)].fe)),TFuncExpr_VardecList((yyvsp[(2) - (6)].fe)),(yyvsp[(5) - (6)].c),(yyvsp[(3) - (6)].af)));
  ;}
    break;

  case 13:
#line 202 "lang.y"
    {
    (yyval.d) = (TStructdef((yyvsp[(2) - (4)].i),(yyvsp[(3) - (4)].fdl)));
  ;}
    break;

  case 14:
#line 206 "lang.y"
    {
    (yyval.d) = (TStructdef((yyvsp[(2) - (3)].i),NULL));
  ;}
    break;

  case 15:
#line 210 "lang.y"
    {
    (yyval.d) = (TUniondef((yyvsp[(2) - (4)].i),(yyvsp[(3) - (4)].fdl)));
  ;}
    break;

  case 16:
#line 214 "lang.y"
    {
    (yyval.d) = (TUniondef((yyvsp[(2) - (3)].i),NULL));
  ;}
    break;

  case 17:
#line 218 "lang.y"
    {
    (yyval.d) = (TEnumdef((yyvsp[(2) - (4)].i),(yyvsp[(3) - (4)].enl)));
  ;}
    break;

  case 18:
#line 222 "lang.y"
    {
    (yyval.d) = (TEnumdef((yyvsp[(2) - (3)].i),NULL));
  ;}
    break;

  case 19:
#line 226 "lang.y"
    {
    (yyval.d) = (TSepdef((yyvsp[(1) - (1)].as)));
  ;}
    break;

  case 20:
#line 233 "lang.y"
    {
    (yyval.fe) = (TFuncDeref((yyvsp[(2) - (2)].fe)));
  ;}
    break;

  case 21:
#line 237 "lang.y"
    {
    (yyval.fe) = (yyvsp[(1) - (1)].fe);
  ;}
    break;

  case 22:
#line 244 "lang.y"
    {
    (yyval.fe) = (TNameFuncDef((yyvsp[(1) - (2)].i),(yyvsp[(2) - (2)].vdl)));
  ;}
    break;

  case 23:
#line 289 "lang.y"
    {
    (yyval.vdl) = (NULL);
  ;}
    break;

  case 24:
#line 293 "lang.y"
    {
    (yyval.vdl) = ((yyvsp[(2) - (3)].vdl));
  ;}
    break;

  case 25:
#line 300 "lang.y"
    {
    (yyval.vdl) = (VDLCons((yyvsp[(1) - (3)].vd),(yyvsp[(3) - (3)].vdl)));
  ;}
    break;

  case 26:
#line 304 "lang.y"
    {
    (yyval.vdl) = (VDLCons((yyvsp[(1) - (1)].vd),VDLNil()));
  ;}
    break;

  case 27:
#line 313 "lang.y"
    {
    (yyval.as) = (TAsepdef((yyvsp[(3) - (7)].i),(yyvsp[(4) - (7)].vl),(yyvsp[(6) - (7)].ra)));
  ;}
    break;

  case 28:
#line 320 "lang.y"
    {
    (yyval.vl) = (NULL);
  ;}
    break;

  case 29:
#line 324 "lang.y"
    {
    (yyval.vl) = ((yyvsp[(2) - (3)].vl));
  ;}
    break;

  case 30:
#line 331 "lang.y"
    {
    (yyval.vl) = (VLCons((yyvsp[(1) - (3)].i),(yyvsp[(3) - (3)].vl)));
  ;}
    break;

  case 31:
#line 335 "lang.y"
    {
    (yyval.vl) = (VLCons((yyvsp[(1) - (1)].i),VLNil()));
  ;}
    break;

  case 32:
#line 354 "lang.y"
    {
    (yyval.fdl) = (NULL);
  ;}
    break;

  case 33:
#line 358 "lang.y"
    {
    (yyval.fdl) = ((yyvsp[(2) - (3)].fdl));
  ;}
    break;

  case 34:
#line 365 "lang.y"
    {
    (yyval.fdl) = (FDLCons(TTypeExpr_Field((yyvsp[(1) - (4)].ty),(yyvsp[(2) - (4)].e)),(yyvsp[(4) - (4)].fdl)));
  ;}
    break;

  case 35:
#line 369 "lang.y"
    {
    (yyval.fdl) = (FDLCons(TTypeExpr_Field((yyvsp[(1) - (3)].ty),(yyvsp[(2) - (3)].e)),FDLNil()));
  ;}
    break;

  case 36:
#line 376 "lang.y"
    {
    (yyval.enl) = (NULL);
  ;}
    break;

  case 37:
#line 380 "lang.y"
    {
    (yyval.enl) = ((yyvsp[(2) - (3)].enl));
  ;}
    break;

  case 38:
#line 387 "lang.y"
    {
    (yyval.enl) = (ENLCons((yyvsp[(1) - (1)].i),ENLNil()));
  ;}
    break;

  case 39:
#line 391 "lang.y"
    {
    (yyval.enl) = (ENLCons((yyvsp[(1) - (3)].i),(yyvsp[(3) - (3)].enl)));
  ;}
    break;

  case 40:
#line 405 "lang.y"
    {
    (yyval.c) = (TSeq((yyvsp[(1) - (2)].c),(yyvsp[(2) - (2)].c)));
  ;}
    break;

  case 41:
#line 409 "lang.y"
    {
    (yyval.c) = (TSeq((yyvsp[(1) - (2)].c),TComment((yyvsp[(2) - (2)].ra))));
  ;}
    break;

  case 42:
#line 413 "lang.y"
    {
    (yyval.c) = (TComment((yyvsp[(1) - (1)].ra)));
  ;}
    break;

  case 43:
#line 417 "lang.y"
    {
    (yyval.c) = ((yyvsp[(1) - (1)].c));
  ;}
    break;

  case 44:
#line 424 "lang.y"
    {
    (yyval.c) = ((yyvsp[(2) - (3)].c));
  ;}
    break;

  case 45:
#line 428 "lang.y"
    {
    (yyval.c) = (NULL);
  ;}
    break;

  case 46:
#line 432 "lang.y"
    {
    (yyval.c) = (NULL);
  ;}
    break;

  case 47:
#line 436 "lang.y"
    {
    (yyval.c) = (TVarDecl((yyvsp[(1) - (2)].vd)));
  ;}
    break;

  case 48:
#line 440 "lang.y"
    {
    (yyval.c) = (TSimple((yyvsp[(1) - (2)].sc)));
  ;}
    break;

  case 49:
#line 444 "lang.y"
    {
    (yyval.c) = ((yyvsp[(1) - (1)].c));
  ;}
    break;

  case 50:
#line 448 "lang.y"
    {
    (yyval.c) = ((yyvsp[(1) - (1)].c));
  ;}
    break;

  case 51:
#line 452 "lang.y"
    {
    (yyval.c) = ((yyvsp[(1) - (1)].c));
  ;}
    break;

  case 52:
#line 456 "lang.y"
    {
    (yyval.c) = ((yyvsp[(1) - (1)].c));
  ;}
    break;

  case 53:
#line 460 "lang.y"
    {
    (yyval.c) = ((yyvsp[(1) - (1)].c));
  ;}
    break;

  case 54:
#line 464 "lang.y"
    {
    (yyval.c) = (TBreak());
  ;}
    break;

  case 55:
#line 468 "lang.y"
    {
    (yyval.c) = (TContinue());
  ;}
    break;

  case 56:
#line 472 "lang.y"
    {
    (yyval.c) = ((yyvsp[(1) - (2)].c));
  ;}
    break;

  case 57:
#line 479 "lang.y"
    {
    (yyval.vd) = (TTypeExpr_VD((yyvsp[(1) - (2)].ty),(yyvsp[(2) - (2)].e)));
  ;}
    break;

  case 58:
#line 486 "lang.y"
    {
    (yyval.e) = (TDeref((yyvsp[(2) - (2)].e)));
  ;}
    break;

  case 59:
#line 490 "lang.y"
    {
    (yyval.e) = (yyvsp[(1) - (1)].e);
  ;}
    break;

  case 60:
#line 497 "lang.y"
    {
    (yyval.e) = (TIndex((yyvsp[(1) - (4)].e),(yyvsp[(3) - (4)].e)));
  ;}
    break;

  case 61:
#line 501 "lang.y"
    {
    (yyval.e) = (yyvsp[(1) - (1)].e);
  ;}
    break;

  case 62:
#line 508 "lang.y"
    {
    (yyval.e) = (TVar((yyvsp[(1) - (1)].i)));
  ;}
    break;

  case 63:
#line 512 "lang.y"
    {
    (yyval.e) = (yyvsp[(2) - (3)].e);
  ;}
    break;

  case 64:
#line 520 "lang.y"
    {
    (yyval.sc) = (TComputation((yyvsp[(1) - (1)].e)));
  ;}
    break;

  case 65:
#line 524 "lang.y"
    {
    (yyval.sc) = (TAsgn(T_ASSIGN,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 66:
#line 528 "lang.y"
    {
    (yyval.sc) = (TAsgn(T_ADD_ASSIGN,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 67:
#line 532 "lang.y"
    {
    (yyval.sc) = (TAsgn(T_SUB_ASSIGN,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 68:
#line 536 "lang.y"
    {
    (yyval.sc) = (TAsgn(T_MUL_ASSIGN,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 69:
#line 540 "lang.y"
    {
    (yyval.sc) = (TAsgn(T_DIV_ASSIGN,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 70:
#line 544 "lang.y"
    {
    (yyval.sc) = (TAsgn(T_MOD_ASSIGN,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 71:
#line 548 "lang.y"
    {
    (yyval.sc) = (TAsgn(T_BAND_ASSIGN,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 72:
#line 552 "lang.y"
    {
    (yyval.sc) = (TAsgn(T_BOR_ASSIGN,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 73:
#line 556 "lang.y"
    {
    (yyval.sc) = (TAsgn(T_XOR_ASSIGN,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 74:
#line 560 "lang.y"
    {
    (yyval.sc) = (TAsgn(T_SHL_ASSIGN,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 75:
#line 564 "lang.y"
    {
    (yyval.sc) = (TAsgn(T_SHR_ASSIGN,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 76:
#line 568 "lang.y"
    {
    (yyval.sc) = (TIncDec(T_INC_F,(yyvsp[(2) - (2)].e)));
  ;}
    break;

  case 77:
#line 572 "lang.y"
    {
    (yyval.sc) = (TIncDec(T_DEC_F,(yyvsp[(2) - (2)].e)));
  ;}
    break;

  case 78:
#line 576 "lang.y"
    {
    (yyval.sc) = (TIncDec(T_INC_B,(yyvsp[(1) - (2)].e)));
  ;}
    break;

  case 79:
#line 580 "lang.y"
    {
    (yyval.sc) = (TIncDec(T_DEC_B,(yyvsp[(1) - (2)].e)));
  ;}
    break;

  case 80:
#line 587 "lang.y"
    {
    (yyval.c) = (TIf((yyvsp[(3) - (5)].e),(yyvsp[(5) - (5)].c),NULL));
  ;}
    break;

  case 81:
#line 591 "lang.y"
    {
    (yyval.c) = (TIf((yyvsp[(3) - (7)].e),(yyvsp[(5) - (7)].c),(yyvsp[(7) - (7)].c)));
  ;}
    break;

  case 82:
#line 598 "lang.y"
    {
    (yyval.c) = (TFor(NULL,(yyvsp[(3) - (9)].sc),(yyvsp[(5) - (9)].e),(yyvsp[(7) - (9)].sc),(yyvsp[(9) - (9)].c)));
  ;}
    break;

  case 83:
#line 602 "lang.y"
    {
    (yyval.c) = (TFor(NULL,NULL,(yyvsp[(4) - (8)].e),(yyvsp[(6) - (8)].sc),(yyvsp[(8) - (8)].c)));
  ;}
    break;

  case 84:
#line 606 "lang.y"
    {
    (yyval.c) = (TFor(NULL,(yyvsp[(3) - (8)].sc),NULL,(yyvsp[(6) - (8)].sc),(yyvsp[(8) - (8)].c)));
  ;}
    break;

  case 85:
#line 610 "lang.y"
    {
    (yyval.c) = (TFor(NULL,(yyvsp[(3) - (8)].sc),(yyvsp[(5) - (8)].e),NULL,(yyvsp[(8) - (8)].c)));
  ;}
    break;

  case 86:
#line 614 "lang.y"
    {
    (yyval.c) = (TFor(NULL,NULL,NULL,(yyvsp[(5) - (7)].sc),(yyvsp[(7) - (7)].c)));
  ;}
    break;

  case 87:
#line 618 "lang.y"
    {
    (yyval.c) = (TFor(NULL,NULL,(yyvsp[(4) - (7)].e),NULL,(yyvsp[(7) - (7)].c)));
  ;}
    break;

  case 88:
#line 622 "lang.y"
    {
    (yyval.c) = (TFor(NULL,(yyvsp[(3) - (7)].sc),NULL,NULL,(yyvsp[(7) - (7)].c)));
  ;}
    break;

  case 89:
#line 626 "lang.y"
    {
    (yyval.c) = (TFor(NULL,NULL,NULL,NULL,(yyvsp[(6) - (6)].c)));
  ;}
    break;

  case 90:
#line 630 "lang.y"
    {
    (yyval.c) = (TFor((yyvsp[(1) - (10)].ra),(yyvsp[(4) - (10)].sc),(yyvsp[(6) - (10)].e),(yyvsp[(8) - (10)].sc),(yyvsp[(10) - (10)].c)));
  ;}
    break;

  case 91:
#line 634 "lang.y"
    {
    (yyval.c) = (TFor((yyvsp[(1) - (9)].ra),NULL,(yyvsp[(5) - (9)].e),(yyvsp[(7) - (9)].sc),(yyvsp[(9) - (9)].c)));
  ;}
    break;

  case 92:
#line 638 "lang.y"
    {
    (yyval.c) = (TFor((yyvsp[(1) - (9)].ra),(yyvsp[(4) - (9)].sc),NULL,(yyvsp[(7) - (9)].sc),(yyvsp[(9) - (9)].c)));
  ;}
    break;

  case 93:
#line 642 "lang.y"
    {
    (yyval.c) = (TFor((yyvsp[(1) - (9)].ra),(yyvsp[(4) - (9)].sc),(yyvsp[(6) - (9)].e),NULL,(yyvsp[(9) - (9)].c)));
  ;}
    break;

  case 94:
#line 646 "lang.y"
    {
    (yyval.c) = (TFor((yyvsp[(1) - (8)].ra),NULL,NULL,(yyvsp[(6) - (8)].sc),(yyvsp[(8) - (8)].c)));
  ;}
    break;

  case 95:
#line 650 "lang.y"
    {
    (yyval.c) = (TFor((yyvsp[(1) - (8)].ra),NULL,(yyvsp[(5) - (8)].e),NULL,(yyvsp[(8) - (8)].c)));
  ;}
    break;

  case 96:
#line 654 "lang.y"
    {
    (yyval.c) = (TFor((yyvsp[(1) - (8)].ra),(yyvsp[(4) - (8)].sc),NULL,NULL,(yyvsp[(8) - (8)].c)));
  ;}
    break;

  case 97:
#line 658 "lang.y"
    {
    (yyval.c) = (TFor((yyvsp[(1) - (7)].ra),NULL,NULL,NULL,(yyvsp[(7) - (7)].c)));
  ;}
    break;

  case 98:
#line 665 "lang.y"
    {
    (yyval.c) = (TWhile(NULL,(yyvsp[(3) - (5)].e),(yyvsp[(5) - (5)].c)));
  ;}
    break;

  case 99:
#line 669 "lang.y"
    {
    (yyval.c) = (TWhile((yyvsp[(1) - (6)].ra),(yyvsp[(4) - (6)].e),(yyvsp[(6) - (6)].c)));
  ;}
    break;

  case 100:
#line 676 "lang.y"
    {
    (yyval.c) = (TDoWhile(NULL,(yyvsp[(5) - (6)].e),(yyvsp[(2) - (6)].c)));
  ;}
    break;

  case 101:
#line 680 "lang.y"
    {
    (yyval.c) = (TDoWhile((yyvsp[(1) - (7)].ra),(yyvsp[(6) - (7)].e),(yyvsp[(3) - (7)].c)));
  ;}
    break;

  case 102:
#line 687 "lang.y"
    {
    (yyval.c) = (TSwitch((yyvsp[(3) - (7)].e),(yyvsp[(6) - (7)].csl)));
  ;}
    break;

  case 103:
#line 694 "lang.y"
    {
    (yyval.c) = (TReturn(NULL));
  ;}
    break;

  case 104:
#line 698 "lang.y"
    {
    (yyval.c) = (TReturn((yyvsp[(2) - (2)].e)));
  ;}
    break;

  case 105:
#line 705 "lang.y"
    {
    (yyval.csl) = (CLCons((yyvsp[(1) - (2)].cs),(yyvsp[(2) - (2)].csl)));
  ;}
    break;

  case 106:
#line 709 "lang.y"
    {
    (yyval.csl) = (CLCons((yyvsp[(1) - (1)].cs),CLNil()));
  ;}
    break;

  case 107:
#line 716 "lang.y"
    {
    (yyval.cs) = (TCase((yyvsp[(2) - (4)].e),(yyvsp[(4) - (4)].c)));
  ;}
    break;

  case 108:
#line 720 "lang.y"
    {
    (yyval.cs) = (TDefault((yyvsp[(3) - (3)].c)));
  ;}
    break;

  case 109:
#line 734 "lang.y"
    {
    (yyval.ra) = ((yyvsp[(2) - (3)].ra));
  ;}
    break;

  case 110:
#line 738 "lang.y"
    {
    (yyval.ra) = (NULL);
  ;}
    break;

  case 111:
#line 745 "lang.y"
    {
    (yyval.ra) = ((yyvsp[(3) - (4)].ra));
  ;}
    break;

  case 112:
#line 752 "lang.y"
    {
    (yyval.af) = (TAfuncdef((yyvsp[(3) - (8)].vl),(yyvsp[(5) - (8)].ra),(yyvsp[(7) - (8)].ra)));
  ;}
    break;

  case 113:
#line 756 "lang.y"
    {
    (yyval.af) = (TAfuncdef(NULL,(yyvsp[(3) - (6)].ra),(yyvsp[(5) - (6)].ra)));
  ;}
    break;

  case 114:
#line 763 "lang.y"
    {
    (yyval.vl) = (VLCons((yyvsp[(1) - (2)].i),(yyvsp[(2) - (2)].vl)));
  ;}
    break;

  case 115:
#line 767 "lang.y"
    {
    (yyval.vl) = (VLCons((yyvsp[(1) - (1)].i),VLNil()));
  ;}
    break;

  case 116:
#line 782 "lang.y"
    {
    (yyval.ra) = (yyvsp[(1) - (1)].ra);
  ;}
    break;

  case 117:
#line 786 "lang.y"
    {
    (yyval.ra) = (RABinop(T_PLUS,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 118:
#line 790 "lang.y"
    {
    (yyval.ra) = (RABinop(T_MINUS,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 119:
#line 794 "lang.y"
    {
    (yyval.ra) = (RABinop(T_MUL,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 120:
#line 798 "lang.y"
    {
    (yyval.ra) = (RABinop(T_DIV,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 121:
#line 802 "lang.y"
    {
    (yyval.ra) = (RABinop(T_MOD,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 122:
#line 806 "lang.y"
    {
    (yyval.ra) = (RABinop(T_LT,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 123:
#line 810 "lang.y"
    {
    (yyval.ra) = (RABinop(T_GT,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 124:
#line 814 "lang.y"
    {
    (yyval.ra) = (RABinop(T_GE,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 125:
#line 818 "lang.y"
    {
    (yyval.ra) = (RABinop(T_LE,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 126:
#line 822 "lang.y"
    {
    (yyval.ra) = (RABinop(T_EQ,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 127:
#line 826 "lang.y"
    {
    (yyval.ra) = (RABinop(T_NE,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 128:
#line 830 "lang.y"
    {
    (yyval.ra) = (RABinop(T_AND,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 129:
#line 834 "lang.y"
    {
    (yyval.ra) = (RABinop(T_OR,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 130:
#line 838 "lang.y"
    {
    (yyval.ra) = (RABinop(T_BAND,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 131:
#line 842 "lang.y"
    {
    (yyval.ra) = (RABinop(T_BOR,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 132:
#line 846 "lang.y"
    {
    (yyval.ra) = (RABinop(T_XOR,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 133:
#line 850 "lang.y"
    {
    (yyval.ra) = (RABinop(T_SHL,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 134:
#line 854 "lang.y"
    {
    (yyval.ra) = (RABinop(T_SHR,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 135:
#line 858 "lang.y"
    {
    (yyval.ra) = (RAQfop(A_FORALL,(yyvsp[(2) - (4)].i),(yyvsp[(4) - (4)].ra)));
  ;}
    break;

  case 136:
#line 862 "lang.y"
    {
    (yyval.ra) = (RAQfop(A_EXISTS,(yyvsp[(2) - (4)].i),(yyvsp[(4) - (4)].ra)));
  ;}
    break;

  case 137:
#line 869 "lang.y"
    {
    (yyval.ra) = (RAUnop(T_UMINUS,(yyvsp[(2) - (2)].ra)));
  ;}
    break;

  case 138:
#line 873 "lang.y"
    {
    (yyval.ra) = (RAUnop(T_UPLUS,(yyvsp[(2) - (2)].ra)));
  ;}
    break;

  case 139:
#line 877 "lang.y"
    {
    (yyval.ra) = (RAUnop(T_NOTBOOL,(yyvsp[(2) - (2)].ra)));
  ;}
    break;

  case 140:
#line 881 "lang.y"
    {
    (yyval.ra) = (RAUnop(T_NOTINT,(yyvsp[(2) - (2)].ra)));
  ;}
    break;

  case 141:
#line 885 "lang.y"
    {
    (yyval.ra) = (RACast(TTypeExpr_Type((yyvsp[(2) - (5)].ty),(yyvsp[(3) - (5)].e)),(yyvsp[(5) - (5)].ra)));
  ;}
    break;

  case 142:
#line 889 "lang.y"
    {
    (yyval.ra) = (RADeref((yyvsp[(2) - (2)].ra)));
  ;}
    break;

  case 143:
#line 893 "lang.y"
    {
    (yyval.ra) = (RAAddress((yyvsp[(2) - (2)].ra)));
  ;}
    break;

  case 144:
#line 897 "lang.y"
    {
    (yyval.ra) = (yyvsp[(1) - (1)].ra);
  ;}
    break;

  case 145:
#line 904 "lang.y"
    {
    (yyval.ra) = (RAConst((yyvsp[(1) - (1)].n)));
  ;}
    break;

  case 146:
#line 908 "lang.y"
    {
    (yyval.ra) = (RAVar("__return"));
  ;}
    break;

  case 147:
#line 912 "lang.y"
    {
    (yyval.ra) = (RAVar((yyvsp[(1) - (1)].i)));
  ;}
    break;

  case 148:
#line 916 "lang.y"
    { 
    (yyval.ra) = (RACall((yyvsp[(1) - (2)].i),(yyvsp[(2) - (2)].ral)));
  ;}
    break;

  case 149:
#line 920 "lang.y"
    {
    (yyval.ra) = (RAIndex((yyvsp[(1) - (4)].ra),(yyvsp[(3) - (4)].ra)));
  ;}
    break;

  case 150:
#line 924 "lang.y"
    {
    (yyval.ra) = (RAFieldof((yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].i)));
  ;}
    break;

  case 151:
#line 928 "lang.y"
    {
    (yyval.ra) = (RAFieldofptr((yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].i)));
  ;}
    break;

  case 152:
#line 932 "lang.y"
    {
    (yyval.ra) = ((yyvsp[(2) - (3)].ra));
  ;}
    break;

  case 153:
#line 940 "lang.y"
    {
    (yyval.ral) = NULL;
  ;}
    break;

  case 154:
#line 944 "lang.y"
    {
    (yyval.ral) = ((yyvsp[(2) - (3)].ral));
  ;}
    break;

  case 155:
#line 951 "lang.y"
    {
    (yyval.ral) = (RALCons((yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ral)));
  ;}
    break;

  case 156:
#line 955 "lang.y"
    {
    (yyval.ral) = (RALCons((yyvsp[(1) - (1)].ra),RALNil()));
  ;}
    break;

  case 157:
#line 965 "lang.y"
    {
    (yyval.ty) = (TBasic(T_VOID));
  ;}
    break;

  case 158:
#line 969 "lang.y"
    {
    (yyval.ty) = (TBasic(T_CHAR));
  ;}
    break;

  case 159:
#line 973 "lang.y"
    {
    (yyval.ty) = (TBasic(T_U8));
  ;}
    break;

  case 160:
#line 977 "lang.y"
    {
    (yyval.ty) = (TBasic(T_INT));
  ;}
    break;

  case 161:
#line 981 "lang.y"
    {
    (yyval.ty) = (TBasic(T_INT64));
  ;}
    break;

  case 162:
#line 985 "lang.y"
    {
    (yyval.ty) = (TBasic(T_UINT));
  ;}
    break;

  case 163:
#line 989 "lang.y"
    {
    (yyval.ty) = (TBasic(T_UINT64));
  ;}
    break;

  case 164:
#line 993 "lang.y"
    {
    (yyval.ty) = (TStruct((yyvsp[(2) - (2)].i)));
  ;}
    break;

  case 165:
#line 997 "lang.y"
    {
    (yyval.ty) = (TUnion((yyvsp[(2) - (2)].i)));
  ;}
    break;

  case 166:
#line 1001 "lang.y"
    {
    (yyval.ty) = (TEnum((yyvsp[(2) - (2)].i)));
  ;}
    break;

  case 167:
#line 1009 "lang.y"
    {
    (yyval.e) = (yyvsp[(1) - (1)].e);
  ;}
    break;

  case 168:
#line 1013 "lang.y"
    {
    (yyval.e) = (TBinop(T_PLUS,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 169:
#line 1017 "lang.y"
    {
    (yyval.e) = (TBinop(T_MINUS,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 170:
#line 1021 "lang.y"
    {
    (yyval.e) = (TBinop(T_MUL,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 171:
#line 1025 "lang.y"
    {
    (yyval.e) = (TBinop(T_DIV,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 172:
#line 1029 "lang.y"
    {
    (yyval.e) = (TBinop(T_MOD,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 173:
#line 1033 "lang.y"
    {
    (yyval.e) = (TBinop(T_LT,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 174:
#line 1037 "lang.y"
    {
    (yyval.e) = (TBinop(T_GT,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 175:
#line 1041 "lang.y"
    {
    (yyval.e) = (TBinop(T_LE,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 176:
#line 1045 "lang.y"
    {
    (yyval.e) = (TBinop(T_GE,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 177:
#line 1049 "lang.y"
    {
    (yyval.e) = (TBinop(T_EQ,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 178:
#line 1053 "lang.y"
    {
    (yyval.e) = (TBinop(T_NE,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 179:
#line 1057 "lang.y"
    {
    (yyval.e) = (TBinop(T_AND,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 180:
#line 1061 "lang.y"
    {
    (yyval.e) = (TBinop(T_OR,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 181:
#line 1065 "lang.y"
    {
    (yyval.e) = (TBinop(T_BAND,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 182:
#line 1069 "lang.y"
    {
    (yyval.e) = (TBinop(T_BOR,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 183:
#line 1073 "lang.y"
    {
    (yyval.e) = (TBinop(T_XOR,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 184:
#line 1077 "lang.y"
    {
    (yyval.e) = (TBinop(T_SHL,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 185:
#line 1081 "lang.y"
    {
    (yyval.e) = (TBinop(T_SHR,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 186:
#line 1088 "lang.y"
    {
    (yyval.e) = (TUnop(T_NOTBOOL,(yyvsp[(2) - (2)].e)));
  ;}
    break;

  case 187:
#line 1092 "lang.y"
    {
    (yyval.e) = (TUnop(T_NOTINT,(yyvsp[(2) - (2)].e)));
  ;}
    break;

  case 188:
#line 1096 "lang.y"
    {
    (yyval.e) = (TUnop(T_UMINUS,(yyvsp[(2) - (2)].e)));
  ;}
    break;

  case 189:
#line 1100 "lang.y"
    {
    (yyval.e) = (TUnop(T_UPLUS,(yyvsp[(2) - (2)].e)));
  ;}
    break;

  case 190:
#line 1104 "lang.y"
    {
    (yyval.e) = (TDeref((yyvsp[(2) - (2)].e)));
  ;}
    break;

  case 191:
#line 1108 "lang.y"
    {
    (yyval.e) = (TAddress((yyvsp[(2) - (2)].e)));
  ;}
    break;

  case 192:
#line 1112 "lang.y"
    {
    (yyval.e) = (TCast(TTypeExpr_Type((yyvsp[(2) - (5)].ty),(yyvsp[(3) - (5)].e)),(yyvsp[(5) - (5)].e)));
  ;}
    break;

  case 193:
#line 1116 "lang.y"
    {
    (yyval.e) = (yyvsp[(1) - (1)].e);
  ;}
    break;

  case 194:
#line 1123 "lang.y"
    {
    (yyval.e) = (TConst((yyvsp[(1) - (1)].n)));
  ;}
    break;

  case 195:
#line 1127 "lang.y"
    {
    (yyval.e) = (TVar((yyvsp[(1) - (1)].i)));
  ;}
    break;

  case 196:
#line 1131 "lang.y"
    {
    (yyval.e) = (TCall((yyvsp[(1) - (2)].i),(yyvsp[(2) - (2)].el)));
  ;}
    break;

  case 197:
#line 1135 "lang.y"
    {
    (yyval.e) = (TSizeofType(TTypeExpr_Type((yyvsp[(3) - (5)].ty),(yyvsp[(4) - (5)].e))));
  ;}
    break;

  case 198:
#line 1139 "lang.y"
    {
    (yyval.e) = (TSizeofType((yyvsp[(3) - (4)].ty)));
  ;}
    break;

  case 199:
#line 1143 "lang.y"
    {
    (yyval.e) = (TIndex((yyvsp[(1) - (4)].e),(yyvsp[(3) - (4)].e)));
  ;}
    break;

  case 200:
#line 1147 "lang.y"
    {
    (yyval.e) = (TFieldof((yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].i)));
  ;}
    break;

  case 201:
#line 1151 "lang.y"
    {
    (yyval.e) = (TFieldofptr((yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].i)));
  ;}
    break;

  case 202:
#line 1155 "lang.y"
    {
    (yyval.e) = (yyvsp[(2) - (3)].e);
  ;}
    break;

  case 203:
#line 1162 "lang.y"
    {
    (yyval.el) = (NULL);
  ;}
    break;

  case 204:
#line 1166 "lang.y"
    {
    (yyval.el) = ((yyvsp[(2) - (3)].el));
  ;}
    break;

  case 205:
#line 1173 "lang.y"
    {
    (yyval.el) = (ELCons((yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].el)));
  ;}
    break;

  case 206:
#line 1177 "lang.y"
    {
    (yyval.el) = (ELCons((yyvsp[(1) - (1)].e),ELNil()));
  ;}
    break;

  case 207:
#line 1184 "lang.y"
    {
    (yyval.e) = (TDeref((yyvsp[(2) - (2)].e)));
  ;}
    break;

  case 208:
#line 1188 "lang.y"
    {
    (yyval.e) = (TDeref(TVar(NULL)));
  ;}
    break;

  case 209:
#line 1192 "lang.y"
    {
    (yyval.e) = (yyvsp[(1) - (1)].e);
  ;}
    break;

  case 210:
#line 1199 "lang.y"
    {
    (yyval.e) = (TIndex((yyvsp[(1) - (4)].e),(yyvsp[(3) - (4)].e)));
  ;}
    break;

  case 211:
#line 1203 "lang.y"
    {
    (yyval.e) = (TIndex(TVar(NULL),(yyvsp[(2) - (3)].e)));
  ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3788 "parser.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


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
		      yytoken, &yylval);
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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


#line 1208 "lang.y"


void yyerror(char* s)
{
    fprintf(stderr , "%s\n",s);
}

