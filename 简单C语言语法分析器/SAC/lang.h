#ifndef LANG_H_INCLUDED
#define LANG_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

enum BasicType{
  T_VOID,                  
  T_CHAR,
  T_U8,
  T_INT,
  T_INT64,
  T_UINT,
  T_UINT64
};

enum DeclType{
  T_BASIC,
  T_STRUCT,
  T_UNION,
  T_ENUM,
  T_PTR,
  T_ARRAY
};

enum DefType{
  T_FUNCDEF,  //   function definition & function specification
  T_FUNCDEC,  //   function proto & function specification
  T_SEPDEF,  //  annotation for sep declartion 
  T_UNIONDEF, // definition of union
  T_ENUMDEF, // definition of enum
  T_STRUCTDEF // definition of struct
};

enum BinOpType {
  T_PLUS = 0,   // +
  T_MINUS,  // -
  T_MUL,    // *
  T_DIV,    // / 
  T_MOD,    // %
  T_LT,     // <
  T_GT,     // > 
  T_LE,     // <=
  T_GE,     // >=
  T_EQ,     // ==
  T_NE,     // !=
  T_AND,    // &&
  T_OR,     // ||
  T_BAND,   // &
  T_BOR,    // | 
  T_XOR,    // ^
  T_SHL,    // <<
  T_SHR     // >> 
};

enum UnOpType {
  T_UMINUS = 0,    // - 
  T_UPLUS,     // +
  T_NOTBOOL,   // !
  T_NOTINT    // ~
};

enum ExprType {
  T_CONST = 0,
  T_VAR,
  T_BINOP,
  T_UNOP,
  T_CAST,    // (C) E
  T_CALL,    //  function()
  T_DEREF,     // *e
  T_ADDRES,     // &e
  T_SIZEOFTYPE,  //sizeof()
  T_INDEX,    // a[i]
  T_FIELDOF,  // a.t
  T_FIELDOFPTR  // a->t
};

enum CaseType{
  T_CASE,
  T_DEFAULT
};

enum AssignType{
  T_ASSIGN = 0,        // =
  T_ADD_ASSIGN,    // +=
  T_SUB_ASSIGN,    // -=
  T_MUL_ASSIGN,    // *=
  T_DIV_ASSIGN,    // /=
  T_MOD_ASSIGN,    // %=
  T_BAND_ASSIGN,   // &=
  T_BOR_ASSIGN,    // |=
  T_XOR_ASSIGN,    // ^=
  T_SHL_ASSIGN,    // <<=
  T_SHR_ASSIGN     // >>=
};

enum IncDecType{
  T_INC_F,     // ++e
  T_INC_B,     // e++
  T_DEC_F,     // --e
  T_DEC_B     // e--
};

enum SimpleCmdType{
  T_COMPUTATION,  // 1; f();
  T_ASGN,
  T_INCDEC
};

enum CmdType {
  T_VARDECL = 0, // declare
  T_SIMPLE, // simplecmd
  T_SEQ,  // ;
  T_IF,
  T_SWITCH,
  T_WHILE,
  T_DOWHILE,
  T_FOR,
  T_BREAK,
  T_CONTINUE,
  T_RETURN,
  T_COMMENT // assert
};

struct expr;
struct expr_list;
struct cmd;
struct Case;
struct Case_list;
struct var_list;
struct root_list;
struct RAssertion;
struct RA_list;

struct type {
  enum DeclType t;
  union {
    struct {enum BasicType ty;} BASIC;
    struct {char *name;} STRUCT;
    struct {char *name;} UNION;
    struct {char *name;} ENUM;
    struct {struct type *ty;} PTR;
    struct {struct type *ty; struct expr *size;} ARRAY;
  } d;
};

struct type_list {
  struct type * head;
  struct type_list * tail;
};

enum LogicQuantifierType{
  A_FORALL,
  A_EXISTS
};

