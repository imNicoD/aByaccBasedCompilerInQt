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
    0,    1,    1,    3,    3,    3,    4,    4,    4,    5,
    5,    6,    6,    8,    8,    7,    7,   10,   10,    2,
    2,    9,    9,    9,    9,    9,    9,    9,    9,    9,
    9,   11,   11,   11,   13,   13,   13,   15,   15,   15,
   16,   16,   16,   16,   16,   14,   14,   14,   14,   12,
   12,   17,   17,   17,   17,   17,   17,
};
short yylen[] = {                                         2,
    2,    3,    0,    1,    5,    2,    2,    2,    1,    3,
    0,    2,    0,    2,    2,    1,    3,    3,    1,    3,
    0,    1,    4,    3,    4,    4,    3,    2,    2,    2,
    0,    4,    6,    3,    1,    3,    3,    1,    3,    3,
    1,    1,    2,    3,    3,    3,    3,    2,    1,    3,
    3,    1,    1,    1,    1,    1,    1,
};
short yydefred[] = {                                      0,
    9,    0,    0,    0,    0,    0,    4,    6,    0,    8,
    0,    7,    0,    0,    0,    0,    0,    1,    0,   22,
    0,    0,    0,    0,   29,    0,   30,    0,   49,    0,
    0,    0,   19,    0,   28,    0,    0,    2,    0,    0,
    0,    0,    0,   17,    0,   42,    0,    0,    0,   38,
    0,   48,    0,    0,   34,    0,    0,   24,    0,    0,
   20,   10,   15,    5,   12,   14,    0,   43,   25,    0,
    0,    0,    0,   26,   47,   46,   57,   56,   55,   54,
   52,   53,    0,    0,   18,   23,   45,   44,    0,    0,
   39,   40,   51,    0,    0,   33,
};
short yydgoto[] = {                                       4,
    5,   18,    6,    7,   23,   41,   12,   42,   19,   34,
   20,   53,   54,   31,   49,   50,   83,
};
short yysindex[] = {                                   -185,
    0, -201, -209,    0, -159,   21,    0,    0, -215,    0,
   43,    0,  -30,   -4,   -3, -167,  -50,    0,   33,    0,
 -185,   38, -151, -253,    0,  -27,    0, -171,    0,  -45,
 -182, -159,    0, -181,    0,  -27, -159,    0, -215,  -36,
 -152, -151,   59,    0,   79,    0, -148,   72,   14,    0,
   80,    0,  -32,    7,    0, -167, -137,    0,  -27,   34,
    0,    0,    0,    0,    0,    0,  -25,    0,    0,  -27,
  -27,  -27,  -27,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -38, -141,    0,    0,    0,    0,   14,   14,
    0,    0,    0,   34, -167,    0,
};
short yyrindex[] = {                                      1,
    0,    0,    0,    0,   19,    0,    0,    0,   23,    0,
   65,    0,    0,    0,    0, -180,    0,    0,    0,    0,
    1,    0,   -8,    0,    0,    0,    0,    0,    0,    0,
    0,   11,    0,    0,    0,    0,    5,    0,   23,    0,
    0,   -8,    0,    0,  -39,    0,    0,    0,  -28,    0,
    0,    0,    0,    0,    0,   30,    0,    0,    0,   31,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -47,    0,    0,    0,    0,  -17,    3,
    0,    0,    0,   -6,   30,    0,
};
short yygindex[] = {                                      0,
  104,   51,    0,   29,   87,   85,  105,    0,   17,  -29,
    0,   69,   13,    0,  -41,   32,    0,
};
#define YYTABLESIZE 297
short yytable[] = {                                      47,
    3,   41,   41,   41,   21,   41,   47,   41,   76,   26,
   36,   32,   35,   11,   35,   88,   35,   47,   21,   41,
   41,   63,   41,   36,   36,   36,   84,   36,   89,   90,
   35,   35,   33,   35,   50,   28,   30,   22,   48,   43,
    1,   36,   36,   37,   36,   37,   10,   37,   60,   70,
   31,   71,   50,    3,    8,   72,    9,   11,   43,    3,
   73,   37,   37,   31,   37,   96,   81,   22,   82,   31,
    1,    2,   33,   55,   58,   31,   70,   31,   71,   21,
   56,   11,   57,    3,   59,   31,   24,   61,   31,   27,
   32,   37,   13,   14,   15,   94,   39,   16,   51,   17,
   13,   14,   15,   91,   92,   16,   64,   17,   13,   14,
   15,   33,   69,   16,   70,   40,   71,   66,   67,   68,
   74,   85,   95,   16,   38,   62,   65,   86,   44,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   35,    0,    0,   32,    0,
   52,    0,    0,    0,    0,    0,   41,   93,   32,   35,
    0,   45,   46,   75,   41,   25,   41,   35,   45,   46,
   87,   41,   41,   41,   41,   35,    0,   35,   36,   45,
   46,    0,   35,   35,   35,   35,   36,    0,   36,   50,
   13,   27,   29,   36,   36,   36,   36,   50,   37,   50,
    3,    3,    3,   21,    0,    3,   37,    3,   37,   21,
    0,    0,    0,   37,   37,   37,   37,   77,   78,   79,
   80,   11,   11,   11,   11,   31,   27,   11,    0,   11,
    0,    0,    0,   31,   27,   31,   27,
};
short yycheck[] = {                                      45,
    0,   41,   42,   43,    0,   45,   45,   47,   41,   40,
   61,   59,   41,  267,   43,   41,   45,   45,    0,   59,
   60,   58,   62,   41,   61,   43,   56,   45,   70,   71,
   59,   60,   16,   62,   41,   40,   40,    9,   26,   23,
  256,   59,   60,   41,   62,   43,  256,   45,   36,   43,
   59,   45,   59,  269,  256,   42,  258,  267,   42,   59,
   47,   59,   60,   59,   62,   95,   60,   39,   62,   59,
  256,  257,   56,  256,  256,  256,   43,   59,   45,   59,
  263,   59,   32,  269,  266,  266,   44,   37,   59,   59,
  258,   59,  260,  261,  262,   83,   59,  265,  270,  267,
  260,  261,  262,   72,   73,  265,  259,  267,  260,  261,
  262,   95,   41,  265,   43,  267,   45,   59,   40,  268,
   41,  259,  264,   59,   21,   39,   42,   59,   24,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  256,   -1,   -1,  256,   -1,
  256,   -1,   -1,   -1,   -1,   -1,  256,  256,  266,  256,
   -1,  267,  268,  256,  264,  256,  266,  256,  267,  268,
  256,  271,  272,  273,  274,  264,   -1,  266,  256,  267,
  268,   -1,  271,  272,  273,  274,  264,   -1,  266,  256,
  259,  256,  256,  271,  272,  273,  274,  264,  256,  266,
  260,  261,  262,  259,   -1,  265,  264,  267,  266,  259,
   -1,   -1,   -1,  271,  272,  273,  274,  271,  272,  273,
  274,  259,  260,  261,  262,  256,  256,  265,   -1,  267,
   -1,   -1,   -1,  264,  264,  266,  266,
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
"program : listdecl listsent",
"listdecl : decl ';' listdecl",
"listdecl :",
"decl : declvar",
"decl : FUNCTION BEGIN listdeclvar funcsentlist END",
"decl : FUNCTION error",
"declvar : TYPE listvar",
"declvar : TYPE error",
"declvar : error",
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
{ yyval = cod->node(CODE_DECLLIST, yyvsp[-2],yyvsp[-1]);}
break;
case 3:
#line 10 "bnf.y"
{ yyval = cod->node(CODE_VOID);}
break;
case 5:
#line 14 "bnf.y"
{ yyval = cod->node(CODE_FUNCTION, yyvsp[-4], yyvsp[-3]); }
break;
case 6:
#line 15 "bnf.y"
{ notify("Se esperaba identificador.");}
break;
case 7:
#line 18 "bnf.y"
{ yyval = cod->node(CODE_DECL, yyvsp[-1], yyvsp[0]);}
break;
case 8:
#line 19 "bnf.y"
{ notify("Se esperaba identificador.");}
break;
case 9:
#line 20 "bnf.y"
{ notify("Se esperaba declaración.");}
break;
case 10:
#line 23 "bnf.y"
{ yyval = cod->node(CODE_DECLLIST, yyvsp[-2],yyvsp[-1]);}
break;
case 11:
#line 24 "bnf.y"
{ yyval = cod->node(CODE_VOID);}
break;
case 12:
#line 27 "bnf.y"
{}
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
{ yyval = yyvsp[-2]; }
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
{ yyval = cod->node(CODE_VOID); notify("Se esperaba UNTIL.");}
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
{ yyval = cod->node(CODE_VOID); notify("Se esperaba '='.");	}
break;
case 29:
#line 55 "bnf.y"
{yyval = cod->node(CODE_VOID); notify("se esperaba '('");}
break;
case 30:
#line 56 "bnf.y"
{yyval = cod->node(CODE_VOID); notify("se esperaba '('");}
break;
case 32:
#line 60 "bnf.y"
{yyval = cod->node(CODE_IF, yyvsp[-2], yyvsp[0]);}
break;
case 33:
#line 61 "bnf.y"
{yyval = cod->node(CODE_IF_ELSE, yyvsp[-5], yyvsp[-4], yyvsp[-3]);}
break;
case 34:
#line 62 "bnf.y"
{yyval = cod->node(CODE_VOID); notify("se esperaba THEN");}
break;
case 35:
#line 66 "bnf.y"
{ yyval = yyvsp[0]; }
break;
case 36:
#line 67 "bnf.y"
{ yyval = cod->node(CODE_EXPR, yyvsp[-2], '+', yyvsp[0]);}
break;
case 37:
#line 68 "bnf.y"
{ yyval = cod->node(CODE_EXPR, yyvsp[-2], '-', yyvsp[0]);}
break;
case 38:
#line 71 "bnf.y"
{ yyval = yyvsp[0]; }
break;
case 39:
#line 72 "bnf.y"
{ yyval = cod->node(CODE_EXPR, yyvsp[-2], '*', yyvsp[0]);}
break;
case 40:
#line 73 "bnf.y"
{ yyval = cod->node(CODE_EXPR, yyvsp[-2], '/', yyvsp[0]);}
break;
case 41:
#line 76 "bnf.y"
{}
break;
case 42:
#line 77 "bnf.y"
{if(!check_range(yyval)) notify("Variable fuera de rango");}
break;
case 43:
#line 78 "bnf.y"
{yyval = negative(yyvsp[0]);}
break;
case 44:
#line 79 "bnf.y"
{yyval = cod->node(CODE_CALL, yyvsp[-2]);}
break;
case 45:
#line 80 "bnf.y"
{yyval = cod->node(CODE_VOID); notify("se esperaba ')'");}
break;
case 46:
#line 83 "bnf.y"
{yyval = yyvsp[-1]; }
break;
case 47:
#line 84 "bnf.y"
{ yyval = cod->node(CODE_VOID); notify("Se esperaba ')'");}
break;
case 48:
#line 85 "bnf.y"
{ yyval = cod->node(CODE_VOID); notify("Se esperaba condición.");}
break;
case 49:
#line 86 "bnf.y"
{ yyval = cod->node(CODE_VOID); notify("Se esperaba '('");}
break;
case 50:
#line 90 "bnf.y"
{ yyval = cod->node(CODE_COND, yyvsp[-2], yyvsp[-1], yyvsp[0]);}
break;
case 51:
#line 91 "bnf.y"
{ yyval = cod->node(CODE_VOID); notify("Se esperaba expreción");}
break;
case 52:
#line 94 "bnf.y"
{yyval =  '<';}
break;
case 53:
#line 95 "bnf.y"
{yyval =  '>';}
break;
case 54:
#line 96 "bnf.y"
{yyval =  LEQ;}
break;
case 55:
#line 97 "bnf.y"
{yyval =  GEQ;}
break;
case 56:
#line 98 "bnf.y"
{yyval =  NEQ;}
break;
case 57:
#line 99 "bnf.y"
{yyval =  EQU;}
break;
#line 619 "y_tab.c"
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
