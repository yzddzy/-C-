#include <stdio.h>
#include "lang.h"
#include "lexer.h"
#include "parser.h"

extern struct root_list * root;
int yyparse();

int main(int argc, char **argv) {
    yyin = stdin;
    yyparse();
    fclose(stdin);
    print_root_list(root);
}