struct expr {
  enum ExprType t;
  union {
    struct {unsigned int value; } CONST;
    struct {char * name; } VAR;
    struct {enum BinOpType op; struct expr * left; struct expr * right; } BINOP;
    struct {enum UnOpType op; struct expr * arg; } UNOP;
    struct {struct expr *arg;} DEREF;     
    struct {struct expr *arg;} ADDRES;
    struct {struct type *ty; struct expr * arg; } CAST;
    struct {char *name; struct expr_list * args;} CALL;
    struct {struct type *ty;} SIZEOFTYPE;
    struct {struct expr *arg; struct expr *pos;} INDEX; 
    struct {struct expr *arg; char *name;} FIELDOF;
    struct {struct expr *arg; char *name;} FIELDOFPTR;
  } d;
};

struct expr_list {
  struct expr * head;
  struct expr_list * tail;
};

struct Afuncdef{
  struct var_list *with; 
  struct RAssertion *pre; 
  struct RAssertion *post;
}; // function specification

struct ASepdef{
  char *name;
  struct var_list *vars;
  struct RAssertion *conditions;
}; // annotation for sep declartion

struct var_dec {
  struct type *ty;
  char *name;
};

struct var_dec_list {
  struct var_dec * head;
  struct var_dec_list * tail;
};

struct field_dec {
  struct type *ty;
  char *field_name;
};

struct def {
  enum DefType t;
  union {
    struct {struct type *ty; char *name; struct var_dec_list *args; struct cmd * body; struct Afuncdef *funspec;} FUNCDEF;
    struct {struct type *ty; char *name; struct var_dec_list *args; struct Afuncdef *funspec;} FUNCDEC; 
    struct {struct ASepdef *sepdef;} SEPDEF; 
    struct {char *name; struct field_dec_list *union_def;} UNIONDEF;
    struct {char *name; struct enum_list *enum_def;} ENUMDEF;
    struct {char *name; struct field_dec_list  *struct_def;} STRUCTDEF;
  } d;
};


enum RootType {
  T_DEF,
  T_VARDEC
};

struct root {
  enum RootType t;
  union {
    struct def * DEF;
    struct var_dec * VARDEC;
  } d;
};

struct root_list {
  struct root * head;
  struct root_list * tail;
};

struct field_dec_list {
  struct field_dec *head;
  struct field_dec_list * tail;
};

struct enum_list {
  char *name;
  struct enum_list * tail;
};

enum RAssertionType {
  RA_CONST = 0,
  RA_VAR,
  RA_BINOP,
  RA_UNOP,
  RA_CAST,
  RA_CALL,
  RA_DEREF,     // *e
  RA_ADDRES,     // &e
  RA_INDEX,     // a[i]
  RA_FIELDOF,   // a.t
  RA_FIELDOFPTR,  // a->t
  RA_QFOP
};

struct RAssertion{
  enum RAssertionType t;
  union {
    struct {unsigned int value; } RACONST;
    struct {char * name; } RAVAR;
    struct {enum BinOpType op; struct RAssertion * left; struct RAssertion * right; } RABINOP;
    struct {enum UnOpType op; struct RAssertion * arg; } RAUNOP;
    struct {struct RAssertion *arg;} RADEREF;     
    struct {struct RAssertion *arg;} RAADDRES;
    struct {struct type *ty; struct RAssertion * arg; } RACAST;
    struct {char *name; struct RA_list * args;} RACALL;
    struct {struct RAssertion *arg; struct RAssertion *pos;} RAINDEX;
    struct {struct RAssertion *arg; char *name;} RAFIELDOF;
    struct {struct RAssertion *arg; char *name;} RAFIELDOFPTR;
    struct {enum LogicQuantifierType op; char *name; struct RAssertion *arg;} RAQFOP;
  } d;
};

struct RA_list {
  struct RAssertion *head;
  struct RA_list *tail;
};

struct simple_cmd {
  enum SimpleCmdType t;
  union {
    struct {struct expr *arg;} COMPUTATION;
    struct {enum AssignType op; struct expr *left; struct expr *right;} ASGN;
    struct {enum IncDecType op; struct expr *arg;} INCDEC; 
  } d;
};

