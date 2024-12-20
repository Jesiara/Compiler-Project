
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 82 "a1.y"

	int i;
	double d;
	char s[1000];



/* Line 1676 of yacc.c  */
#line 122 "a1.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


