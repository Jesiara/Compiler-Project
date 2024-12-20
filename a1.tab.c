
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "a1.y"

	#include<stdio.h>
	#include<stdlib.h>
	#include <string.h>
	#include <math.h>

	extern FILE *yyin;
	extern FILE *yyout;
	int yyparse();
	int yylex();
	int yyerror();

    int vptr = 0;
    int val[1000];//this will contain the value of the variables
    char variables[1000][1000];//this will contain the variables declared

	void gcd(int a,int b)
	{
		int gcd;
		for(int i=1; i <= a && i <= b; ++i)
		{
			if(a%i==0 && b%i==0)
				gcd = i;
		}
    	printf("GCD of %d & %d is %d\n", a, b, gcd);
	}
	void swap(int *x,int *y)
	{
		int temp = *x;
		*x = *y;
		*y = temp;
	}
    int ifExists(char str[]){//check if a variable already exists
        int i;
        for(i = 0; i < vptr; i++){
            if(strcmp(variables[i],str) == 0) return 1;
        }
        return 0;
    }
    
    int addval(char str[],int newval){// if a variable is not already exist add new value
        if(ifExists(str) == 1) return 0;
        strcpy(variables[vptr],str);
        val[vptr] = newval;
        vptr++;
        return 1;
    }

    int getval(char str[]){//for getting value
        int idx = -1;
        int i;
        for(i = 0; i < vptr; i++){
            if(strcmp(variables[i],str) == 0) {
                idx = i;
                break;
            }
        }
        return val[idx];
    }
    int setval(char str[], int newval){//for setting the new assignment value
    	int idx = -1;
        int i;
        for(i = 0; i < vptr; i++){
            if(strcmp(variables[i],str) == 0) {
                idx = i;
                break;
            }
        }
        val[idx] = newval;

    }
	int swdone = 0;
	double swvar;

	int ifvar[1000];
	int ifptr = -1;
	int ifdone[1000];



/* Line 189 of yacc.c  */
#line 154 "a1.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     Id = 258,
     Num = 259,
     Str = 260,
     HEADER = 261,
     Main = 262,
     Eol = 263,
     Start = 264,
     End = 265,
     Nl = 266,
     FUNCTION = 267,
     Int = 268,
     Float = 269,
     Char = 270,
     Cin = 271,
     Cout = 272,
     Not = 273,
     And = 274,
     Xor = 275,
     Or = 276,
     Fact = 277,
     Sin = 278,
     Cos = 279,
     Tan = 280,
     Sqrt = 281,
     Log = 282,
     Ln = 283,
     Pow = 284,
     If = 285,
     Elif = 286,
     Else = 287,
     Switch = 288,
     Default = 289,
     Case = 290,
     Eq = 291,
     Fors = 292,
     Fore = 293,
     Movby = 294,
     Do = 295,
     Until = 296,
     PLUSPLUS = 297,
     MINUSMINUS = 298,
     Lt = 299,
     Lte = 300,
     Gt = 301,
     Gte = 302,
     Ckeq = 303,
     Noteq = 304,
     Plus = 305,
     Minus = 306,
     Mul = 307,
     Div = 308,
     Mod = 309,
     Max = 310,
     Min = 311,
     Comment = 312,
     Gcd = 313,
     Append = 314,
     Swap = 315,
     Mminus = 316,
     Pplus = 317
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 82 "a1.y"

	int i;
	double d;
	char s[1000];



