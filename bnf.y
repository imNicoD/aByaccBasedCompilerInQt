%token FUNCTION BEGIN END RETURN PRINT IF THEN ELSE LOOP UNTIL ID CONST TYPE STR EQU NEQ GEQ LEQ
%right THEN ELSE

%%

program		: listdecl bloqsent
			;

listdecl	: decl ';' listdecl
			|
			;
			
decl		: declvar
			| FUNCTION BEGIN listdeclvar funcsentlist END { $$ = cod->node(CODE_FUNCTION, $1, $2); }
			| FUNCTION error							{ notify("Se esperaba identificador.");}
			;

declvar		: TYPE listvar								{ $$ = cod->node(CODE_DECL, $1, $2);}
			| TYPE error   								{ notify("Se esperaba identificador.");}
			| error		  							 	{ notify("Se esperaba declaración.");}
			;

listdeclvar	: declvar ';' listdeclvar
			|
			;

funcsentlist: funcsent funcsentlist
			|
			;

funcsent 	: sentencia  ';' 							{ $$ = $1; }
			| ID ':'									{ $$ = cod->node(CODE_VOID);}
			;	


listvar		: ID 										{}
			| ID ',' listvar							{}
			;

bloqsent	: BEGIN listsent END						{ $$ = $1; }
			| sentencia									{ $$ = $1; }
			;

listsent	: sentencia ';' listsent					{ $$ = cod->node(CODE_BLOCK, $1, $2); }
			|											{ $$ = cod->node(CODE_VOID);}
			;
			
sentencia 	: if										{ $$ = $1;}
			| LOOP bloqsent UNTIL cond 					{ $$ = cod->node(CODE_LOOP, $1 ,$2 );}
			| LOOP bloqsent error						{ $$ = cod->node(CODE_VOID); notify("Se esperaba UNTIL.");}
			| RETURN '(' expr ')'						{ $$ = cod->node(CODE_RETURN, $1);}
			| PRINT '(' STR ')'							{ $$ = cod->node(CODE_PRINT, $1);}
			| ID '=' expr								{ $$ = cod->node(CODE_ASIG, $1, $2);}
			| ID error									{ $$ = cod->node(CODE_VOID); notify("Se esperaba '='.");	}
			| RETURN error
			| PRINT error
			|
			;

if			: IF pcond THEN bloqsent					{$$ = cod->node(CODE_IF, $1, $2);}
			| IF pcond THEN bloqsent ELSE bloqsent		{$$ = cod->node(CODE_IF_ELSE, $1, $2, $3);}
			| IF pcond error							{$$ = cod->node(CODE_VOID); notify("se esperaba THEN");}
			;

				 
expr		: term 								{ $$ = $1; }
			| expr '+' term						{ $$ = cod->node(CODE_EXPR, $1, '+', $3);}
			| expr '-' term						{ $$ = cod->node(CODE_EXPR, $1, '-', $3);}
			;
			
term 		: fact								{ $$ = $1; }
			|  term '*' fact					{ $$ = cod->node(CODE_EXPR, $1, '*', $3);}
			|  term '/' fact					{ $$ = cod->node(CODE_EXPR, $1, '/', $3);}					
			;
		
fact		: ID								{$$ = cod->node(CODE_VOID);}
			| CONST								{$$ = cod->node(CODE_VOID);}
			| '-' CONST							
			| ID '(' ')'						{$$ = cod->node(CODE_CALL, $1);}
			| ID '(' error						{$$ = cod->node(CODE_VOID); notify("se esperaba ')'");} 
			;

pcond		: '(' cond ')'						{$$ = $1; }
			| '(' cond error					{ $$ = cod->node(CODE_VOID); notify("Se esperaba ')'");}
			| '(' error							{ $$ = cod->node(CODE_VOID); notify("Se esperaba condición.");}
			| error								{ $$ = cod->node(CODE_VOID); notify("Se esperaba '('");}
			;
			
			
cond	 	: expr comparador expr				{ $$ = cod->node(CODE_COND, $1, $2, $3);}
			| expr comparador error				{ $$ = cod->node(CODE_VOID); notify("Se esperaba expreción");}
			;

comparador	: '<'								{$$ =  '<';}
			| '>'								{$$ =  '>';}
			| LEQ								{$$ =  LEQ;}
			| GEQ								{$$ =  GEQ;}
			| NEQ								{$$ =  NEQ;}
			| EQU								{$$ =  EQU;}
			;