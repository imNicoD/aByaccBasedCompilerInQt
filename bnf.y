%token FUNCTION BEGIN END RETURN PRINT IF THEN ELSE LOOP UNTIL ID CONST TYPE STR EQU NEQ GEQ LEQ
%right ELSE noelse
%%

program		: listdecl 									{cod->push(KIND_LABEL,TO_BW);} 
				bloqsent								{$$ = cod->node(CODE_PROGRAM, $1,$2);}
			;

listdecl	: decl ';' listdecl							{ $$ = cod->node(CODE_DECLLIST, $1,$3);}
			| error	';' listdecl						{ $$ = $2; }
			|											{ $$ = cod->node(CODE_VOID);}
			;
			
decl		: declvar
			| FUNCTION BEGIN 							{ fIn(); }
				listdeclvar funcsentlist END 			{ $$ = cod->node(CODE_FUNCTION, $3, $4); fOut(); }
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
			| ID ':'									{ if(sym->setType($1,"entry")){ cod->push(KIND_ENTRY, $1);$$ = cod->node(CODE_ENTRY, $1);} else notify("Identificador redeclarado.");;}
			;	


listvar		: ID 										{ if(setType($1,"long")) $$ = $1; else notify("Identificador redeclarado.");}
			| ID ',' listvar							{ if(setType($1,"long")) $$ = cod->node(CODE_VARLIST, $1, $3); else notify("Identificador redeclarado.");}
			;

bloqsent	: BEGIN listsent END						{ $$ = $2; }
			| sentencia									{ $$ = $1; }
			;

listsent	: sentencia ';' listsent					{ $$ = cod->node(CODE_BLOCK, $1, $3); }
			|											{ $$ = cod->node(CODE_VOID);}
			;
			
sentencia 	: if										{ $$ = $1;}
			| LOOP 										{cod->push(KIND_LABEL, TO_FW);} 
				bloqsent UNTIL cond 					{cod->push(KIND_JUMPC, TO_BW); $$ = cod->node(CODE_LOOP, $2 ,$4 );}
			| RETURN '(' expr ')'						{cod->push(KIND_RET); $$ = cod->node(CODE_RETURN, $3);}
			| PRINT '(' STR ')'							{cod->push(KIND_SYMBOL, $3); cod->push(KIND_PRINT); $$ = cod->node(CODE_PRINT, $3);}
			| ID '=' expr								{if(($1 = decl($1)) >= 0) cod->push(KIND_SYMBOL, $1); else notify("Variable no declarada long."); cod->push(KIND_OPERATOR, '='); $$ = cod->node(CODE_ASIG, $1, $3);}
			| ID error									{ $$ = cod->node(CODE_VOID); notify("Se esperaba '='."); yyclearin;}
			| RETURN error								{$$ = cod->node(CODE_VOID); notify("se esperaba '('"); yyclearin;}
			| PRINT '(' error							{$$ = cod->node(CODE_VOID); notify("se esperaba '\"'"); yyclearin;}
			| PRINT error								{$$ = cod->node(CODE_VOID); notify("se esperaba '('"); yyclearin;}
			|
			;

if			: IF pcond 									{ cod->push(KIND_JUMPC, TO_FW); }
				THEN bloqsent 							{$$ = cod->node(CODE_IF_ELSE, $2, $4, $5);}
				else									{cod->push(KIND_LABEL, TO_BW);}
			| IF pcond error							{$$ = cod->node(CODE_VOID); notify("se esperaba THEN"); yyclearin;}
			;

else		: ELSE 										{cod->push(KIND_JUMP, TO_FW),cod->push(KIND_LABEL, TO_BBW); }
				bloqsent								{$$ = $2;}
			| %prec noelse								{$$ = cod->node(CODE_VOID); }
			;

expr		: term 								{ $$ = $1; }
			| expr '+' term						{ cod->push(KIND_OPERATOR, '+'); $$ = cod->node('+', $1, $3);}
			| expr '-' term						{ cod->push(KIND_OPERATOR, '-'); $$ = cod->node('-', $1, $3);}
			;
			
term 		: fact								{ $$ = $1; }
			|  term '*' fact					{ cod->push(KIND_OPERATOR, '*');$$ = cod->node('*', $1, $3);}
			|  term '/' fact					{ cod->push(KIND_OPERATOR, '/');$$  =cod->node('/', $1, $3);}
			;
		
fact		: ID								{ if(($1 = decl($1)) >= 0) cod->push(KIND_SYMBOL, $1); else notify("Variable no declarada long."); }
			| CONST								{if(!check_range($$)) notify("Variable fuera de rango"); else cod->push(KIND_SYMBOL, $1);}
			| '-' CONST							{$$ = negative($2); cod->push(KIND_SYMBOL, $$);}
			| ID '(' ')'						{cod->push(KIND_SYMBOL, $1);cod->push(KIND_CALL, 0);$$ = cod->node(CODE_CALL, $1);}
			| ID '(' error						{$$ = cod->node(CODE_VOID); notify("se esperaba ')'"); yyclearin;} 
			;

pcond		: '(' cond ')'						{$$ = $2; }
			| '(' cond error					{ $$ = cod->node(CODE_VOID); notify("Se esperaba ')'"); yyclearin;}
			| '(' error							{ $$ = cod->node(CODE_VOID); notify("Se esperaba condición."); yyclearin;}
			| error								{ $$ = cod->node(CODE_VOID); notify("Se esperaba '('"); yyclearin;}
			;
			
			
cond	 	: expr comparador expr				{ cod->push(KIND_OPERATOR, $2); $$ = cod->node($2, $1, $3);}
			| expr comparador error				{ $$ = cod->node(CODE_VOID); notify("Se esperaba expreción"); yyclearin;}
			;

comparador	: '<'								{$$ =  '<';}
			| '>'								{$$ =  '>';}
			| LEQ								{$$ =  LEQ;}
			| GEQ								{$$ =  GEQ;}
			| NEQ								{$$ =  NEQ;}
			| EQU								{$$ =  EQU;}
			;