/* Line 214 of yacc.c  */
#line 260 "a1.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 272 "a1.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1419

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNRULES -- Number of states.  */
#define YYNSTATES  219

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      63,    64,     2,     2,    67,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    70,     2,
      68,     2,    69,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    65,     2,    66,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    11,    12,    15,    23,    24,    28,    29,
      34,    35,    37,    41,    45,    49,    53,    56,    59,    63,
      66,    70,    73,    75,    77,    79,    83,    85,    87,    91,
      95,   100,   105,   110,   115,   120,   122,   124,   127,   131,
     135,   139,   143,   147,   151,   155,   159,   163,   167,   171,
     175,   179,   183,   187,   190,   194,   199,   204,   209,   214,
     219,   224,   231,   238,   241,   244,   247,   256,   258,   259,
     268,   274,   290,   299,   306,   313,   321,   323,   324,   331
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      72,     0,    -1,     6,    13,     7,     9,    77,    10,    73,
      -1,    -1,    73,    74,    -1,    12,    63,    75,    64,    65,
      77,    66,    -1,    -1,    79,     3,    76,    -1,    -1,    76,
      67,    79,     3,    -1,    -1,     8,    -1,    77,    78,     8,
      -1,    77,    82,     8,    -1,    77,    84,     8,    -1,    77,
      83,     8,    -1,    77,    86,    -1,    77,    89,    -1,    77,
      90,     8,    -1,    77,    91,    -1,    77,    85,     8,    -1,
      79,    80,    -1,    13,    -1,    14,    -1,    15,    -1,    81,
      67,    80,    -1,    81,    -1,     3,    -1,     3,    36,    85,
      -1,     3,    36,    85,    -1,    17,    63,     3,    64,    -1,
      17,    63,    85,    64,    -1,    17,    63,     5,    64,    -1,
      17,    63,    11,    64,    -1,    16,    63,     3,    64,    -1,
       4,    -1,     3,    -1,    51,    85,    -1,    85,    50,    85,
      -1,    85,    51,    85,    -1,    85,    52,    85,    -1,    85,
      53,    85,    -1,    85,    54,    85,    -1,    85,    29,    85,
      -1,    85,    44,    85,    -1,    85,    46,    85,    -1,    85,
      45,    85,    -1,    85,    47,    85,    -1,    85,    48,    85,
      -1,    85,    49,    85,    -1,    85,    19,    85,    -1,    85,
      21,    85,    -1,    85,    20,    85,    -1,    18,    85,    -1,
      63,    85,    64,    -1,    23,    63,    85,    64,    -1,    24,
      63,    85,    64,    -1,    25,    63,    85,    64,    -1,    27,
      63,    85,    64,    -1,    28,    63,    85,    64,    -1,    26,
      63,    85,    64,    -1,    55,    63,    85,    67,    85,    64,
      -1,    56,    63,    85,    67,    85,    64,    -1,    85,    42,
      -1,    85,    43,    -1,    85,    22,    -1,    30,    63,    87,
      64,    65,    77,    66,    88,    -1,    85,    -1,    -1,    88,
      31,    63,    85,    64,    65,    77,    66,    -1,    88,    32,
      65,    77,    66,    -1,    37,    68,    85,    69,    38,    68,
      85,    69,    39,    68,    85,    69,    65,    77,    66,    -1,
      41,    68,    85,    69,    40,    65,    77,    66,    -1,    85,
      59,    58,    63,    85,    64,    -1,    85,    59,    60,    63,
      85,    64,    -1,    33,    63,    92,    64,    65,    93,    66,
      -1,    85,    -1,    -1,    34,    70,    65,    77,    66,    93,
      -1,    35,    85,    70,    65,    77,    66,    93,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   125,   125,   127,   128,   130,   135,   136,   138,   139,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   157,   159,   159,   159,   161,   162,   164,   173,   185,
     198,   209,   213,   219,   225,   233,   234,   244,   246,   248,
     250,   252,   263,   274,   276,   278,   280,   282,   284,   286,
     288,   290,   292,   294,   296,   298,   300,   302,   304,   306,
     308,   310,   318,   327,   331,   335,   343,   349,   363,   364,
     375,   388,   401,   414,   418,   428,   431,   439,   440,   451
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "Id", "Num", "Str", "HEADER", "Main",
  "Eol", "Start", "End", "Nl", "FUNCTION", "Int", "Float", "Char", "Cin",
  "Cout", "Not", "And", "Xor", "Or", "Fact", "Sin", "Cos", "Tan", "Sqrt",
  "Log", "Ln", "Pow", "If", "Elif", "Else", "Switch", "Default", "Case",
  "Eq", "Fors", "Fore", "Movby", "Do", "Until", "PLUSPLUS", "MINUSMINUS",
  "Lt", "Lte", "Gt", "Gte", "Ckeq", "Noteq", "Plus", "Minus", "Mul", "Div",
  "Mod", "Max", "Min", "Comment", "Gcd", "Append", "Swap", "Mminus",
  "Pplus", "'('", "')'", "'{'", "'}'", "','", "'<'", "'>'", "':'",
  "$accept", "code", "function1", "func", "fparams", "fparam", "statement",
  "declaration", "type", "var", "vars", "assignment", "output", "input",
  "expr", "ifstatement", "ifexpr", "elseif", "loop", "function",
  "switchstmnt", "exprswch", "cases", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,    40,    41,   123,   125,    44,    60,    62,
      58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    73,    74,    75,    75,    76,    76,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    78,    79,    79,    79,    80,    80,    81,    81,    82,
      83,    83,    83,    83,    84,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    86,    87,    88,    88,
      88,    89,    89,    90,    90,    91,    92,    93,    93,    93
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     0,     2,     7,     0,     3,     0,     4,
       0,     1,     3,     3,     3,     3,     2,     2,     3,     2,
       3,     2,     1,     1,     1,     3,     1,     1,     3,     3,
       4,     4,     4,     4,     4,     1,     1,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     4,     4,     4,     4,     4,
       4,     6,     6,     2,     2,     2,     8,     1,     0,     8,
       5,    15,     8,     6,     6,     7,     1,     0,     6,     7
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,    10,    11,     0,    36,
      35,     3,    22,    23,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,    17,
       0,    19,     0,     2,     0,     0,    36,    53,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,    12,    27,    21,    26,    13,    15,    14,    20,
       0,     0,     0,    65,     0,    63,    64,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
      29,     0,     4,     0,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    67,     0,    76,     0,     0,     0,
       0,     0,    54,     0,     0,    50,    52,    51,    43,    44,
      46,    45,    47,    48,    49,    38,    39,    40,    41,    42,
       0,     0,     6,    34,    30,    32,    33,    31,    55,    56,
      57,    60,    58,    59,     0,     0,     0,     0,     0,     0,
      28,    25,     0,     0,     0,     0,    10,    77,     0,     0,
       0,     0,     0,     0,     0,     8,     0,     0,     0,     0,
       0,    10,    61,    62,    73,    74,    10,     7,    68,     0,
       0,    75,     0,     0,     0,     0,    66,    10,     0,     0,
      72,     5,     0,     0,     0,     0,    10,     0,     9,     0,
      10,    77,     0,     0,     0,     0,    78,    77,     0,     0,
      70,    79,     0,    10,    10,     0,     0,    69,    71
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    43,    92,   154,   177,     8,    32,    33,    64,
      65,    34,    35,    36,    37,    38,   105,   186,    39,    40,
      41,   107,   169
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -201
static const yytype_int16 yypact[] =
{
      -4,     4,     9,    11,  -201,    10,    12,  -201,   450,   -15,
    -201,  -201,  -201,  -201,  -201,   -41,   -40,   504,   -39,   -37,
     -36,   -34,   -33,   -19,   -18,   -11,   -27,   -21,   504,    21,
      22,   504,    38,    56,    78,    85,    86,   554,  -201,  -201,
      87,  -201,   504,    91,   102,   491,  -201,   542,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,  1346,   504,
     504,   842,  -201,    70,  -201,    41,  -201,  -201,  -201,  -201,
     504,   504,   504,  -201,   504,  -201,  -201,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   -50,  -201,
    1310,    46,  -201,    48,    49,    50,    52,   878,   914,   950,
     986,  1022,  1058,  1094,  1310,    53,  1310,    54,   626,   662,
     770,   806,  -201,   504,    56,   542,   542,   542,   607,  1310,
    1310,  1310,  1310,    29,    29,  1346,  1346,  1365,  1365,   607,
      47,    57,    -9,  -201,  -201,  -201,  -201,  -201,  -201,  -201,
    -201,  -201,  -201,  -201,    58,    59,    81,    82,   504,   504,
    1310,  -201,   504,   504,    62,   118,    12,   -22,    60,    68,
    1130,  1166,  1202,  1238,    69,  -201,    74,    71,   504,    61,
     504,    12,  -201,  -201,  -201,  -201,    12,    72,  -201,    73,
     590,  -201,   698,   142,   186,    -9,   -16,    12,    77,   104,
    -201,  -201,   141,    84,    83,   230,    12,    93,  -201,   504,
      12,   -22,   274,   504,  1274,   318,  -201,   -22,   734,    89,
    -201,  -201,    97,    12,    12,   362,   406,  -201,  -201
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -201,  -201,  -201,  -201,  -201,  -201,   365,  -201,  -129,    35,
    -201,  -201,  -201,  -201,   -17,  -201,  -201,  -201,  -201,  -201,
    -201,  -201,  -200
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      47,   206,     1,   155,    12,    13,    14,   211,   130,     4,
     131,    58,   167,   168,    61,   193,   194,     3,     5,     6,
       7,    42,    44,    45,    48,    90,    49,    50,    97,    51,
      52,    98,    99,   100,   101,   102,   103,   104,   106,   108,
     109,    56,   110,   111,    53,    54,    62,    57,    70,    71,
      72,    73,    55,   115,   116,   117,   192,   118,    74,    63,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,    75,    76,    77,    78,    79,    80,     9,    10,    83,
      84,    85,    86,    87,    59,    60,    66,    12,    13,    14,
      15,    16,    17,    67,    68,    89,   150,    18,    19,    20,
      21,    22,    23,    91,    24,    93,   113,    25,   114,   132,
     152,    26,   133,   134,   135,    27,   136,   144,   145,   158,
     153,   165,   159,   156,   157,    28,   164,   181,   170,    29,
      30,   160,   161,   171,   176,   162,   163,    31,   187,   185,
     178,   179,   196,   197,   198,     9,    10,   199,   200,   151,
       0,   180,     0,   182,   213,    12,    13,    14,    15,    16,
      17,   203,   214,     0,     0,    18,    19,    20,    21,    22,
      23,     0,    24,     0,     0,    25,     0,     0,     0,    26,
       0,     0,   204,    27,     0,     0,   208,     0,     0,     9,
      10,     0,     0,    28,     0,     0,     0,    29,    30,    12,
      13,    14,    15,    16,    17,    31,     0,     0,   190,    18,
      19,    20,    21,    22,    23,     0,    24,     0,     0,    25,
       0,     0,     0,    26,     0,     0,     0,    27,     0,     0,
       0,     0,     0,     9,    10,     0,     0,    28,     0,     0,
       0,    29,    30,    12,    13,    14,    15,    16,    17,    31,
       0,     0,   191,    18,    19,    20,    21,    22,    23,     0,
      24,     0,     0,    25,     0,     0,     0,    26,     0,     0,
       0,    27,     0,     0,     0,     0,     0,     9,    10,     0,
       0,    28,     0,     0,     0,    29,    30,    12,    13,    14,
      15,    16,    17,    31,     0,     0,   201,    18,    19,    20,
      21,    22,    23,     0,    24,     0,     0,    25,     0,     0,
       0,    26,     0,     0,     0,    27,     0,     0,     0,     0,
       0,     9,    10,     0,     0,    28,     0,     0,     0,    29,
      30,    12,    13,    14,    15,    16,    17,    31,     0,     0,
     207,    18,    19,    20,    21,    22,    23,     0,    24,     0,
       0,    25,     0,     0,     0,    26,     0,     0,     0,    27,
       0,     0,     0,     0,     0,     9,    10,     0,     0,    28,
       0,     0,     0,    29,    30,    12,    13,    14,    15,    16,
      17,    31,     0,     0,   210,    18,    19,    20,    21,    22,
      23,     0,    24,     0,     0,    25,     0,     0,     0,    26,
       0,     0,     0,    27,     0,     0,     0,     0,     0,     9,
      10,     0,     0,    28,     0,     0,     0,    29,    30,    12,
      13,    14,    15,    16,    17,    31,     0,     0,   217,    18,
      19,    20,    21,    22,    23,     0,    24,     0,     0,    25,
       0,     0,     0,    26,     0,     0,     0,    27,     0,     0,
       0,     0,     0,     9,    10,     0,     0,    28,     0,     0,
      11,    29,    30,    12,    13,    14,    15,    16,    17,    31,
       0,     0,   218,    18,    19,    20,    21,    22,    23,     0,
      24,     0,     0,    25,     0,     0,     0,    26,     0,     0,
       0,    27,     0,     0,    94,    10,    95,     0,     0,     0,
       0,    28,    96,     0,     0,    29,    30,    46,    10,    17,
       0,     0,     0,    31,    18,    19,    20,    21,    22,    23,
       0,   166,    17,     0,     0,     0,     0,    18,    19,    20,
      21,    22,    23,     0,     0,     0,   183,     0,     0,     0,
       0,   184,    28,     0,     0,     0,    29,    30,     0,     0,
       0,     0,   195,     0,    31,    28,     0,     0,     0,    29,
      30,   202,    69,     0,    73,   205,     0,    31,     0,     0,
       0,     0,     0,    70,    71,    72,    73,     0,   215,   216,
       0,     0,     0,    74,    75,    76,    77,    78,    79,    80,
       0,     0,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    70,
      71,    72,    73,    88,     0,     0,     0,     0,     0,    74,
       0,     0,     0,     0,     0,     0,    70,    71,    72,    73,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    70,    71,    72,    73,    75,
      76,    77,    78,    79,    80,    74,     0,     0,     0,     0,
     188,     0,     0,     0,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    70,    71,    72,    73,     0,     0,     0,     0,     0,
       0,    74,     0,     0,     0,   146,     0,     0,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    70,    71,    72,
      73,     0,     0,     0,     0,     0,     0,    74,     0,     0,
       0,   147,     0,     0,     0,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    70,    71,    72,    73,     0,     0,     0,
       0,     0,     0,    74,     0,     0,     0,   189,     0,     0,
       0,     0,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    70,
      71,    72,    73,     0,     0,     0,     0,     0,     0,    74,
       0,     0,     0,   212,     0,     0,     0,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    70,    71,    72,    73,     0,
       0,     0,     0,     0,     0,    74,     0,   148,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    70,    71,    72,    73,     0,     0,     0,     0,     0,
       0,    74,     0,   149,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    70,    71,    72,
      73,     0,     0,     0,     0,     0,   112,    74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    70,    71,    72,    73,     0,     0,     0,
       0,     0,   137,    74,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    70,
      71,    72,    73,     0,     0,     0,     0,     0,   138,    74,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    70,    71,    72,    73,     0,
       0,     0,     0,     0,   139,    74,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    70,    71,    72,    73,     0,     0,     0,     0,     0,
     140,    74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    70,    71,    72,
      73,     0,     0,     0,     0,     0,   141,    74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    70,    71,    72,    73,     0,     0,     0,
       0,     0,   142,    74,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    70,
      71,    72,    73,     0,     0,     0,     0,     0,   143,    74,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    70,    71,    72,    73,     0,
       0,     0,     0,     0,   172,    74,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    70,    71,    72,    73,     0,     0,     0,     0,     0,
     173,    74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    70,    71,    72,
      73,     0,     0,     0,     0,     0,   174,    74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    70,    71,    72,    73,     0,     0,     0,
       0,     0,   175,    74,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    70,
      71,    72,    73,     0,     0,     0,     0,     0,   209,    74,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    70,    71,    72,    73,     0,
       0,     0,     0,     0,     0,    74,     0,     0,     0,     0,
       0,     0,     0,     0,    70,    71,    72,    73,    75,    76,
      77,    78,    79,    80,    74,     0,     0,     0,    85,    86,
      87,     0,     0,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,     0,     0,     0,     0,     0,     0,    87
};

