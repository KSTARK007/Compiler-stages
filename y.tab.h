/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
     HASH = 258,
     INCLUDE = 259,
     DEFINE = 260,
     STDIO = 261,
     STDLIB = 262,
     MATH = 263,
     STRING = 264,
     TIME = 265,
     IDENTIFIER = 266,
     INTEGER_LITERAL = 267,
     FLOAT_LITERAL = 268,
     STRING_LITERAL = 269,
     HEADER_LITERAL = 270,
     INC_OP = 271,
     DEC_OP = 272,
     LE_OP = 273,
     GE_OP = 274,
     EQ_OP = 275,
     NE_OP = 276,
     ADD_ASSIGN = 277,
     SUB_ASSIGN = 278,
     CHAR = 279,
     INT = 280,
     FLOAT = 281,
     VOID = 282,
     USING = 283,
     SYSTEM = 284,
     STRUCT = 285,
     FOR = 286,
     WHILE = 287,
     IF = 288,
     ELSE = 289
   };
#endif
/* Tokens.  */
#define HASH 258
#define INCLUDE 259
#define DEFINE 260
#define STDIO 261
#define STDLIB 262
#define MATH 263
#define STRING 264
#define TIME 265
#define IDENTIFIER 266
#define INTEGER_LITERAL 267
#define FLOAT_LITERAL 268
#define STRING_LITERAL 269
#define HEADER_LITERAL 270
#define INC_OP 271
#define DEC_OP 272
#define LE_OP 273
#define GE_OP 274
#define EQ_OP 275
#define NE_OP 276
#define ADD_ASSIGN 277
#define SUB_ASSIGN 278
#define CHAR 279
#define INT 280
#define FLOAT 281
#define VOID 282
#define USING 283
#define SYSTEM 284
#define STRUCT 285
#define FOR 286
#define WHILE 287
#define IF 288
#define ELSE 289




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 25 "AST.y"
{
	int ival;
	nodeType * nPtr;
	char string[128];
}
/* Line 1529 of yacc.c.  */
#line 123 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

