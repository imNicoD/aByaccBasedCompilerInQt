#ifndef lint
static char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif
#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define yyclearin (yychar=(-1))
#define yyerrok (yyerrflag=0)
#define YYRECOVERING (yyerrflag!=0)
#define YYPREFIX "yy"
#define FUNCTION 257
#define BEGIN 258
#define END 259
#define RETURN 260
#define PRINT 261
#define IF 262
#define THEN 263
#define ELSE 264
#define LOOP 265
#define UNTIL 266
#define ID 267
#define CONST 268
#define TYPE 269
#define STR 270
#define EQU 271
#define NEQ 272
#define GEQ 273
#define LEQ 274
#define noelse 275
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    3,    0,    1,    1,    1,    4,    7,    4,    4,    5,
    5,    6,    6,    8,    8,   10,   10,    9,    9,    2,
    2,   12,   12,   11,   14,   11,   11,   11,   11,   11,
   11,   11,   11,   11,   18,   20,   13,   13,   21,   19,
   19,   16,   16,   16,   22,   22,   22,   23,   23,   23,
   23,   23,   17,   17,   17,   17,   15,   15,   24,   24,
   24,   24,   24,   24,
};
short yylen[] = {                                         2,
    0,    3,    3,    3,    0,    1,    0,    6,    2,    2,
    2,    3,    0,    2,    0,    2,    2,    1,    3,    3,
    1,    3,    0,    1,    0,    5,    4,    4,    3,    2,
    2,    3,    2,    0,    0,    0,    7,    3,    0,    3,
    0,    1,    3,    3,    1,    3,    3,    1,    1,    2,
    3,    3,    3,    3,    2,    1,    3,    3,    1,    1,
    1,    1,    1,    1,
};
short yydefred[] = {                                      0,
    0,    0,    0,    0,    1,    0,    6,    0,    9,    7,
   11,    0,   10,    0,    0,    4,    0,    0,    0,    0,
    0,    0,   25,    0,    2,   21,   24,    3,    0,    0,
   19,    0,    0,   31,    0,   33,    0,   56,    0,    0,
    0,   30,    0,    0,    0,    0,    0,    0,    0,   20,
    0,   49,    0,    0,    0,   45,   32,    0,   55,    0,
    0,   38,    0,    0,    0,   12,   17,    8,   14,   16,
   22,    0,   50,   27,    0,    0,    0,    0,   28,   54,
   53,   64,   63,   62,   61,   59,   60,    0,    0,    0,
   52,   51,    0,    0,   46,   47,   58,    0,   36,   26,
    0,   39,   37,    0,   40,
};
short yydgoto[] = {                                       4,
    5,   25,   14,    6,    7,   30,   17,   46,   13,   47,
   26,   33,   27,   41,   60,   61,   40,   63,  103,  101,
  104,   55,   56,   88,
};
short yysindex[] = {                                   -167,
   17, -211, -236,    0,    0,   19,    0, -167,    0,    0,
    0,    8,    0, -157, -167,    0, -189, -183, -149,  -34,
  -33,  -31,    0,  -50,    0,    0,    0,    0,   28, -141,
    0,   32, -164,    0,  -32,    0, -241,    0,  -41, -158,
 -157,    0,  -32, -189,  -37, -159, -141,   33, -149,    0,
   66,    0, -161,  -27,  -12,    0,    0,   68,    0,  -36,
  -43,    0, -148, -152,   22,    0,    0,    0,    0,    0,
    0,  -19,    0,    0,  -32,  -32,  -32,  -32,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -35, -157,  -32,
    0,    0,  -12,  -12,    0,    0,    0,   22,    0,    0,
 -142,    0,    0, -157,    0,
};
short yyrindex[] = {                                     51,
    0,    0,    0,    0,    0,    0,    0,   51,    0,    0,
    0,   64,    0,  125,   51,    0,  -51,    0,  -20,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -18,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -136,
 -138,    0,    0,  -51,    0,    0,  -18,    0,  -20,    0,
    1,    0,    0,    0,   12,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   27,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   38,    0,
    0,    0,   23,   34,    0,    0,    0,   58,    0,    0,
    3,    0,    0,   38,    0,
};
short yygindex[] = {                                      0,
   25,  -16,    0,    0,   15,   85,    0,   83,  113,    0,
    7,   84,    0,    0,   42,   -7,    0,    0,    0,    0,
    0,  -26,   -8,    0,
};
#define YYTABLESIZE 324
short yytable[] = {                                      75,
   48,   76,   41,   53,   81,   35,   37,   13,   39,   53,
   43,   42,   53,   74,   57,   75,   86,   76,   87,   11,
   67,   92,   43,   43,   64,   32,   29,   54,   58,   77,
   12,   29,   16,   44,   78,   65,   48,   34,   34,   28,
   34,   48,   48,   48,    9,   48,   10,   48,   93,   94,
    5,   18,   42,   48,   42,   32,   42,   57,   29,   48,
   48,   41,   48,   43,   75,   43,   76,   43,   95,   96,
   42,   42,   99,   42,   44,    8,   44,   15,   44,    3,
   98,   43,   43,   12,   43,   29,   44,  105,    1,    2,
   49,   70,   44,   44,   50,   44,   34,   62,   57,   68,
   19,    3,   20,   21,   22,   72,   73,   23,   79,   24,
   20,   21,   22,   90,   89,   23,   57,   24,   20,   21,
   22,  102,   18,   23,   34,   45,   35,   34,   66,   69,
   31,  100,   71,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   42,    0,   13,   13,   13,
   13,    0,    0,   13,   59,   13,    0,    0,   42,   80,
   97,   34,   36,    0,   38,   51,   52,   82,   83,   84,
   85,   51,   52,    0,   51,   52,   91,    0,   23,    0,
   15,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   48,    0,    0,    0,
    0,    0,    0,    0,   48,    0,   48,   42,   41,    0,
    0,   48,   48,   48,   48,   42,    0,   42,   43,    0,
    0,    0,   42,   42,   42,   42,   43,    0,   43,   44,
   29,    0,   29,   43,   43,   43,   43,   44,    0,   44,
    0,   34,    0,   34,   44,   44,   44,   44,    5,    0,
    5,    5,    5,   57,    0,    5,    0,    5,    0,    0,
    0,   57,    0,   57,
};
short yycheck[] = {                                      43,
    0,   45,    0,   45,   41,   40,   40,   59,   40,   45,
   61,    0,   45,   41,  256,   43,   60,   45,   62,  256,
   58,   41,    0,   61,   41,   19,    0,   35,  270,   42,
  267,   17,    8,    0,   47,   43,   30,    0,   59,   15,
   59,   41,   42,   43,  256,   45,  258,   47,   75,   76,
    0,   44,   41,   47,   43,   49,   45,    0,   44,   59,
   60,   59,   62,   41,   43,   43,   45,   45,   77,   78,
   59,   60,   89,   62,   41,   59,   43,   59,   45,  269,
   88,   59,   60,  267,   62,   59,   59,  104,  256,  257,
   59,   59,   59,   60,  259,   62,   59,  256,   41,  259,
  258,  269,  260,  261,  262,   40,  268,  265,   41,  267,
  260,  261,  262,  266,  263,  265,   59,  267,  260,  261,
  262,  264,   59,  265,    0,  267,  263,  266,   44,   47,
   18,   90,   49,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  256,   -1,  259,  260,  261,
  262,   -1,   -1,  265,  256,  267,   -1,   -1,  256,  256,
  256,  256,  256,   -1,  256,  267,  268,  271,  272,  273,
  274,  267,  268,   -1,  267,  268,  256,   -1,  259,   -1,
  259,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  256,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  264,   -1,  266,  256,  266,   -1,
   -1,  271,  272,  273,  274,  264,   -1,  266,  256,   -1,
   -1,   -1,  271,  272,  273,  274,  264,   -1,  266,  256,
  264,   -1,  266,  271,  272,  273,  274,  264,   -1,  266,
   -1,  264,   -1,  266,  271,  272,  273,  274,  258,   -1,
  260,  261,  262,  256,   -1,  265,   -1,  267,   -1,   -1,
   -1,  264,   -1,  266,
};
#define YYFINAL 4
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 275
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,
"':'","';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,"FUNCTION","BEGIN","END","RETURN","PRINT","IF","THEN","ELSE",
"LOOP","UNTIL","ID","CONST","TYPE","STR","EQU","NEQ","GEQ","LEQ","noelse",
};
char *yyrule[] = {
"$accept : program",
"$$1 :",
"program : listdecl $$1 bloqsent",
"listdecl : decl ';' listdecl",
"listdecl : error ';' listdecl",
"listdecl :",
"decl : declvar",
"$$2 :",
"decl : FUNCTION BEGIN $$2 listdeclvar funcsentlist END",
"decl : FUNCTION error",
"declvar : TYPE listvar",
"declvar : TYPE error",
"listdeclvar : declvar ';' listdeclvar",
"listdeclvar :",
"funcsentlist : funcsent funcsentlist",
"funcsentlist :",
"funcsent : sentencia ';'",
"funcsent : ID ':'",
"listvar : ID",
"listvar : ID ',' listvar",
"bloqsent : BEGIN listsent END",
"bloqsent : sentencia",
"listsent : sentencia ';' listsent",
"listsent :",
"sentencia : if",
"$$3 :",
"sentencia : LOOP $$3 bloqsent UNTIL cond",
"sentencia : RETURN '(' expr ')'",
"sentencia : PRINT '(' STR ')'",
"sentencia : ID '=' expr",
"sentencia : ID error",
"sentencia : RETURN error",
"sentencia : PRINT '(' error",
"sentencia : PRINT error",
"sentencia :",
"$$4 :",
"$$5 :",
"if : IF pcond $$4 THEN bloqsent $$5 else",
"if : IF pcond error",
"$$6 :",
"else : ELSE $$6 bloqsent",
"else :",
"expr : term",
"expr : expr '+' term",
"expr : expr '-' term",
"term : fact",
"term : term '*' fact",
"term : term '/' fact",
"fact : ID",
"fact : CONST",
"fact : '-' CONST",
"fact : ID '(' ')'",
"fact : ID '(' error",
"pcond : '(' cond ')'",
"pcond : '(' cond error",
"pcond : '(' error",
"pcond : error",
"cond : expr comparador expr",
"cond : expr comparador error",
"comparador : '<'",
"comparador : '>'",
"comparador : LEQ",
"comparador : GEQ",
"comparador : NEQ",
"comparador : EQU",
};
#endif
#ifndef YYSTYPE
typedef int YYSTYPE;
#endif
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH 500
#endif
#endif
int yydebug;
int yynerrs;
int yyerrflag;
int yychar;
short *yyssp;
YYSTYPE *yyvsp;
YYSTYPE yyval;
YYSTYPE yylval;
short yyss[YYSTACKSIZE];
YYSTYPE yyvs[YYSTACKSIZE];
#define yystacksize YYSTACKSIZE
#define YYABORT goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab
int
yyparse()
{
    register int yym, yyn, yystate;
#if YYDEBUG
    register char *yys;
    extern char *getenv();

    if (yys = getenv("YYDEBUG"))
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = (-1);

    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if (yyn = yydefred[yystate]) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yyssp >= yyss + yystacksize - 1)
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = (-1);
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;
#ifdef lint
    goto yynewerror;