static const yytype_int16 yycheck[] =
{
      17,   201,     6,   132,    13,    14,    15,   207,    58,     0,
      60,    28,    34,    35,    31,    31,    32,    13,     7,     9,
       8,    36,    63,    63,    63,    42,    63,    63,    45,    63,
      63,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    68,    59,    60,    63,    63,     8,    68,    19,    20,
      21,    22,    63,    70,    71,    72,   185,    74,    29,     3,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    42,    43,    44,    45,    46,    47,     3,     4,    50,
      51,    52,    53,    54,    63,    63,     8,    13,    14,    15,
      16,    17,    18,     8,     8,     8,   113,    23,    24,    25,
      26,    27,    28,    12,    30,     3,    36,    33,    67,    63,
      63,    37,    64,    64,    64,    41,    64,    64,    64,    38,
      63,     3,    40,    65,    65,    51,    64,    66,    68,    55,
      56,   148,   149,    65,    65,   152,   153,    63,    65,    67,
      66,    70,    65,    39,     3,     3,     4,    63,    65,   114,
      -1,   168,    -1,   170,    65,    13,    14,    15,    16,    17,
      18,    68,    65,    -1,    -1,    23,    24,    25,    26,    27,
      28,    -1,    30,    -1,    -1,    33,    -1,    -1,    -1,    37,
      -1,    -1,   199,    41,    -1,    -1,   203,    -1,    -1,     3,
       4,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,    13,
      14,    15,    16,    17,    18,    63,    -1,    -1,    66,    23,
      24,    25,    26,    27,    28,    -1,    30,    -1,    -1,    33,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,    -1,    51,    -1,    -1,
      -1,    55,    56,    13,    14,    15,    16,    17,    18,    63,
      -1,    -1,    66,    23,    24,    25,    26,    27,    28,    -1,
      30,    -1,    -1,    33,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,
      -1,    51,    -1,    -1,    -1,    55,    56,    13,    14,    15,
      16,    17,    18,    63,    -1,    -1,    66,    23,    24,    25,
      26,    27,    28,    -1,    30,    -1,    -1,    33,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,    -1,    51,    -1,    -1,    -1,    55,
      56,    13,    14,    15,    16,    17,    18,    63,    -1,    -1,
      66,    23,    24,    25,    26,    27,    28,    -1,    30,    -1,
      -1,    33,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    51,
      -1,    -1,    -1,    55,    56,    13,    14,    15,    16,    17,
      18,    63,    -1,    -1,    66,    23,    24,    25,    26,    27,
      28,    -1,    30,    -1,    -1,    33,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,    -1,    51,    -1,    -1,    -1,    55,    56,    13,
      14,    15,    16,    17,    18,    63,    -1,    -1,    66,    23,
      24,    25,    26,    27,    28,    -1,    30,    -1,    -1,    33,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,    -1,    51,    -1,    -1,
      10,    55,    56,    13,    14,    15,    16,    17,    18,    63,
      -1,    -1,    66,    23,    24,    25,    26,    27,    28,    -1,
      30,    -1,    -1,    33,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    41,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,
      -1,    51,    11,    -1,    -1,    55,    56,     3,     4,    18,
      -1,    -1,    -1,    63,    23,    24,    25,    26,    27,    28,
      -1,   156,    18,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,   171,    -1,    -1,    -1,
      -1,   176,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,
      -1,    -1,   187,    -1,    63,    51,    -1,    -1,    -1,    55,
      56,   196,     8,    -1,    22,   200,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    -1,   213,   214,
      -1,    -1,    -1,    29,    42,    43,    44,    45,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    19,
      20,    21,    22,    59,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      -1,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    19,    20,    21,    22,    42,
      43,    44,    45,    46,    47,    29,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    64,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    64,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    64,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    64,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      64,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    64,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    64,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    64,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    64,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      64,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    64,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    64,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    64,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    42,    43,
      44,    45,    46,    47,    29,    -1,    -1,    -1,    52,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    54
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    72,    13,     0,     7,     9,     8,    77,     3,
       4,    10,    13,    14,    15,    16,    17,    18,    23,    24,
      25,    26,    27,    28,    30,    33,    37,    41,    51,    55,
      56,    63,    78,    79,    82,    83,    84,    85,    86,    89,
      90,    91,    36,    73,    63,    63,     3,    85,    63,    63,
      63,    63,    63,    63,    63,    63,    68,    68,    85,    63,
      63,    85,     8,     3,    80,    81,     8,     8,     8,     8,
      19,    20,    21,    22,    29,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    59,     8,
      85,    12,    74,     3,     3,     5,    11,    85,    85,    85,
      85,    85,    85,    85,    85,    87,    85,    92,    85,    85,
      85,    85,    64,    36,    67,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      58,    60,    63,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    69,    69,    67,    67,
      85,    80,    63,    63,    75,    79,    65,    65,    38,    40,
      85,    85,    85,    85,    64,     3,    77,    34,    35,    93,
      68,    65,    64,    64,    64,    64,    65,    76,    66,    70,
      85,    66,    85,    77,    77,    67,    88,    65,    70,    69,
      66,    66,    79,    31,    32,    77,    65,    39,     3,    63,
      65,    66,    77,    68,    85,    77,    93,    66,    85,    64,
      66,    93,    69,    65,    65,    77,    77,    66,    66
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 125 "a1.y"
    { printf("Compilation Successful!!!\n"); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 131 "a1.y"
    {
                    printf("\n\nUser define function defined\n\n\n");
                ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 143 "a1.y"
    {printf("\n\nOnly semocolon statement executed\n\n");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 144 "a1.y"
    {;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 145 "a1.y"
    {;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 146 "a1.y"
    {;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 147 "a1.y"
    {;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 148 "a1.y"
    {;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 149 "a1.y"
    {;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 150 "a1.y"
    {;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 151 "a1.y"
    {;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 152 "a1.y"
    {;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 157 "a1.y"
    {printf("\nSuccessfully declared variable\n");}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 159 "a1.y"
    {;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 161 "a1.y"
    {;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 162 "a1.y"
    {;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 165 "a1.y"
    {
						int a = addval((yyvsp[(1) - (1)].s),0);
						if(!a) {
							printf("%s is already exist\n",(yyvsp[(1) - (1)].s));
							exit(-1);
						}

					;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 174 "a1.y"
    {
						int a = addval((yyvsp[(1) - (3)].s),(yyvsp[(3) - (3)].d));
						if(!a) {
							printf(" %s is already exist\n",(yyvsp[(1) - (3)].s));
							exit(-1);
							}
					;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 186 "a1.y"
    {
						if(!ifExists((yyvsp[(1) - (3)].s))) {
							printf("%s is not declared\n",(yyvsp[(1) - (3)].s));
							exit(-1);
						}
						else{
							setval((yyvsp[(1) - (3)].s),(yyvsp[(3) - (3)].d));
							printf("\nAssignment Done\n");
						}
				    ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 199 "a1.y"
    {
					if(!ifExists((yyvsp[(3) - (4)].s))){
							printf("%s is not declared\n",(yyvsp[(3) - (4)].s));
							exit(-1);
						}
						else{
							int a = getval((yyvsp[(3) - (4)].s));
							printf("%d",a);
						}
				;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 210 "a1.y"
    {
					printf("%lf",(yyvsp[(3) - (4)].d));
				;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 214 "a1.y"
    {
					int len = strlen((yyvsp[(3) - (4)].s));
						int i;
						for(i = 1;  i < len-1; i++) printf("%c",(yyvsp[(3) - (4)].s)[i]);
				;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 220 "a1.y"
    {
					printf("\n");
				;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 226 "a1.y"
    {
					int a;
					scanf("%d",&a);
					setval((yyvsp[(3) - (4)].s),a);
					
				;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 233 "a1.y"
    {(yyval.d) = (yyvsp[(1) - (1)].i);;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 235 "a1.y"
    {
						if(!ifExists((yyvsp[(1) - (1)].s))) {
							printf("%s is not declared\n",(yyvsp[(1) - (1)].s));
							exit(-1);
						}
						else{
							(yyval.d) = getval((yyvsp[(1) - (1)].s));
						}
				 	;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 245 "a1.y"
    {(yyval.d) = - (yyvsp[(2) - (2)].d);;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 247 "a1.y"
    {(yyval.d) = (yyvsp[(1) - (3)].d) + (yyvsp[(3) - (3)].d);;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 249 "a1.y"
    {(yyval.d) = (yyvsp[(1) - (3)].d) - (yyvsp[(3) - (3)].d);;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 251 "a1.y"
    {(yyval.d) = (yyvsp[(1) - (3)].d) * (yyvsp[(3) - (3)].d);;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 253 "a1.y"
    {
							if((yyvsp[(3) - (3)].d)) {
								(yyval.d) = (yyvsp[(1) - (3)].d) / (yyvsp[(3) - (3)].d);
								}
							else {
								(yyval.d) = 0;
								printf("\nRuntime Error: division by zero is not allowed!!!\n");
								exit(-1);
							} 
						;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 264 "a1.y"
    {
							if((yyvsp[(3) - (3)].d)) {
								(yyval.d) = (int)(yyvsp[(1) - (3)].d) % (int)(yyvsp[(3) - (3)].d);
								}
							else {
								(yyval.d) = 0;
								printf("\nRuntime Error: division by zero is not allowed!!!\n");
								exit(-1);
							} 
						;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 275 "a1.y"
    {(yyval.d) = pow((yyvsp[(1) - (3)].d),(yyvsp[(3) - (3)].d));;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 277 "a1.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 279 "a1.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) > (yyvsp[(3) - (3)].d); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 281 "a1.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) <= (yyvsp[(3) - (3)].d); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 283 "a1.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) >= (yyvsp[(3) - (3)].d); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 285 "a1.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) == (yyvsp[(3) - (3)].d); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 287 "a1.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) != (yyvsp[(3) - (3)].d); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 289 "a1.y"
    {(yyval.d) = ((yyvsp[(1) - (3)].d) && (yyvsp[(3) - (3)].d));;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 291 "a1.y"
    {(yyval.d) = ((yyvsp[(1) - (3)].d) || (yyvsp[(3) - (3)].d));;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 293 "a1.y"
    {(yyval.d) = ((int)(yyvsp[(1) - (3)].d) ^ (int)(yyvsp[(3) - (3)].d));;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 295 "a1.y"
    {(yyval.d) = !(yyvsp[(2) - (2)].d);;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 297 "a1.y"
    {(yyval.d) = (yyvsp[(2) - (3)].d);}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 299 "a1.y"
    {(yyval.d) = sin((yyvsp[(3) - (4)].d));;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 301 "a1.y"
    {(yyval.d) = cos((yyvsp[(3) - (4)].d));;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 303 "a1.y"
    {(yyval.d) = tan((yyvsp[(3) - (4)].d));;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 305 "a1.y"
    {(yyval.d) = log10((yyvsp[(3) - (4)].d));;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 307 "a1.y"
    {(yyval.d) = log((yyvsp[(3) - (4)].d));;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 309 "a1.y"
    {(yyval.d) = sqrt((yyvsp[(3) - (4)].d));;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 311 "a1.y"
    {if((yyvsp[(3) - (6)].d) <= (yyvsp[(5) - (6)].d)) { 
							(yyval.d) = (yyvsp[(5) - (6)].d);
						}
						else {
							(yyval.d) = (yyvsp[(3) - (6)].d);
							}
						;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 319 "a1.y"
    {
							if((yyvsp[(3) - (6)].d) >= (yyvsp[(5) - (6)].d)) { 
							(yyval.d) = (yyvsp[(5) - (6)].d);
						}
						else {
							(yyval.d) = (yyvsp[(3) - (6)].d);
							}
						;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 328 "a1.y"
    {
							(yyval.d) = (yyvsp[(1) - (2)].d) + 1;
						;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 332 "a1.y"
    {
							(yyval.d) = (yyvsp[(1) - (2)].d) - 1;
						;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 336 "a1.y"
    {
							long long x = 1;
							for(long long i=1;i<=(yyvsp[(1) - (2)].d);i++) x*=i;
							(yyval.d) = x;
						;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 344 "a1.y"
    {
							ifdone[ifptr] = 0;
							ifptr--;
						;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 350 "a1.y"
    {
							ifptr++;
							ifdone[ifptr] = 0;
							if((yyvsp[(1) - (1)].d)){
								printf("\nIf block:True\n");
								ifdone[ifptr] = 1;
							}
							else
							{
								printf("\nIf block:False\n");
							}
						;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 365 "a1.y"
    {
							if((yyvsp[(4) - (8)].d) && ifdone[ifptr] == 0){
								printf("\nElse if block:True\n");
								ifdone[ifptr] = 1;
							}
							else
							{
								printf("\nElse if block:False\n");
							}
						;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 376 "a1.y"
    {
							if(ifdone[ifptr] == 0){
								printf("\nElse block:True\n");
								ifdone[ifptr] = 1;
							}
							else
							{
								printf("\nElse block:False\n");
							}
						;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 389 "a1.y"
    {
						int srt = (yyvsp[(3) - (15)].d);
						int end = (yyvsp[(7) - (15)].d);
						int diff = (yyvsp[(11) - (15)].d);
						int cnt = 0;
						int i = 0;
						for(i = srt; i <= end; i += diff){
							cnt++;
							printf("Step no : %d\n",i);
						}	
						printf("\nLoop has turned around %d times\n",cnt);
					;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 402 "a1.y"
    {
						int i=0;
						int cnt = 0;
						for(i=(yyvsp[(3) - (8)].d);i>0;i--)
						{
							cnt++;
							printf("Step no :%d\n",i);
						}
						printf("\nLoop has turned around %d times\n",cnt);
					;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 415 "a1.y"
    {
						gcd((yyvsp[(1) - (6)].d),(yyvsp[(5) - (6)].d));
					;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 419 "a1.y"
    {
						int a=(int)(yyvsp[(1) - (6)].d);
						int b=(int)(yyvsp[(5) - (6)].d);
						swap(&a,&b);
						(yyvsp[(1) - (6)].d)=a;
						(yyvsp[(5) - (6)].d)=b;
					;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 432 "a1.y"
    {
						swdone = 0;
						swvar = (yyvsp[(1) - (1)].d);
					;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 441 "a1.y"
    {
						if(swdone == 0){
							swdone = 1;
							printf("Default Case is True\n");
						}
						else
						{
							printf("Default Case is False\n");
						}
					;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 452 "a1.y"
    {
					if((yyvsp[(2) - (7)].d) == swvar){
						printf("Case :%d is True\n",(int)(yyvsp[(2) - (7)].d));
						swdone = 1;
					}
					else
					{
						printf("Case :%d is False\n",(int)(yyvsp[(2) - (7)].d));
					}					
				;}
    break;



/* Line 1455 of yacc.c  */
#line 2518 "a1.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 466 "a1.y"

int main(int argc, char **argv)
{
	yyin = freopen("input1.txt","r",stdin);
	yyout = freopen("output1.txt","w",stdout);
    printf("\n\n          -------Program Execution-------\n\n\n");
	yyparse();
	return 0;
} 
