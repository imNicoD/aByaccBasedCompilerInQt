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
    0,    1,    1,    3,    3,    3,    4,    4,    5,    5,
    6,    6,    8,    8,    7,    7,    2,    2,   10,   10,
    9,    9,    9,    9,    9,    9,    9,    9,    9,    9,
   11,   11,   11,   13,   13,   13,   15,   15,   15,   16,
   16,   16,   16,   16,   14,   14,   14,   14,   12,   12,
   17,   17,   17,   17,   17,   17,
};
short yylen[] = {                                         2,
    2,    3,    0,    1,    5,    2,    2,    2,    3,    0,
    2,    0,    2,    2,    1,    3,    3,    1,    3,    0,
    1,    4,    3,    4,    4,    3,    2,    2,    2,    0,
    4,    6,    3,    1,    3,    3,    1,    3,    3,    1,
    1,    2,    3,    3,    3,    3,    2,    1,    3,    3,
    1,    1,    1,    1,    1,    1,
};
short yydefred[] = {                                      0,
    0,    0,    0,    0,    0,    4,    6,    0,    8,    0,
    7,    0,    0,    0,    0,    0,    0,    1,   18,   21,
    0,    0,    0,    0,    0,    0,   28,    0,   29,    0,
   48,    0,    0,    0,   27,    0,    2,    0,    0,    0,
    0,    0,   16,    0,   17,    0,   41,    0,    0,    0,
   37,    0,   47,    0,    0,   33,    0,   23,    0,    0,
    9,   14,    5,   11,   13,   19,    0,   42,   24,    0,
    0,    0,    0,   25,   46,   45,   56,   55,   54,   53,
   51,   52,    0,    0,   22,   44,   43,    0,    0,   38,
   39,   50,    0,    0,   32,
};
short yydgoto[] = {                                       3,
    4,   18,    5,    6,   23,   40,   11,   41,   19,   26,
   20,   54,   55,   33,   50,   51,   83,
};
short yysindex[] = {                                   -241,
 -204, -236,    0, -170,  -45,    0,    0, -237,    0,   -9,
    0, -160,  -34,  -33,  -31, -170,  -50,    0,    0,    0,
 -241,   22, -152, -194,   25, -161,    0,  -32,    0, -181,
    0,  -41, -207, -229,    0,  -32,    0, -237,  -37, -156,
 -152,   47,    0, -160,    0,   79,    0, -157,   71,   -6,
    0,   80,    0,  -36,  -43,    0, -170,    0,  -32,   33,
    0,    0,    0,    0,    0,    0,  -19,    0,    0,  -32,
  -32,  -32,  -32,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -35, -144,    0,    0,    0,   -6,   -6,    0,
    0,    0,   33, -170,    0,
};
short yyrindex[] = {                                     51,
    0,    0,    0,  122,    0,    0,    0,  -51,    0,   64,
    0,  -21,    0,    0,    0, -226,    0,    0,    0,    0,
   51,    0,  -20,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -51,    0,    0,
  -20,    0,    0,  -21,    0,    1,    0,    0,    0,   12,
    0,    0,    0,    0,    0,    0,   59,    0,    0,   65,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    3,    0,    0,    0,   23,   34,    0,
    0,    0,   58,   59,    0,
};
short yygindex[] = {                                      0,
  104,   10,    0,    7,   88,   86,  105,    0,    6,   84,
    0,   72,   -3,    0,   -1,   14,    0,
};
#define YYTABLESIZE 331
short yytable[] = {                                      70,
   40,   71,   31,   48,   76,   28,   30,   10,   32,   48,
   36,   34,   48,   21,   22,    1,   81,   25,   82,    9,
   62,   87,   35,   36,   49,   34,   58,    2,   42,   30,
   10,    2,   60,   36,   24,   72,   59,   30,   30,   30,
   73,   40,   40,   40,   22,   40,   42,   40,   56,   25,
    3,    7,   34,    8,   34,   57,   34,   49,   30,   40,
   40,   31,   40,   35,   26,   35,   84,   35,   88,   89,
   34,   34,   10,   34,   36,   70,   36,   71,   36,   93,
   38,   35,   35,   44,   35,   90,   91,   12,   52,   13,
   14,   15,   36,   36,   16,   36,   17,   45,   49,   13,
   14,   15,   63,   95,   16,   65,   17,   13,   14,   15,
   68,   69,   16,   70,   39,   71,   49,   30,   67,   94,
   74,   30,   15,   26,   37,   61,   64,   66,   43,    0,
   85,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   35,    0,   10,   10,   10,
   10,    0,    0,   10,   53,   10,    0,    0,   35,   75,
   92,   27,   29,    0,   31,   46,   47,   77,   78,   79,
   80,   46,   47,    0,   46,   47,   86,   20,   12,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   40,    0,   31,    0,
    0,    0,    0,    0,   40,    0,   40,   34,   31,    0,
    0,   40,   40,   40,   40,   34,    0,   34,   35,    0,
    0,    0,   34,   34,   34,   34,   35,    0,   35,   36,
    0,    0,    0,   35,   35,   35,   35,   36,    0,   36,
    0,    0,    0,    0,   36,   36,   36,   36,    3,    0,
    3,    3,    3,   49,   30,    3,    0,    3,    0,    0,
   26,   49,   30,   49,   30,    0,    0,    0,   26,    0,
   26,
};
short yycheck[] = {                                      43,
    0,   45,    0,   45,   41,   40,   40,   59,   40,   45,
   61,    0,   45,   59,    8,  257,   60,   12,   62,  256,
   58,   41,    0,   61,   28,   16,  256,  269,   23,  256,
  267,  269,   36,    0,   44,   42,  266,   59,   59,  266,
   47,   41,   42,   43,   38,   45,   41,   47,  256,   44,
    0,  256,   41,  258,   43,  263,   45,    0,    0,   59,
   60,   59,   62,   41,    0,   43,   57,   45,   70,   71,
   59,   60,  267,   62,   41,   43,   43,   45,   45,   83,
   59,   59,   60,   59,   62,   72,   73,  258,  270,  260,
  261,  262,   59,   60,  265,   62,  267,  259,   41,  260,
  261,  262,  259,   94,  265,   59,  267,  260,  261,  262,
  268,   41,  265,   43,  267,   45,   59,   59,   40,  264,
   41,    0,   59,   59,   21,   38,   41,   44,   24,   -1,
   59,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
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
#define YYFINAL 3
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
{ yyval = cod->node(CODE_VOID);}
break;
case 5:
#line 14 "bnf.y"
{ yyval = cod->node(CODE_FUNCTION, yyvsp[-2], yyvsp[-1]); }
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
#line 22 "bnf.y"
{ yyval = cod->node(CODE_DECLLIST, yyvsp[-2],yyvsp[0]);}
break;
case 10:
#line 23 "bnf.y"
{ yyval = cod->node(CODE_VOID);}
break;
case 11:
#line 26 "bnf.y"
{ yyval = cod->node(CODE_BLOCK, yyvsp[-1], yyvsp[0]); }
break;
case 12:
#line 27 "bnf.y"
{ yyval = cod->node(CODE_VOID);}
break;
case 13:
#line 30 "bnf.y"
{ yyval = yyvsp[-1]; }
break;
case 14:
#line 31 "bnf.y"
{ yyval = cod->node(CODE_ENTRY, yyvsp[-1]);}
break;
case 15:
#line 35 "bnf.y"
{ yyval = yyvsp[0]; }
break;
case 16:
#line 36 "bnf.y"
{ yyval = cod->node(CODE_VARLIST, yyvsp[-2], yyvsp[0]);}
break;
case 17:
#line 39 "bnf.y"
{ yyval = yyvsp[-1]; }
break;
case 18:
#line 40 "bnf.y"
{ yyval = yyvsp[0]; }
break;
case 19:
#line 43 "bnf.y"
{ yyval = cod->node(CODE_BLOCK, yyvsp[-2], yyvsp[0]); }
break;
case 20:
#line 44 "bnf.y"
{ yyval = cod->node(CODE_VOID);}
break;
case 21:
#line 47 "bnf.y"
{ yyval = yyvsp[0];}
break;
case 22:
#line 48 "bnf.y"
{ yyval = cod->node(CODE_LOOP, yyvsp[-2] ,yyvsp[0] );}
break;
case 23:
#line 49 "bnf.y"
{ yyval = cod->node(CODE_VOID); notify("Se esperaba UNTIL.");}
break;
case 24:
#line 50 "bnf.y"
{ yyval = cod->node(CODE_RETURN, yyvsp[-1]);}
break;
case 25:
#line 51 "bnf.y"
{ yyval = cod->node(CODE_PRINT, yyvsp[-1]);}
break;
case 26:
#line 52 "bnf.y"
{ yyval = cod->node(CODE_ASIG, yyvsp[-2], yyvsp[0]);}
break;
case 27:
#line 53 "bnf.y"
{ yyval = cod->node(CODE_VOID); notify("Se esperaba '='.");	}
break;
case 28:
#line 54 "bnf.y"
{yyval = cod->node(CODE_VOID); notify("se esperaba '('");}
break;
case 29:
#line 55 "bnf.y"
{yyval = cod->node(CODE_VOID); notify("se esperaba '('");}
break;
case 31:
#line 59 "bnf.y"
{yyval = cod->node(CODE_IF, yyvsp[-2], yyvsp[0]);}
break;
case 32:
#line 60 "bnf.y"
{yyval = cod->node(CODE_IF_ELSE, yyvsp[-5], yyvsp[-4], yyvsp[-3]);}
break;
case 33:
#line 61 "bnf.y"
{yyval = cod->node(CODE_VOID); notify("se esperaba THEN");}
break;
case 34:
#line 65 "bnf.y"
{ yyval = yyvsp[0]; }
break;
case 35:
#line 66 "bnf.y"
{ yyval = cod->node('+', yyvsp[-2], yyvsp[0]);}
break;
case 36:
#line 67 "bnf.y"
{ yyval = cod->node('-', yyvsp[-2], yyvsp[0]);}
break;
case 37:
#line 70 "bnf.y"
{ yyval = yyvsp[0]; }
break;
case 38:
#line 71 "bnf.y"
{ yyval = cod->node('*', yyvsp[-2], yyvsp[0]);}
break;
case 39:
#line 72 "bnf.y"
{ yyval = cod->node('/', yyvsp[-2], yyvsp[0]);}
break;
case 40:
#line 75 "bnf.y"
{}
break;
case 41:
#line 76 "bnf.y"
{if(!check_range(yyval)) notify("Variable fuera de rango");}
break;
case 42:
#line 77 "bnf.y"
{yyval = negative(yyvsp[0]);}
break;
case 43:
#line 78 "bnf.y"
{yyval = cod->node(CODE_CALL, yyvsp[-2]);}
break;
case 44:
#line 79 "bnf.y"
{yyval = cod->node(CODE_VOID); notify("se esperaba ')'");}
break;
case 45:
#line 82 "bnf.y"
{yyval = yyvsp[-1]; }
break;
case 46:
#line 83 "bnf.y"
{ yyval = cod->node(CODE_VOID); notify("Se esperaba ')'");}
break;
case 47:
#line 84 "bnf.y"
{ yyval = cod->node(CODE_VOID); notify("Se esperaba condición.");}
break;
case 48:
#line 85 "bnf.y"
{ yyval = cod->node(CODE_VOID); notify("Se esperaba '('");}
break;
case 49:
#line 89 "bnf.y"
{ yyval = cod->node(yyvsp[-1], yyvsp[-2], yyvsp[0]);}
break;
case 50:
#line 90 "bnf.y"
{ yyval = cod->node(CODE_VOID); notify("Se esperaba expreción");}
break;
case 51:
#line 93 "bnf.y"
{yyval =  '<';}
break;
case 52:
#line 94 "bnf.y"
{yyval =  '>';}
break;
case 53:
#line 95 "bnf.y"
{yyval =  LEQ;}
break;
case 54:
#line 96 "bnf.y"
{yyval =  GEQ;}
break;
case 55:
#line 97 "bnf.y"
{yyval =  NEQ;}
break;
case 56:
#line 98 "bnf.y"
{yyval =  EQU;}
break;
#line 622 "y_tab.c"
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
