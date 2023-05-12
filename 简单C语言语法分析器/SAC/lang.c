#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lang.h"

struct expr * new_expr_ptr() {
  struct expr * res = (struct expr *) malloc(sizeof(struct expr));
  if (res == NULL) {
    printf("Failure in malloc expr.\n");
    exit(0);
  }
  return res;
}
struct RAssertion * new_ra_ptr() {
    struct RAssertion * res = (struct RAssertion *) malloc(sizeof(struct RAssertion));
    if (res == NULL) {
        printf("Failure in malloc RAssertion.\n");
        exit(0);
    }
    return res;
}
struct cmd * new_cmd_ptr() {
  struct cmd * res = (struct cmd *) malloc(sizeof(struct cmd));
  if (res == NULL) {
    printf("Failure in malloc cmd.\n");
    exit(0);
  }
  return res;
}
struct Case * new_case_ptr() {
    struct Case * res = (struct Case *) malloc(sizeof(struct Case));
    if (res == NULL) {
        printf("Failure in malloc Case.\n");
        exit(0);
    }
    return res;
}
struct simple_cmd * new_simple_cmd_ptr() {
    struct simple_cmd * res = (struct simple_cmd *) malloc(sizeof(struct simple_cmd));
    if (res == NULL) {
        printf("Faliure in malloc simple_cmd.\n");
        exit(0);
    }
    return res;
}
struct root * new_root_ptr() {
    struct root * res = (struct root *) malloc(sizeof(struct root));
    if (res == NULL) {
        printf("Failure in malloc root.\n");
        exit(0);
    }
    return res;
}
struct def * new_def_ptr() {
    struct def * res = (struct def *) malloc(sizeof(struct def));
    if (res == NULL) {
        printf("Failuer in malloc def.\n");
        exit(0);
    }
    return res;
}
struct var_dec * new_var_dec_ptr(){
    struct var_dec * res = (struct var_dec *) malloc(sizeof(struct var_dec));
    if (res == NULL) {
        printf("Failuer in malloc var_dec.\n");
        exit(0);
    }
    res->ty = (struct type *) malloc(sizeof(struct type));
    res->name = (char *) malloc(sizeof(char));
    if (res == NULL) {
        printf("Failuer in malloc var_dec.\n");
        exit(0);
    }
    return res;
}
struct type * new_type_ptr(){
    struct type * res = (struct type *) malloc(sizeof(struct type));
    if (res == NULL) {
        printf("Failure in malloc type.\n");
        exit(0);
    }
    return res;
}
struct field_dec * new_field_dec_ptr(){
    struct field_dec * res = (struct field_dec *) malloc(sizeof(struct field_dec));
    if (res == NULL) {
        printf("Failuer in malloc field_dec.\n");
        exit(0);
    }
    res->ty = (struct type *) malloc(sizeof(struct type));
    res->field_name = (char *) malloc(sizeof(char));
    if (res == NULL) {
        printf("Failuer in malloc field_dec.\n");
        exit(0);
    }
    return res;
}
struct func_expr * new_func_expr_ptr(){
    struct func_expr * res = (struct func_expr *) malloc(sizeof(struct func_expr));
    if (res == NULL) {
        printf("Failure in malloc func_expr.\n");
        exit(0);
    }
    return res;
}
struct type * TTypeExpr_Type(struct type * ty, struct expr * arg){
    struct type * _ty = new_type_ptr();
    if (arg->t == T_VAR) {
        return ty;
    }
    if (arg->t == T_DEREF) {
        _ty->t = T_PTR;
        _ty->d.PTR.ty = ty;
        return TTypeExpr_Type(_ty, arg->d.DEREF.arg);
    }
    if (arg->t == T_INDEX){
        _ty->t = T_ARRAY;
        _ty->d.ARRAY.ty = ty;
        _ty->d.ARRAY.size = arg->d.INDEX.pos;
        return TTypeExpr_Type(_ty, arg->d.INDEX.arg);
    }
    // else {
    //     return ty;
    //     // print_expr(arg,"");
    //     // printf("\nWrong in type-expr trans to type-char");
    // }
    // exit(0);
    return ty;
}

char * TTypeExpr_Char(struct type * ty, struct expr * arg){
    struct type * _ty = new_type_ptr();
    if (arg->t == T_VAR) {
        return arg->d.VAR.name;
    }
    if (arg->t == T_DEREF) {
        _ty->t = T_PTR;
        _ty->d.PTR.ty = ty;
        return TTypeExpr_Char(_ty, arg->d.DEREF.arg);
    }
    if (arg->t == T_INDEX){
        _ty->t = T_ARRAY;
        _ty->d.ARRAY.ty = ty;
        _ty->d.ARRAY.size = arg->d.INDEX.pos;
        return TTypeExpr_Char(_ty, arg->d.INDEX.arg);
    }
    if (arg->t == T_CALL){
        return arg->d.CALL.name;
    }
    else {
        printf("%d\n",arg->t);
        printf("Wrong in type-expr trans to type-char");
    }
    exit(0);
    return  arg->d.VAR.name;
}
struct field_dec * TTypeExpr_Field(struct type * ty,struct expr * arg){
    struct field_dec * res = new_field_dec_ptr();
    res->ty = TTypeExpr_Type(ty,arg);
    res->field_name = TTypeExpr_Char(ty,arg);
    return res;
}
struct var_dec * TTypeExpr_VD(struct type * ty, struct expr * arg){
    struct var_dec * res = new_var_dec_ptr();
    res->name = TTypeExpr_Char(ty, arg);
    res->ty = TTypeExpr_Type(ty, arg);
    return res;
}

// struct type_list * TTypeExpr_TypeList(struct type * ty,struct expr * arg){
//     struct type_list * res = (struct type_list *) malloc(sizeof( struct type_list));
//     if (res == NULL) {
//         printf("Failure in malloc type_list.\n");
//         exit(0);
//     }
//     if (arg->t == T_VAR) {
//         return ty;
//     }
//     if (arg->t == T_DEREF) {
//         _ty->t = T_PTR;
//         _ty->d.PTR.ty = ty;
//         return TTypeExpr_Type(_ty, arg->d.DEREF.arg);
//     }
//     if (arg->t == T_INDEX){
//         _ty->t = T_ARRAY;
//         _ty->d.ARRAY.ty = ty;
//         _ty->d.ARRAY.size = arg->d.INDEX.pos;
//         return TTypeExpr_Type(_ty, arg->d.INDEX.arg);
//     }
//     // else {
//     //     return ty;
//     //     // print_expr(arg,"");
//     //     // printf("\nWrong in type-expr trans to type-char");
//     // }
//     // exit(0);
//     return ty;
// }




