%option noyywrap yylineno
%option outfile="lexer.c" header-file="lexer.h"
%{
#include "lang.h"
#include "parser.h"

int isComment = 0;

%}
%%

0|[1-9][0-9]* {
    yylval.n = build_nat(yytext, yyleng);
    return TM_NAT;
}

"void" {
    return TM_VOID;
}

"char" {
    return TM_CHAR;
}

"unsigned char" {
    return TM_U8;
}

"int" {
    return TM_INT;
}

"long long int" {
    return TM_INT64;
}

"long long" {
    return TM_INT64;
}

"unsigned int" {
    return TM_UINT;
}

"unsigned long long int" {
    return TM_UINT64;
}

"unsigned long long" {
    return TM_UINT64;
}

"struct" {
    return TM_STRUCT;
}

"union" {
    return TM_UNION;
}

"enum" {
    return TM_ENUM;
}

"With" {
    return TM_WITH;
}

"Require" {
    return TM_REQUIRE;
}

"Ensure" {
    return TM_ENSURE;
}

"__return" {
    return TM___RETURN;
}

"Inv" {
    return TM_INV;
}

"forall" {
    return TM_FORALL;
}

"exists" {
    return TM_EXISTS;
}

"Let" {
    return TM_LET;
}

"if" {
    return TM_IF;
}

"else" {
    return TM_ELSE;
}

"for" {
    return TM_FOR;
}

"do" {
    return TM_DO;
}

"while" {
    return TM_WHILE;
}

"switch" {
    return TM_SWITCH;
}

"case" {
    return TM_CASE;
}

"default" {
    return TM_DEFAULT;
}

"return" {
    return TM_RETURN;
}

"break" {
    return TM_BREAK;
}

"continue" {
    return TM_CONTINUE;
}

"sizeof" {
    return TM_SIZEOF;
}

"=" {
    return TM_ASGNOP;
}

"+=" {
    return TM_PLUS_ASGN;
}

"-=" {
    return TM_MINUS_ASGN;
}

"*=" {
    return TM_MUL_ASGN;
}

"/=" {
    return TM_DIV_ASGN;
}

"%=" {
    return TM_MOD_ASGN;
}

"&=" {
    return TM_BAND_ASGN;
}

"|=" {
    return TM_BOR_ASGN;
}

"^=" {
    return TM_XOR_ASGN;
}

"<<=" {
    return TM_SHL_ASGN;
}

">>=" {
    return TM_SHR_ASGN;
}

"+" {
    return TM_PLUS;
}

"-" {
    return TM_MINUS;
}

"*" {
    return TM_STAR;
}

"/" {
    return TM_DIV;
}

"%" {
    return TM_MOD;
}

">=" {
    return TM_GE;
}

"<=" {
    return TM_LE;
}

">" {
    return TM_GT;
}

"<" {
    return TM_LT;
}

"==" {
    return TM_EQ;
}

"!=" {
    return TM_NE;
}

"&&" {
    return TM_AND;
}

"||" {
    return TM_OR;
}

"&" {
    return TM_BAND;
}

"|" {
    return TM_BOR;
}

"^" {
    return TM_XOR;
}

">>" {
    return TM_SHR;
}

"<<" {
    return TM_SHL;
}

"~" {
    return TM_NOTINT;
}

"!" {
    return TM_NOTBOOL;
}

"++" {
    return TM_INC;
}

"--" {
    return TM_DEC;
}

"(" {
    return TM_LEFT_PAREN;
}

")" {
    return TM_RIGHT_PAREN;
}

"[" {
    return TM_LEFT_BRACK;
}

"]" {
    return TM_RIGHT_BRACK;
}

"{" {
    return TM_LEFT_BRACE;
}

"}" {
    return TM_RIGHT_BRACE;
}

"," {
    return TM_COMMA;
}

";" {
    return TM_SEMICOL;
}

":" {
    return TM_CONOL;
}

"." {
    return TM_FIELDOF;
}

"->" {
    return TM_FIELDOFPTR;
}

"//@" {
    isComment = 1;
    return TM_COMMENT_START;
}

"/*@" {
    return TM_COMMENT_START;
}

"*/" {
    return TM_COMMENT_END;
}

[_a-zA-Z][_a-zA-Z0-9]* {
    yylval.i = new_str(yytext, yyleng);
    return TM_IDENT;
}

[ \t\r] { }

\n {
    if (isComment == 1) {
        isComment = 0;
        return TM_COMMENT_END;
    }
};

.   {printf("%s",yytext);
     return -1; }
     
%%