struct cmd {
  enum CmdType t;
  union {
    struct {struct var_dec *decl;} VARDECL;
    struct {struct simple_cmd *scmd;} SIMPLE;
    struct {struct cmd * left; struct cmd * right; } SEQ;
    struct {struct expr * cond; struct cmd * left; struct cmd * right; } IF;
      // right = NULL if the if-else branch does not exist
    struct {struct RAssertion *inv; struct expr * cond; struct cmd * body;} WHILE;
      // inv = NULL if the loop has no invariant annotation
    struct {struct expr *cond; struct Case_list * body;} SWITCH;
    struct {struct RAssertion *inv; struct expr * cond; struct cmd * body;} DOWHILE;
      // inv = NULL if the loop has no invariant annotation
    struct {struct RAssertion *inv; struct simple_cmd *init; struct expr *cond; struct simple_cmd *incr; struct cmd *body;} FOR;
      // inv = NULL if the loop has no invariant annotation
    struct {void * none;} BREAK;
    struct {void * none;} CONTINUE;
    struct {struct expr *arg;} RETURN;
      // arg = NULL if the return command does not have a return value
    struct {struct RAssertion *asrt;} COMMENT;
  } d;
};

struct Case {
  enum CaseType t;
  union {
    struct {struct expr *cond; struct cmd *body;} CASE;
    struct {struct cmd *body;} DEFAULT; 
  } d;
};

struct Case_list{
  struct Case *head;
  struct Case_list *tail;
};

struct var_list {
  char * head;
  struct var_list * tail;
};

enum FuncExprType {
  T_FUNCDEREF,
  T_NAME_FUNCDEC,
  T_NAME_FUNCDEF
};

struct func_expr {
  enum FuncExprType t;
  union {
    struct { struct func_expr * func; } FUNCDEREF;
    struct { char * name ; struct type_list * tyl; } NAME_FUNCDEC;
    struct { char * name ; struct var_dec_list * vdl; } NAME_FUNCDEF;
  }d;
};


struct type * TTypeExpr_Type(struct type * ty, struct expr * arg);
char * TTypeExpr_Char(struct type * ty, struct expr * arg);
struct field_dec * TTypeExpr_Field(struct type * ty,struct expr * arg);
struct var_dec * TTypeExpr_VD(struct type * ty, struct expr * arg);

struct type * TTypeFuncExpr_Type(struct type * ty,struct func_expr * fe);
char * TFuncExpr_Char(struct func_expr * fe);
struct type_list * TFuncExpr_TypeList(struct func_expr * fe);
struct var_dec_list * TFuncExpr_VardecList(struct func_expr * fe);
struct func_expr * TFuncDeref(struct func_expr * fe);
struct func_expr * TNameFuncDec(char * name,struct type_list * tyl);
struct func_expr * TNameFuncDef(char * name,struct var_dec_list * vdl);

struct type * TBasic(enum BasicType ty);
struct type * TStruct(char *name);
struct type * TUnion(char *name);
struct type * TEnum(char *name);
struct type * TPtr(struct type *ty);
struct type * TArray(struct type *ty, struct expr *size);

struct expr * TConst(unsigned int value);
struct expr * TVar(char * name);
struct expr * TBinop(enum BinOpType op, struct expr * left, struct expr * right);
struct expr * TUnop(enum UnOpType op, struct expr * arg);
struct expr * TDeref(struct expr * arg);
struct expr * TAddress(struct expr * arg);
struct expr * TCast(struct type *ty, struct expr *arg);
struct expr * TCall(char * name, struct expr_list * args);
struct expr * TSizeofType(struct type * ty);
struct expr * TIndex(struct expr *arg, struct expr *pos);
struct expr * TFieldof(struct expr *arg, char *name);
struct expr * TFieldofptr(struct expr *arg, char *name);

struct expr_list * ELNil();
struct expr_list * ELCons(struct expr * head, struct expr_list * tail);

struct Afuncdef * TAfuncdef (struct var_list *with, struct RAssertion *pre, struct RAssertion *post);
struct ASepdef * TAsepdef (char *name, struct var_list *vars, struct RAssertion *conditions);

