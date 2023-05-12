%{
	// this part is copied to the beginning of the parser 
	#include <stdio.h>
	#include "lang.h"
	#include "lexer.h"
	void yyerror(char *);
	int yylex(void);
  struct root_list * root;
%}

%union {
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

// Terminals
%token <n> TM_NAT
%token <i> TM_IDENT 
%token <none> TM_LEFT_BRACE TM_RIGHT_BRACE
%token <none> TM_LEFT_BRACK TM_RIGHT_BRACK
%token <none> TM_LEFT_PAREN TM_RIGHT_PAREN
%token <none> TM_SEMICOL TM_COMMA TM_CONOL
%token <i> TM_VOID TM_CHAR TM_U8 TM_INT TM_INT64 TM_UINT TM_UINT64
%token <i> TM_STRUCT TM_UNION TM_ENUM
%token <none> TM_WITH TM_REQUIRE TM_ENSURE TM___RETURN TM_INV TM_FORALL TM_EXISTS TM_LET
%token <none> TM_IF TM_ELSE TM_FOR TM_DO TM_WHILE
%token <none> TM_SWITCH TM_CASE TM_DEFAULT
%token <none> TM_RETURN TM_BREAK TM_CONTINUE
%token <none> TM_SIZEOF
%token <none> TM_ASGNOP TM_PLUS_ASGN TM_MINUS_ASGN TM_MUL_ASGN TM_DIV_ASGN TM_MOD_ASGN TM_BAND_ASGN TM_BOR_ASGN TM_XOR_ASGN TM_SHL_ASGN TM_SHR_ASGN
%token <none> TM_PLUS TM_MINUS TM_STAR TM_DIV TM_MOD TM_GE TM_LE TM_GT TM_LT TM_EQ TM_NE TM_AND TM_OR TM_BAND TM_BOR TM_XOR TM_SHR TM_SHL
%token <none> TM_NOTINT TM_NOTBOOL TM_INC TM_DEC
%token <none> TM_FIELDOF TM_FIELDOFPTR
%token <none> TM_COMMENT_START TM_COMMENT_END

// Nonterminals
%type <rl> NT_WHOLE
%type <rl> NT_ROOT_LIST
%type <r> NT_ROOT

%type <d> NT_DEF
%type <fe> NT_FUNCDECDEF_EXPR
%type <fe> NT_FUNCDECDEF_EXPR_N
// %type <tyl> NT_FUNC_DEC
// %type <tyl> NT_TYPE_LIST

// %type <fe> NT_FUNCDEF_EXPR
%type <vdl> NT_FUNC_DEF
%type <vdl> NT_TYPE_EXPR_LIST

%type <as> NT_LET_COMMENT

%type <vl> NT_VAR_LIST
%type <vl> NT_ID_COMMA_VAR

%type <fdl> NT_FIELD_DEC_LIST
%type <fdl> NT_FDL_SEMICOL

%type <enl> NT_ENUM_LIST
%type <enl> NT_ID_COMMA_ENUM

%type <c> NT_CMD
%type <c> NT_LAST_CMD

%type <vd> NT_VARDECL

%type <sc> NT_SIMPLE_CMD
%type <c> NT_IF_CMD
%type <c> NT_SWITCH_CMD
%type <c> NT_WHILE_CMD
%type <c> NT_DOWHILE_CMD
%type <c> NT_FOR_CMD
%type <c> NT_RETURN_CMD

%type <csl> NT_CASE_LIST
%type <cs> NT_CASE_TYPE

%type <ra> NT_COMMENT
%type <ra> NT_INV_COMMENT

%type <af> NT_WITH_COMMENT
%type <vl> NT_WITH_VAR_LIST

%type <ty> NT_TYPE

%type <ra> NT_RA_EXPR
%type <ra> NT_RA_EXPR_F
%type <ra> NT_UNOP_RA_EXPR
%type <ral> NT_RA_FUNC_CALL
%type <ral> NT_RA_LIST

%type <e> NT_EXPR
%type <e> NT_EXPR_VD
%type <e> NT_EXPR_VD_A
%type <e> NT_EXPR_VD_B
%type <e> NT_UNOP_EXPR
%type <e> NT_EXPR_F
%type <e> NT_PTR
%type <e> NT_PTR_A

%type <el> NT_FUNC_CALL
%type <el> NT_EXPR_LIST

// Priority
%right TM_COMMA
%right TM_ASGNOP TM_ADD_ASGN TM_MINUS_ASGN TM_MUL_ASGN TM_DIV_ASGN TM_MOD_ASGN TM_BAND_ASGN TM_BOR_ASGN TM_XOR_ASGN TM_SHL_ASGN TM_SHR_ASGN
%left TM_OR
%left TM_AND
%left TM_BOR
%left TM_XOR
%left TM_BAND
%left TM_EQ TM_NE
%left TM_LT TM_LE TM_GT TM_GE 
%left TM_SHL TM_SHR 
%left TM_PLUS TM_MINUS
%left TM_MUL TM_DIV TM_MOD TM_STAR
%right TM_NOTBOOL TM_NOTINT TM_INC TM_DEC TM_SIZEOF TM_UPLUS TM_UMINUS TM_ADDRES TM_INDEX TM_FIELDOF TM_FIELDOFPTR TM_DEREF
%left TM_LEFT_PAREN TM_RIGHT_PAREN TM_LEFT_BRACE TM_RIGHT_BRACE TM_LEFT_BRACK TM_RIGHT_BRACK 
%right TM_SEMICOL TM_THEN TM_ELSE

%%

NT_WHOLE:
  NT_ROOT_LIST
  {
    $$ = ($1);
    root = $$;
  }
;

NT_ROOT_LIST:
  NT_ROOT NT_ROOT_LIST
  {
    $$ = (RTLCons($1,$2));
  }
| NT_ROOT
  {
    $$ = (RTLCons($1,NULL));
  }
;

NT_ROOT:
  NT_DEF
  {
    $$ = (TDefroot($1));
  }
| NT_VARDECL TM_SEMICOL
  {
    $$ = (TVarroot($1));
  }
;

NT_DEF:
  NT_TYPE NT_FUNCDECDEF_EXPR TM_SEMICOL
  {
    $$ = (TFuncdec(TTypeFuncExpr_Type($1,$2),TFuncExpr_Char($2),TFuncExpr_VardecList($2),NULL));
  }
| NT_TYPE NT_FUNCDECDEF_EXPR NT_WITH_COMMENT TM_SEMICOL
  {
    $$ = (TFuncdec(TTypeFuncExpr_Type($1,$2),TFuncExpr_Char($2),TFuncExpr_VardecList($2),$3));
  }
| NT_TYPE NT_FUNCDECDEF_EXPR TM_LEFT_BRACE TM_RIGHT_BRACE
  {
    $$ = (TFuncdef(TTypeFuncExpr_Type($1,$2),TFuncExpr_Char($2),TFuncExpr_VardecList($2),NULL,NULL));
  }
| NT_TYPE NT_FUNCDECDEF_EXPR NT_WITH_COMMENT TM_LEFT_BRACE TM_RIGHT_BRACE
  {
    $$ = (TFuncdef(TTypeFuncExpr_Type($1,$2),TFuncExpr_Char($2),TFuncExpr_VardecList($2),NULL,$3));
  }
| NT_TYPE NT_FUNCDECDEF_EXPR TM_LEFT_BRACE NT_CMD TM_RIGHT_BRACE
  {
    $$ = (TFuncdef(TTypeFuncExpr_Type($1,$2),TFuncExpr_Char($2),TFuncExpr_VardecList($2),$4,NULL));
  }
| NT_TYPE NT_FUNCDECDEF_EXPR NT_WITH_COMMENT TM_LEFT_BRACE NT_CMD TM_RIGHT_BRACE
  {
    $$ = (TFuncdef(TTypeFuncExpr_Type($1,$2),TFuncExpr_Char($2),TFuncExpr_VardecList($2),$5,$3));
  }
| TM_STRUCT TM_IDENT NT_FIELD_DEC_LIST TM_SEMICOL
  {
    $$ = (TStructdef($2,$3));
  }
| TM_STRUCT TM_IDENT TM_SEMICOL
  {
    $$ = (TStructdef($2,NULL));
  }
| TM_UNION TM_IDENT NT_FIELD_DEC_LIST TM_SEMICOL
  {
    $$ = (TUniondef($2,$3));
  }
| TM_UNION TM_IDENT TM_SEMICOL
  {
    $$ = (TUniondef($2,NULL));
  }
| TM_ENUM TM_IDENT NT_ENUM_LIST TM_SEMICOL
  {
    $$ = (TEnumdef($2,$3));
  }
| TM_ENUM TM_IDENT TM_SEMICOL
  {
    $$ = (TEnumdef($2,NULL));
  }
| NT_LET_COMMENT
  {
    $$ = (TSepdef($1));
  }
;

NT_FUNCDECDEF_EXPR:
  TM_STAR NT_FUNCDECDEF_EXPR  %prec TM_DEREF
  {
    $$ = (TFuncDeref($2));
  }
| NT_FUNCDECDEF_EXPR_N
  {
    $$ = $1;
  }
;

NT_FUNCDECDEF_EXPR_N:
  TM_IDENT NT_FUNC_DEF 
  {
    $$ = (TNameFuncDef($1,$2));
  }
;

// NT_FUNC_DEC:
//   TM_LEFT_PAREN TM_RIGHT_PAREN
//   {
//     $$ = (NULL);
//   }
// | TM_LEFT_PAREN NT_TYPE_LIST TM_RIGHT_PAREN
//   {
//     $$ = ($2);
//   }
// ;

// NT_TYPE_LIST:
//   NT_TYPE NT_EXPR TM_COMMA NT_TYPE_LIST
//   {
//     $$ = (TYLCons(TTypeExpr_Type($1,$2),$4));
//   }
// | NT_TYPE NT_EXPR 
//   {
//     $$ = (TYLCons(TTypeExpr_Type($1,$2),TYLNil()));
//   }
// ;

// NT_FUNCDEF_EXPR:
//   TM_LEFT_PAREN NT_FUNCDEF_EXPR TM_RIGHT_PAREN
//   {
//     $$ = ($2);
//   }
// | 
//   TM_STAR NT_FUNCDEF_EXPR
//   {
//     $$ = (TFuncDeref($2));
//   }
// | TM_IDENT NT_FUNC_DEF
//   {
//     $$ = (TNameFuncDef($1,$2));
//   }
// ;

NT_FUNC_DEF:
  TM_LEFT_PAREN TM_RIGHT_PAREN
  {
    $$ = (NULL);
  }
| TM_LEFT_PAREN NT_TYPE_EXPR_LIST TM_RIGHT_PAREN
  {
    $$ = ($2);
  }
;

NT_TYPE_EXPR_LIST:
  NT_VARDECL TM_COMMA NT_TYPE_EXPR_LIST
  {
    $$ = (VDLCons($1,$3));
  }
| NT_VARDECL
  {
    $$ = (VDLCons($1,VDLNil()));
  }
;



NT_LET_COMMENT:
  TM_COMMENT_START TM_LET TM_IDENT NT_VAR_LIST TM_ASGNOP NT_RA_EXPR TM_COMMENT_END
  {
    $$ = (TAsepdef($3,$4,$6));
  }
;

NT_VAR_LIST:
  TM_LEFT_PAREN TM_RIGHT_PAREN
  {
    $$ = (NULL);
  }
| TM_LEFT_PAREN NT_ID_COMMA_VAR TM_RIGHT_PAREN
  {
    $$ = ($2);
  }
;

NT_ID_COMMA_VAR:
  TM_IDENT TM_COMMA NT_ID_COMMA_VAR
  {
    $$ = (VLCons($1,$3));
  }
| TM_IDENT
  {
    $$ = (VLCons($1,VLNil()));
  }
;


// NT_TYPE_EXPR_LIST:
//   NT_TYPE NT_EXPR TM_COMMA NT_TYPE_EXPR_LIST
//   {
//     $$ = (VDLCons(TTypeExpr_VD($1,$2),$4));
//   }
// | NT_TYPE NT_EXPR
//   {
//     $$ = (VDLCons(TTypeExpr_VD($1,$2),VDLNil()));
//   }
// ;

NT_FIELD_DEC_LIST:
  TM_LEFT_BRACE TM_RIGHT_BRACE
  {
    $$ = (NULL);
  }
| TM_LEFT_BRACE NT_FDL_SEMICOL TM_RIGHT_BRACE
  {
    $$ = ($2);
  }
;

NT_FDL_SEMICOL:
  NT_TYPE NT_EXPR TM_SEMICOL NT_FDL_SEMICOL
  {
    $$ = (FDLCons(TTypeExpr_Field($1,$2),$4));
  }
| NT_TYPE NT_EXPR TM_SEMICOL
  {
    $$ = (FDLCons(TTypeExpr_Field($1,$2),FDLNil()));
  }
;

NT_ENUM_LIST:
  TM_LEFT_BRACE TM_RIGHT_BRACE
  {
    $$ = (NULL);
  }
| TM_LEFT_BRACE NT_ID_COMMA_ENUM TM_RIGHT_BRACE
  {
    $$ = ($2);
  }
;

NT_ID_COMMA_ENUM:
  TM_IDENT
  {
    $$ = (ENLCons($1,ENLNil()));
  }
| TM_IDENT TM_COMMA NT_ID_COMMA_ENUM
  {
    $$ = (ENLCons($1,$3));
  }
;








NT_CMD:
  NT_CMD NT_LAST_CMD
  {
    $$ = (TSeq($1,$2));
  }
| NT_CMD NT_COMMENT
  {
    $$ = (TSeq($1,TComment($2)));
  }
| NT_COMMENT
  {
    $$ = (TComment($1));
  }
| NT_LAST_CMD
  {
    $$ = ($1);
  }
;

NT_LAST_CMD:
  TM_LEFT_BRACE NT_CMD TM_RIGHT_BRACE
  {
    $$ = ($2);
  }
| TM_LEFT_BRACE TM_RIGHT_BRACE
  {
    $$ = (NULL);
  }
| TM_SEMICOL
  {
    $$ = (NULL);
  }
| NT_VARDECL TM_SEMICOL
  {
    $$ = (TVarDecl($1));
  }
| NT_SIMPLE_CMD TM_SEMICOL
  {
    $$ = (TSimple($1));
  }
| NT_IF_CMD
  {
    $$ = ($1);
  }
| NT_SWITCH_CMD
  {
    $$ = ($1);
  }
| NT_WHILE_CMD
  {
    $$ = ($1);
  }
| NT_DOWHILE_CMD
  {
    $$ = ($1);
  }
| NT_FOR_CMD
  {
    $$ = ($1);
  }
| TM_BREAK TM_SEMICOL
  {
    $$ = (TBreak());
  }
| TM_CONTINUE TM_SEMICOL
  {
    $$ = (TContinue());
  }
| NT_RETURN_CMD TM_SEMICOL
  {
    $$ = ($1);
  }
;

NT_VARDECL:
  NT_TYPE NT_EXPR_VD
  {
    $$ = (TTypeExpr_VD($1,$2));
  }
;

NT_EXPR_VD:
  TM_STAR NT_EXPR_VD
  {
    $$ = (TDeref($2));
  }
| NT_EXPR_VD_A
  {
    $$ = $1;
  }
;

NT_EXPR_VD_A:
  NT_EXPR_VD_A TM_LEFT_BRACK NT_EXPR TM_RIGHT_BRACK
  {
    $$ = (TIndex($1,$3));
  }
| NT_EXPR_VD_B
  {
    $$ = $1;
  }
;

NT_EXPR_VD_B:
  TM_IDENT
  {
    $$ = (TVar($1));
  }
| TM_LEFT_PAREN NT_EXPR_VD TM_RIGHT_PAREN
  {
    $$ = $2;
  }
;
  

NT_SIMPLE_CMD:
  NT_EXPR
  {
    $$ = (TComputation($1));
  }
| NT_EXPR TM_ASGNOP NT_EXPR
  {
    $$ = (TAsgn(T_ASSIGN,$1,$3));
  }
| NT_EXPR TM_PLUS_ASGN NT_EXPR
  {
    $$ = (TAsgn(T_ADD_ASSIGN,$1,$3));
  }
| NT_EXPR TM_MINUS_ASGN NT_EXPR
  {
    $$ = (TAsgn(T_SUB_ASSIGN,$1,$3));
  }
| NT_EXPR TM_MUL_ASGN NT_EXPR
  {
    $$ = (TAsgn(T_MUL_ASSIGN,$1,$3));
  }
| NT_EXPR TM_DIV_ASGN NT_EXPR
  {
    $$ = (TAsgn(T_DIV_ASSIGN,$1,$3));
  }
| NT_EXPR TM_MOD_ASGN NT_EXPR
  {
    $$ = (TAsgn(T_MOD_ASSIGN,$1,$3));
  }
| NT_EXPR TM_BAND_ASGN NT_EXPR
  {
    $$ = (TAsgn(T_BAND_ASSIGN,$1,$3));
  }
| NT_EXPR TM_BOR_ASGN NT_EXPR
  {
    $$ = (TAsgn(T_BOR_ASSIGN,$1,$3));
  }
| NT_EXPR TM_XOR_ASGN NT_EXPR
  {
    $$ = (TAsgn(T_XOR_ASSIGN,$1,$3));
  }
| NT_EXPR TM_SHL_ASGN NT_EXPR
  {
    $$ = (TAsgn(T_SHL_ASSIGN,$1,$3));
  }
| NT_EXPR TM_SHR_ASGN NT_EXPR
  {
    $$ = (TAsgn(T_SHR_ASSIGN,$1,$3));
  }
| TM_INC NT_EXPR
  {
    $$ = (TIncDec(T_INC_F,$2));
  }
| TM_DEC NT_EXPR
  {
    $$ = (TIncDec(T_DEC_F,$2));
  }
| NT_EXPR TM_INC
  {
    $$ = (TIncDec(T_INC_B,$1));
  }
| NT_EXPR TM_DEC
  {
    $$ = (TIncDec(T_DEC_B,$1));
  }
;

NT_IF_CMD:
  TM_IF TM_LEFT_PAREN NT_EXPR TM_RIGHT_PAREN NT_LAST_CMD  %prec TM_THEN
  {
    $$ = (TIf($3,$5,NULL));
  }
| TM_IF TM_LEFT_PAREN NT_EXPR TM_RIGHT_PAREN NT_LAST_CMD TM_ELSE NT_LAST_CMD
  {
    $$ = (TIf($3,$5,$7));
  }
;

NT_FOR_CMD:
  TM_FOR TM_LEFT_PAREN NT_SIMPLE_CMD TM_SEMICOL NT_EXPR TM_SEMICOL NT_SIMPLE_CMD TM_RIGHT_PAREN NT_LAST_CMD
  {
    $$ = (TFor(NULL,$3,$5,$7,$9));
  }
| TM_FOR TM_LEFT_PAREN TM_SEMICOL NT_EXPR TM_SEMICOL NT_SIMPLE_CMD TM_RIGHT_PAREN NT_LAST_CMD
  {
    $$ = (TFor(NULL,NULL,$4,$6,$8));
  }
| TM_FOR TM_LEFT_PAREN NT_SIMPLE_CMD TM_SEMICOL TM_SEMICOL NT_SIMPLE_CMD TM_RIGHT_PAREN NT_LAST_CMD
  {
    $$ = (TFor(NULL,$3,NULL,$6,$8));
  }
| TM_FOR TM_LEFT_PAREN NT_SIMPLE_CMD TM_SEMICOL NT_EXPR TM_SEMICOL TM_RIGHT_PAREN NT_LAST_CMD
  {
    $$ = (TFor(NULL,$3,$5,NULL,$8));
  }
| TM_FOR TM_LEFT_PAREN TM_SEMICOL TM_SEMICOL NT_SIMPLE_CMD TM_RIGHT_PAREN NT_LAST_CMD
  {
    $$ = (TFor(NULL,NULL,NULL,$5,$7));
  }
| TM_FOR TM_LEFT_PAREN TM_SEMICOL NT_EXPR TM_SEMICOL TM_RIGHT_PAREN NT_LAST_CMD
  {
    $$ = (TFor(NULL,NULL,$4,NULL,$7));
  }
| TM_FOR TM_LEFT_PAREN NT_SIMPLE_CMD TM_SEMICOL TM_SEMICOL TM_RIGHT_PAREN NT_LAST_CMD
  {
    $$ = (TFor(NULL,$3,NULL,NULL,$7));
  }
| TM_FOR TM_LEFT_PAREN TM_SEMICOL TM_SEMICOL TM_RIGHT_PAREN NT_LAST_CMD
  {
    $$ = (TFor(NULL,NULL,NULL,NULL,$6));
  }
| NT_INV_COMMENT TM_FOR TM_LEFT_PAREN NT_SIMPLE_CMD TM_SEMICOL NT_EXPR TM_SEMICOL NT_SIMPLE_CMD TM_RIGHT_PAREN NT_LAST_CMD
  {
    $$ = (TFor($1,$4,$6,$8,$10));
  }
| NT_INV_COMMENT TM_FOR TM_LEFT_PAREN TM_SEMICOL NT_EXPR TM_SEMICOL NT_SIMPLE_CMD TM_RIGHT_PAREN NT_LAST_CMD
  {
    $$ = (TFor($1,NULL,$5,$7,$9));
  }
| NT_INV_COMMENT TM_FOR TM_LEFT_PAREN NT_SIMPLE_CMD TM_SEMICOL TM_SEMICOL NT_SIMPLE_CMD TM_RIGHT_PAREN NT_LAST_CMD
  {
    $$ = (TFor($1,$4,NULL,$7,$9));
  }
| NT_INV_COMMENT TM_FOR TM_LEFT_PAREN NT_SIMPLE_CMD TM_SEMICOL NT_EXPR TM_SEMICOL TM_RIGHT_PAREN NT_LAST_CMD
  {
    $$ = (TFor($1,$4,$6,NULL,$9));
  }
| NT_INV_COMMENT TM_FOR TM_LEFT_PAREN TM_SEMICOL TM_SEMICOL NT_SIMPLE_CMD TM_RIGHT_PAREN NT_LAST_CMD
  {
    $$ = (TFor($1,NULL,NULL,$6,$8));
  }
| NT_INV_COMMENT TM_FOR TM_LEFT_PAREN TM_SEMICOL NT_EXPR TM_SEMICOL TM_RIGHT_PAREN NT_LAST_CMD
  {
    $$ = (TFor($1,NULL,$5,NULL,$8));
  }
| NT_INV_COMMENT TM_FOR TM_LEFT_PAREN NT_SIMPLE_CMD TM_SEMICOL TM_SEMICOL TM_RIGHT_PAREN NT_LAST_CMD
  {
    $$ = (TFor($1,$4,NULL,NULL,$8));
  }
| NT_INV_COMMENT TM_FOR TM_LEFT_PAREN TM_SEMICOL TM_SEMICOL TM_RIGHT_PAREN NT_LAST_CMD
  {
    $$ = (TFor($1,NULL,NULL,NULL,$7));
  }
;

NT_WHILE_CMD:
  TM_WHILE TM_LEFT_PAREN NT_EXPR TM_RIGHT_PAREN NT_LAST_CMD
  {
    $$ = (TWhile(NULL,$3,$5));
  }
| NT_INV_COMMENT TM_WHILE TM_LEFT_PAREN NT_EXPR TM_RIGHT_PAREN NT_LAST_CMD
  {
    $$ = (TWhile($1,$4,$6));
  }
;

NT_DOWHILE_CMD:
  TM_DO NT_LAST_CMD TM_WHILE TM_LEFT_PAREN NT_EXPR TM_RIGHT_PAREN
  {
    $$ = (TDoWhile(NULL,$5,$2));
  }
| NT_INV_COMMENT TM_DO NT_LAST_CMD TM_WHILE TM_LEFT_PAREN NT_EXPR TM_RIGHT_PAREN
  {
    $$ = (TDoWhile($1,$6,$3));
  }
;

NT_SWITCH_CMD:
  TM_SWITCH TM_LEFT_PAREN NT_EXPR TM_RIGHT_PAREN TM_LEFT_BRACE NT_CASE_LIST TM_RIGHT_BRACE
  {
    $$ = (TSwitch($3,$6));
  }
;

NT_RETURN_CMD:
  TM_RETURN
  {
    $$ = (TReturn(NULL));
  }
| TM_RETURN NT_EXPR
  {
    $$ = (TReturn($2));
  }
;

NT_CASE_LIST:
  NT_CASE_TYPE NT_CASE_LIST
  {
    $$ = (CLCons($1,$2));
  }
| NT_CASE_TYPE
  {
    $$ = (CLCons($1,CLNil()));
  }
;

NT_CASE_TYPE:
  TM_CASE NT_EXPR TM_CONOL NT_CMD
  {
    $$ = (TCase($2,$4));
  }
| TM_DEFAULT TM_CONOL NT_CMD
  {
    $$ = (TDefault($3));
  }
;








NT_COMMENT:
  TM_COMMENT_START NT_RA_EXPR TM_COMMENT_END
  {
    $$ = ($2);
  }
| TM_COMMENT_START TM_COMMENT_END
  {
    $$ = (NULL);
  }
;

NT_INV_COMMENT:
  TM_COMMENT_START TM_INV NT_RA_EXPR TM_COMMENT_END
  {
    $$ = ($3);
  }
;

NT_WITH_COMMENT:
  TM_COMMENT_START TM_WITH NT_WITH_VAR_LIST TM_REQUIRE NT_RA_EXPR TM_ENSURE NT_RA_EXPR TM_COMMENT_END
  {
    $$ = (TAfuncdef($3,$5,$7));
  }
| TM_COMMENT_START TM_REQUIRE NT_RA_EXPR TM_ENSURE NT_RA_EXPR TM_COMMENT_END
  {
    $$ = (TAfuncdef(NULL,$3,$5));
  }
;

NT_WITH_VAR_LIST:
  TM_IDENT NT_WITH_VAR_LIST
  {
    $$ = (VLCons($1,$2));
  }
| TM_IDENT
  {
    $$ = (VLCons($1,VLNil()));
  }
;









NT_RA_EXPR:
  NT_UNOP_RA_EXPR
  {
    $$ = $1;
  }
| NT_RA_EXPR TM_PLUS NT_RA_EXPR
  {
    $$ = (RABinop(T_PLUS,$1,$3));
  }
| NT_RA_EXPR TM_MINUS NT_RA_EXPR
  {
    $$ = (RABinop(T_MINUS,$1,$3));
  }
| NT_RA_EXPR TM_STAR NT_RA_EXPR %prec TM_MUL
  {
    $$ = (RABinop(T_MUL,$1,$3));
  }
| NT_RA_EXPR TM_DIV NT_RA_EXPR
  {
    $$ = (RABinop(T_DIV,$1,$3));
  }
| NT_RA_EXPR TM_MOD NT_RA_EXPR
  {
    $$ = (RABinop(T_MOD,$1,$3));
  }
| NT_RA_EXPR TM_LT NT_RA_EXPR
  {
    $$ = (RABinop(T_LT,$1,$3));
  }
| NT_RA_EXPR TM_GT NT_RA_EXPR
  {
    $$ = (RABinop(T_GT,$1,$3));
  }
| NT_RA_EXPR TM_GE NT_RA_EXPR
  {
    $$ = (RABinop(T_GE,$1,$3));
  }
| NT_RA_EXPR TM_LE NT_RA_EXPR
  {
    $$ = (RABinop(T_LE,$1,$3));
  }
| NT_RA_EXPR TM_EQ NT_RA_EXPR
  {
    $$ = (RABinop(T_EQ,$1,$3));
  }
| NT_RA_EXPR TM_NE NT_RA_EXPR
  {
    $$ = (RABinop(T_NE,$1,$3));
  }
| NT_RA_EXPR TM_AND NT_RA_EXPR
  {
    $$ = (RABinop(T_AND,$1,$3));
  }
| NT_RA_EXPR TM_OR NT_RA_EXPR
  {
    $$ = (RABinop(T_OR,$1,$3));
  }
| NT_RA_EXPR TM_BAND NT_RA_EXPR
  {
    $$ = (RABinop(T_BAND,$1,$3));
  }
| NT_RA_EXPR TM_BOR NT_RA_EXPR
  {
    $$ = (RABinop(T_BOR,$1,$3));
  }
| NT_RA_EXPR TM_XOR NT_RA_EXPR
  {
    $$ = (RABinop(T_XOR,$1,$3));
  }
| NT_RA_EXPR TM_SHL NT_RA_EXPR
  {
    $$ = (RABinop(T_SHL,$1,$3));
  }
| NT_RA_EXPR TM_SHR NT_RA_EXPR
  {
    $$ = (RABinop(T_SHR,$1,$3));
  }
| TM_FORALL TM_IDENT TM_COMMA NT_RA_EXPR
  {
    $$ = (RAQfop(A_FORALL,$2,$4));
  }
| TM_EXISTS TM_IDENT TM_COMMA NT_RA_EXPR
  {
    $$ = (RAQfop(A_EXISTS,$2,$4));
  }
;

NT_UNOP_RA_EXPR:
  TM_MINUS NT_UNOP_RA_EXPR
  {
    $$ = (RAUnop(T_UMINUS,$2));
  }
| TM_PLUS NT_UNOP_RA_EXPR
  {
    $$ = (RAUnop(T_UPLUS,$2));
  }
| TM_NOTBOOL NT_UNOP_RA_EXPR
  {
    $$ = (RAUnop(T_NOTBOOL,$2));
  }
| TM_NOTINT NT_UNOP_RA_EXPR
  {
    $$ = (RAUnop(T_NOTINT,$2));
  }
| TM_LEFT_PAREN NT_TYPE NT_PTR TM_RIGHT_PAREN NT_UNOP_RA_EXPR
  {
    $$ = (RACast(TTypeExpr_Type($2,$3),$5));
  }
| TM_STAR NT_UNOP_RA_EXPR %prec TM_DEREF
  {
    $$ = (RADeref($2));
  }
| TM_BAND NT_UNOP_RA_EXPR %prec TM_ADDRES
  {
    $$ = (RAAddress($2));
  }
| NT_RA_EXPR_F
  {
    $$ = $1;
  }
;

NT_RA_EXPR_F:
  TM_NAT
  {
    $$ = (RAConst($1));
  }
| TM___RETURN
  {
    $$ = (RAVar("__return"));
  }
| TM_IDENT
  {
    $$ = (RAVar($1));
  }
| TM_IDENT NT_RA_FUNC_CALL
  { 
    $$ = (RACall($1,$2));
  }
| NT_RA_EXPR_F TM_LEFT_BRACK NT_RA_EXPR TM_RIGHT_BRACK
  {
    $$ = (RAIndex($1,$3));
  }
| NT_RA_EXPR_F TM_FIELDOF TM_IDENT
  {
    $$ = (RAFieldof($1,$3));
  }
| NT_RA_EXPR_F TM_FIELDOFPTR TM_IDENT
  {
    $$ = (RAFieldofptr($1,$3));
  }
| TM_LEFT_PAREN NT_RA_EXPR TM_RIGHT_PAREN
  {
    $$ = ($2);
  }
;


NT_RA_FUNC_CALL:
  TM_LEFT_PAREN TM_RIGHT_PAREN
  {
    $$ = NULL;
  }
| TM_LEFT_PAREN NT_RA_LIST TM_RIGHT_PAREN
  {
    $$ = ($2);
  }
;

NT_RA_LIST:
  NT_RA_EXPR TM_COMMA NT_RA_LIST
  {
    $$ = (RALCons($1,$3));
  }
| NT_RA_EXPR
  {
    $$ = (RALCons($1,RALNil()));
  }
;




NT_TYPE:
  TM_VOID
  {
    $$ = (TBasic(T_VOID));
  }
| TM_CHAR
  {
    $$ = (TBasic(T_CHAR));
  }
| TM_U8
  {
    $$ = (TBasic(T_U8));
  }
| TM_INT
  {
    $$ = (TBasic(T_INT));
  }
| TM_INT64
  {
    $$ = (TBasic(T_INT64));
  }
| TM_UINT
  {
    $$ = (TBasic(T_UINT));
  }
| TM_UINT64
  {
    $$ = (TBasic(T_UINT64));
  }
| TM_STRUCT TM_IDENT
  {
    $$ = (TStruct($2));
  }
| TM_UNION TM_IDENT
  {
    $$ = (TUnion($2));
  }
| TM_ENUM TM_IDENT
  {
    $$ = (TEnum($2));
  }
;


NT_EXPR:
  NT_UNOP_EXPR
  {
    $$ = $1;
  }
| NT_EXPR TM_PLUS NT_EXPR
  {
    $$ = (TBinop(T_PLUS,$1,$3));
  }
| NT_EXPR TM_MINUS NT_EXPR
  {
    $$ = (TBinop(T_MINUS,$1,$3));
  }
| NT_EXPR TM_STAR NT_EXPR  %prec TM_MUL
  {
    $$ = (TBinop(T_MUL,$1,$3));
  }
| NT_EXPR TM_DIV NT_EXPR
  {
    $$ = (TBinop(T_DIV,$1,$3));
  }
| NT_EXPR TM_MOD NT_EXPR
  {
    $$ = (TBinop(T_MOD,$1,$3));
  }
| NT_EXPR TM_LT NT_EXPR
  {
    $$ = (TBinop(T_LT,$1,$3));
  }
| NT_EXPR TM_GT NT_EXPR
  {
    $$ = (TBinop(T_GT,$1,$3));
  }
| NT_EXPR TM_LE NT_EXPR
  {
    $$ = (TBinop(T_LE,$1,$3));
  }
| NT_EXPR TM_GE NT_EXPR
  {
    $$ = (TBinop(T_GE,$1,$3));
  }
| NT_EXPR TM_EQ NT_EXPR
  {
    $$ = (TBinop(T_EQ,$1,$3));
  }
| NT_EXPR TM_NE NT_EXPR
  {
    $$ = (TBinop(T_NE,$1,$3));
  }
| NT_EXPR TM_AND NT_EXPR
  {
    $$ = (TBinop(T_AND,$1,$3));
  }
| NT_EXPR TM_OR NT_EXPR
  {
    $$ = (TBinop(T_OR,$1,$3));
  }
| NT_EXPR TM_BAND NT_EXPR
  {
    $$ = (TBinop(T_BAND,$1,$3));
  }
| NT_EXPR TM_BOR NT_EXPR
  {
    $$ = (TBinop(T_BOR,$1,$3));
  }
| NT_EXPR TM_XOR NT_EXPR
  {
    $$ = (TBinop(T_XOR,$1,$3));
  }
| NT_EXPR TM_SHL NT_EXPR
  {
    $$ = (TBinop(T_SHL,$1,$3));
  }
| NT_EXPR TM_SHR NT_EXPR
  {
    $$ = (TBinop(T_SHR,$1,$3));
  }
;

NT_UNOP_EXPR:
  TM_NOTBOOL NT_UNOP_EXPR
  {
    $$ = (TUnop(T_NOTBOOL,$2));
  }
| TM_NOTINT NT_UNOP_EXPR
  {
    $$ = (TUnop(T_NOTINT,$2));
  }
| TM_MINUS NT_UNOP_EXPR
  {
    $$ = (TUnop(T_UMINUS,$2));
  }
| TM_PLUS NT_UNOP_EXPR
  {
    $$ = (TUnop(T_UPLUS,$2));
  }
| TM_STAR NT_UNOP_EXPR %prec TM_DEREF
  {
    $$ = (TDeref($2));
  }
| TM_BAND NT_UNOP_EXPR
  {
    $$ = (TAddress($2));
  }
| TM_LEFT_PAREN NT_TYPE NT_PTR TM_RIGHT_PAREN NT_UNOP_EXPR
  {
    $$ = (TCast(TTypeExpr_Type($2,$3),$5));
  }
| NT_EXPR_F
  {
    $$ = $1;
  }
;

NT_EXPR_F:
  TM_NAT
  {
    $$ = (TConst($1));
  }
| TM_IDENT
  {
    $$ = (TVar($1));
  }
| TM_IDENT NT_FUNC_CALL
  {
    $$ = (TCall($1,$2));
  }
| TM_SIZEOF TM_LEFT_PAREN NT_TYPE NT_PTR TM_RIGHT_PAREN
  {
    $$ = (TSizeofType(TTypeExpr_Type($3,$4)));
  }
| TM_SIZEOF TM_LEFT_PAREN NT_TYPE TM_RIGHT_PAREN
  {
    $$ = (TSizeofType($3));
  }
| NT_EXPR_F TM_LEFT_BRACK NT_EXPR TM_RIGHT_BRACK
  {
    $$ = (TIndex($1,$3));
  }
| NT_EXPR_F TM_FIELDOF TM_IDENT
  {
    $$ = (TFieldof($1,$3));
  }
| NT_EXPR_F TM_FIELDOFPTR TM_IDENT
  {
    $$ = (TFieldofptr($1,$3));
  }
| TM_LEFT_PAREN NT_EXPR TM_RIGHT_PAREN
  {
    $$ = $2;
  }
;

NT_FUNC_CALL:
  TM_LEFT_PAREN TM_RIGHT_PAREN
  {
    $$ = (NULL);
  }
| TM_LEFT_PAREN NT_EXPR_LIST TM_RIGHT_PAREN
  {
    $$ = ($2);
  }
;

NT_EXPR_LIST:
  NT_EXPR TM_COMMA NT_EXPR_LIST
  {
    $$ = (ELCons($1,$3));
  }
| NT_EXPR
  {
    $$ = (ELCons($1,ELNil()));
  }
;

NT_PTR:
  TM_STAR NT_PTR
  {
    $$ = (TDeref($2));
  }
| TM_STAR
  {
    $$ = (TDeref(TVar(NULL)));
  }
| NT_PTR_A
  {
    $$ = $1;
  }
;

NT_PTR_A:
  NT_PTR_A TM_LEFT_BRACK NT_EXPR TM_RIGHT_BRACK
  {
    $$ = (TIndex($1,$3));
  }
| TM_LEFT_BRACK NT_EXPR TM_RIGHT_BRACK
  {
    $$ = (TIndex(TVar(NULL),$2));
  }
;

%%

void yyerror(char* s)
{
    fprintf(stderr , "%s\n",s);
}
