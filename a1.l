%{
#include <stdio.h>
#include "a1.tab.h"
#include <string.h>
#include <math.h>
extern FILE *yyin;
extern FILE *yyout;

%}

%%
"##importing->stdio.h" {printf("Header File\n"); return HEADER; }//this is for header file
"mainfunc"			   {printf("Main Function Started\n");return Main;}//this is for main function
"!<"(.)+">!"	       {printf("\n%s\n",yytext);}//this is for comment
"func->"([a-zA-z]+[0-9]*) { return FUNCTION;}
";"				       {return Eol;}
"int"			       {return Int;}
"float"		           {return Float;}
"char"		           {return Char;}
"jodi"			       {return If;}
"nahole"		       {return Elif;}
"noyto"			       {return Else;}
"forloop"		       {return Fors;}
"forend"		       {return Fore;}
"step"			       {return Movby;}
"do"			       {return Do;}
"while"			       {return Until;}
"switch"		       {return Switch;}
"default"		       {return Default;}
"scan"			       {return Cin;}
"print"			       {return Cout;}
":="			       {return Eq;}
"pp"			       {return PLUSPLUS;}
"mm"			       {return MINUSMINUS;}
"lt"			       {return Lt;}
"lte"			       {return Lte;}
"gt"			       {return Gt;}
"gte"			       {return Gte;}
":=="			       {return Ckeq;}
"!:="			       {return Noteq;}
"not"			       {return Not;}
"and"			       {return And;}
"or"			       {return Or;}
"xor"			       {return Xor;}
"case"			       {return Case;}
"fact"			       {return Fact;}
"sin" 			       {return Sin;}
"cos" 			       {return Cos;}
"tan" 			       {return Tan;}
"sqr" 			       {return Sqrt;}
"log" 			       {return Log;}
"ln"  			       {return Ln;} 
"jog"			       {return Plus;}
"biyog"			       {return Minus;}
"gun"			       {return Mul;}
"vag"			       {return Div;}
"mod"			       {return Mod;}
"pow"			       {return Pow;}
"max"			       {return Max;}
"min"			       {return Min;}
"{{"			       {return Start;}
"}}"			       {return End;}
"/"				       {return Nl;}
"gcdd"			       {return Gcd;}
"->"			       {return Append;}
"swapp"			       {return Swap;}
[-]?[0-9]+[.]?[0-9]*   {yylval.i = atoi(yytext);
						return Num; }
[a-zA-z]+[0-9]*	       { strcpy(yylval.s,yytext);return Id;}
"()" 				   {}

"\""(.)*"\""           {strcpy(yylval.s,yytext);return Str;}
[,.:<>(){}\]\[]	       {return yytext[0];}
[ \t\n]				   {}
.					   {printf("Don't know\n", yytext);}

%%
int yywrap()
{
	return 1;
}

int yyerror(char *s){
	fprintf(stderr,"error: %s\n", s);
}