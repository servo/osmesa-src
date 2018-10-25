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
     ATTRIBUTE = 258,
     CONST_TOK = 259,
     BASIC_TYPE_TOK = 260,
     BREAK = 261,
     BUFFER = 262,
     CONTINUE = 263,
     DO = 264,
     ELSE = 265,
     FOR = 266,
     IF = 267,
     DISCARD = 268,
     RETURN = 269,
     SWITCH = 270,
     CASE = 271,
     DEFAULT = 272,
     CENTROID = 273,
     IN_TOK = 274,
     OUT_TOK = 275,
     INOUT_TOK = 276,
     UNIFORM = 277,
     VARYING = 278,
     SAMPLE = 279,
     NOPERSPECTIVE = 280,
     FLAT = 281,
     SMOOTH = 282,
     IMAGE1DSHADOW = 283,
     IMAGE2DSHADOW = 284,
     IMAGE1DARRAYSHADOW = 285,
     IMAGE2DARRAYSHADOW = 286,
     COHERENT = 287,
     VOLATILE = 288,
     RESTRICT = 289,
     READONLY = 290,
     WRITEONLY = 291,
     SHARED = 292,
     STRUCT = 293,
     VOID_TOK = 294,
     WHILE = 295,
     IDENTIFIER = 296,
     TYPE_IDENTIFIER = 297,
     NEW_IDENTIFIER = 298,
     FLOATCONSTANT = 299,
     DOUBLECONSTANT = 300,
     INTCONSTANT = 301,
     UINTCONSTANT = 302,
     BOOLCONSTANT = 303,
     INT64CONSTANT = 304,
     UINT64CONSTANT = 305,
     FIELD_SELECTION = 306,
     LEFT_OP = 307,
     RIGHT_OP = 308,
     INC_OP = 309,
     DEC_OP = 310,
     LE_OP = 311,
     GE_OP = 312,
     EQ_OP = 313,
     NE_OP = 314,
     AND_OP = 315,
     OR_OP = 316,
     XOR_OP = 317,
     MUL_ASSIGN = 318,
     DIV_ASSIGN = 319,
     ADD_ASSIGN = 320,
     MOD_ASSIGN = 321,
     LEFT_ASSIGN = 322,
     RIGHT_ASSIGN = 323,
     AND_ASSIGN = 324,
     XOR_ASSIGN = 325,
     OR_ASSIGN = 326,
     SUB_ASSIGN = 327,
     INVARIANT = 328,
     PRECISE = 329,
     LOWP = 330,
     MEDIUMP = 331,
     HIGHP = 332,
     SUPERP = 333,
     PRECISION = 334,
     VERSION_TOK = 335,
     EXTENSION = 336,
     LINE = 337,
     COLON = 338,
     EOL = 339,
     INTERFACE = 340,
     OUTPUT = 341,
     PRAGMA_DEBUG_ON = 342,
     PRAGMA_DEBUG_OFF = 343,
     PRAGMA_OPTIMIZE_ON = 344,
     PRAGMA_OPTIMIZE_OFF = 345,
     PRAGMA_INVARIANT_ALL = 346,
     LAYOUT_TOK = 347,
     DOT_TOK = 348,
     ASM = 349,
     CLASS = 350,
     UNION = 351,
     ENUM = 352,
     TYPEDEF = 353,
     TEMPLATE = 354,
     THIS = 355,
     PACKED_TOK = 356,
     GOTO = 357,
     INLINE_TOK = 358,
     NOINLINE = 359,
     PUBLIC_TOK = 360,
     STATIC = 361,
     EXTERN = 362,
     EXTERNAL = 363,
     LONG_TOK = 364,
     SHORT_TOK = 365,
     HALF = 366,
     FIXED_TOK = 367,
     UNSIGNED = 368,
     INPUT_TOK = 369,
     HVEC2 = 370,
     HVEC3 = 371,
     HVEC4 = 372,
     FVEC2 = 373,
     FVEC3 = 374,
     FVEC4 = 375,
     SAMPLER3DRECT = 376,
     SIZEOF = 377,
     CAST = 378,
     NAMESPACE = 379,
     USING = 380,
     RESOURCE = 381,
     PATCH = 382,
     SUBROUTINE = 383,
     ERROR_TOK = 384,
     COMMON = 385,
     PARTITION = 386,
     ACTIVE = 387,
     FILTER = 388,
     ROW_MAJOR = 389,
     THEN = 390
   };