struct def * TFuncdef(struct type *ty, char *name, struct var_dec_list *args, struct cmd * body, struct Afuncdef *funspec);
struct def * TFuncdec(struct type *ty, char *name, struct var_dec_list *args, struct Afuncdef *funspec);
struct def * TSepdef(struct ASepdef *sepdef);
struct def * TUniondef(char * name, struct field_dec_list * union_def);
struct def * TEnumdef(char * name, struct enum_list * enum_def);
struct def * TStructdef(char * name, struct field_dec_list * struct_def);

struct root * TDefroot(struct def * def);
struct root * TVarroot(struct var_dec * def);

struct field_dec_list * FDLNil();
struct field_dec_list * FDLCons(struct field_dec * head, struct field_dec_list * tail);

struct root_list * RTLNil();
struct root_list * RTLCons(struct root * head, struct root_list * tail);

struct enum_list * ENLNil();
struct enum_list * ENLCons(char *name, struct enum_list *tail);


struct simple_cmd * TComputation (struct expr *arg);
struct simple_cmd * TAsgn(enum AssignType op, struct expr *left, struct expr *right);
struct simple_cmd * TIncDec (enum IncDecType op, struct expr *arg);

struct cmd * TVarDecl(struct var_dec *decl);
struct cmd * TSimple(struct simple_cmd *scmd);
struct cmd * TSeq(struct cmd * left, struct cmd * right);
struct cmd * TIf(struct expr * cond, struct cmd * left, struct cmd * right);
struct cmd * TSwitch(struct expr *cond, struct Case_list * body);
struct cmd * TWhile(struct RAssertion *inv, struct expr * cond, struct cmd * body);
struct cmd * TDoWhile(struct RAssertion *inv, struct expr * cond, struct cmd * body);
struct cmd * TFor(struct RAssertion *inv, struct simple_cmd *init, struct expr *cond, struct simple_cmd *incr, struct cmd *body);
struct cmd * TBreak();
struct cmd * TContinue();
struct cmd * TReturn(struct expr *arg);
struct cmd * TComment(struct RAssertion *asrt);


struct Case * TCase(struct expr *cond, struct cmd *body);
struct Case * TDefault(struct cmd *body);
struct Case_list * CLNil();
struct Case_list * CLCons(struct Case * head, struct Case_list * tail);

struct var_list * VLNil();
struct var_list * VLCons(char * head, struct var_list * tail);

struct var_dec_list * VDLNil();
struct var_dec_list * VDLCons(struct var_dec * head,struct var_dec_list * tail);
struct type_list * TYLNil();
struct type_list * TYLCons(struct type * head,struct type_list * tail);

struct RAssertion * RAConst(unsigned int value);
struct RAssertion * RAVar(char * name);
struct RAssertion * RABinop(enum BinOpType op, struct RAssertion * left, struct RAssertion * right);
struct RAssertion * RAUnop(enum UnOpType op, struct RAssertion * arg);
struct RAssertion * RADeref(struct RAssertion * arg);
struct RAssertion * RAAddress(struct RAssertion * arg);
struct RAssertion * RACast(struct type *ty, struct RAssertion *arg);
struct RAssertion * RACall(char * name, struct RA_list * args);
struct RAssertion * RAIndex(struct RAssertion *arg, struct RAssertion *pos);
struct RAssertion * RAFieldof(struct RAssertion *arg, char *name);
struct RAssertion * RAFieldofptr(struct RAssertion *arg, char *name);
struct RAssertion * RAQfop (enum LogicQuantifierType op, char *name, struct RAssertion *arg);

struct RA_list * RALNil();
struct RA_list * RALCons(struct RAssertion * head, struct RA_list * tail);


struct func_expr * TFuncDeref(struct func_expr * fe);

int build_nat(char * c, int len) ;
char * new_str(char * str, int len) ;

void print_root_list(struct root_list *rl);
void print_expr(struct expr * ex,char * pcmd);
#endif // LANG_H_INCLUDED