struct type * TBasic(enum BasicType ty){
    struct type * res = new_type_ptr();
    res->t = T_BASIC;
    res->d.BASIC.ty = ty;
    return res;
}
struct type * TStruct(char *name){
    struct type * res = new_type_ptr();
    res->t = T_STRUCT;
    res->d.STRUCT.name = name;
    return res;
}
struct type * TUnion(char *name){
    struct type * res = new_type_ptr();
    res->t = T_UNION;
    res->d.UNION.name = name;
    return res;
}
struct type * TEnum(char *name){
    struct type * res = new_type_ptr();
    res->t = T_ENUM;
    res->d.ENUM.name = name;
    return res;
}
struct type * TPtr(struct type *ty){
    struct type * res = new_type_ptr();
    res->t = T_PTR;
    res->d.PTR.ty = ty;
    return res;
}
struct type * TArray(struct type *ty, struct expr *size){
    struct type * res = new_type_ptr();
    res->t = T_ARRAY;
    res->d.ARRAY.size = size;
    res->d.ARRAY.ty = ty;
    return res;
}

struct expr * TConst(unsigned int value){
    struct expr * res = new_expr_ptr();
    res->t = T_CONST;
    res->d.CONST.value = value;
    return res;
}
struct expr * TVar(char * name){
    struct expr * res =  new_expr_ptr();
    res->t = T_VAR;
    res->d.VAR.name = name;
    return res;
}
struct expr * TBinop(enum BinOpType op, struct expr * left, struct expr * right){
    struct expr * res = new_expr_ptr();
    res->t = T_BINOP;
    res->d.BINOP.left = left;
    res->d.BINOP.op = op;
    res->d.BINOP.right = right;
    return res;
}
struct expr * TUnop(enum UnOpType op, struct expr * arg){
    struct expr * res = new_expr_ptr();
    res->t = T_UNOP;
    res->d.UNOP.arg = arg;
    res->d.UNOP.op = op;
    return res;
}
struct expr * TDeref(struct expr * arg){
    struct expr * res = new_expr_ptr();
    res->t = T_DEREF;
    res->d.DEREF.arg = arg;
    return res;
}
struct expr * TAddress(struct expr * arg){
    struct expr * res = new_expr_ptr();
    res->t = T_ADDRES;
    res->d.ADDRES.arg = arg;
    return res;
}
struct expr * TCast(struct type *ty, struct expr *arg){
    struct expr * res = new_expr_ptr();
    res->t = T_CAST;
    res->d.CAST.arg = arg;
    res->d.CAST.ty = ty;
    return res;
}
struct expr * TCall(char * name, struct expr_list * args){
    struct expr * res = new_expr_ptr();
    res->t = T_CALL;
    res->d.CALL.args = args;
    res->d.CALL.name = name;
    return res;
}
struct expr * TSizeofType(struct type * ty){
    struct expr * res = new_expr_ptr();
    res->t = T_SIZEOFTYPE;
    res->d.SIZEOFTYPE.ty = ty;
    return res;
}
struct expr * TIndex(struct expr *arg, struct expr *pos){
    struct expr * res = new_expr_ptr();
    res->t = T_INDEX;
    res->d.INDEX.arg = arg;
    res->d.INDEX.pos = pos;
    return res;
}
struct expr * TFieldof(struct expr *arg, char *name){
    struct expr * res = new_expr_ptr();
    res->t = T_FIELDOF;
    res->d.FIELDOF.arg = arg;
    res->d.FIELDOF.name = name;
    return res;
}
struct expr * TFieldofptr(struct expr *arg, char *name){
    struct expr * res = new_expr_ptr();
    res->t = T_FIELDOFPTR;
    res->d.FIELDOFPTR.arg = arg;
    res->d.FIELDOFPTR.name = name;
    return res;
}

struct expr_list * ELNil(){
    return NULL;
    struct expr_list * res = (struct expr_list *) malloc (sizeof(struct expr_list));
    if (res == NULL) {
        printf("Failure in malloc expr_list.\n");
        exit(0);
    }
    res->head = new_expr_ptr();
    res->tail = (struct expr_list *) malloc (sizeof(struct expr_list));
    if (res->tail == NULL) {
        printf("Failure in malloc expr_list.\n");
        exit(0);
    }
    return res;
}
struct expr_list * ELCons(struct expr * head, struct expr_list * tail){
    struct expr_list * res = (struct expr_list *) malloc (sizeof(struct expr_list));
    if (res == NULL) {
        printf("Failure in malloc expr_list.\n");
        exit(0);
    }
    res->head = head;
    res->tail = tail;
    return res;
}

struct Afuncdef * TAfuncdef (struct var_list *with, struct RAssertion *pre, struct RAssertion *post){
    struct Afuncdef * res = (struct Afuncdef *) malloc(sizeof(struct Afuncdef));
    if (res == NULL) {
        printf("Failure in malloc Afundef.\n");
        exit(0);
    }
    res->with = with;
    res->post = post;
    res->pre = pre;
    return res;
}//With
struct ASepdef * TAsepdef (char *name, struct var_list *vars, struct RAssertion *conditions){
    struct ASepdef * res = (struct ASepdef *) malloc(sizeof(struct ASepdef));
    if (res == NULL) {
        printf("Failure in malloc ASepdef.\n");
        exit(0);
    }
    res->name = name;
    res->conditions = conditions;
    res->vars = vars;
    return res;
}//Let

struct def * TFuncdef(struct type *ty, char *name, struct var_dec_list *args, struct cmd * body, struct Afuncdef *funspec){
    struct def * res = new_def_ptr();
    res->t = T_FUNCDEF;
    res->d.FUNCDEF.ty = ty;
    res->d.FUNCDEF.name = name;
    res->d.FUNCDEF.args = args;
    res->d.FUNCDEF.funspec = funspec;
    res->d.FUNCDEF.body = body;
    return res;
}
struct def * TFuncdec(struct type *ty, char *name, struct var_dec_list *args, struct Afuncdef *funspec){
    struct def * res = new_def_ptr();
    res->t = T_FUNCDEC;
    res->d.FUNCDEC.ty = ty;
    res->d.FUNCDEC.name = name;
    res->d.FUNCDEC.args = args;
    res->d.FUNCDEC.funspec = funspec;
    return res;
}
struct def * TSepdef(struct ASepdef *sepdef){
    struct def * res = new_def_ptr();
    res->t = T_SEPDEF;
    res->d.SEPDEF.sepdef = sepdef;
    return res;
}
struct def * TUniondef(char * name, struct field_dec_list * union_def){
    struct def * res = new_def_ptr();
    res->t = T_UNIONDEF;
    res->d.UNIONDEF.name = name;
    res->d.UNIONDEF.union_def = union_def;
    return res;
}
struct def * TEnumdef(char * name, struct enum_list * enum_def){
    struct def * res = new_def_ptr();
    res->t = T_ENUMDEF;
    res->d.ENUMDEF.enum_def = enum_def;
    res->d.ENUMDEF.name = name;
    return res;
}
struct def * TStructdef(char * name, struct field_dec_list * struct_def){
    struct def * res = new_def_ptr();
    res->t = T_STRUCTDEF;
    res->d.STRUCTDEF.struct_def = struct_def;
    res->d.STRUCTDEF.name = name;
    return  res;
}