#endif
yynewerror:
    yyerror("syntax error");
#ifdef lint
    goto yyerrlab;
#endif
yyerrlab:
    ++yynerrs;
yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yyss + yystacksize - 1)
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = (-1);
        goto yyloop;
    }
yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    yyval = yyvsp[1-yym];
    switch (yyn)
    {
case 1:
#line 5 "bnf.y"
{cod->push(KIND_LABEL,TO_BW);}
break;
case 2:
#line 6 "bnf.y"
{yyval = cod->node(CODE_PROGRAM, yyvsp[-2],yyvsp[-1]);}
break;
case 3:
#line 9 "bnf.y"
{ yyval = cod->node(CODE_DECLLIST, yyvsp[-2],yyvsp[0]);}
break;
case 4:
#line 10 "bnf.y"
{ yyval = yyvsp[-1]; }
break;
case 5:
#line 11 "bnf.y"
{ yyval = cod->node(CODE_VOID);}
break;
case 7:
#line 15 "bnf.y"
{ fIn(); }
break;
case 8:
#line 16 "bnf.y"
{ yyval = cod->node(CODE_FUNCTION, yyvsp[-3], yyvsp[-2]); fOut(); }
break;
case 9:
#line 17 "bnf.y"
{ notify("Se esperaba BEGIN."); yyclearin;}
break;
case 10:
#line 20 "bnf.y"
{ yyval = cod->node(CODE_DECL, yyvsp[-1], yyvsp[0]);}
break;
case 11:
#line 21 "bnf.y"
{ notify("Se esperaba identificador."); yyclearin;}
break;
case 12:
#line 24 "bnf.y"
{ yyval = cod->node(CODE_DECLLIST, yyvsp[-2],yyvsp[0]);}
break;
case 13:
#line 25 "bnf.y"
{ yyval = cod->node(CODE_VOID);}
break;
case 14:
#line 28 "bnf.y"
{ yyval = cod->node(CODE_BLOCK, yyvsp[-1], yyvsp[0]); }
break;
case 15:
#line 29 "bnf.y"
{ yyval = cod->node(CODE_VOID);}
break;
case 16:
#line 32 "bnf.y"
{ yyval = yyvsp[-1]; }
break;
case 17:
#line 33 "bnf.y"
{ if(sym->setType(yyvsp[-1],"entry")){ cod->push(KIND_ENTRY, yyvsp[-1]);yyval = cod->node(CODE_ENTRY, yyvsp[-1]);} else notify("Identificador redeclarado.");;}
break;
case 18:
#line 37 "bnf.y"
{ if(setType(yyvsp[0],"long")) yyval = yyvsp[0]; else notify("Identificador redeclarado.");}
break;
case 19:
#line 38 "bnf.y"
{ if(setType(yyvsp[-2],"long")) yyval = cod->node(CODE_VARLIST, yyvsp[-2], yyvsp[0]); else notify("Identificador redeclarado.");}
break;
case 20:
#line 41 "bnf.y"
{ yyval = yyvsp[-1]; }
break;
case 21:
#line 42 "bnf.y"
{ yyval = yyvsp[0]; }
break;
case 22:
#line 45 "bnf.y"
{ yyval = cod->node(CODE_BLOCK, yyvsp[-2], yyvsp[0]); }
break;
case 23:
#line 46 "bnf.y"
{ yyval = cod->node(CODE_VOID);}
break;
case 24:
#line 49 "bnf.y"
{ yyval = yyvsp[0];}
break;
case 25:
#line 50 "bnf.y"
{cod->push(KIND_LABEL, TO_FW);}
break;
case 26:
#line 51 "bnf.y"
{cod->push(KIND_JUMPC, TO_BW); yyval = cod->node(CODE_LOOP, yyvsp[-3] ,yyvsp[-1] );}
break;
case 27:
#line 52 "bnf.y"
{cod->push(KIND_RET); yyval = cod->node(CODE_RETURN, yyvsp[-1]);}
break;
case 28:
#line 53 "bnf.y"
{cod->push(KIND_SYMBOL, yyvsp[-1]); cod->push(KIND_PRINT); yyval = cod->node(CODE_PRINT, yyvsp[-1]);}
break;
case 29:
#line 54 "bnf.y"
{if((yyvsp[-2] = decl(yyvsp[-2])) >= 0) cod->push(KIND_SYMBOL, yyvsp[-2]); else notify("Variable no declarada long."); cod->push(KIND_OPERATOR, '='); yyval = cod->node(CODE_ASIG, yyvsp[-2], yyvsp[0]);}
break;
case 30:
#line 55 "bnf.y"
{ yyval = cod->node(CODE_VOID); notify("Se esperaba '='."); yyclearin;}
break;
case 31:
#line 56 "bnf.y"
{yyval = cod->node(CODE_VOID); notify("se esperaba '('"); yyclearin;}
break;
case 32:
#line 57 "bnf.y"
{yyval = cod->node(CODE_VOID); notify("se esperaba '\"'"); yyclearin;}
break;
case 33:
#line 58 "bnf.y"
{yyval = cod->node(CODE_VOID); notify("se esperaba '('"); yyclearin;}
break;
case 35:
#line 62 "bnf.y"
{ cod->push(KIND_JUMPC, TO_FW); }
break;
case 36:
#line 63 "bnf.y"
{yyval = cod->node(CODE_IF_ELSE, yyvsp[-3], yyvsp[-1], yyvsp[0]);}
break;
case 37:
#line 64 "bnf.y"
{cod->push(KIND_LABEL, TO_BW);}
break;
case 38:
#line 65 "bnf.y"
{yyval = cod->node(CODE_VOID); notify("se esperaba THEN"); yyclearin;}
break;
case 39:
#line 68 "bnf.y"
{cod->push(KIND_JUMP, TO_FW),cod->push(KIND_LABEL, TO_BBW); }
break;
case 40:
#line 69 "bnf.y"
{yyval = yyvsp[-1];}
break;
case 41:
#line 70 "bnf.y"
{yyval = cod->node(CODE_VOID); }
break;
case 42:
#line 73 "bnf.y"
{ yyval = yyvsp[0]; }
break;
case 43:
#line 74 "bnf.y"
{ cod->push(KIND_OPERATOR, '+'); yyval = cod->node('+', yyvsp[-2], yyvsp[0]);}
break;
case 44:
#line 75 "bnf.y"
{ cod->push(KIND_OPERATOR, '-'); yyval = cod->node('-', yyvsp[-2], yyvsp[0]);}
break;
case 45:
#line 78 "bnf.y"
{ yyval = yyvsp[0]; }
break;
case 46:
#line 79 "bnf.y"
{ cod->push(KIND_OPERATOR, '*');yyval = cod->node('*', yyvsp[-2], yyvsp[0]);}
break;
case 47:
#line 80 "bnf.y"
{ cod->push(KIND_OPERATOR, '/');yyval  =cod->node('/', yyvsp[-2], yyvsp[0]);}
break;
case 48:
#line 83 "bnf.y"
{ if((yyvsp[0] = decl(yyvsp[0])) >= 0) cod->push(KIND_SYMBOL, yyvsp[0]); else notify("Variable no declarada long."); }
break;
case 49:
#line 84 "bnf.y"
{if(!check_range(yyval)) notify("Variable fuera de rango"); else cod->push(KIND_SYMBOL, yyvsp[0]);}
break;
case 50:
#line 85 "bnf.y"
{yyval = negative(yyvsp[0]); cod->push(KIND_SYMBOL, yyval);}
break;
case 51:
#line 86 "bnf.y"
{cod->push(KIND_SYMBOL, yyvsp[-2]);cod->push(KIND_CALL, 0);yyval = cod->node(CODE_CALL, yyvsp[-2]);}
break;
case 52:
#line 87 "bnf.y"
{yyval = cod->node(CODE_VOID); notify("se esperaba ')'"); yyclearin;}
break;
case 53:
#line 90 "bnf.y"
{yyval = yyvsp[-1]; }
break;
case 54:
#line 91 "bnf.y"
{ yyval = cod->node(CODE_VOID); notify("Se esperaba ')'"); yyclearin;}
break;
case 55:
#line 92 "bnf.y"
{ yyval = cod->node(CODE_VOID); notify("Se esperaba condición."); yyclearin;}
break;
case 56:
#line 93 "bnf.y"
{ yyval = cod->node(CODE_VOID); notify("Se esperaba '('"); yyclearin;}
break;
case 57:
#line 97 "bnf.y"
{ cod->push(KIND_OPERATOR, yyvsp[-1]); yyval = cod->node(yyvsp[-1], yyvsp[-2], yyvsp[0]);}
break;
case 58:
#line 98 "bnf.y"
{ yyval = cod->node(CODE_VOID); notify("Se esperaba expreción"); yyclearin;}
break;
case 59:
#line 101 "bnf.y"
{yyval =  '<';}
break;
case 60:
#line 102 "bnf.y"
{yyval =  '>';}
break;
case 61:
#line 103 "bnf.y"
{yyval =  LEQ;}
break;
case 62:
#line 104 "bnf.y"
{yyval =  GEQ;}
break;
case 63:
#line 105 "bnf.y"
{yyval =  NEQ;}
break;
case 64:
#line 106 "bnf.y"
{yyval =  EQU;}
break;
#line 668 "y_tab.c"
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yyssp, yystate);
#endif
    if (yyssp >= yyss + yystacksize - 1)
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;
yyoverflow:
    yyerror("yacc stack overflow");
yyabort:
    return (1);
yyaccept:
    return (0);
}
