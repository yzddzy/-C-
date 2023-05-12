******************
Notes for lang.l
******************

Define keywords list : (Line 17)
[
    void, char, unsigned char, int, long long int, unsinged int, unsinged long long int, 
    struct, union, enum
]

RAssertion keyword list : (Line 57)
[
    With, Require, Ensure, __return, Inv, forall, exists, Let
]

Command keywords list : (Line 89)
[
    if, else, for, do, while,
    switch, case, default,
    return, break, continue,
    sizeof
]

Operation keywords list : (Line 137)
[
    AssignOp: (Line 137)
    =, +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=,
    
    TBinOp: (Line 181)
    +, -, *, /, %, >=, <=, >, <, ==, !=, &&, ||,
    &, |, ^, >>, <<, 
    ., ->,

    TUnOp: (Line 253)
    ~, !, (-, +, *, &,)
    ++, --,

    ComplexOp: (Line 269)
    (, ), [, ], {, }, ,, ;, :,
    ., ->,
    //@, /*@, */ , \n
]



******************
Notes for lang.y

Here are the outlines of the lang.y including all the rules for short.
******************

Generating rules for non-terminal words:

/////// Line 145 ///////

NT_WHOLE 
-> NT_ROOT_LIST

NT_ROOT_LIST 
-> NT_ROOT NT_ROOT_LIST
-> NT_ROOT

NT_ROOT 
-> NT_DEF
-> NT_VARDECL ;

NT_DEF
-> NT_TYPE NT_FUNCDEC_EXPR ;
-> NT_TYPE NT_FUNCDEC_EXPR NT_WITH_COMMENT ;          
-> NT_TYPE NT_FUNCDEF_EXPR { }            // Defination of a null function or struct type
-> NT_TYPE NT_FUNCDEF_EXPR NT_WITH_COMMENT { }            
-> NT_TYPE NT_FUNCDEF_EXPR { NT_CMD }     // Defination of function or struct type
-> NT_TYPE NT_FUNCDEF_EXPR NT_WITH_COMMENT { NT_CMD }     
-> TM_STRUCT TM_IDENT NT_FIELD_DEC_LIST ;
-> TM_UNION TM_IDENT NT_FIELD_DEC_LIST ;
-> TM_ENUM TM_IDENT NT_ENUM_LIST ;
-> NT_LET_COMMENT

NT_FUNCDECDEF_EXPR
-> * NT_FUNCDECDEF_EXPR
-> TM_IDENT NT_FUNC_DEF

//NT_FUNC_DEC
//-> ( )
//-> ( NT_TYPE_LIST )

//NT_TYPE_LIST  
//-> NT_TYPE NT_EXPR , NT_TYPE_LIST
//-> NT_TYPE NT_EXPR 

//NT_FUNCDEF_EXPR
//-> ( NT_FUNCDEF_EXPR )
//-> * NT_FUNCDEF_EXPR
//-> TM_IDENT NT_FUNC_DEF 

NT_FUNC_DEF
-> ( )
-> ( NT_TYPE_EXPR_LIST )

NT_TYPE_EXPR_LIST
-> NT_VARDECL , NT_TYPE_EXPR_LIST
-> NT_VARDECL

NT_LET_COMMENT
-> TM_COMMENT_START TM_LET TM_IDENT NT_VAR_LIST TM_ASGNOP NT_RA_EXPR TM_COMMENT_END

NT_VAR_LIST
-> ( )
-> ( NT_ID_COMMA_VAR )

NT_ID_COMMA_VAR
-> TM_IDENT , NT_ID_COMMA_VAR
-> TM_IDENT

NT_FIELD_DEC_LIST
-> { }
-> { NT_FDL_SEMICOL }

NT_FDL_SEMICOL  
-> NT_TYPE NT_EXPR ; NT_FDL_SEMICOL
-> NT_TYPE NT_EXPR

NT_ENUM_LIST
-> { }
-> { NT_ID_COMMA_ENUM }

NT_ID_COMMA_ENUM
-> TM_IDENT , NT_ID_COMMA_ENUM
-> TM_IDENT

/////// Line 380 ///////


NT_CMD 
-> NT_CMD NT_CMD
-> NT_COMMENT
-> NT_LAST_CMD 

NT_LAST_CMD   // Contains only one command block
-> { NT_CMD }
-> { }
-> ;
-> NT_VARDECL ;
-> NT_SIMPLE_CMD ;
-> NT_IF_CMD
-> NT_SWITCH_CMD
-> NT_WHILE_CMD
-> NT_DOWHILE_CMD
-> NT_FOR_CMD
-> TM_BREAK ;
-> TM_CONTINUE ;
-> NT_RETURN_CMD ;

NT_VARDECL
-> NT_TYPE NT_EXPR_VD

NT_EXPR_VD
-> TM_IDENT
-> * NT_EXPR_VD
-> NT_EXPR_VD [ NT_EXPR ]
-> ( NT_EXPR_VD )

/////// Line 483 ///////

NT_SIMPLE_CMD
-> NT_EXPR    // comupation
-> NT_EXPR NT_ASGNOP NT_EXPR  //asgn
-> NT_INCDECOP 

