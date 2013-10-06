%token FUNCTION BEGIN END RETURN PRINT IF THEN ELSE LOOP UNTIL ID CONST TYPE STR EQU NEQ GEQ LEQ
%right THEN ELSE

%%

program		: listdecl bloqsent							{$$ = cod->node(CODE_PROGRAM, $1,$2);}
			;

listdecl	: decl ';' listdecl							{ $$ = cod->node(CODE_DECLLIST, $1,$3);}
			| error	';' listdecl						{ $$ = $2; }
			|											{ $$ = cod->node(CODE_VOID);}
			;
			
decl		: declvar
			| FUNCTION BEGIN listdeclvar funcsentlist END { $$ = cod->node(CODE_FUNCTION, $3, $4); }
			| FUNCTION error							{ notify("Se esperaba BEGIN."); yyclearin;}
			;

declvar		: TYPE listvar								{ $$ = cod->node(CODE_DECL, $1, $2);}
			| TYPE error   								{ notify("Se esperaba identificador."); yyclearin;}
			;

listdeclvar	: declvar ';' listdeclvar					{ $$ = cod->node(CODE_DECLLIST, $1,$3);}
			|											{ $$ = cod->node(CODE_VOID);}
			;

funcsentlist: funcsent funcsentlist						{ $$ = cod->node(CODE_BLOCK, $1, $2); }
			|											{ $$ = cod->node(CODE_VOID);}
			;

funcsent 	: sentencia  ';' 							{ $$ = $1; }
			| ID ':'									{ $$ = cod->node(CODE_ENTRY, $1);}
			;	


listvar		: ID 										{ $$ = $1; }
			| ID ',' listvar							{ $$ = cod->node(CODE_VARLIST, $1, $3);}
			;

bloqsent	: BEGIN listsent END						{ $$ = $2; }
			| sentencia									{ $$ = $1; }
			;

listsent	: sentencia ';' listsent					{ $$ = cod->node(CODE_BLOCK, $1, $3); }
			|											{ $$ = cod->node(CODE_VOID);}
			;
			
sentencia 	: if										{ $$ = $1;}
			| LOOP bloqsent UNTIL cond 					{ $$ = cod->node(CODE_LOOP, $2 ,$4 );}
			| LOOP bloqsent error						{ $$ = cod->node(CODE_VOID); notify("Se esperaba UNTIL."); yyclearin;}
			| RETURN '(' expr ')'						{ $$ = cod->node(CODE_RETURN, $3);}
			| PRINT '(' STR ')'							{ $$ = cod->node(CODE_PRINT, $3);}
			| ID '=' expr								{ $$ = cod->node(CODE_ASIG, $1, $3);}
			| ID error									{ $$ = cod->node(CODE_VOID); notify("Se esperaba '='."); yyclearin;}
			| RETURN error								{$$ = cod->node(CODE_VOID); notify("se esperaba '('"); yyclearin;}
			| PRINT '(' error							{$$ = cod->node(CODE_VOID); notify("se esperaba '\"'"); yyclearin;}
			| PRINT error								{$$ = cod->node(CODE_VOID); notify("se esperaba '('"); yyclearin;}
			|
			;

if			: IF pcond THEN bloqsent					{$$ = cod->node(CODE_IF, $2, $4);}
			| IF pcond THEN bloqsent ELSE bloqsent		{$$ = cod->node(CODE_IF_ELSE, $2, $4, $6);}
			| IF pcond error							{$$ = cod->node(CODE_VOID); notify("se esperaba THEN"); yyclearin;}
			;


expr		: term 								{ $$ = $1; }
			| expr '+' term						{ $$ = cod->node('+', $1, $3);}
			| expr '-' term						{ $$ = cod->node('-', $1, $3);}
			;
			
term 		: fact								{ $$ = $1; }
			|  term '*' fact					{ $$ = cod->node('*', $1, $3);}
			|  term '/' fact					{ $$ = cod->node('/', $1, $3);}					
			;
		
fact		: ID								{}
			| CONST								{if(!check_range($$)) notify("Variable fuera de rango");}
			| '-' CONST							{$$ = negative($2);}
			| ID '(' ')'						{$$ = cod->node(CODE_CALL, $1);}
			| ID '(' error						{$$ = cod->node(CODE_VOID); notify("se esperaba ')'"); yyclearin;} 
			;

pcond		: '(' cond ')'						{$$ = $2; }
			| '(' cond error					{ $$ = cod->node(CODE_VOID); notify("Se esperaba ')'"); yyclearin;}
			| '(' error							{ $$ = cod->node(CODE_VOID); notify("Se esperaba condición."); yyclearin;}
			| error								{ $$ = cod->node(CODE_VOID); notify("Se esperaba '('"); yyclearin;}
			;
			
			
cond	 	: expr comparador expr				{ $$ = cod->node($2, $1, $3);}
			| expr comparador error				{ $$ = cod->node(CODE_VOID); notify("Se esperaba expreción"); yyclearin;}
			;

comparador	: '<'								{$$ =  '<';}
			| '>'								{$$ =  '>';}
			| LEQ								{$$ =  LEQ;}
			| GEQ								{$$ =  GEQ;}
			| NEQ								{$$ =  NEQ;}
			| EQU								{$$ =  EQU;}
			;