struct root * TDefroot(struct def * def){
    struct root * res = new_root_ptr();
    res->t = T_DEF;
    res->d.DEF = def; 
    return res;
}
struct root * TVarroot(struct var_dec * var){
    struct root * res = new_root_ptr();
    res->t = T_VARDEC;
    res->d.VARDEC = var;
    return res;
}

struct field_dec_list * FDLNil(){
    return NULL;
    struct field_dec_list * res = (struct field_dec_list *) malloc (sizeof(struct field_dec_list));
    if (res == NULL) {
        printf("Failure in malloc field_dec_list.\n");
        exit(0);
    }
    res->head = new_field_dec_ptr();
    res->tail = (struct field_dec_list *) malloc (sizeof(struct field_dec_list));
    if (res->tail == NULL) {
        printf("Failure in malloc field_dec_list.\n");
        exit(0);
    }
    return res;
}
struct field_dec_list * FDLCons(struct field_dec * head, struct field_dec_list * tail){
    struct field_dec_list * res = (struct field_dec_list *) malloc (sizeof(struct field_dec_list));
    if (res == NULL) {
        printf("Failure in malloc field_dec_list.\n");
        exit(0);
    }
    res->head = head;
    res->tail = tail;
    return res;
}

struct root_list * RTLNil(){
    return NULL;
    struct root_list * res = (struct root_list *) malloc(sizeof(struct root_list));
    if (res == NULL) {
        printf("Failuer in malloc root_list.\n");
        exit(0);
    }
    res->head = new_root_ptr();
    res->tail = (struct root_list *) malloc(sizeof(struct root_list));
    if (res->tail == NULL) {
        printf("Failuer in malloc root_list.\n");
        exit(0);
    }
    return res;
}
struct root_list * RTLCons(struct root *head, struct root_list *tail){
    struct root_list * res = (struct root_list *) malloc(sizeof(struct root_list));
    if (res == NULL) {
        printf("Failuer in malloc root_list.\n");
        exit(0);
    }
    res->head = head;
    res->tail = tail;
    return res;
}

struct enum_list * ENLNil(){
    return NULL;
    struct enum_list * res = (struct enum_list *) malloc(sizeof(struct enum_list));
    if (res == NULL) {
        printf("Failure in malloc enum_list.\n");
        exit(0);
    }
    res->name = (char *) malloc(sizeof(char *));
    res->tail = (struct enum_list * ) malloc(sizeof(struct enum_list));
    if (res->name == NULL || res->tail == NULL) {
        printf("Failure in malloc enum_list.\n");
        exit(0);
    }
    return res;
}
struct enum_list * ENLCons(char *name, struct enum_list *tail){
    struct enum_list * res = (struct enum_list *) malloc(sizeof(struct enum_list));
    if (res == NULL) {
        printf("Failure in malloc enum_list.\n");
        exit(0);
    }
    res->name = name;
    res->tail = tail;
    return res;
}


struct simple_cmd * TComputation (struct expr *arg){
    struct simple_cmd * res = new_simple_cmd_ptr();
    res->t = T_COMPUTATION;
    res->d.COMPUTATION.arg = arg;
    return res;
}
struct simple_cmd * TAsgn(enum AssignType op, struct expr *left, struct expr *right){
    struct simple_cmd * res = new_simple_cmd_ptr();
    res->t = T_ASGN;
    res->d.ASGN.op = op;
    res->d.ASGN.left = left;
    res->d.ASGN.right = right;
    return res;
}
struct simple_cmd * TIncDec (enum IncDecType op, struct expr *arg){
    struct simple_cmd * res = new_simple_cmd_ptr();
    res->t = T_INCDEC;
    res->d.INCDEC.op = op;
    res->d.INCDEC.arg = arg;
    return res;
}

struct cmd * TVarDecl(struct var_dec *decl){
    struct cmd * res = new_cmd_ptr();
    res->t = T_VARDECL;
    res->d.VARDECL.decl = decl;
    return res;
}
struct cmd * TSimple(struct simple_cmd *scmd){
    struct cmd * res = new_cmd_ptr();
    res->t = T_SIMPLE;
    res->d.SIMPLE.scmd = scmd;
    return res;
}
struct cmd * TSeq(struct cmd * left, struct cmd * right){
    struct cmd * res = new_cmd_ptr();
    res->t = T_SEQ;
    res->d.SEQ.left = left;
    res->d.SEQ.right = right;
    return res;
}
struct cmd * TIf(struct expr * cond, struct cmd * left, struct cmd * right){
    struct cmd * res = new_cmd_ptr();
    res->t = T_IF;
    res->d.IF.cond = cond;
    res->d.IF.left = left;
    res->d.IF.right = right;
    return res;
}
struct cmd * TSwitch(struct expr *cond, struct Case_list * body){
    struct cmd * res = new_cmd_ptr();
    res->t = T_SWITCH;
    res->d.SWITCH.cond = cond;
    res->d.SWITCH.body = body;
    return res;
}
struct cmd * TWhile(struct RAssertion *inv, struct expr * cond, struct cmd * body){
    struct cmd * res = new_cmd_ptr();
    res->t = T_WHILE;
    res->d.WHILE.inv = inv;
    res->d.WHILE.cond = cond;
    res->d.WHILE.body = body;
    return res;
}
struct cmd * TDoWhile(struct RAssertion *inv, struct expr * cond, struct cmd * body){
    struct cmd * res = new_cmd_ptr();
    res->t = T_DOWHILE;
    res->d.DOWHILE.inv = inv;
    res->d.DOWHILE.cond = cond;
    res->d.DOWHILE.body = body;
    return res;
}
struct cmd * TFor(struct RAssertion *inv, struct simple_cmd *init, struct expr *cond, struct simple_cmd *incr, struct cmd *body){
    struct cmd * res = new_cmd_ptr();
    res->t = T_FOR;
    res->d.FOR.inv = inv;
    res->d.FOR.init = init;
    res->d.FOR.cond = cond;
    res->d.FOR.incr = incr;
    res->d.FOR.body = body;
    return res;
}
struct cmd * TBreak(){
    struct cmd * res = new_cmd_ptr();
    res->t = T_BREAK;
    return res;
}
struct cmd * TContinue(){
    struct cmd * res = new_cmd_ptr();
    res->t = T_CONTINUE;
    return res;
}
struct cmd * TReturn(struct expr *arg){
    struct cmd * res = new_cmd_ptr();
    res->t = T_RETURN;
    res->d.RETURN.arg = arg;
    return res;
}
struct cmd * TComment(struct RAssertion *asrt){
    struct cmd * res = new_cmd_ptr();
    res->t = T_COMMENT;
    res->d.COMMENT.asrt = asrt;
    return res;
}