//NT_ASGNOP
-> =, +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=

//NT_INCDECOP
-> TM_INC NT_EXPR
-> TM_DEC NT_EXPR
-> NT_EXPR TM_INC
-> NT_EXPR TM_DEC

NT_IF_CMD
-> TM_IF ( NT_EXPR ) NT_LAST_CMD
-> TM_IF ( NT_EXPR ) NT_LAST_CMD TM_ELSE NT_LAST_CMD

NT_FOR_CMD
-> TM_FOR ( NT_SIMPLE_CMD ; NT_EXPR ; NT_SIMPLE_CMD ) NT_LAST_CMD
-> NT_INV_COMMENT TM_FOR ( NT_SIMPLE_CMD ; NT_EXPR ; NT_SIMPLE_CMD ) NT_LAST_CMD

NT_WHILE_CMD
-> TM_WHILE ( NT_EXPR ) NT_LAST_CMD
-> NT_INV_COMMENT TM_WHILE ( NT_EXPR ) NT_LAST_CMD

NT_DOWHILE_CMD
-> TM_DO NT_LAST_CMD TM_WHILE ( NT_EXPR ) 
-> NT_INV_COMMENT TM_DO NT_LAST_CMD TM_WHILE ( NT_EXPR ) 

NT_SWITCH_CMD
-> TM_SWITCH ( NT_EXPR ) { NT_CASE_LIST }

NT_RETURN_CMD (Line )    
-> TM_RETURN 
-> TM_RETURN NT_EXPR 

NT_CASE_LIST
-> TM_CASE_TYPE NT_CASE_LIST
-> TM_CASE_TYPE

TM_CASE_TYPE
-> TM_CASE NT_EXPR : NT_CMD
-> TM_DEFAULT : NT_CMD

/////// Line 690 ////////


NT_COMMENT
-> TM_COMMENT_START NT_RA_EXPR TM_COMMENT_END

NT_INV_COMMENT
-> TM_COMMENT_START TM_INV NT_RA_EXPR TM_COMMENT_END

NT_WITH_COMMENT
-> TM_WITH NT_WITH_VAR_LIST TM_REQUIRE NT_RA_EXPR TM_ENSURE NT_RA_EXPR
-> TM_REQUIRE NT_RA_EXPR TM_ENSURE NT_RA_EXPR

NT_WITH_VAR_LIST  
-> TM_IDENT NT_WITH_VAR_LIST
-> TM_IDENT




/////// Line 740 ////////




NT_RA_EXPR
-> NT_UNOP_RA_EXPR
-> NT_RA_EXPR NT_BINOP NT_RA_EXPR
-> TM_FORALL TM_IDENT , NT_RA_EXPR
-> TM_EXISTS TM_IDENT , NT_RA_EXPR


NT_UNOP_RA_EXPR
-> +, -, ~, ! TM_IDENT
-> * NT_UNOP_RA_EXPR
-> & NT_UNOP_RA_EXPR
-> ( NT_TYPE NT_RA_PTR ) NT_UNOP_RA_EXPR
-> NT_RA_EXPR_F

NT_RA_EXPR_F
-> TM_NAT
-> TM_IDENT
-> TM___RETURN
-> TM_IDENT NT_RA_FUNC_CALL
-> NT_RA_EXPR_F [ NT_RA_EXPR ]
-> NT_RA_EXPR_F . TM_IDENT
-> NT_RA_EXPR_F -> TM_IDENT
-> ( NT_RA_EXPR )


NT_RA_FUNC_CALL
-> ( )
-> ( NT_RA_LIST )

NT_RA_LIST
-> NT_RA_EXPR , NT_RA_LIST
-> NT_RA_EXPR

/////// Line 925 ///////

NT_TYPE        // No Pointers
-> NT_BASIC_TYPE
-> NT_STRUCT_TYPE TM_IDENT

//NT_BASIC_TYPE
//-> void, char, unsigned char, int, long long int, unsinged int, unsinged long long int


NT_EXPR 
-> NT_UNOP_EXPR
-> NT_EXPR NT_BINOP NT_EXPR


NT_UNOP_EXPR
-> !, ~, (-, +) NT_UNOP_EXPR
-> * NT_UNOP_EXPR
-> & NT_UNOP_EXPR
-> ( NT_TYPE NT_PTR ) NT_UNOP_EXPR
-> NT_EXPR_F

NT_EXPR_F
-> TM_NAT
-> TM_IDENT
-> TM_SIZEOF ( NT_TYPE NT_PTR )
-> TM_IDENT NT_FUNC_CALL
-> NT_EXPR_F [ NT_EXPR ]
-> NT_EXPR_F . TM_IDENT
-> NT_EXPR_F -> TM_IDENT
-> ( NT_EXPR )

NT_FUNC_CALL
-> ( )             
-> ( NT_EXPR_LIST )  

NT_EXPR_LIST
> NT_EXPR , NT_EXPR_LIST
> NT_EXPR

NT_PTR

//NT_BINOP
//-> +, -, (*,) /, %, >=, <=, >, <, ==, !=, &&, ||, (&,) |, ^, >>, <<



