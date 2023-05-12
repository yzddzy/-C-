/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
/* Line 1529 of yacc.c.  */
#line 253 "parser.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