struct Case * TCase(struct expr *cond, struct cmd *body){
    struct Case * res = new_case_ptr();
    res->t = T_CASE;
    res->d.CASE.cond = cond;
    res->d.CASE.body = body;
    return res;
}
struct Case * TDefault(struct cmd *body){
    struct Case * res = new_case_ptr();
    res->t = T_DEFAULT;
    res->d.DEFAULT.body = body;
    return res;
}
struct Case_list * CLNil(){
    return NULL;
    struct Case_list * res = (struct Case_list *) malloc(sizeof(struct Case_list));
    if (res == NULL) {
        printf("Failure in malloc case_list.\n");
        exit(0);
    }
    res->head = new_case_ptr();
    res->tail = (struct Case_list *) malloc(sizeof(struct Case_list));
    if (res->tail == NULL) {
        printf("Failure in malloc case_list.\n");
        exit(0);
    }
    return res;
}
struct Case_list * CLCons(struct Case * head, struct Case_list * tail){
    struct Case_list * res = (struct Case_list *) malloc(sizeof(struct Case_list));
    if (res == NULL) {
        printf("Failure in malloc case_list.\n");
        exit(0);
    }
    res->head = head;
    res->tail = tail;
    return res;
}

struct var_list * VLNil(){
    return NULL;
    struct var_list * res = (struct var_list *) malloc(sizeof(struct var_list));
    if (res == NULL) {
        printf("Failure in malloc var_list.\n");
        exit(0);
    }
    res->head = (char *) malloc(sizeof(char));
    res->tail = (struct var_list *) malloc(sizeof(struct var_list));;
    if (res->tail == NULL) {
        printf("Failure in malloc var_list.\n");
        exit(0);
    }
    return res;
}
struct var_list * VLCons(char * head, struct var_list * tail){
    struct var_list * res = (struct var_list *) malloc(sizeof(struct var_list));
    if (res == NULL) {
        printf("Failure in malloc var_list.\n");
        exit(0);
    }
    res->head = head;
    res->tail = tail;
    return res;
}

struct var_dec_list * VDLNil(){
    return NULL;
    struct var_dec_list * res = (struct var_dec_list *) malloc(sizeof(struct var_dec_list));
    if (res == NULL) {
        printf("Failure in malloc var_dec_list.\n");
        exit(0);
    }
    res->head = new_var_dec_ptr();
    res->tail = (struct var_dec_list *) malloc(sizeof(struct var_dec_list));
    if (res->tail == NULL) {
        printf("Failure in malloc var_dec_list.\n");
        exit(0);
    }
    return res;
}
struct var_dec_list * VDLCons(struct var_dec * head,struct var_dec_list * tail){
    struct var_dec_list * res = (struct var_dec_list *) malloc(sizeof(struct var_dec_list));
    if (res == NULL) {
        printf("Failure in malloc var_dec_list.\n");
        exit(0);
    }
    res->head = head;
    res->tail = tail;
    return res;
}

struct type_list * TYLNil(){
    return NULL;
    struct type_list * res = (struct type_list *) malloc(sizeof( struct type_list));
    if (res == NULL) {
        printf("Failure in malloc type_list.\n");
        exit(0);
    }
    res->head = new_type_ptr();
    res->tail = (struct type_list *) malloc(sizeof( struct type_list));
    if (res->tail == NULL) {
        printf("Failure in malloc type_list.\n");
        exit(0);
    }
    return res;
}
struct type_list * TYLCons(struct type * head,struct type_list * tail){
    struct type_list * res = (struct type_list *) malloc(sizeof( struct type_list));
    if (res == NULL) {
        printf("Failure in malloc type_list.\n");
        exit(0);
    }
    res->head = head;
    res->tail = tail;
    return res;
}


struct RAssertion * RAConst(unsigned int value){
    struct RAssertion * res = new_ra_ptr();
    res->t = RA_CONST;
    res->d.RACONST.value = value;
    return res;
}
struct RAssertion * RAVar(char * name){
    struct RAssertion * res = new_ra_ptr();
    res->t = RA_VAR;
    res->d.RAVAR.name = name;
    return res;
}
struct RAssertion * RABinop(enum BinOpType op, struct RAssertion * left, struct RAssertion * right){
    struct RAssertion * res = new_ra_ptr();
    res->t = RA_BINOP;
    res->d.RABINOP.op = op;
    res->d.RABINOP.left = left;
    res->d.RABINOP.right = right;
    return res;
}
struct RAssertion * RAUnop(enum UnOpType op, struct RAssertion * arg){
    struct RAssertion * res = new_ra_ptr();
    res->t = RA_UNOP;
    res->d.RAUNOP.arg = arg;
    res->d.RAUNOP.op = op;
    return res;
}
struct RAssertion * RADeref(struct RAssertion * arg){
    struct RAssertion * res = new_ra_ptr();
    res->t = RA_DEREF;
    res->d.RADEREF.arg = arg;
    return res;
}
struct RAssertion * RAAddress(struct RAssertion * arg){
    struct RAssertion * res = new_ra_ptr();
    res->t = RA_ADDRES;
    res->d.RAADDRES.arg = arg;
    return res;
}
struct RAssertion * RACast(struct type *ty, struct RAssertion *arg){
    struct RAssertion * res = new_ra_ptr();
    res->t = RA_CAST;
    res->d.RACAST.arg = arg;
    res->d.RACAST.ty = ty;
    return res;
}
struct RAssertion * RACall(char * name, struct RA_list * args){
    struct RAssertion * res = new_ra_ptr();
    res->t = RA_CALL;
    res->d.RACALL.args = args;
    res->d.RACALL.name = name;
    return res;
}
struct RAssertion * RAIndex(struct RAssertion *arg, struct RAssertion *pos){
    struct RAssertion * res = new_ra_ptr();
    res->t = RA_INDEX;
    res->d.RAINDEX.arg = arg;
    res->d.RAINDEX.pos = pos;
    return res;
}
struct RAssertion * RAFieldof(struct RAssertion *arg, char *name){
    struct RAssertion * res = new_ra_ptr();
    res->t = RA_FIELDOF;
    res->d.RAFIELDOF.arg = arg;
    res->d.RAFIELDOF.name = name;
    return res;
}
struct RAssertion * RAFieldofptr(struct RAssertion *arg, char *name){
    struct RAssertion * res = new_ra_ptr();
    res->t = RA_FIELDOFPTR;
    res->d.RAFIELDOFPTR.arg = arg;
    res->d.RAFIELDOFPTR.name = name;
    return res;
}
struct RAssertion * RAQfop (enum LogicQuantifierType op, char *name, struct RAssertion *arg){
    struct RAssertion * res = new_ra_ptr();
    res->t = RA_QFOP;
    res->d.RAQFOP.arg = arg;
    res->d.RAQFOP.name = name;
    res->d.RAQFOP.op = op;
    return res;
}

