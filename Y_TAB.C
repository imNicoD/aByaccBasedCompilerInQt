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
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    1,    1,    1,    3,    3,    3,    4,    4,    5,
    5,    6,    6,    8,    8,    7,    7,    2,    2,   10,
   10,    9,    9,    9,    9,    9,    9,    9,    9,    9,
    9,    9,   11,   11,   11,   13,   13,   13,   15,   15,
   15,   16,   16,   16,   16,   16,   14,   14,   14,   14,
   12,   12,   17,   17,   17,   17,   17,   17,
};
short yylen[] = {                                         2,
    2,    3,    3,    0,    1,    5,    2,    2,    2,    3,
    0,    2,    0,    2,    2,    1,    3,    3,    1,    3,
    0,    1,    4,    3,    4,    4,    3,    2,    2,    3,
    2,    0,    4,    6,    3,    1,    3,    3,    1,    3,
    3,    1,    1,    2,    3,    3,    3,    3,    2,    1,
    3,    3,    1,    1,    1,    1,    1,    1,
};
short yydefred[] = {                                      0,
    0,    0,    0,    0,    0,    0,    5,    0,    7,    0,
    9,    0,    8,    0,    0,    0,    0,    0,    0,    1,
   19,   22,    0,    3,    0,    0,    0,    0,    0,   29,
    0,   31,    0,   50,    0,    0,    0,   28,    0,    2,
    0,    0,    0,    0,    0,   17,    0,   18,    0,   43,
    0,    0,    0,   39,   30,    0,   49,    0,    0,   35,
    0,   24,    0,    0,   10,   15,    6,   12,   14,   20,
    0,   44,   25,    0,    0,    0,    0,   26,   48,   47,
   58,   57,   56,   55,   53,   54,    0,    0,   23,   46,
   45,    0,    0,   40,   41,   52,    0,    0,   34,
};
short yydgoto[] = {                                       4,
    5,   20,    6,    7,   26,   43,   13,   44,   21,   29,
   22,   58,   59,   36,   53,   54,   87,
};
short yysindex[] = {                                   -220,
  -30, -178, -240,    0, -170,  -26,    0, -220,    0, -219,
    0,   40,    0, -160,  -34,  -33,  -31, -170,  -50,    0,
    0,    0, -220,    0,   -3, -152, -200,   52, -161,    0,
  -32,    0, -238,    0,  -41, -209, -231,    0,  -32,    0,
 -219,  -37, -138, -152,   63,    0, -160,    0,   83,    0,
 -143,   71,   39,    0,    0,   85,    0,  -36,  -43,    0,
 -170,    0,  -32,   44,    0,    0,    0,    0,    0,    0,
  -19,    0,    0,  -32,  -32,  -32,  -32,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  -35, -137,    0,    0,
    0,   39,   39,    0,    0,    0,   44, -170,    0,
};
short yyrindex[] = {                                     51,
    0,    0,    0,    0,  128,    0,    0,   51,    0,  -51,
    0,   70,    0,  -21,    0,    0,    0, -225,    0,    0,
    0,    0,   51,    0,    0,  -20,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -51,    0,    0,  -20,    0,    0,  -21,    0,    1,    0,
    0,    0,   12,    0,    0,    0,    0,    0,    0,    0,
   59,    0,    0,   65,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    3,    0,    0,
    0,   23,   34,    0,    0,    0,   58,   59,    0,
};
short yygindex[] = {                                      0,
    7,    8,    0,    4,   89,   87,  105,    0,   26,   86,
    0,   72,  -11,    0,   29,   43,    0,
};
#define YYTABLESIZE 331
short yytable[] = {                                      74,
   42,   75,   33,   51,   80,   31,   33,   11,   35,   51,
   39,   36,   51,   25,   24,   11,   85,   55,   86,   52,
   66,   91,   37,   39,   62,   37,   12,   64,    8,   40,
   32,   56,   23,   38,   63,    1,    2,   32,   32,   28,
   32,   42,   42,   42,   25,   42,   60,   42,    3,    3,
    4,   45,   36,   61,   36,   41,   36,   51,   32,   42,
   42,   33,   42,   37,   27,   37,   12,   37,   88,   45,
   36,   36,   28,   36,   38,   97,   38,    9,   38,   10,
   76,   37,   37,   27,   37,   77,   74,   14,   75,   15,
   16,   17,   38,   38,   18,   38,   19,   48,   51,   15,
   16,   17,   92,   93,   18,   99,   19,   15,   16,   17,
   47,   73,   18,   74,   42,   75,   51,   32,   94,   95,
   67,   69,   71,   27,   72,   78,   98,   32,   16,   65,
   68,   46,   70,    0,   89,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   38,    0,   11,   11,   11,
   11,    0,    0,   11,   57,   11,    0,    0,   38,   79,
   96,   30,   32,    0,   34,   49,   50,   81,   82,   83,
   84,   49,   50,    0,   49,   50,   90,   21,   13,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   42,    0,   33,    0,
    0,    0,    0,    0,   42,    0,   42,   36,   33,    0,
    0,   42,   42,   42,   42,   36,    0,   36,   37,    0,
    0,    0,   36,   36,   36,   36,   37,    0,   37,   38,
    0,    0,    0,   37,   37,   37,   37,   38,    0,   38,
    0,    0,    0,    0,   38,   38,   38,   38,    4,    0,
    4,    4,    4,   51,   32,    4,    0,    4,    0,    0,
   27,   51,   32,   51,   32,    0,    0,    0,   27,    0,
   27,
};
short yycheck[] = {                                      43,
    0,   45,    0,   45,   41,   40,   40,   59,   40,   45,
   61,    0,   45,   10,    8,  256,   60,  256,   62,   31,
   58,   41,    0,   61,  256,   18,  267,   39,   59,   23,
  256,  270,   59,    0,  266,  256,  257,   59,   59,   14,
  266,   41,   42,   43,   41,   45,  256,   47,  269,  269,
    0,   26,   41,  263,   43,   59,   45,    0,    0,   59,
   60,   59,   62,   41,    0,   43,  267,   45,   61,   44,
   59,   60,   47,   62,   41,   87,   43,  256,   45,  258,
   42,   59,   60,   44,   62,   47,   43,  258,   45,  260,
  261,  262,   59,   60,  265,   62,  267,  259,   41,  260,
  261,  262,   74,   75,  265,   98,  267,  260,  261,  262,
   59,   41,  265,   43,  267,   45,   59,   59,   76,   77,
  259,   59,   40,   59,  268,   41,  264,    0,   59,   41,
   44,   27,   47,   -1,   63,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  256,   -1,  259,  260,  261,
  262,   -1,   -1,  265,  256,  267,   -1,   -1,  256,  256,
  256,  256,  256,   -1,  256,  267,  268,  271,  272,  273,
  274,  267,  268,   -1,  267,  268,  256,  259,  259,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  256,   -1,  256,   -1,
   -1,   -1,   -1,   -1,  264,   -1,  266,  256,  266,   -1,
   -1,  271,  272,  273,  274,  264,   -1,  266,  256,   -1,
   -1,   -1,  271,  272,  273,  274,  264,   -1,  266,  256,
   -1,   -1,   -1,  271,  272,  273,  274,  264,   -1,  266,
   -1,   -1,   -1,   -1,  271,  272,  273,  274,  258,   -1,
  260,  261,  262,  256,  256,  265,   -1,  267,   -1,   -1,
  256,  264,  264,  266,  266,   -1,   -1,   -1,  264,   -1,
  266,
};
#define YYFINAL 4
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 274
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
"LOOP","UNTIL","ID","CONST","TYPE","STR","EQU","NEQ","GEQ","LEQ",
};
char *yyrule[] = {
"$accept : program",
"program : listdecl bloqsent",
"listdecl : decl ';' listdecl",
"listdecl : error ';' listdecl",
"listdecl :",
"decl : declvar",
"decl : FUNCTION BEGIN listdeclvar funcsentlist END",
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
"sentencia : LOOP bloqsent UNTIL cond",
"sentencia : LOOP bloqsent error",
"sentencia : RETURN '(' expr ')'",
"sentencia : PRINT '(' STR ')'",
"sentencia : ID '=' expr",
"sentencia : ID error",
"sentencia : RETURN error",
"sentencia : PRINT '(' error",
"sentencia : PRINT error",
"sentencia :",
"if : IF pcond THEN bloqsent",
"if : IF pcond THEN bloqsent ELSE bloqsent",
"if : IF pcond error",
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
#line 6 "bnf.y"
{yyval = cod->node(CODE_PROGRAM, yyvsp[-1],yyvsp[0]);}
break;
case 2:
#line 9 "bnf.y"
{ yyval = cod->node(CODE_DECLLIST, yyvsp[-2],yyvsp[0]);}
break;
case 3:
#line 10 "bnf.y"
{ yyval = yyvsp[-1]; }
break;
case 4:
#line 11 "bnf.y"
{ yyval = cod->node(CODE_VOID);}
break;
case 6:
#line 15 "bnf.y"
{ yyval = cod->node(CODE_FUNCTION, yyvsp[-2], yyvsp[-1]); }
break;
case 7:
#line 16 "bnf.y"
{ notify("Se esperaba BEGIN."); yyclearin;}
break;
case 8:
#line 19 "bnf.y"
{ yyval = cod->node(CODE_DECL, yyvsp[-1], yyvsp[0]);}
break;
case 9:
#line 20 "bnf.y"
{ notify("Se esperaba identificador."); yyclearin;}
break;
case 10:
#line 23 "bnf.y"
{ yyval = cod->node(CODE_DECLLIST, yyvsp[-2],yyvsp[0]);}
break;
case 11:
#line 24 "bnf.y"
{ yyval = cod->node(CODE_VOID);}
break;
case 12:
#line 27 "bnf.y"
{ yyval = cod->node(CODE_BLOCK, yyvsp[-1], yyvsp[0]); }
break;
case 13:
#line 28 "bnf.y"
{ yyval = cod->node(CODE_VOID);}
break;
case 14:
#line 31 "bnf.y"
{ yyval = yyvsp[-1]; }
break;
case 15:
#line 32 "bnf.y"
{ yyval = cod->node(CODE_ENTRY, yyvsp[-1]);}
break;
case 16:
#line 36 "bnf.y"
{ yyval = yyvsp[0]; }
break;
case 17:
#line 37 "bnf.y"
{ yyval = cod->node(CODE_VARLIST, yyvsp[-2], yyvsp[0]);}
break;
case 18:
#line 40 "bnf.y"
{ yyval = yyvsp[-1]; }
break;
case 19:
#line 41 "bnf.y"
{ yyval = yyvsp[0]; }
break;
case 20:
#line 44 "bnf.y"
{ yyval = cod->node(CODE_BLOCK, yyvsp[-2], yyvsp[0]); }
break;
case 21:
#line 45 "bnf.y"
{ yyval = cod->node(CODE_VOID);}
break;
case 22:
#line 48 "bnf.y"
{ yyval = yyvsp[0];}
break;
case 23:
#line 49 "bnf.y"
{ yyval = cod->node(CODE_LOOP, yyvsp[-2] ,yyvsp[0] );}
break;
case 24:
#line 50 "bnf.y"
{ yyval = cod->node(CODE_VOID); notify("Se esperaba UNTIL."); yyclearin;}
break;
case 25:
#line 51 "bnf.y"
{ yyval = cod->node(CODE_RETURN, yyvsp[-1]);}
break;
case 26:
#line 52 "bnf.y"
{ yyval = cod->node(CODE_PRINT, yyvsp[-1]);}
break;
case 27:
#line 53 "bnf.y"
{ yyval = cod->node(CODE_ASIG, yyvsp[-2], yyvsp[0]);}
break;
case 28:
#line 54 "bnf.y"
{ yyval = cod->node(CODE_VOID); notify("Se esperaba '='."); yyclearin;}
break;
case 29:
#line 55 "bnf.y"
{yyval = cod->node(CODE_VOID); notify("se esperaba '('"); yyclearin;}
break;
case 30:
#line 56 "bnf.y"
{yyval = cod->node(CODE_VOID); notify("se esperaba '\"'"); yyclearin;}
break;
case 31:
#line 57 "bnf.y"
{yyval = cod->node(CODE_VOID); notify("se esperaba '('"); yyclearin;}
break;
case 33:
#line 61 "bnf.y"
{yyval = cod->node(CODE_IF, yyvsp[-2], yyvsp[0]);}
break;
case 34:
#line 62 "bnf.y"
{yyval = cod->node(CODE_IF_ELSE, yyvsp[-4], yyvsp[-2], yyvsp[0]);}
break;
case 35:
#line 63 "bnf.y"
{yyval = cod->node(CODE_VOID); notify("se esperaba THEN"); yyclearin;}
break;
case 36:
#line 67 "bnf.y"
{ yyval = yyvsp[0]; }
break;
case 37:
#line 68 "bnf.y"
{ yyval = cod->node('+', yyvsp[-2], yyvsp[0]);}
break;
case 38:
#line 69 "bnf.y"
{ yyval = cod->node('-', yyvsp[-2], yyvsp[0]);}
break;
case 39:
#line 72 "bnf.y"
{ yyval = yyvsp[0]; }
break;
case 40:
#line 73 "bnf.y"
{ yyval = cod->node('*', yyvsp[-2], yyvsp[0]);}
break;
case 41:
#line 74 "bnf.y"
{ yyval = cod->node('/', yyvsp[-2], yyvsp[0]);}
break;
case 42:
#line 77 "bnf.y"
{}
break;
case 43:
#line 78 "bnf.y"
{if(!check_range(yyval)) notify("Variable fuera de rango");}
break;
case 44:
#line 79 "bnf.y"
{yyval = negative(yyvsp[0]);}
break;
case 45:
#line 80 "bnf.y"
{yyval = cod->node(CODE_CALL, yyvsp[-2]);}
break;
case 46:
#line 81 "bnf.y"
{yyval = cod->node(CODE_VOID); notify("se esperaba ')'"); yyclearin;}
break;
case 47:
#line 84 "bnf.y"
{yyval = yyvsp[-1]; }
break;
case 48:
#line 85 "bnf.y"
{ yyval = cod->node(CODE_VOID); notify("Se esperaba ')'"); yyclearin;}
break;
case 49:
#line 86 "bnf.y"
{ yyval = cod->node(CODE_VOID); notify("Se esperaba condición."); yyclearin;}
break;
case 50:
#line 87 "bnf.y"
{ yyval = cod->node(CODE_VOID); notify("Se esperaba '('"); yyclearin;}
break;
case 51:
#line 91 "bnf.y"
{ yyval = cod->node(yyvsp[-1], yyvsp[-2], yyvsp[0]);}
break;
case 52:
#line 92 "bnf.y"
{ yyval = cod->node(CODE_VOID); notify("Se esperaba expreción"); yyclearin;}
break;
case 53:
#line 95 "bnf.y"
{yyval =  '<';}
break;
case 54:
#line 96 "bnf.y"
{yyval =  '>';}
break;
case 55:
#line 97 "bnf.y"
{yyval =  LEQ;}
break;
case 56:
#line 98 "bnf.y"
{yyval =  GEQ;}
break;
case 57:
#line 99 "bnf.y"
{yyval =  NEQ;}
break;
case 58:
#line 100 "bnf.y"
{yyval =  EQU;}
break;
#line 632 "y_tab.c"
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
