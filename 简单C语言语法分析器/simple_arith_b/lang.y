%{
	// this part is copied to the beginning of the parser 
	#include <stdio.h>
	#include "lang.h"
	#include "lexer.h"
	void yyerror(char *);
	int yylex(void);
  struct expr * root;
%}

%union {
unsigned int n;
char * i;
struct expr * e;
void * none;
}

// Terminals
%token <n> TM_NAT
%token <i> TM_IDENT
%token <none> TM_LEFT_PAREN TM_RIGHT_PAREN
%token <none> TM_VAR
%token <none> TM_CONST
%token <none> TM_PLUS 
%token <none> TM_MUL

// Nonterminals
%type <e> NT_WHOLE
%type <e> NT_E

// Priority
%left TM_PLUS
%left TM_MUL 
%left TM_LEFT_PAREN TM_RIGHT_PAREN

%%

NT_WHOLE:
  NT_E
  {
    $$ = ($1);
    root = $$;
  }
;

NT_E:
  NT_E TM_PLUS NT_E
  {
    $$ = (TPlus($1,$3));
  }
| NT_E TM_MUL NT_E
  {
    $$ = (TMult($1,$3));
  }
| TM_LEFT_PAREN NT_E TM_RIGHT_PAREN
  {
    $$ = ($2);
  }
| TM_IDENT
  {
    $$ = (TVar($1));
  }
| TM_NAT
  {
    $$ = (TConst($1));
  }
;

%%

void yyerror(char* s)
{
    fprintf(stderr , "%s\n",s);
}