struct RA_list * RALNil(){
    return NULL;
    struct RA_list * res = (struct RA_list *) malloc(sizeof(struct RA_list));
    if (res == NULL) {
        printf("Failure in malloc RA_list.\n");
        exit(0);
    }
    res->head = new_ra_ptr();
    res->tail = (struct RA_list *) malloc(sizeof(struct RA_list));
    if (res->tail == NULL) {
        printf("Failure in malloc RA_list.\n");
        exit(0);
    }
    return res;
}
struct RA_list * RALCons(struct RAssertion * head, struct RA_list * tail){
    struct RA_list * res = (struct RA_list *) malloc(sizeof(struct RA_list));
    if (res == NULL) {
        printf("Failure in malloc RA_list.\n");
        exit(0);
    }
    res->head = head;
    res->tail = tail;
    return res;
}

struct type * TTypeFuncExpr_Type(struct type * ty,struct func_expr * fe){
    if (fe->t == T_FUNCDEREF){
        struct type * _ty = new_type_ptr();
        _ty->t = T_PTR;
        _ty->d.PTR.ty = ty;
        return TTypeFuncExpr_Type(_ty, fe->d.FUNCDEREF.func);
    }
    return ty;
}
char * TFuncExpr_Char(struct func_expr * fe){
    if (fe->t == T_FUNCDEREF) {
        return TFuncExpr_Char(fe->d.FUNCDEREF.func);
    }
    if (fe->t == T_NAME_FUNCDEC) {
        return fe->d.NAME_FUNCDEC.name;
    }
    if (fe->t == T_NAME_FUNCDEF){
        return fe->d.NAME_FUNCDEF.name;
    }
    printf("Error in trans Func_expr to char *.\n");
    exit(0);
}
struct type_list * TFuncExpr_TypeList(struct func_expr * fe){
    if  (fe->t == T_FUNCDEREF) {
        return TFuncExpr_TypeList(fe->d.FUNCDEREF.func);
    }
    if (fe->t == T_NAME_FUNCDEC){
        return fe->d.NAME_FUNCDEC.tyl;
    }
    printf("Error in trans Func_expr to type_list.\n");
    exit(0);
}
struct var_dec_list * TFuncExpr_VardecList(struct func_expr * fe){
    if (fe->t == T_FUNCDEREF){
        return TFuncExpr_VardecList(fe->d.FUNCDEREF.func);
    }
    if (fe->t == T_NAME_FUNCDEF) {
        return fe->d.NAME_FUNCDEF.vdl;
    }
    printf("Error in trans Func_expr to var_dec_list.\n");
    exit(0);
}

struct func_expr * TFuncDeref(struct func_expr * fe){
    struct func_expr * res = new_func_expr_ptr();
    res->t = T_FUNCDEREF;
    res->d.FUNCDEREF.func = fe;
    return res;
}
struct func_expr * TNameFuncDec(char * name,struct type_list * tyl){
    struct func_expr * res = new_func_expr_ptr();
    res->t = T_NAME_FUNCDEC;
    res->d.NAME_FUNCDEC.name = name;
    res->d.NAME_FUNCDEC.tyl = tyl;
    return res;
}
struct func_expr * TNameFuncDef(char * name,struct var_dec_list * vdl){
    struct func_expr * res = new_func_expr_ptr();
    res->t = T_NAME_FUNCDEF;
    res->d.NAME_FUNCDEF.name = name;
    res->d.NAME_FUNCDEF.vdl = vdl;
    return res;
}


int build_nat(char * c, int len) {
  int s = 0, i = 0;
  for (i = 0; i < len; ++i) {
    s = s * 10 + (c[i] - '0');
  }
  return s;
}
char * new_str(char * str, int len) {
  char * res = (char *) malloc(sizeof(char) * (len + 1));
  if (res == NULL) {
    printf("Failure in malloc string.\n");
    exit(0);
  }
  strcpy(res, str);
  return res;
}
void extension(char * pcmd,char * pcmd_){
    memset(pcmd_,'\0',sizeof(char [100]));
    strcpy(pcmd_, pcmd);
    strcat(pcmd_,"|\t");
}
void print_cmd(struct cmd * cmd,char * pcmd);
void print_var_list(struct var_list * vars,char * pcmd);
void print_ra_simple(struct RAssertion * ra);
void print_ra(struct RAssertion * ra,char * pcmd) ;
void print_type_simple(struct type * ty);
void print_expr_simple(struct expr * e);

char * BinOpList[18] = {"+","-","*","/","%","<",">","<=",">=","==","!=","&&","||","&","|","^","<<",">>"};
char * UnOpList[4] = {"-","+","!","~"};
char * AssignOp[11] = {"=","+=","-=","*=","/=","%=","&=","|=","^=","<<=",">>="};