#endif
/* Tokens.  */
#define ATTRIBUTE 258
#define CONST_TOK 259
#define BASIC_TYPE_TOK 260
#define BREAK 261
#define BUFFER 262
#define CONTINUE 263
#define DO 264
#define ELSE 265
#define FOR 266
#define IF 267
#define DISCARD 268
#define RETURN 269
#define SWITCH 270
#define CASE 271
#define DEFAULT 272
#define CENTROID 273
#define IN_TOK 274
#define OUT_TOK 275
#define INOUT_TOK 276
#define UNIFORM 277
#define VARYING 278
#define SAMPLE 279
#define NOPERSPECTIVE 280
#define FLAT 281
#define SMOOTH 282
#define IMAGE1DSHADOW 283
#define IMAGE2DSHADOW 284
#define IMAGE1DARRAYSHADOW 285
#define IMAGE2DARRAYSHADOW 286
#define COHERENT 287
#define VOLATILE 288
#define RESTRICT 289
#define READONLY 290
#define WRITEONLY 291
#define SHARED 292
#define STRUCT 293
#define VOID_TOK 294
#define WHILE 295
#define IDENTIFIER 296
#define TYPE_IDENTIFIER 297
#define NEW_IDENTIFIER 298
#define FLOATCONSTANT 299
#define DOUBLECONSTANT 300
#define INTCONSTANT 301
#define UINTCONSTANT 302
#define BOOLCONSTANT 303
#define INT64CONSTANT 304
#define UINT64CONSTANT 305
#define FIELD_SELECTION 306
#define LEFT_OP 307
#define RIGHT_OP 308
#define INC_OP 309
#define DEC_OP 310
#define LE_OP 311
#define GE_OP 312
#define EQ_OP 313
#define NE_OP 314
#define AND_OP 315
#define OR_OP 316
#define XOR_OP 317
#define MUL_ASSIGN 318
#define DIV_ASSIGN 319
#define ADD_ASSIGN 320
#define MOD_ASSIGN 321
#define LEFT_ASSIGN 322
#define RIGHT_ASSIGN 323
#define AND_ASSIGN 324
#define XOR_ASSIGN 325
#define OR_ASSIGN 326
#define SUB_ASSIGN 327
#define INVARIANT 328
#define PRECISE 329
#define LOWP 330
#define MEDIUMP 331
#define HIGHP 332
#define SUPERP 333
#define PRECISION 334
#define VERSION_TOK 335
#define EXTENSION 336
#define LINE 337
#define COLON 338
#define EOL 339
#define INTERFACE 340
#define OUTPUT 341
#define PRAGMA_DEBUG_ON 342
#define PRAGMA_DEBUG_OFF 343
#define PRAGMA_OPTIMIZE_ON 344
#define PRAGMA_OPTIMIZE_OFF 345
#define PRAGMA_INVARIANT_ALL 346
#define LAYOUT_TOK 347
#define DOT_TOK 348
#define ASM 349
#define CLASS 350
#define UNION 351
#define ENUM 352
#define TYPEDEF 353
#define TEMPLATE 354
#define THIS 355
#define PACKED_TOK 356
#define GOTO 357
#define INLINE_TOK 358
#define NOINLINE 359
#define PUBLIC_TOK 360
#define STATIC 361
#define EXTERN 362
#define EXTERNAL 363
#define LONG_TOK 364
#define SHORT_TOK 365
#define HALF 366
#define FIXED_TOK 367
#define UNSIGNED 368
#define INPUT_TOK 369
#define HVEC2 370
#define HVEC3 371
#define HVEC4 372
#define FVEC2 373
#define FVEC3 374
#define FVEC4 375
#define SAMPLER3DRECT 376
#define SIZEOF 377
#define CAST 378
#define NAMESPACE 379
#define USING 380
#define RESOURCE 381
#define PATCH 382
#define SUBROUTINE 383
#define ERROR_TOK 384
#define COMMON 385
#define PARTITION 386
#define ACTIVE 387
#define FILTER 388
#define ROW_MAJOR 389
#define THEN 390




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 98 "./glsl/glsl_parser.yy"
{
   int n;
   int64_t n64;
   float real;
   double dreal;
   const char *identifier;

   struct ast_type_qualifier type_qualifier;

   ast_node *node;
   ast_type_specifier *type_specifier;
   ast_array_specifier *array_specifier;
   ast_fully_specified_type *fully_specified_type;
   ast_function *function;
   ast_parameter_declarator *parameter_declarator;
   ast_function_definition *function_definition;
   ast_compound_statement *compound_statement;
   ast_expression *expression;
   ast_declarator_list *declarator_list;
   ast_struct_specifier *struct_specifier;
   ast_declaration *declaration;
   ast_switch_body *switch_body;
   ast_case_label *case_label;
   ast_case_label_list *case_label_list;
   ast_case_statement *case_statement;
   ast_case_statement_list *case_statement_list;
   ast_interface_block *interface_block;
   ast_subroutine_list *subroutine_list;
   struct {
      ast_node *cond;
      ast_expression *rest;
   } for_rest_statement;

   struct {
      ast_node *then_statement;
      ast_node *else_statement;
   } selection_rest_statement;

   const glsl_type *type;
}
/* Line 1529 of yacc.c.  */
#line 360 "./glsl/glsl_parser.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