void print_expr_list_simple(struct expr_list * el){
    if (el ==NULL){
        printf("NULL");
        return;
    }
    print_expr_simple(el->head);
    while (el->tail != NULL) {
        printf(" , ");
        el = el->tail;
        print_expr_simple(el->head);
    }
}
void print_expr_simple(struct expr * e){
    if (e == NULL){
        printf("NULL");
        return;
    }
    switch (e->t) {
    case T_CONST:
    printf("CONST( %u )",e->d.CONST.value);
    break;
    case T_VAR:
    printf("VAR( %s )",e->d.VAR.name);
    break;
    case T_BINOP:
    printf("BINOP( ");
    print_expr_simple(e->d.BINOP.left);
    printf(" %s ",BinOpList[e->d.BINOP.op]);
    print_expr_simple(e->d.BINOP.right);
    printf(" )");
    break;
    case T_UNOP:
    printf("UNOP( %s ",UnOpList[e->d.UNOP.op]);
    print_expr_simple(e->d.UNOP.arg);
    printf(" )");
    break;
    case T_CAST:
    printf("CAST( ");
    print_type_simple(e->d.CAST.ty);
    printf(" : ");
    print_expr_simple(e->d.CAST.arg);
    printf(" )");
    break;
    case T_CALL:
    printf("CALL FUNC %s( ",e->d.CALL.name);
    print_expr_list_simple(e->d.CALL.args);
    printf(" )");
    break;
    case T_DEREF:
    printf("DEREF( ");
    print_expr_simple(e->d.DEREF.arg);
    printf(" )");
    break;
    case T_ADDRES:
    printf("ADDRES( ");
    print_expr_simple(e->d.ADDRES.arg);
    printf(" )");
    break;
    case T_SIZEOFTYPE:
    printf("SIZEOF( ");
    print_type_simple(e->d.SIZEOFTYPE.ty);
    printf(" )");
    break;
    case T_INDEX:
    printf("INDEX[ ");
    print_expr_simple(e->d.INDEX.pos);
    printf(" ]( ");
    print_expr_simple(e->d.INDEX.arg);
    printf(" )");
    break;
    case T_FIELDOF:
    printf("FIELD %s OF( ",e->d.FIELDOF.name);
    print_expr_simple(e->d.FIELDOF.arg);
    printf(" )");
    break;
    case T_FIELDOFPTR:
    printf("FIELDPTR %s OF( ",e->d.FIELDOFPTR.name);
    print_expr_simple(e->d.FIELDOFPTR.arg);
    printf(" )");
    break;
    default:
    printf("Error type of expr.");
    exit(0);
    }
}
void print_ra_list_simple(struct RA_list * ral){
    if (ral == NULL) {
        printf("NULL");
        return;
    }
    print_ra_simple(ral->head);
    while (ral->tail != NULL) {
        printf(" , ");
        ral = ral->tail;
        print_ra_simple(ral->head);
    }
}
void print_field_dec(struct field_dec * fd,char * pcmd){
    if (fd == NULL) {
        printf("%sNULL\n",pcmd);
        return;
    }
    char pcmd_ [100];
    extension(pcmd,pcmd_);
    printf("%sType:\n%s",pcmd,pcmd_);
    print_type_simple(fd->ty);
    printf("\n%sName:\n%s%s\n",pcmd,pcmd_,fd->field_name);
}
void print_expr(struct expr * ex,char * pcmd){
    if (ex == NULL) {
        printf("%sNULL\n",pcmd);
        return;
    }
    printf("%s",pcmd);
    print_expr_simple(ex);
    printf("\n");
    return;
}
void print_type_simple(struct type * ty){
    if (ty == NULL) {
        printf("NULL");
        return;
    }
    switch (ty->t) {
    case T_BASIC:
        switch (ty->d.BASIC.ty) {
        case T_VOID:
        printf("VOID");
        break;
        case T_CHAR:
        printf("CHAR");
        break;
        case T_U8:
        printf("UNSIGNED CHAR");
        break;
        case T_INT:
        printf("INT");
        break;
        case T_INT64:
        printf("LONG LONG INT");
        break;
        case T_UINT:
        printf("UNSIGNED INT");
        break;
        case T_UINT64:
        printf("UNSIGNED LONG LONG INT");
        break;
        default:
        printf("Error type of BasicType.\n");
        exit(0);
        }
    break;
    case T_STRUCT:
    printf ("STRUCT %s",ty->d.STRUCT.name);
    break;
    case T_UNION:
    printf("UNION %s",ty->d.UNION.name);
    break;
    case T_ENUM:
    printf("ENUM %s",ty->d.ENUM.name);
    break;
    case T_PTR:
    printf("PTR( ");
    print_type_simple(ty->d.PTR.ty);
    printf(" )");
    break;
    case T_ARRAY:
    printf("ARRAY[ ");
    print_expr_simple(ty->d.ARRAY.size);
    printf(" ]( ");
    print_type_simple(ty->d.ARRAY.ty);
    printf(" )");
    break;
    default:
    printf("Error type of DeclType");
    exit(0);
    }
}
void print_type(struct type * ty,char * pcmd){
    if (ty == NULL) {
        printf("%sNULL TYPE\n",pcmd);
        return;
    }
    printf("%s",pcmd);
    print_type_simple(ty);
    printf("\n");
}
void print_type_list(struct type_list * tyl,char * pcmd) {
    if (tyl == NULL) {
        printf("%sNULL\n",pcmd);
        return;
    }
    do {
        print_type(tyl->head, pcmd);
        tyl = tyl->tail;
    } while (tyl != NULL);
}
void print_expr_list(struct expr_list * el,char * pcmd) {
    if (el ==NULL) {
        printf("%sNULL\n",pcmd);
        return;
    }
    do {
        print_expr(el->head, pcmd);
        el = el->tail;
    }while (el != NULL);
}
void print_afuncdef(struct Afuncdef * funspec,char * pcmd) {
    char pcmd_ [100];
    extension(pcmd,pcmd_);    
     if (funspec == NULL) {
        printf("%sNULL\n",pcmd);
        return;
    }
    if (funspec->with != NULL) {
        printf("%sWith :\n",pcmd);
        print_var_list(funspec->with,pcmd_);
    }
    printf("%sRequire :\n",pcmd);
    print_ra(funspec->pre,pcmd_);
    printf("%sEnsure :\n",pcmd);
    print_ra(funspec->post, pcmd_);
}
void print_var_list(struct var_list * vars,char * pcmd) {   
    if (vars == NULL) {
        printf("%sNULL\n",pcmd);
        return;
    }
    do {
        printf("%s%s\n",pcmd,vars->head);
        vars = vars->tail;
    }while (vars != NULL);
    // printf("\n");
}
void print_ra_simple(struct RAssertion * ra) {
    if (ra == NULL) {
        printf("NULL\n");
        return;
    }
    switch (ra->t) {
    case RA_CONST:
    printf("CONST( %u )",ra->d.RACONST.value);
    break;
    case RA_VAR:
    printf("VAR( %s )",ra->d.RAVAR.name);
    break;
    case RA_BINOP:
    printf("BINOP( ");
    print_ra_simple(ra->d.RABINOP.left);
    printf(" %s ",BinOpList[ra->d.RABINOP.op]);
    print_ra_simple(ra->d.RABINOP.right);
    printf(" )");
    break;
    case RA_UNOP:
    printf("UNOP( %s ",UnOpList[ra->d.RAUNOP.op]);
    print_ra_simple(ra->d.RAUNOP.arg);
    printf(" )");
    break;
    case RA_CAST:
    printf("CAST( ");
    print_type_simple(ra->d.RACAST.ty);
    printf(" : ");
    print_ra_simple(ra->d.RACAST.arg);
    printf(" )");
    break;
    case RA_CALL:
    printf("CALL(FUNC %s( ",ra->d.RACALL.name);
    print_ra_list_simple(ra->d.RACALL.args);
    printf(" ))");
    break;
    case RA_DEREF:
    printf("DEREF( ");
    print_ra_simple(ra->d.RADEREF.arg);
    printf(" )");
    break;
    case RA_ADDRES:
    printf("ADDRES( ");
    print_ra_simple(ra->d.RAADDRES.arg);
    printf(" )");
    break;
    case RA_INDEX:
    printf("INDEX[ ");
    print_ra_simple(ra->d.RAINDEX.pos);
    printf(" ]( ");
    print_ra_simple(ra->d.RAINDEX.arg);
    printf(" )");
    break;
    case RA_FIELDOF:
    printf("FIELD %s OF( ",ra->d.RAFIELDOF.name);
    print_ra_simple(ra->d.RAFIELDOF.arg);
    printf(" )");
    break;
    case RA_FIELDOFPTR:
    printf("FIELDPTR %s OF( ",ra->d.RAFIELDOFPTR.name);
    print_ra_simple(ra->d.RAFIELDOF.arg);
    printf(" )");
    break;
    case RA_QFOP:
    if (ra->d.RAQFOP.op == A_FORALL) {
        printf("FORALL ");
    }
    else {
        printf("EXISTS ");
    }
    printf("%s , ",ra->d.RAQFOP.name);
    print_ra_simple(ra->d.RAQFOP.arg);
    break;
    default:
    printf("Error type of RAssertion.");
    exit(0);
    }
}
void print_ra(struct RAssertion * ra,char * pcmd) {
    char pcmd_ [100];
    extension(pcmd,pcmd_);    
     if (ra == NULL) {
        printf("%sNULL\n",pcmd);
        return;
    }
    printf("%s",pcmd);
    print_ra_simple(ra);
    printf("\n");
}
void print_field_dec_list(struct field_dec_list * fdl,char * pcmd){
     if (fdl == NULL) {
        printf("%sNULL\n",pcmd);
        return;
    }
    do {
        print_field_dec(fdl->head,pcmd);
        printf("%s",pcmd);
        fdl = fdl->tail;
    }while (fdl != NULL);
}
void print_enum_list(struct enum_list * enl,char * pcmd){ 
     if (enl == NULL) {
        printf("%sNULL\n",pcmd);
        return;
    }
    do {
        printf("%s%s\n",pcmd,enl->name);
        enl = enl->tail;
    }while (enl != NULL);
}
void print_simple_cmd(struct simple_cmd * sc,char * pcmd){
    char pcmd_ [100];
    extension(pcmd,pcmd_);    
     if (sc == NULL) {
        printf("%sNULL\n",pcmd);
        return;
    }
    switch (sc->t) {
    case T_COMPUTATION:
    printf("%sComputation:\n",pcmd);
    print_expr(sc->d.COMPUTATION.arg,pcmd_);
    break;
    case T_ASGN:
    printf("%sLeft:\n",pcmd);
    print_expr(sc->d.ASGN.left,pcmd_);
    // print_assigntype(sc->d.ASGN.op,pcmd_);
    printf("%sASSIGN OPERATION: %s\n",pcmd,AssignOp[sc->d.ASGN.op]);
    printf("%sRight:\n",pcmd);
    print_expr(sc->d.ASGN.right,pcmd_);
    break;
    case T_INCDEC:
    printf("%sInc / Dec type:\n",pcmd);
    if (sc->d.INCDEC.op == T_INC_F ) {
        printf("%sInc front (++)\n",pcmd_);
        print_expr(sc->d.INCDEC.arg,pcmd_);
    }
    else if (sc->d.INCDEC.op == T_DEC_F) {
        printf("%sDec front (--)\n",pcmd_);
        print_expr(sc->d.INCDEC.arg,pcmd_);
    }
    else if (sc->d.INCDEC.op == T_INC_B) {
        print_expr(sc->d.INCDEC.arg,pcmd_);
        printf("%sInc behind (++)\n",pcmd_);
    }
    else if (sc->d.INCDEC.op == T_DEC_B) {
        print_expr(sc->d.INCDEC.arg,pcmd_);
        printf("%sDec behind (--)\n",pcmd_);
    }
    break;
    default:
    printf("%sError type of simple_cmd.\n",pcmd);
    exit(0);
    }
}
void print_case(struct Case * cs,char * pcmd){ 
    char pcmd_ [100];
    extension(pcmd,pcmd_);    
    if (cs == NULL) {
        printf("%sNULL\n",pcmd);
        return;
    }
    switch (cs->t) {
    case T_CASE:
    printf("%sCase condition:\n",pcmd);
    print_expr(cs->d.CASE.cond,pcmd_);
    printf("%sCase commands:\n",pcmd);
    print_cmd(cs->d.CASE.body,pcmd_);
    break;
    case T_DEFAULT:
    printf("%sDefault commands:\n",pcmd);
    print_cmd(cs->d.DEFAULT.body, pcmd_);
    break;
    default:
    printf("%sError type of Case.\n",pcmd);
    exit(0);
    }
}
void print_case_list(struct Case_list * cl,char * pcmd){  
    if (cl == NULL) {
        printf("%sNULL\n",pcmd);
        return;
    }
    do {
        print_case(cl->head,pcmd);
        printf("%s\n",pcmd);
        cl = cl->tail;
    } while (cl != NULL);
    return;
}
void print_var_dec(struct var_dec * vd,char * pcmd){
    char pcmd_ [100];
    extension(pcmd,pcmd_);    
    if (vd == NULL) {
        printf("%sNULL\n",pcmd);
        return;
    }
    printf("%sType: \n",pcmd);
    print_type(vd->ty,pcmd_);
    printf("%sName:\n%s %s\n",pcmd,pcmd_,vd->name);
}
void print_var_dec_list(struct var_dec_list * vdl,char * pcmd){
    if (vdl == NULL){
        printf("%sNULL\n",pcmd);
        return;
    }
    do {
        print_var_dec(vdl->head, pcmd);
        printf("%s\n",pcmd);
        vdl = vdl->tail;
    }while (vdl != NULL);
}
void print_cmd(struct cmd * cmd,char * pcmd){
    char pcmd_ [100];
    extension(pcmd,pcmd_);    
    enum CmdType s = 0;
    if (cmd == NULL) {
        printf("%sNULL\n",pcmd);
        return;
    }
    switch (cmd->t) {
        case T_VARDECL:
        printf("%sVAR DEL : \n",pcmd);
        print_var_dec(cmd->d.VARDECL.decl,pcmd_);
        break;
        case T_SIMPLE:
        // printf("%sSimple command : \n",pcmd);
        print_simple_cmd(cmd->d.SIMPLE.scmd,pcmd);
        break;
        case T_SEQ:
        print_cmd(cmd->d.SEQ.left,pcmd);
        printf("%s\n",pcmd);
        print_cmd(cmd->d.SEQ.right,pcmd);
        break;
        case T_IF:
        printf("%sIf : \n",pcmd);
        print_expr(cmd->d.IF.cond,pcmd_);
        printf("%sThen :\n",pcmd);
        print_cmd(cmd->d.IF.left,pcmd_);
        if (cmd->d.IF.right != NULL) {
            printf("%sElse :\n",pcmd);
            print_cmd(cmd->d.IF.right, pcmd_);
        }
        break;
        case T_SWITCH:
        printf("%sSwitch conditions:\n",pcmd);
        print_expr(cmd->d.SWITCH.cond,pcmd_);
        printf("%sCase / default lists:\n",pcmd);
        print_case_list(cmd->d.SWITCH.body,pcmd_);
        break;
        case T_WHILE:
        printf("%sWhile conditions:\n",pcmd);
        print_expr(cmd->d.WHILE.cond,pcmd_);
        printf("%sWhile loop:\n",pcmd);
        print_cmd(cmd->d.WHILE.body,pcmd_);
        if (cmd->d.WHILE.inv != NULL){
            printf("%s While inv:\n",pcmd);
            print_ra(cmd->d.WHILE.inv,pcmd_);
        }
        break;
        case T_DOWHILE:
        printf("%sDowhile loop:\n",pcmd);
        print_cmd(cmd->d.DOWHILE.body,pcmd_);
        printf("%sDowhile conditions:\n",pcmd);
        print_expr(cmd->d.DOWHILE.cond, pcmd_);
        break;
        case T_FOR:
        printf("%sFor initialing:\n",pcmd);
        print_simple_cmd(cmd->d.FOR.init, pcmd_);
        printf("%sFor condition:\n",pcmd);
        print_expr(cmd->d.FOR.cond,pcmd_);
        printf("%sFor incr: \n",pcmd);
        print_simple_cmd(cmd->d.FOR.incr, pcmd_);
        printf("%sFor loop: \n",pcmd);
        print_cmd(cmd->d.FOR.body,pcmd_);
        if (cmd->d.FOR.inv != NULL) {
            printf("%sFor inv: \n",pcmd);
            print_ra(cmd->d.FOR.inv,pcmd_);
        }
        break;
        case T_BREAK:
        printf("%sBreak command.\n",pcmd);
        break;
        case T_CONTINUE:
        printf("%sContinue command.\n",pcmd);
        break;
        case T_RETURN:
        printf("%sReturn : \n",pcmd);
        print_expr(cmd->d.RETURN.arg,pcmd_);
        break;
        case T_COMMENT:
        printf("%sComments:\n",pcmd);
        print_ra(cmd->d.COMMENT.asrt,pcmd_);
        break;
        default:
        // for (s = T_VARDECL;s <= T_COMMENT;s++) {
        //     printf("%d ",s);
        // }
        // printf("\n%u\n",cmd->t);
        printf("Error type of cmd.\n");
        // exit(0);
    }
}
void print_def(struct def *decl,char * pcmd){
    char pcmd_ [100];
    extension(pcmd,pcmd_);    
    if (decl == NULL) {
        printf("%sNULL\n",pcmd);
        return;
    }
    switch (decl->t) {
        case T_FUNCDEC :
        printf("FUNC DEC:\n");
        printf("%sReturn type:\n",pcmd);
        print_type(decl->d.FUNCDEC.ty,pcmd_);
        printf("%sFunction name: ",pcmd);
        printf("%s\n",decl->d.FUNCDEC.name);
        printf("%sType of function arguments:\n",pcmd);
        print_var_dec_list(decl->d.FUNCDEC.args,pcmd_);
        if (decl->d.FUNCDEC.funspec != NULL) {
            printf("%sFunction spec:\n",pcmd);
            print_afuncdef(decl->d.FUNCDEC.funspec,pcmd_);
        }
        break;
        case T_FUNCDEF :
        printf("FUNC DEF:\n");
        printf("%sReturn type:\n",pcmd);
        print_type(decl->d.FUNCDEF.ty,pcmd_);
        printf("%sFunction name: ",pcmd);
        printf("%s\n",decl->d.FUNCDEF.name);
        printf("%sType and name of function arguments:\n",pcmd);
        print_var_dec_list(decl->d.FUNCDEF.args,pcmd_);
        printf("%sFunction Commands:\n",pcmd);
        print_cmd(decl->d.FUNCDEF.body,pcmd_);
        if (decl->d.FUNCDEF.funspec != NULL) {
            printf("%sFunction spec:\n",pcmd);
            print_afuncdef(decl->d.FUNCDEF.funspec,pcmd_);
        }
        break;
        case T_SEPDEF :
        printf("SEP DEF:\n");
        printf("%sSep name: %s\n",pcmd,decl->d.SEPDEF.sepdef->name);
        printf("%sSep arguments: \n",pcmd);
        print_var_list(decl->d.SEPDEF.sepdef->vars,pcmd_);
        printf("%sSep assertion:\n",pcmd);
        print_ra(decl->d.SEPDEF.sepdef->conditions,pcmd_);
        break;
        case T_UNIONDEF :
        printf("UNION DEF:\n");
        printf("%sUnion name: %s\n",pcmd,decl->d.UNIONDEF.name);
        printf("%sUnion fields: \n",pcmd);
        print_field_dec_list(decl->d.UNIONDEF.union_def,pcmd_);
        break;
        case T_ENUMDEF :
        printf("ENUM DEF:\n");
        printf("%sEnum name: %s\n",pcmd,decl->d.ENUMDEF.name);
        printf("%sEnum list: \n",pcmd);
        print_enum_list(decl->d.ENUMDEF.enum_def,pcmd_);
        break;
        case T_STRUCTDEF :
        printf("STRUCT DEF:\n");
        printf("%sStruct name: %s\n",pcmd,decl->d.STRUCTDEF.name);
        printf("%sStruct fields: \n",pcmd);
        print_field_dec_list(decl->d.STRUCTDEF.struct_def, pcmd_);
        break;
        default: printf("Error type of def.\n");
        exit(0);
    }
}
void print_root(struct root * rt,char * pcmd){
    char pcmd_ [100];
    extension(pcmd,pcmd_);    
    if (rt ==NULL) {
        printf("%sNULL\n",pcmd);
        return;
    }
    if (rt->t == T_DEF) {
        // printf("%sDEF: \n",pcmd);
        print_def(rt->d.DEF,pcmd_);
    }
    else if (rt->t == T_VARDEC) {
        printf("%sVAR DEC: \n",pcmd);
        print_var_dec(rt->d.VARDEC,pcmd_);
    }
    else {
        printf("%sError type of root.\n",pcmd);
        exit(0);
    }
    return;
}
void print_root_list(struct root_list *rl){
    char * pcmd = "";
    // printf("%s",pcmd);
    if (rl == NULL) {
        printf("NULL\n");
        return ;
    }
    printf("\n===== WHOLE =====\n\n");
    do {
        print_root(rl->head,pcmd);
        printf("|\n");
        rl = rl->tail;
    } while (rl != NULL);
    printf("\n====== END ======\n");
}
