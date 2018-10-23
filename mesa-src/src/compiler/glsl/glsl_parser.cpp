/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 1

/* Substitute the variable and function names.  */
#define yyparse _mesa_glsl_parse
#define yylex   _mesa_glsl_lex
#define yyerror _mesa_glsl_error
#define yylval  _mesa_glsl_lval
#define yychar  _mesa_glsl_char
#define yydebug _mesa_glsl_debug
#define yynerrs _mesa_glsl_nerrs
#define yylloc _mesa_glsl_lloc

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




/* Copy the first part of user declarations.  */
#line 1 "./glsl/glsl_parser.yy"

/*
 * Copyright © 2008, 2009 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef _MSC_VER
#include <strings.h>
#endif
#include <assert.h>

#include "ast.h"
#include "glsl_parser_extras.h"
#include "compiler/glsl_types.h"
#include "main/context.h"

#ifdef _MSC_VER
#pragma warning( disable : 4065 ) // switch statement contains 'default' but no 'case' labels
#endif

#undef yyerror

static void yyerror(YYLTYPE *loc, _mesa_glsl_parse_state *st, const char *msg)
{
   _mesa_glsl_error(loc, st, "%s", msg);
}

static int
_mesa_glsl_lex(YYSTYPE *val, YYLTYPE *loc, _mesa_glsl_parse_state *state)
{
   return _mesa_glsl_lexer_lex(val, loc, state->scanner);
}

static bool match_layout_qualifier(const char *s1, const char *s2,
                                   _mesa_glsl_parse_state *state)
{
   /* From the GLSL 1.50 spec, section 4.3.8 (Layout Qualifiers):
    *
    *     "The tokens in any layout-qualifier-id-list ... are not case
    *     sensitive, unless explicitly noted otherwise."
    *
    * The text "unless explicitly noted otherwise" appears to be
    * vacuous--no desktop GLSL spec (up through GLSL 4.40) notes
    * otherwise.
    *
    * However, the GLSL ES 3.00 spec says, in section 4.3.8 (Layout
    * Qualifiers):
    *
    *     "As for other identifiers, they are case sensitive."
    *
    * So we need to do a case-sensitive or a case-insensitive match,
    * depending on whether we are compiling for GLSL ES.
    */
   if (state->es_shader)
      return strcmp(s1, s2);
   else
      return strcasecmp(s1, s2);
}


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

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
/* Line 193 of yacc.c.  */
#line 495 "glsl/glsl_parser.cpp"
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


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 520 "glsl/glsl_parser.cpp"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2286

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  159
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  110
/* YYNRULES -- Number of rules.  */
#define YYNRULES  306
/* YYNRULES -- Number of states.  */
#define YYNSTATES  465

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   390

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   143,     2,     2,     2,   147,   150,     2,
     136,   137,   145,   141,   140,   142,     2,   146,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   154,   156,
     148,   155,   149,   153,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   138,     2,   139,   151,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   157,   152,   158,   144,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     9,    10,    14,    19,    22,    25,
      28,    31,    34,    35,    38,    40,    42,    44,    50,    52,
      55,    58,    60,    62,    64,    66,    68,    70,    72,    74,
      76,    78,    82,    84,    89,    91,    95,    98,   101,   103,
     105,   107,   110,   113,   116,   118,   121,   125,   128,   130,
     132,   134,   137,   140,   143,   145,   147,   149,   151,   153,
     157,   161,   165,   167,   171,   175,   177,   181,   185,   187,
     191,   195,   199,   203,   205,   209,   213,   215,   219,   221,
     225,   227,   231,   233,   237,   239,   243,   245,   249,   251,
     257,   259,   263,   265,   267,   269,   271,   273,   275,   277,
     279,   281,   283,   285,   287,   291,   293,   296,   299,   304,
     306,   309,   311,   313,   316,   320,   324,   327,   331,   335,
     338,   341,   342,   345,   348,   351,   354,   357,   359,   361,
     363,   365,   367,   371,   376,   383,   389,   391,   394,   398,
     404,   409,   412,   415,   417,   420,   425,   427,   431,   433,
     437,   439,   441,   443,   445,   447,   452,   454,   458,   460,
     462,   464,   466,   468,   470,   472,   474,   476,   478,   480,
     482,   485,   488,   491,   494,   497,   500,   503,   506,   509,
     511,   513,   515,   517,   519,   521,   523,   525,   527,   529,
     531,   533,   535,   537,   539,   541,   543,   546,   550,   554,
     559,   561,   564,   566,   568,   570,   572,   574,   576,   578,
     580,   586,   591,   593,   596,   600,   602,   606,   608,   611,
     613,   617,   622,   624,   628,   630,   632,   634,   636,   638,
     640,   642,   644,   646,   649,   650,   655,   657,   659,   662,
     666,   668,   671,   673,   676,   682,   686,   688,   690,   695,
     701,   704,   708,   712,   715,   717,   720,   723,   726,   728,
     731,   737,   745,   752,   754,   756,   758,   759,   762,   766,
     769,   772,   775,   779,   782,   784,   786,   788,   790,   792,
     795,   797,   800,   803,   811,   813,   815,   817,   819,   822,
     823,   825,   828,   830,   833,   837,   840,   844,   847,   851,
     854,   858,   861,   865,   867,   869,   871
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     160,     0,    -1,    -1,   162,   164,   161,   167,    -1,    -1,
      80,    46,    84,    -1,    80,    46,   165,    84,    -1,    87,
      84,    -1,    88,    84,    -1,    89,    84,    -1,    90,    84,
      -1,    91,    84,    -1,    -1,   164,   166,    -1,    41,    -1,
      42,    -1,    43,    -1,    81,   165,    83,   165,    84,    -1,
     256,    -1,   167,   256,    -1,   167,   166,    -1,    41,    -1,
      43,    -1,   168,    -1,    46,    -1,    47,    -1,    49,    -1,
      50,    -1,    44,    -1,    45,    -1,    48,    -1,   136,   195,
     137,    -1,   169,    -1,   170,   138,   171,   139,    -1,   172,
      -1,   170,    93,    51,    -1,   170,    54,    -1,   170,    55,
      -1,   195,    -1,   173,    -1,   174,    -1,   176,   137,    -1,
     175,   137,    -1,   177,    39,    -1,   177,    -1,   177,   193,
      -1,   176,   140,   193,    -1,   178,   136,    -1,   222,    -1,
     170,    -1,   170,    -1,    54,   179,    -1,    55,   179,    -1,
     180,   179,    -1,   141,    -1,   142,    -1,   143,    -1,   144,
      -1,   179,    -1,   181,   145,   179,    -1,   181,   146,   179,
      -1,   181,   147,   179,    -1,   181,    -1,   182,   141,   181,
      -1,   182,   142,   181,    -1,   182,    -1,   183,    52,   182,
      -1,   183,    53,   182,    -1,   183,    -1,   184,   148,   183,
      -1,   184,   149,   183,    -1,   184,    56,   183,    -1,   184,
      57,   183,    -1,   184,    -1,   185,    58,   184,    -1,   185,
      59,   184,    -1,   185,    -1,   186,   150,   185,    -1,   186,
      -1,   187,   151,   186,    -1,   187,    -1,   188,   152,   187,
      -1,   188,    -1,   189,    60,   188,    -1,   189,    -1,   190,
      62,   189,    -1,   190,    -1,   191,    61,   190,    -1,   191,
      -1,   191,   153,   195,   154,   193,    -1,   192,    -1,   179,
     194,   193,    -1,   155,    -1,    63,    -1,    64,    -1,    66,
      -1,    65,    -1,    72,    -1,    67,    -1,    68,    -1,    69,
      -1,    70,    -1,    71,    -1,   193,    -1,   195,   140,   193,
      -1,   192,    -1,   198,   156,    -1,   207,   156,    -1,    79,
     225,   222,   156,    -1,   258,    -1,   199,   137,    -1,   201,
      -1,   200,    -1,   201,   203,    -1,   200,   140,   203,    -1,
     209,   168,   136,    -1,   222,   165,    -1,   210,   222,   165,
      -1,   222,   165,   221,    -1,   204,   202,    -1,   204,   206,
      -1,    -1,     4,   204,    -1,    74,   204,    -1,   205,   204,
      -1,   225,   204,    -1,   220,   204,    -1,    19,    -1,    20,
      -1,    21,    -1,   222,    -1,   208,    -1,   207,   140,   165,
      -1,   207,   140,   165,   221,    -1,   207,   140,   165,   221,
     155,   231,    -1,   207,   140,   165,   155,   231,    -1,   209,
      -1,   209,   165,    -1,   209,   165,   221,    -1,   209,   165,
     221,   155,   231,    -1,   209,   165,   155,   231,    -1,    73,
     168,    -1,    74,   168,    -1,   222,    -1,   217,   222,    -1,
      92,   136,   211,   137,    -1,   212,    -1,   211,   140,   212,
      -1,   165,    -1,   165,   155,   196,    -1,   213,    -1,   134,
      -1,   101,    -1,    37,    -1,   128,    -1,   128,   136,   215,
     137,    -1,   165,    -1,   215,   140,   165,    -1,    27,    -1,
      26,    -1,    25,    -1,    73,    -1,    74,    -1,   218,    -1,
     219,    -1,   216,    -1,   210,    -1,   220,    -1,   214,    -1,
     225,    -1,    74,   217,    -1,    73,   217,    -1,   216,   217,
      -1,   210,   217,    -1,   214,   217,    -1,   218,   217,    -1,
     219,   217,    -1,   225,   217,    -1,   220,   217,    -1,    18,
      -1,    24,    -1,   127,    -1,     4,    -1,     3,    -1,    23,
      -1,    19,    -1,    20,    -1,    21,    -1,    22,    -1,     7,
      -1,    37,    -1,    32,    -1,    33,    -1,    34,    -1,    35,
      -1,    36,    -1,   138,   139,    -1,   138,   196,   139,    -1,
     221,   138,   139,    -1,   221,   138,   196,   139,    -1,   223,
      -1,   223,   221,    -1,   224,    -1,   226,    -1,    42,    -1,
      39,    -1,     5,    -1,    77,    -1,    76,    -1,    75,    -1,
      38,   165,   157,   227,   158,    -1,    38,   157,   227,   158,
      -1,   228,    -1,   227,   228,    -1,   209,   229,   156,    -1,
     230,    -1,   229,   140,   230,    -1,   165,    -1,   165,   221,
      -1,   193,    -1,   157,   232,   158,    -1,   157,   232,   140,
     158,    -1,   231,    -1,   232,   140,   231,    -1,   197,    -1,
     236,    -1,   235,    -1,   233,    -1,   241,    -1,   242,    -1,
     245,    -1,   251,    -1,   255,    -1,   157,   158,    -1,    -1,
     157,   237,   240,   158,    -1,   239,    -1,   235,    -1,   157,
     158,    -1,   157,   240,   158,    -1,   234,    -1,   240,   234,
      -1,   156,    -1,   195,   156,    -1,    12,   136,   195,   137,
     243,    -1,   234,    10,   234,    -1,   234,    -1,   195,    -1,
     209,   165,   155,   231,    -1,    15,   136,   195,   137,   246,
      -1,   157,   158,    -1,   157,   250,   158,    -1,    16,   195,
     154,    -1,    17,   154,    -1,   247,    -1,   248,   247,    -1,
     248,   234,    -1,   249,   234,    -1,   249,    -1,   250,   249,
      -1,    40,   136,   244,   137,   238,    -1,     9,   234,    40,
     136,   195,   137,   156,    -1,    11,   136,   252,   254,   137,
     238,    -1,   241,    -1,   233,    -1,   244,    -1,    -1,   253,
     156,    -1,   253,   156,   195,    -1,     8,   156,    -1,     6,
     156,    -1,    14,   156,    -1,    14,   195,   156,    -1,    13,
     156,    -1,   257,    -1,   197,    -1,   163,    -1,   268,    -1,
     156,    -1,   198,   239,    -1,   259,    -1,   210,   258,    -1,
     220,   258,    -1,   260,    43,   157,   262,   158,   261,   156,
      -1,    19,    -1,    20,    -1,    22,    -1,     7,    -1,   218,
     260,    -1,    -1,    43,    -1,    43,   221,    -1,   263,    -1,
     263,   262,    -1,   209,   229,   156,    -1,   210,   264,    -1,
     210,    22,   156,    -1,   210,   265,    -1,   210,     7,   156,
      -1,   210,   266,    -1,   210,    19,   156,    -1,   210,   267,
      -1,   210,    20,   156,    -1,   264,    -1,   265,    -1,   266,
      -1,   267,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   289,   289,   288,   312,   314,   321,   331,   332,   333,
     334,   335,   359,   361,   365,   366,   367,   371,   380,   388,
     396,   407,   408,   412,   419,   426,   433,   440,   447,   454,
     461,   468,   475,   476,   482,   486,   493,   499,   508,   512,
     516,   520,   521,   525,   526,   530,   536,   548,   552,   558,
     572,   573,   579,   585,   595,   596,   597,   598,   602,   603,
     609,   615,   624,   625,   631,   640,   641,   647,   656,   657,
     663,   669,   675,   684,   685,   691,   700,   701,   710,   711,
     720,   721,   730,   731,   740,   741,   750,   751,   760,   761,
     770,   771,   780,   781,   782,   783,   784,   785,   786,   787,
     788,   789,   790,   794,   798,   814,   818,   823,   827,   832,
     849,   853,   854,   858,   863,   871,   889,   900,   917,   932,
     940,   957,   960,   968,   976,   988,  1000,  1007,  1012,  1017,
    1026,  1030,  1031,  1041,  1051,  1061,  1075,  1082,  1093,  1104,
    1115,  1126,  1138,  1153,  1160,  1178,  1185,  1186,  1196,  1650,
    1815,  1841,  1846,  1851,  1859,  1864,  1873,  1882,  1894,  1899,
    1904,  1913,  1918,  1923,  1924,  1925,  1926,  1927,  1928,  1929,
    1947,  1955,  1980,  2004,  2018,  2023,  2039,  2059,  2071,  2079,
    2084,  2089,  2096,  2101,  2106,  2111,  2116,  2141,  2153,  2158,
    2163,  2171,  2176,  2181,  2187,  2192,  2200,  2208,  2214,  2224,
    2235,  2236,  2244,  2250,  2256,  2265,  2266,  2270,  2275,  2280,
    2288,  2295,  2312,  2317,  2325,  2363,  2368,  2376,  2382,  2391,
    2392,  2396,  2403,  2410,  2417,  2423,  2424,  2428,  2429,  2430,
    2431,  2432,  2433,  2437,  2444,  2443,  2457,  2458,  2462,  2468,
    2477,  2487,  2499,  2505,  2514,  2523,  2528,  2536,  2540,  2558,
    2566,  2571,  2579,  2584,  2592,  2600,  2608,  2616,  2624,  2632,
    2640,  2647,  2654,  2664,  2665,  2669,  2671,  2677,  2682,  2691,
    2697,  2703,  2709,  2715,  2724,  2725,  2726,  2727,  2728,  2732,
    2746,  2750,  2763,  2781,  2800,  2805,  2810,  2815,  2820,  2835,
    2838,  2843,  2851,  2856,  2864,  2888,  2895,  2899,  2906,  2910,
    2920,  2929,  2939,  2948,  2960,  2982,  2992
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ATTRIBUTE", "CONST_TOK",
  "BASIC_TYPE_TOK", "BREAK", "BUFFER", "CONTINUE", "DO", "ELSE", "FOR",
  "IF", "DISCARD", "RETURN", "SWITCH", "CASE", "DEFAULT", "CENTROID",
  "IN_TOK", "OUT_TOK", "INOUT_TOK", "UNIFORM", "VARYING", "SAMPLE",
  "NOPERSPECTIVE", "FLAT", "SMOOTH", "IMAGE1DSHADOW", "IMAGE2DSHADOW",
  "IMAGE1DARRAYSHADOW", "IMAGE2DARRAYSHADOW", "COHERENT", "VOLATILE",
  "RESTRICT", "READONLY", "WRITEONLY", "SHARED", "STRUCT", "VOID_TOK",
  "WHILE", "IDENTIFIER", "TYPE_IDENTIFIER", "NEW_IDENTIFIER",
  "FLOATCONSTANT", "DOUBLECONSTANT", "INTCONSTANT", "UINTCONSTANT",
  "BOOLCONSTANT", "INT64CONSTANT", "UINT64CONSTANT", "FIELD_SELECTION",
  "LEFT_OP", "RIGHT_OP", "INC_OP", "DEC_OP", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "AND_OP", "OR_OP", "XOR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "ADD_ASSIGN", "MOD_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "SUB_ASSIGN", "INVARIANT", "PRECISE", "LOWP",
  "MEDIUMP", "HIGHP", "SUPERP", "PRECISION", "VERSION_TOK", "EXTENSION",
  "LINE", "COLON", "EOL", "INTERFACE", "OUTPUT", "PRAGMA_DEBUG_ON",
  "PRAGMA_DEBUG_OFF", "PRAGMA_OPTIMIZE_ON", "PRAGMA_OPTIMIZE_OFF",
  "PRAGMA_INVARIANT_ALL", "LAYOUT_TOK", "DOT_TOK", "ASM", "CLASS", "UNION",
  "ENUM", "TYPEDEF", "TEMPLATE", "THIS", "PACKED_TOK", "GOTO",
  "INLINE_TOK", "NOINLINE", "PUBLIC_TOK", "STATIC", "EXTERN", "EXTERNAL",
  "LONG_TOK", "SHORT_TOK", "HALF", "FIXED_TOK", "UNSIGNED", "INPUT_TOK",
  "HVEC2", "HVEC3", "HVEC4", "FVEC2", "FVEC3", "FVEC4", "SAMPLER3DRECT",
  "SIZEOF", "CAST", "NAMESPACE", "USING", "RESOURCE", "PATCH",
  "SUBROUTINE", "ERROR_TOK", "COMMON", "PARTITION", "ACTIVE", "FILTER",
  "ROW_MAJOR", "THEN", "'('", "')'", "'['", "']'", "','", "'+'", "'-'",
  "'!'", "'~'", "'*'", "'/'", "'%'", "'<'", "'>'", "'&'", "'^'", "'|'",
  "'?'", "':'", "'='", "';'", "'{'", "'}'", "$accept", "translation_unit",
  "@1", "version_statement", "pragma_statement",
  "extension_statement_list", "any_identifier", "extension_statement",
  "external_declaration_list", "variable_identifier", "primary_expression",
  "postfix_expression", "integer_expression", "function_call",
  "function_call_or_method", "function_call_generic",
  "function_call_header_no_parameters",
  "function_call_header_with_parameters", "function_call_header",
  "function_identifier", "unary_expression", "unary_operator",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_xor_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "function_prototype",
  "function_declarator", "function_header_with_parameters",
  "function_header", "parameter_declarator", "parameter_declaration",
  "parameter_qualifier", "parameter_direction_qualifier",
  "parameter_type_specifier", "init_declarator_list", "single_declaration",
  "fully_specified_type", "layout_qualifier", "layout_qualifier_id_list",
  "layout_qualifier_id", "interface_block_layout_qualifier",
  "subroutine_qualifier", "subroutine_type_list",
  "interpolation_qualifier", "type_qualifier",
  "auxiliary_storage_qualifier", "storage_qualifier", "memory_qualifier",
  "array_specifier", "type_specifier", "type_specifier_nonarray",
  "basic_type_specifier_nonarray", "precision_qualifier",
  "struct_specifier", "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "initializer",
  "initializer_list", "declaration_statement", "statement",
  "simple_statement", "compound_statement", "@2", "statement_no_new_scope",
  "compound_statement_no_new_scope", "statement_list",
  "expression_statement", "selection_statement",
  "selection_rest_statement", "condition", "switch_statement",
  "switch_body", "case_label", "case_label_list", "case_statement",
  "case_statement_list", "iteration_statement", "for_init_statement",
  "conditionopt", "for_rest_statement", "jump_statement",
  "external_declaration", "function_definition", "interface_block",
  "basic_interface_block", "interface_qualifier", "instance_name_opt",
  "member_list", "member_declaration", "layout_uniform_defaults",
  "layout_buffer_defaults", "layout_in_defaults", "layout_out_defaults",
  "layout_defaults", 0
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,    40,    41,    91,    93,
      44,    43,    45,    33,   126,    42,    47,    37,    60,    62,
      38,    94,   124,    63,    58,    61,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   159,   161,   160,   162,   162,   162,   163,   163,   163,
     163,   163,   164,   164,   165,   165,   165,   166,   167,   167,
     167,   168,   168,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   170,   170,   170,   170,   170,   170,   171,   172,
     173,   174,   174,   175,   175,   176,   176,   177,   178,   178,
     179,   179,   179,   179,   180,   180,   180,   180,   181,   181,
     181,   181,   182,   182,   182,   183,   183,   183,   184,   184,
     184,   184,   184,   185,   185,   185,   186,   186,   187,   187,
     188,   188,   189,   189,   190,   190,   191,   191,   192,   192,
     193,   193,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   195,   195,   196,   197,   197,   197,   197,
     198,   199,   199,   200,   200,   201,   202,   202,   202,   203,
     203,   204,   204,   204,   204,   204,   204,   205,   205,   205,
     206,   207,   207,   207,   207,   207,   208,   208,   208,   208,
     208,   208,   208,   209,   209,   210,   211,   211,   212,   212,
     212,   213,   213,   213,   214,   214,   215,   215,   216,   216,
     216,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   218,
     218,   218,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   220,   220,   220,   220,   220,   221,   221,   221,   221,
     222,   222,   223,   223,   223,   224,   224,   225,   225,   225,
     226,   226,   227,   227,   228,   229,   229,   230,   230,   231,
     231,   231,   232,   232,   233,   234,   234,   235,   235,   235,
     235,   235,   235,   236,   237,   236,   238,   238,   239,   239,
     240,   240,   241,   241,   242,   243,   243,   244,   244,   245,
     246,   246,   247,   247,   248,   248,   249,   249,   250,   250,
     251,   251,   251,   252,   252,   253,   253,   254,   254,   255,
     255,   255,   255,   255,   256,   256,   256,   256,   256,   257,
     258,   258,   258,   259,   260,   260,   260,   260,   260,   261,
     261,   261,   262,   262,   263,   264,   264,   265,   265,   266,
     266,   267,   267,   268,   268,   268,   268
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     4,     0,     3,     4,     2,     2,     2,
       2,     2,     0,     2,     1,     1,     1,     5,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     4,     1,     3,     2,     2,     1,     1,
       1,     2,     2,     2,     1,     2,     3,     2,     1,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     2,     4,     1,
       2,     1,     1,     2,     3,     3,     2,     3,     3,     2,
       2,     0,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     3,     4,     6,     5,     1,     2,     3,     5,
       4,     2,     2,     1,     2,     4,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     4,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     3,     4,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     4,     1,     2,     3,     1,     3,     1,     2,     1,
       3,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     4,     1,     1,     2,     3,
       1,     2,     1,     2,     5,     3,     1,     1,     4,     5,
       2,     3,     3,     2,     1,     2,     2,     2,     1,     2,
       5,     7,     6,     1,     1,     1,     0,     2,     3,     2,
       2,     2,     3,     2,     1,     1,     1,     1,     1,     2,
       1,     2,     2,     7,     1,     1,     1,     1,     2,     0,
       1,     2,     1,     2,     3,     2,     3,     2,     3,     2,
       3,     2,     3,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     0,    12,     0,     1,     2,    14,    15,    16,
       5,     0,     0,     0,    13,     6,     0,   183,   182,   206,
     189,   179,   185,   186,   187,   188,   184,   180,   160,   159,
     158,   191,   192,   193,   194,   195,   190,     0,   205,   204,
     161,   162,   209,   208,   207,     0,     0,     0,     0,     0,
       0,     0,   181,   154,   278,   276,     3,   275,     0,     0,
     112,   121,     0,   131,   136,   166,   168,   165,     0,   163,
     164,   167,   143,   200,   202,   169,   203,    18,   274,   109,
     280,     0,   303,   304,   305,   306,   277,     0,     0,     0,
     189,   185,   186,   188,    21,    22,   161,   162,   141,   166,
     171,   163,   167,   142,   170,     0,     7,     8,     9,    10,
      11,     0,     0,    20,    19,   106,     0,   279,   110,   121,
     121,   127,   128,   129,   121,   113,     0,   121,   121,   121,
       0,   107,    14,    16,   137,     0,   189,   185,   186,   188,
     173,   281,   295,   297,   299,   301,   174,   172,   144,   175,
     288,   176,   166,   178,   282,     0,   201,   177,     0,     0,
       0,     0,   212,     0,     0,   153,   152,   151,   148,     0,
     146,   150,   156,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,    29,    24,    25,    30,    26,    27,
       0,     0,     0,    54,    55,    56,    57,   242,   234,   238,
      23,    32,    50,    34,    39,    40,     0,     0,    44,     0,
      58,     0,    62,    65,    68,    73,    76,    78,    80,    82,
      84,    86,    88,    90,   103,     0,   224,     0,   143,   227,
     240,   226,   225,     0,   228,   229,   230,   231,   232,   114,
     122,   123,   119,   120,     0,   130,   124,   126,   125,   132,
       0,   138,   115,   298,   300,   302,   296,   196,    58,   105,
       0,    48,     0,     0,    17,   217,     0,   215,   211,   213,
       0,   108,     0,   145,     0,   155,     0,   270,   269,     0,
       0,     0,   273,   271,     0,     0,     0,    51,    52,     0,
     233,     0,    36,    37,     0,     0,    42,    41,     0,   205,
      45,    47,    93,    94,    96,    95,    98,    99,   100,   101,
     102,    97,    92,     0,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   243,   239,   241,     0,
     116,     0,   133,     0,   219,   140,     0,   197,   198,     0,
       0,     0,   292,   218,     0,   214,   210,   149,   147,   157,
       0,   264,   263,   266,     0,   272,     0,   247,     0,     0,
      31,     0,    35,     0,    38,    46,    91,    59,    60,    61,
      63,    64,    66,    67,    71,    72,    69,    70,    74,    75,
      77,    79,    81,    83,    85,    87,     0,   104,   117,   118,
     135,     0,   222,     0,   139,   199,     0,   289,   293,   216,
       0,   265,     0,     0,     0,     0,     0,     0,   235,    33,
       0,   134,     0,   220,   294,   290,     0,     0,   267,     0,
     246,   244,     0,   249,     0,   237,   260,   236,    89,   221,
     223,   291,   283,     0,   268,   262,     0,     0,     0,   250,
     254,     0,   258,     0,   248,   261,   245,     0,   253,   256,
     255,   257,   251,   259,   252
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    13,     3,    55,     6,   265,    14,    56,   200,
     201,   202,   373,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   313,   225,   260,   226,   227,
      59,    60,    61,   242,   125,   126,   127,   243,    62,    63,
      64,    99,   169,   170,   171,    66,   173,    67,    68,    69,
      70,   102,   156,   261,    73,    74,    75,    76,   161,   162,
     266,   267,   345,   403,   229,   230,   231,   232,   291,   436,
     437,   233,   234,   235,   431,   369,   236,   433,   450,   451,
     452,   453,   237,   363,   412,   413,   238,    77,    78,    79,
      80,    81,   426,   351,   352,    82,    83,    84,    85,    86
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -278
static const yytype_int16 yypact[] =
{
     -48,   -44,    34,  -278,    -1,  -278,   -16,  -278,  -278,  -278,
    -278,   -45,   180,  1677,  -278,  -278,   -25,  -278,  -278,  -278,
      26,  -278,    61,    86,  -278,   104,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,   -26,  -278,  -278,
    1975,  1975,  -278,  -278,  -278,   163,    13,    75,    77,    95,
     106,    32,  -278,    56,  -278,  -278,  1580,  -278,    53,    66,
      58,   309,  -102,  -278,   221,  2036,  2097,  2097,    48,  2158,
    2097,  2158,  -278,    78,  -278,  2097,  -278,  -278,  -278,  -278,
    -278,   176,  -278,  -278,  -278,  -278,  -278,   180,  1900,    71,
    -278,  -278,  -278,  -278,  -278,  -278,  2097,  2097,  -278,  2097,
    -278,  2097,  2097,  -278,  -278,    48,  -278,  -278,  -278,  -278,
    -278,    -6,   180,  -278,  -278,  -278,   500,  -278,  -278,   563,
     563,  -278,  -278,  -278,   563,  -278,    43,   563,   563,   563,
     180,  -278,    94,    99,  -111,   107,   -32,   -24,   -23,   -22,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  2158,  -278,  -278,   576,   120,  -278,   103,   185,
     180,   889,  -278,  1900,   121,  -278,  -278,  -278,   131,  -107,
    -278,  -278,  -278,   -38,   135,   139,  1220,   151,   158,   140,
    1430,   164,   165,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    1140,  1140,  1140,  -278,  -278,  -278,  -278,  -278,   144,  -278,
    -278,  -278,   134,  -278,  -278,  -278,   166,    29,  1295,   168,
     251,  1140,   138,    84,   196,     7,   174,   155,   157,   154,
     249,   250,   -53,  -278,  -278,   -42,  -278,   171,   175,  -278,
    -278,  -278,  -278,   656,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,    48,   180,  -278,  -278,  -278,  -109,
     980,   -78,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
     186,  -278,   732,  1900,  -278,    78,   -17,  -278,  -278,  -278,
     968,  -278,  1140,  -278,    -6,  -278,   180,  -278,  -278,   291,
    1502,  1140,  -278,  -278,     2,  1140,  1825,  -278,  -278,    54,
    -278,  1220,  -278,  -278,   281,  1140,  -278,  -278,  1140,   197,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  1140,  -278,  1140,  1140,  1140,  1140,  1140,
    1140,  1140,  1140,  1140,  1140,  1140,  1140,  1140,  1140,  1140,
    1140,  1140,  1140,  1140,  1140,  1140,  -278,  -278,  -278,   180,
      78,   980,   -50,   980,  -278,  -278,   980,  -278,  -278,   194,
     180,   177,  1900,   120,   180,  -278,  -278,  -278,  -278,  -278,
     200,  -278,  -278,  1825,    60,  -278,    68,   198,   180,   203,
    -278,   812,  -278,   207,   198,  -278,  -278,  -278,  -278,  -278,
     138,   138,    84,    84,   196,   196,   196,   196,     7,     7,
     174,   155,   157,   154,   249,   250,   -70,  -278,  -278,   120,
    -278,   980,  -278,   -79,  -278,  -278,    17,   294,  -278,  -278,
    1140,  -278,   191,   211,  1220,   192,   199,  1375,  -278,  -278,
    1140,  -278,  1683,  -278,  -278,    78,   195,    74,  1140,  1375,
     342,  -278,    -7,  -278,   980,  -278,  -278,  -278,  -278,  -278,
    -278,   120,  -278,   201,   198,  -278,  1220,  1140,   202,  -278,
    -278,  1065,  1220,    -4,  -278,  -278,  -278,    41,  -278,  -278,
    -278,  -278,  -278,  1220,  -278
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -278,  -278,  -278,  -278,  -278,  -278,    14,   299,  -278,     9,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
     169,  -278,   -66,   -46,  -138,   -47,    33,    35,    36,    38,
      31,    37,  -278,  -150,  -205,  -278,  -121,  -166,    11,    12,
    -278,  -278,  -278,  -278,   246,   127,  -278,  -278,  -278,  -278,
     -87,     1,  -278,    93,  -278,  -278,  -278,  -278,  1889,   105,
    -278,    -9,  -128,   -13,  -278,  -278,   117,  -278,   208,  -154,
      23,    20,  -252,  -278,    96,  -153,  -277,  -278,  -278,   -52,
     320,    88,   101,  -278,  -278,    24,  -278,  -278,   -63,  -278,
     -64,  -278,  -278,  -278,  -278,  -278,  -278,   334,  -278,   -43,
    -278,   323,  -278,    42,  -278,   328,   330,   331,   332,  -278
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -288
static const yytype_int16 yytable[] =
{
      72,   160,     4,   300,    71,   259,   251,   269,   333,   447,
     448,  -287,   447,   448,    65,     7,     8,     9,    11,  -284,
    -285,  -286,   141,   279,    57,    58,    16,   155,   154,   155,
     273,   165,     1,   274,     5,     7,     8,     9,   130,    15,
       7,     8,     9,    72,   250,   344,   341,    71,    19,    98,
     103,    89,   128,    19,   131,   148,    71,    65,    87,   284,
     262,   422,    71,   322,   323,    12,    65,    57,    58,  -287,
     335,   289,   152,   135,   160,    72,   160,   346,   134,   423,
     338,    37,    38,    10,   420,    39,    37,    38,   262,   400,
      39,   402,   164,   375,   404,   166,   349,   106,   335,   275,
     334,   159,   276,   228,  -284,   401,   357,    71,   376,   141,
     128,   128,   259,   245,   336,   128,   269,   152,   128,   128,
     128,   342,   259,   354,   253,   168,   172,   244,   167,  -285,
     397,    88,   254,   255,   256,    51,   344,   353,   344,   355,
     435,   344,   335,    71,   249,   101,   101,  -286,    72,   421,
      72,   449,   435,   152,   462,   324,   325,   354,   365,   107,
     364,   108,   105,   228,   366,   367,   297,    71,   111,   298,
     440,   101,   101,   424,   374,   101,   350,   152,   129,   109,
     101,   335,   454,   160,   384,   385,   386,   387,   292,   293,
     110,   370,   112,   101,   335,   464,   344,   414,   119,   368,
     335,   101,   101,   118,   101,   415,   101,   101,   335,   115,
     116,   443,   399,   396,   335,   438,   155,   344,   338,   158,
     228,     7,     8,     9,    71,   318,   319,   294,   163,   344,
     -21,   339,   326,   327,   152,   -22,   129,   129,    42,    43,
      44,   129,   367,   252,   129,   129,   129,   240,   320,   321,
      72,   241,   380,   381,   246,   247,   248,    72,   262,   340,
     263,   430,   132,     8,   133,   350,   101,   228,   101,   264,
     -49,    71,   295,   228,   382,   383,   368,   271,   228,   388,
     389,   152,    71,   315,   316,   317,   272,   280,   168,   427,
     359,   277,   152,   456,   281,   278,   282,   441,   459,   461,
     285,   286,   290,   296,   301,   328,   330,   444,   329,   331,
     461,   -48,   332,   120,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   258,   347,   457,   115,   121,   122,
     123,   360,   372,   405,   -43,   407,   410,   425,   335,    72,
     417,    31,    32,    33,    34,    35,   419,   428,   429,   432,
     228,   442,   446,   398,   434,   113,   458,   455,   228,   287,
     288,   390,    71,   394,   391,   239,   392,   358,   101,   393,
     395,   270,   152,   406,   409,   101,   361,   445,   117,   371,
     314,   362,   416,   124,    42,    43,    44,   411,   460,   463,
     114,   101,   150,   142,   408,   143,   144,   145,     0,     0,
       0,   228,     0,     0,   228,    71,   312,     0,    71,     0,
       0,     0,     0,     0,     0,   152,   228,     0,   152,     0,
      71,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     152,   258,     0,   228,     0,     0,     0,    71,   228,   228,
       0,   258,    71,    71,     0,     0,  -111,   152,     0,     0,
     228,     0,   152,   152,    71,     0,     0,   101,     0,     0,
       0,     0,     0,     0,   152,     0,     0,     0,   101,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   377,   378,   379,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,    17,    18,    19,   174,    20,   175,   176,
       0,   177,   178,   179,   180,   181,     0,     0,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     0,     0,
       0,     0,    31,    32,    33,    34,    35,    36,    37,    38,
     182,    94,    39,    95,   183,   184,   185,   186,   187,   188,
     189,     0,     0,     0,   190,   191,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   120,     0,     0,
       0,     0,     0,    40,    41,    42,    43,    44,     0,    45,
       0,    19,   121,   122,   123,     0,     0,     0,     0,     0,
       0,     0,    51,     0,     0,    31,    32,    33,    34,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    37,    38,     0,    94,    39,    95,
     183,   184,   185,   186,   187,   188,   189,    52,    53,     0,
     190,   191,     0,     0,     0,     0,   192,   124,    42,    43,
      44,   193,   194,   195,   196,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   197,   198,   199,    17,
      18,    19,   174,    20,   175,   176,     0,   177,   178,   179,
     180,   181,     0,     0,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     0,     0,     0,     0,    31,    32,
      33,    34,    35,    36,    37,    38,   182,    94,    39,    95,
     183,   184,   185,   186,   187,   188,   189,     0,     0,     0,
     190,   191,   192,     0,     0,   257,     0,   193,   194,   195,
     196,     0,     0,     0,     0,     0,     0,     0,     0,    40,
      41,    42,    43,    44,     0,    45,     0,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,    38,     0,    94,    39,    95,   183,   184,   185,   186,
     187,   188,   189,    52,    53,     0,   190,   191,     0,     0,
       0,     0,   192,     0,     0,     0,     0,   193,   194,   195,
     196,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   197,   198,   337,    17,    18,    19,   174,    20,
     175,   176,     0,   177,   178,   179,   180,   181,     0,     0,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
       0,     0,     0,     0,    31,    32,    33,    34,    35,    36,
      37,    38,   182,    94,    39,    95,   183,   184,   185,   186,
     187,   188,   189,     0,     0,     0,   190,   191,   192,     0,
       0,   348,     0,   193,   194,   195,   196,     0,     0,     0,
       0,     0,     0,     0,     0,    40,    41,    42,    43,    44,
       0,    45,    17,    18,    19,     0,    90,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,    21,    91,    92,
      24,    93,    26,    27,    28,    29,    30,     0,     0,     0,
       0,    31,    32,    33,    34,    35,    36,    37,    38,     0,
       0,    39,     0,     0,     0,     0,     0,     0,     0,    52,
      53,     0,     0,     0,     0,     0,     0,     0,   192,     0,
       0,     0,     0,   193,   194,   195,   196,     0,     0,     0,
       0,     0,    96,    97,    42,    43,    44,     0,   197,   198,
     418,    17,    18,    19,     0,    90,     0,     0,     0,     0,
       0,    51,     0,     0,     0,    19,    21,    91,    92,    24,
      93,    26,    27,    28,    29,    30,     0,     0,     0,     0,
      31,    32,    33,    34,    35,    36,    37,    38,     0,     0,
      39,     0,     0,     0,     0,     0,    52,    53,    37,    38,
       0,    94,    39,    95,   183,   184,   185,   186,   187,   188,
     189,     0,     0,     0,   190,   191,     0,     0,     0,     0,
       0,    96,    97,    42,    43,    44,     0,   268,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     0,     0,     0,     0,     0,     0,     0,    17,    18,
      19,   174,    20,   175,   176,     0,   177,   178,   179,   180,
     181,   447,   448,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,     0,     0,    52,    53,    31,    32,    33,
      34,    35,    36,    37,    38,   182,    94,    39,    95,   183,
     184,   185,   186,   187,   188,   189,   192,     0,     0,   190,
     191,   193,   194,   195,   196,     0,   356,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   343,    40,    41,
      42,    43,    44,     0,    45,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,    38,
       0,    94,    39,    95,   183,   184,   185,   186,   187,   188,
     189,     0,    52,    53,   190,   191,     0,     0,     0,     0,
       0,   192,     0,     0,     0,     0,   193,   194,   195,   196,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   197,   198,    17,    18,    19,   174,    20,   175,   176,
       0,   177,   178,   179,   180,   181,     0,     0,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     0,     0,
       0,     0,    31,    32,    33,    34,    35,    36,    37,    38,
     182,    94,    39,    95,   183,   184,   185,   186,   187,   188,
     189,     0,     0,     0,   190,   191,   192,     0,     0,     0,
       0,   193,   194,   195,   196,     0,     0,     0,     0,     0,
       0,     0,     0,    40,    41,    42,    43,    44,     0,    45,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    37,   299,     0,    94,    39,    95,   183,
     184,   185,   186,   187,   188,   189,     0,    52,    53,   190,
     191,     0,     0,     0,     0,     0,   192,     0,     0,     0,
       0,   193,   194,   195,   196,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   197,   198,    17,    18,
      19,   174,    20,   175,   176,     0,   177,   178,   179,   180,
     181,     0,     0,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,     0,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    37,    38,   182,    94,    39,    95,   183,
     184,   185,   186,   187,   188,   189,     0,     0,     0,   190,
     191,   192,     0,     0,     0,    19,   193,   194,   195,   196,
       0,     0,     0,     0,     0,     0,     0,     0,    40,    41,
      42,    43,    44,     0,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,    37,    38,
       0,    94,    39,    95,   183,   184,   185,   186,   187,   188,
     189,     0,     0,     0,   190,   191,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,    53,     0,    17,    18,    19,     0,    20,
       0,   192,     0,     0,     0,     0,   193,   194,   195,   196,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
       0,   197,   116,     0,    31,    32,    33,    34,    35,    36,
      37,    38,     0,    94,    39,    95,   183,   184,   185,   186,
     187,   188,   189,     0,     0,     0,   190,   191,     0,     0,
       0,     0,     0,     0,     0,     0,   192,     0,     0,     0,
       0,   193,   194,   195,   196,    40,    41,    42,    43,    44,
       0,    45,     0,    17,    18,    19,   283,    20,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     0,     0,
       0,     0,    31,    32,    33,    34,    35,    36,    37,    38,
       0,     0,    39,     0,     0,     0,     0,     0,     0,    52,
      53,     0,     0,     0,     0,     0,     0,     0,   192,     0,
       0,     0,     0,   193,   194,   195,   196,     0,     0,     0,
       0,     0,     0,    40,    41,    42,    43,    44,   197,    45,
       0,    12,     0,     0,     0,     0,     0,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
      17,    18,    19,     0,    20,     0,     0,     0,    19,     0,
       0,     0,     0,     0,     0,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,     0,     0,    52,    53,    31,
      32,    33,    34,    35,    36,    37,    38,     0,     0,    39,
       0,    37,    38,     0,    94,    39,    95,   183,   184,   185,
     186,   187,   188,   189,     0,     0,    54,   190,   191,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      40,    41,    42,    43,    44,     0,    45,     0,     0,     0,
       0,     0,     0,     0,    46,    47,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    52,    53,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   192,
       0,     0,     0,     0,   193,   194,   195,   196,    17,    18,
      19,     0,    90,    54,     0,     0,     0,     0,     0,     0,
     343,   439,     0,    21,    91,    92,    24,    93,    26,    27,
      28,    29,    30,     0,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    37,    38,     0,    94,    39,    95,   183,
     184,   185,   186,   187,   188,   189,     0,     0,     0,   190,
     191,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    96,    97,
      42,    43,    44,    17,    18,    19,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,    21,    91,
      92,    24,    93,    26,    27,    28,    29,    30,     0,   100,
     104,     0,    31,    32,    33,    34,    35,    36,    37,    38,
       0,     0,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,    53,   140,   146,   147,     0,   149,   151,
     153,   192,     0,     0,   157,     0,   193,   194,   195,   196,
       0,     0,     0,    96,    97,    42,    43,    44,    17,    18,
       0,     0,    90,     0,     0,   100,   104,     0,   140,     0,
     149,   153,    51,    21,    91,    92,    24,    93,    26,    27,
      28,    29,    30,     0,     0,     0,     0,    31,    32,    33,
      34,    35,    36,     0,     0,     0,    94,     0,    95,     0,
       0,     0,     0,     0,     0,     0,     0,    52,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    17,
      18,   140,     0,   136,     0,     0,     0,     0,    96,    97,
      42,    43,    44,     0,    21,   137,   138,    24,   139,    26,
      27,    28,    29,    30,     0,     0,     0,    51,    31,    32,
      33,    34,    35,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      17,    18,    52,    53,    90,     0,     0,     0,     0,    96,
      97,    42,    43,    44,     0,    21,    91,    92,    24,    93,
      26,    27,    28,    29,    30,     0,     0,     0,    51,    31,
      32,    33,    34,    35,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    17,    18,    52,    53,    20,     0,     0,     0,     0,
      96,    97,    42,    43,    44,     0,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,     0,     0,     0,    51,
      31,    32,    33,    34,    35,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    52,    53,     0,     0,     0,     0,
       0,    96,    97,    42,    43,    44,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,    53
};

static const yytype_int16 yycheck[] =
{
      13,    88,    46,   208,    13,   155,   134,   161,    61,    16,
      17,    43,    16,    17,    13,    41,    42,    43,     4,    43,
      43,    43,    65,   176,    13,    13,    12,   138,    71,   138,
     137,    37,    80,   140,     0,    41,    42,    43,   140,    84,
      41,    42,    43,    56,   155,   250,   155,    56,     5,    40,
      41,    37,    61,     5,   156,    68,    65,    56,    83,   180,
     138,   140,    71,    56,    57,    81,    65,    56,    56,    43,
     140,   192,    71,    64,   161,    88,   163,   155,    64,   158,
     233,    38,    39,    84,   154,    42,    38,    39,   138,   341,
      42,   343,   105,   298,   346,   101,   262,    84,   140,   137,
     153,    87,   140,   116,    43,   155,   272,   116,   313,   152,
     119,   120,   262,   126,   156,   124,   270,   116,   127,   128,
     129,   249,   272,   140,   156,   111,   112,   126,   134,    43,
     335,   157,   156,   156,   156,    92,   341,   265,   343,   156,
     417,   346,   140,   152,   130,    40,    41,    43,   161,   401,
     163,   158,   429,   152,   158,   148,   149,   140,   156,    84,
     281,    84,    45,   176,   285,   286,   137,   176,   136,   140,
     422,    66,    67,   156,   295,    70,   263,   176,    61,    84,
      75,   140,   434,   270,   322,   323,   324,   325,    54,    55,
      84,   137,   136,    88,   140,   154,   401,   137,   140,   286,
     140,    96,    97,   137,    99,   137,   101,   102,   140,   156,
     157,   137,   340,   334,   140,   420,   138,   422,   371,    43,
     233,    41,    42,    43,   233,   141,   142,    93,   157,   434,
     136,   244,    58,    59,   233,   136,   119,   120,    75,    76,
      77,   124,   363,   136,   127,   128,   129,   120,    52,    53,
     263,   124,   318,   319,   127,   128,   129,   270,   138,   245,
     157,   414,    41,    42,    43,   352,   161,   280,   163,    84,
     136,   280,   138,   286,   320,   321,   363,   156,   291,   326,
     327,   280,   291,   145,   146,   147,   155,   136,   274,   410,
     276,   156,   291,   446,   136,   156,   156,   425,   451,   452,
     136,   136,   158,   137,   136,   150,   152,   428,   151,    60,
     463,   136,    62,     4,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,   155,   139,   447,   156,    19,    20,
      21,    40,    51,   139,   137,   158,   136,    43,   140,   352,
     137,    32,    33,    34,    35,    36,   139,   156,   137,   157,
     363,   156,    10,   339,   155,    56,   154,   156,   371,   190,
     191,   328,   371,   332,   329,   119,   330,   274,   263,   331,
     333,   163,   371,   350,   354,   270,   280,   429,    58,   291,
     211,   280,   368,    74,    75,    76,    77,   363,   451,   453,
      56,   286,    69,    65,   352,    65,    65,    65,    -1,    -1,
      -1,   414,    -1,    -1,   417,   414,   155,    -1,   417,    -1,
      -1,    -1,    -1,    -1,    -1,   414,   429,    -1,   417,    -1,
     429,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     429,   262,    -1,   446,    -1,    -1,    -1,   446,   451,   452,
      -1,   272,   451,   452,    -1,    -1,   137,   446,    -1,    -1,
     463,    -1,   451,   452,   463,    -1,    -1,   352,    -1,    -1,
      -1,    -1,    -1,    -1,   463,    -1,    -1,    -1,   363,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    -1,    79,
      -1,     5,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,   127,   128,    -1,
      54,    55,    -1,    -1,    -1,    -1,   136,    74,    75,    76,
      77,   141,   142,   143,   144,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   156,   157,   158,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    13,
      14,    15,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    -1,
      54,    55,   136,    -1,    -1,   139,    -1,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    -1,    79,    -1,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,   127,   128,    -1,    54,    55,    -1,    -1,
      -1,    -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   156,   157,   158,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    14,    15,    -1,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    -1,    54,    55,   136,    -1,
      -1,   139,    -1,   141,   142,   143,   144,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      -1,    79,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    -1,   156,   157,
     158,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,     5,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,   127,   128,    38,    39,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    -1,   158,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    -1,    -1,   127,   128,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,   136,    -1,    -1,    54,
      55,   141,   142,   143,   144,    -1,   158,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    73,    74,
      75,    76,    77,    -1,    79,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,   127,   128,    54,    55,    -1,    -1,    -1,    -1,
      -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   156,   157,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    13,    14,    15,    -1,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    -1,    54,    55,   136,    -1,    -1,    -1,
      -1,   141,   142,   143,   144,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    -1,    79,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,   127,   128,    54,
      55,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,
      -1,   141,   142,   143,   144,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   156,   157,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    13,    14,
      15,    -1,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    -1,    54,
      55,   136,    -1,    -1,    -1,     5,   141,   142,   143,   144,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    38,    39,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   127,   128,    -1,     3,     4,     5,    -1,     7,
      -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,   156,   157,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    -1,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,
      -1,   141,   142,   143,   144,    73,    74,    75,    76,    77,
      -1,    79,    -1,     3,     4,     5,   156,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,   156,    79,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    -1,    -1,   127,   128,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    42,
      -1,    38,    39,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,   156,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,
      -1,    -1,    -1,    -1,   141,   142,   143,   144,     3,     4,
       5,    -1,     7,   156,    -1,    -1,    -1,    -1,    -1,    -1,
     157,   158,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    -1,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    -1,    40,
      41,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   127,   128,    65,    66,    67,    -1,    69,    70,
      71,   136,    -1,    -1,    75,    -1,   141,   142,   143,   144,
      -1,    -1,    -1,    73,    74,    75,    76,    77,     3,     4,
      -1,    -1,     7,    -1,    -1,    96,    97,    -1,    99,    -1,
     101,   102,    92,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,   152,    -1,     7,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    -1,    -1,    -1,    92,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,   127,   128,     7,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    92,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,   127,   128,     7,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    92,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   127,   128
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    80,   160,   162,    46,     0,   164,    41,    42,    43,
      84,   165,    81,   161,   166,    84,   165,     3,     4,     5,
       7,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    32,    33,    34,    35,    36,    37,    38,    39,    42,
      73,    74,    75,    76,    77,    79,    87,    88,    89,    90,
      91,    92,   127,   128,   156,   163,   167,   197,   198,   199,
     200,   201,   207,   208,   209,   210,   214,   216,   217,   218,
     219,   220,   222,   223,   224,   225,   226,   256,   257,   258,
     259,   260,   264,   265,   266,   267,   268,    83,   157,   165,
       7,    19,    20,    22,    41,    43,    73,    74,   168,   210,
     217,   218,   220,   168,   217,   225,    84,    84,    84,    84,
      84,   136,   136,   166,   256,   156,   157,   239,   137,   140,
       4,    19,    20,    21,    74,   203,   204,   205,   220,   225,
     140,   156,    41,    43,   165,   168,     7,    19,    20,    22,
     217,   258,   264,   265,   266,   267,   217,   217,   222,   217,
     260,   217,   210,   217,   258,   138,   221,   217,    43,   165,
     209,   227,   228,   157,   222,    37,   101,   134,   165,   211,
     212,   213,   165,   215,     6,     8,     9,    11,    12,    13,
      14,    15,    40,    44,    45,    46,    47,    48,    49,    50,
      54,    55,   136,   141,   142,   143,   144,   156,   157,   158,
     168,   169,   170,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   195,   197,   198,   222,   233,
     234,   235,   236,   240,   241,   242,   245,   251,   255,   203,
     204,   204,   202,   206,   210,   222,   204,   204,   204,   165,
     155,   221,   136,   156,   156,   156,   156,   139,   179,   192,
     196,   222,   138,   157,    84,   165,   229,   230,   158,   228,
     227,   156,   155,   137,   140,   137,   140,   156,   156,   234,
     136,   136,   156,   156,   195,   136,   136,   179,   179,   195,
     158,   237,    54,    55,    93,   138,   137,   137,   140,    39,
     193,   136,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,   155,   194,   179,   145,   146,   147,   141,   142,
      52,    53,    56,    57,   148,   149,    58,    59,   150,   151,
     152,    60,    62,    61,   153,   140,   156,   158,   234,   222,
     165,   155,   221,   157,   193,   231,   155,   139,   139,   196,
     209,   262,   263,   221,   140,   156,   158,   196,   212,   165,
      40,   233,   241,   252,   195,   156,   195,   195,   209,   244,
     137,   240,    51,   171,   195,   193,   193,   179,   179,   179,
     181,   181,   182,   182,   183,   183,   183,   183,   184,   184,
     185,   186,   187,   188,   189,   190,   195,   193,   165,   221,
     231,   155,   231,   232,   231,   139,   229,   158,   262,   230,
     136,   244,   253,   254,   137,   137,   165,   137,   158,   139,
     154,   231,   140,   158,   156,    43,   261,   195,   156,   137,
     234,   243,   157,   246,   155,   235,   238,   239,   193,   158,
     231,   221,   156,   137,   195,   238,    10,    16,    17,   158,
     247,   248,   249,   250,   231,   156,   234,   195,   154,   234,
     247,   234,   158,   249,   154
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
      yyerror (&yylloc, state, YY_("syntax error: cannot back up")); \
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc, state)
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
		  Type, Value, Location, state); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, struct _mesa_glsl_parse_state *state)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, state)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    struct _mesa_glsl_parse_state *state;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
  YYUSE (state);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, struct _mesa_glsl_parse_state *state)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp, state)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    struct _mesa_glsl_parse_state *state;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, state);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, struct _mesa_glsl_parse_state *state)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule, state)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
    struct _mesa_glsl_parse_state *state;
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       , state);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule, state); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, struct _mesa_glsl_parse_state *state)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp, state)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
    struct _mesa_glsl_parse_state *state;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (state);

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
int yyparse (struct _mesa_glsl_parse_state *state);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

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
yyparse (struct _mesa_glsl_parse_state *state)
#else
int
yyparse (state)
    struct _mesa_glsl_parse_state *state;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;
#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif


  /* User initialization code.  */
#line 87 "./glsl/glsl_parser.yy"
{
   yylloc.first_line = 1;
   yylloc.first_column = 1;
   yylloc.last_line = 1;
   yylloc.last_column = 1;
   yylloc.source = 0;
}
/* Line 1078 of yacc.c.  */
#line 2472 "glsl/glsl_parser.cpp"
  yylsp[0] = yylloc;
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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 289 "./glsl/glsl_parser.yy"
    {
      _mesa_glsl_initialize_types(state);
   ;}
    break;

  case 3:
#line 293 "./glsl/glsl_parser.yy"
    {
      delete state->symbols;
      state->symbols = new(ralloc_parent(state)) glsl_symbol_table;
      if (state->es_shader) {
         if (state->stage == MESA_SHADER_FRAGMENT) {
            state->symbols->add_default_precision_qualifier("int", ast_precision_medium);
         } else {
            state->symbols->add_default_precision_qualifier("float", ast_precision_high);
            state->symbols->add_default_precision_qualifier("int", ast_precision_high);
         }
         state->symbols->add_default_precision_qualifier("sampler2D", ast_precision_low);
         state->symbols->add_default_precision_qualifier("samplerExternalOES", ast_precision_low);
         state->symbols->add_default_precision_qualifier("samplerCube", ast_precision_low);
         state->symbols->add_default_precision_qualifier("atomic_uint", ast_precision_high);
      }
      _mesa_glsl_initialize_types(state);
   ;}
    break;

  case 5:
#line 315 "./glsl/glsl_parser.yy"
    {
      state->process_version_directive(&(yylsp[(2) - (3)]), (yyvsp[(2) - (3)].n), NULL);
      if (state->error) {
         YYERROR;
      }
   ;}
    break;

  case 6:
#line 322 "./glsl/glsl_parser.yy"
    {
      state->process_version_directive(&(yylsp[(2) - (4)]), (yyvsp[(2) - (4)].n), (yyvsp[(3) - (4)].identifier));
      if (state->error) {
         YYERROR;
      }
   ;}
    break;

  case 11:
#line 336 "./glsl/glsl_parser.yy"
    {
      /* Pragma invariant(all) cannot be used in a fragment shader.
       *
       * Page 27 of the GLSL 1.20 spec, Page 53 of the GLSL ES 3.00 spec:
       *
       *     "It is an error to use this pragma in a fragment shader."
       */
      if (state->is_version(120, 300) &&
          state->stage == MESA_SHADER_FRAGMENT) {
         _mesa_glsl_error(& (yylsp[(1) - (2)]), state,
                          "pragma `invariant(all)' cannot be used "
                          "in a fragment shader.");
      } else if (!state->is_version(120, 100)) {
         _mesa_glsl_warning(& (yylsp[(1) - (2)]), state,
                            "pragma `invariant(all)' not supported in %s "
                            "(GLSL ES 1.00 or GLSL 1.20 required)",
                            state->get_version_string());
      } else {
         state->all_invariant = true;
      }
   ;}
    break;

  case 17:
#line 372 "./glsl/glsl_parser.yy"
    {
      if (!_mesa_glsl_process_extension((yyvsp[(2) - (5)].identifier), & (yylsp[(2) - (5)]), (yyvsp[(4) - (5)].identifier), & (yylsp[(4) - (5)]), state)) {
         YYERROR;
      }
   ;}
    break;

  case 18:
#line 381 "./glsl/glsl_parser.yy"
    {
      /* FINISHME: The NULL test is required because pragmas are set to
       * FINISHME: NULL. (See production rule for external_declaration.)
       */
      if ((yyvsp[(1) - (1)].node) != NULL)
         state->translation_unit.push_tail(& (yyvsp[(1) - (1)].node)->link);
   ;}
    break;

  case 19:
#line 389 "./glsl/glsl_parser.yy"
    {
      /* FINISHME: The NULL test is required because pragmas are set to
       * FINISHME: NULL. (See production rule for external_declaration.)
       */
      if ((yyvsp[(2) - (2)].node) != NULL)
         state->translation_unit.push_tail(& (yyvsp[(2) - (2)].node)->link);
   ;}
    break;

  case 20:
#line 396 "./glsl/glsl_parser.yy"
    {
      if (!state->allow_extension_directive_midshader) {
         _mesa_glsl_error(& (yylsp[(2) - (2)]), state,
                          "#extension directive is not allowed "
                          "in the middle of a shader");
         YYERROR;
      }
   ;}
    break;

  case 23:
#line 413 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_identifier, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[(1) - (1)]));
      (yyval.expression)->primary_expression.identifier = (yyvsp[(1) - (1)].identifier);
   ;}
    break;

  case 24:
#line 420 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_int_constant, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[(1) - (1)]));
      (yyval.expression)->primary_expression.int_constant = (yyvsp[(1) - (1)].n);
   ;}
    break;

  case 25:
#line 427 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_uint_constant, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[(1) - (1)]));
      (yyval.expression)->primary_expression.uint_constant = (yyvsp[(1) - (1)].n);
   ;}
    break;

  case 26:
#line 434 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_int64_constant, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[(1) - (1)]));
      (yyval.expression)->primary_expression.int64_constant = (yyvsp[(1) - (1)].n64);
   ;}
    break;

  case 27:
#line 441 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_uint64_constant, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[(1) - (1)]));
      (yyval.expression)->primary_expression.uint64_constant = (yyvsp[(1) - (1)].n64);
   ;}
    break;

  case 28:
#line 448 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_float_constant, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[(1) - (1)]));
      (yyval.expression)->primary_expression.float_constant = (yyvsp[(1) - (1)].real);
   ;}
    break;

  case 29:
#line 455 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_double_constant, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[(1) - (1)]));
      (yyval.expression)->primary_expression.double_constant = (yyvsp[(1) - (1)].dreal);
   ;}
    break;

  case 30:
#line 462 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_bool_constant, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[(1) - (1)]));
      (yyval.expression)->primary_expression.bool_constant = (yyvsp[(1) - (1)].n);
   ;}
    break;

  case 31:
#line 469 "./glsl/glsl_parser.yy"
    {
      (yyval.expression) = (yyvsp[(2) - (3)].expression);
   ;}
    break;

  case 33:
#line 477 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_array_index, (yyvsp[(1) - (4)].expression), (yyvsp[(3) - (4)].expression), NULL);
      (yyval.expression)->set_location_range((yylsp[(1) - (4)]), (yylsp[(4) - (4)]));
   ;}
    break;

  case 34:
#line 483 "./glsl/glsl_parser.yy"
    {
      (yyval.expression) = (yyvsp[(1) - (1)].expression);
   ;}
    break;

  case 35:
#line 487 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_field_selection, (yyvsp[(1) - (3)].expression), NULL, NULL);
      (yyval.expression)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
      (yyval.expression)->primary_expression.identifier = (yyvsp[(3) - (3)].identifier);
   ;}
    break;

  case 36:
#line 494 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_post_inc, (yyvsp[(1) - (2)].expression), NULL, NULL);
      (yyval.expression)->set_location_range((yylsp[(1) - (2)]), (yylsp[(2) - (2)]));
   ;}
    break;

  case 37:
#line 500 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_post_dec, (yyvsp[(1) - (2)].expression), NULL, NULL);
      (yyval.expression)->set_location_range((yylsp[(1) - (2)]), (yylsp[(2) - (2)]));
   ;}
    break;

  case 45:
#line 531 "./glsl/glsl_parser.yy"
    {
      (yyval.expression) = (yyvsp[(1) - (2)].expression);
      (yyval.expression)->set_location((yylsp[(1) - (2)]));
      (yyval.expression)->expressions.push_tail(& (yyvsp[(2) - (2)].expression)->link);
   ;}
    break;

  case 46:
#line 537 "./glsl/glsl_parser.yy"
    {
      (yyval.expression) = (yyvsp[(1) - (3)].expression);
      (yyval.expression)->set_location((yylsp[(1) - (3)]));
      (yyval.expression)->expressions.push_tail(& (yyvsp[(3) - (3)].expression)->link);
   ;}
    break;

  case 48:
#line 553 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_function_expression((yyvsp[(1) - (1)].type_specifier));
      (yyval.expression)->set_location((yylsp[(1) - (1)]));
      ;}
    break;

  case 49:
#line 559 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_function_expression((yyvsp[(1) - (1)].expression));
      (yyval.expression)->set_location((yylsp[(1) - (1)]));
      ;}
    break;

  case 51:
#line 574 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_pre_inc, (yyvsp[(2) - (2)].expression), NULL, NULL);
      (yyval.expression)->set_location((yylsp[(1) - (2)]));
   ;}
    break;

  case 52:
#line 580 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_pre_dec, (yyvsp[(2) - (2)].expression), NULL, NULL);
      (yyval.expression)->set_location((yylsp[(1) - (2)]));
   ;}
    break;

  case 53:
#line 586 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression((yyvsp[(1) - (2)].n), (yyvsp[(2) - (2)].expression), NULL, NULL);
      (yyval.expression)->set_location_range((yylsp[(1) - (2)]), (yylsp[(2) - (2)]));
   ;}
    break;

  case 54:
#line 595 "./glsl/glsl_parser.yy"
    { (yyval.n) = ast_plus; ;}
    break;

  case 55:
#line 596 "./glsl/glsl_parser.yy"
    { (yyval.n) = ast_neg; ;}
    break;

  case 56:
#line 597 "./glsl/glsl_parser.yy"
    { (yyval.n) = ast_logic_not; ;}
    break;

  case 57:
#line 598 "./glsl/glsl_parser.yy"
    { (yyval.n) = ast_bit_not; ;}
    break;

  case 59:
#line 604 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_mul, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
      (yyval.expression)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
   ;}
    break;

  case 60:
#line 610 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_div, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
      (yyval.expression)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
   ;}
    break;

  case 61:
#line 616 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_mod, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
      (yyval.expression)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
   ;}
    break;

  case 63:
#line 626 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_add, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
      (yyval.expression)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
   ;}
    break;

  case 64:
#line 632 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_sub, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
      (yyval.expression)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
   ;}
    break;

  case 66:
#line 642 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_lshift, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
      (yyval.expression)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
   ;}
    break;

  case 67:
#line 648 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_rshift, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
      (yyval.expression)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
   ;}
    break;

  case 69:
#line 658 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_less, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
      (yyval.expression)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
   ;}
    break;

  case 70:
#line 664 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_greater, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
      (yyval.expression)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
   ;}
    break;

  case 71:
#line 670 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_lequal, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
      (yyval.expression)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
   ;}
    break;

  case 72:
#line 676 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_gequal, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
      (yyval.expression)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
   ;}
    break;

  case 74:
#line 686 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_equal, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
      (yyval.expression)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
   ;}
    break;

  case 75:
#line 692 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_nequal, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
      (yyval.expression)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
   ;}
    break;

  case 77:
#line 702 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_bit_and, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
      (yyval.expression)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
   ;}
    break;

  case 79:
#line 712 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_bit_xor, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
      (yyval.expression)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
   ;}
    break;

  case 81:
#line 722 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_bit_or, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
      (yyval.expression)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
   ;}
    break;

  case 83:
#line 732 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_logic_and, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
      (yyval.expression)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
   ;}
    break;

  case 85:
#line 742 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_logic_xor, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
      (yyval.expression)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
   ;}
    break;

  case 87:
#line 752 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_logic_or, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
      (yyval.expression)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
   ;}
    break;

  case 89:
#line 762 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression(ast_conditional, (yyvsp[(1) - (5)].expression), (yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].expression));
      (yyval.expression)->set_location_range((yylsp[(1) - (5)]), (yylsp[(5) - (5)]));
   ;}
    break;

  case 91:
#line 772 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_expression((yyvsp[(2) - (3)].n), (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression), NULL);
      (yyval.expression)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
   ;}
    break;

  case 92:
#line 780 "./glsl/glsl_parser.yy"
    { (yyval.n) = ast_assign; ;}
    break;

  case 93:
#line 781 "./glsl/glsl_parser.yy"
    { (yyval.n) = ast_mul_assign; ;}
    break;

  case 94:
#line 782 "./glsl/glsl_parser.yy"
    { (yyval.n) = ast_div_assign; ;}
    break;

  case 95:
#line 783 "./glsl/glsl_parser.yy"
    { (yyval.n) = ast_mod_assign; ;}
    break;

  case 96:
#line 784 "./glsl/glsl_parser.yy"
    { (yyval.n) = ast_add_assign; ;}
    break;

  case 97:
#line 785 "./glsl/glsl_parser.yy"
    { (yyval.n) = ast_sub_assign; ;}
    break;

  case 98:
#line 786 "./glsl/glsl_parser.yy"
    { (yyval.n) = ast_ls_assign; ;}
    break;

  case 99:
#line 787 "./glsl/glsl_parser.yy"
    { (yyval.n) = ast_rs_assign; ;}
    break;

  case 100:
#line 788 "./glsl/glsl_parser.yy"
    { (yyval.n) = ast_and_assign; ;}
    break;

  case 101:
#line 789 "./glsl/glsl_parser.yy"
    { (yyval.n) = ast_xor_assign; ;}
    break;

  case 102:
#line 790 "./glsl/glsl_parser.yy"
    { (yyval.n) = ast_or_assign; ;}
    break;

  case 103:
#line 795 "./glsl/glsl_parser.yy"
    {
      (yyval.expression) = (yyvsp[(1) - (1)].expression);
   ;}
    break;

  case 104:
#line 799 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      if ((yyvsp[(1) - (3)].expression)->oper != ast_sequence) {
         (yyval.expression) = new(ctx) ast_expression(ast_sequence, NULL, NULL, NULL);
         (yyval.expression)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
         (yyval.expression)->expressions.push_tail(& (yyvsp[(1) - (3)].expression)->link);
      } else {
         (yyval.expression) = (yyvsp[(1) - (3)].expression);
      }

      (yyval.expression)->expressions.push_tail(& (yyvsp[(3) - (3)].expression)->link);
   ;}
    break;

  case 106:
#line 819 "./glsl/glsl_parser.yy"
    {
      state->symbols->pop_scope();
      (yyval.node) = (yyvsp[(1) - (2)].function);
   ;}
    break;

  case 107:
#line 824 "./glsl/glsl_parser.yy"
    {
      (yyval.node) = (yyvsp[(1) - (2)].declarator_list);
   ;}
    break;

  case 108:
#line 828 "./glsl/glsl_parser.yy"
    {
      (yyvsp[(3) - (4)].type_specifier)->default_precision = (yyvsp[(2) - (4)].n);
      (yyval.node) = (yyvsp[(3) - (4)].type_specifier);
   ;}
    break;

  case 109:
#line 833 "./glsl/glsl_parser.yy"
    {
      ast_interface_block *block = (ast_interface_block *) (yyvsp[(1) - (1)].node);
      if (block->layout.has_layout() || block->layout.has_memory()) {
         if (!block->default_layout.merge_qualifier(& (yylsp[(1) - (1)]), state, block->layout, false)) {
            YYERROR;
         }
      }
      block->layout = block->default_layout;
      if (!block->layout.push_to_global(& (yylsp[(1) - (1)]), state)) {
         YYERROR;
      }
      (yyval.node) = (yyvsp[(1) - (1)].node);
   ;}
    break;

  case 113:
#line 859 "./glsl/glsl_parser.yy"
    {
      (yyval.function) = (yyvsp[(1) - (2)].function);
      (yyval.function)->parameters.push_tail(& (yyvsp[(2) - (2)].parameter_declarator)->link);
   ;}
    break;

  case 114:
#line 864 "./glsl/glsl_parser.yy"
    {
      (yyval.function) = (yyvsp[(1) - (3)].function);
      (yyval.function)->parameters.push_tail(& (yyvsp[(3) - (3)].parameter_declarator)->link);
   ;}
    break;

  case 115:
#line 872 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.function) = new(ctx) ast_function();
      (yyval.function)->set_location((yylsp[(2) - (3)]));
      (yyval.function)->return_type = (yyvsp[(1) - (3)].fully_specified_type);
      (yyval.function)->identifier = (yyvsp[(2) - (3)].identifier);

      if ((yyvsp[(1) - (3)].fully_specified_type)->qualifier.is_subroutine_decl()) {
         /* add type for IDENTIFIER search */
         state->symbols->add_type((yyvsp[(2) - (3)].identifier), glsl_type::get_subroutine_instance((yyvsp[(2) - (3)].identifier)));
      } else
         state->symbols->add_function(new(state) ir_function((yyvsp[(2) - (3)].identifier)));
      state->symbols->push_scope();
   ;}
    break;

  case 116:
#line 890 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.parameter_declarator) = new(ctx) ast_parameter_declarator();
      (yyval.parameter_declarator)->set_location_range((yylsp[(1) - (2)]), (yylsp[(2) - (2)]));
      (yyval.parameter_declarator)->type = new(ctx) ast_fully_specified_type();
      (yyval.parameter_declarator)->type->set_location((yylsp[(1) - (2)]));
      (yyval.parameter_declarator)->type->specifier = (yyvsp[(1) - (2)].type_specifier);
      (yyval.parameter_declarator)->identifier = (yyvsp[(2) - (2)].identifier);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[(2) - (2)].identifier), ir_var_auto));
   ;}
    break;

  case 117:
#line 901 "./glsl/glsl_parser.yy"
    {
      if (state->allow_layout_qualifier_on_function_parameter) {
         void *ctx = state->linalloc;
         (yyval.parameter_declarator) = new(ctx) ast_parameter_declarator();
         (yyval.parameter_declarator)->set_location_range((yylsp[(2) - (3)]), (yylsp[(3) - (3)]));
         (yyval.parameter_declarator)->type = new(ctx) ast_fully_specified_type();
         (yyval.parameter_declarator)->type->set_location((yylsp[(2) - (3)]));
         (yyval.parameter_declarator)->type->specifier = (yyvsp[(2) - (3)].type_specifier);
         (yyval.parameter_declarator)->identifier = (yyvsp[(3) - (3)].identifier);
         state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[(3) - (3)].identifier), ir_var_auto));
      } else {
         _mesa_glsl_error(&(yylsp[(1) - (3)]), state,
                          "is is not allowed on function parameter");
         YYERROR;
      }
   ;}
    break;

  case 118:
#line 918 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.parameter_declarator) = new(ctx) ast_parameter_declarator();
      (yyval.parameter_declarator)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
      (yyval.parameter_declarator)->type = new(ctx) ast_fully_specified_type();
      (yyval.parameter_declarator)->type->set_location((yylsp[(1) - (3)]));
      (yyval.parameter_declarator)->type->specifier = (yyvsp[(1) - (3)].type_specifier);
      (yyval.parameter_declarator)->identifier = (yyvsp[(2) - (3)].identifier);
      (yyval.parameter_declarator)->array_specifier = (yyvsp[(3) - (3)].array_specifier);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[(2) - (3)].identifier), ir_var_auto));
   ;}
    break;

  case 119:
#line 933 "./glsl/glsl_parser.yy"
    {
      (yyval.parameter_declarator) = (yyvsp[(2) - (2)].parameter_declarator);
      (yyval.parameter_declarator)->type->qualifier = (yyvsp[(1) - (2)].type_qualifier);
      if (!(yyval.parameter_declarator)->type->qualifier.push_to_global(& (yylsp[(1) - (2)]), state)) {
         YYERROR;
      }
   ;}
    break;

  case 120:
#line 941 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.parameter_declarator) = new(ctx) ast_parameter_declarator();
      (yyval.parameter_declarator)->set_location((yylsp[(2) - (2)]));
      (yyval.parameter_declarator)->type = new(ctx) ast_fully_specified_type();
      (yyval.parameter_declarator)->type->set_location_range((yylsp[(1) - (2)]), (yylsp[(2) - (2)]));
      (yyval.parameter_declarator)->type->qualifier = (yyvsp[(1) - (2)].type_qualifier);
      if (!(yyval.parameter_declarator)->type->qualifier.push_to_global(& (yylsp[(1) - (2)]), state)) {
         YYERROR;
      }
      (yyval.parameter_declarator)->type->specifier = (yyvsp[(2) - (2)].type_specifier);
   ;}
    break;

  case 121:
#line 957 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
   ;}
    break;

  case 122:
#line 961 "./glsl/glsl_parser.yy"
    {
      if ((yyvsp[(2) - (2)].type_qualifier).flags.q.constant)
         _mesa_glsl_error(&(yylsp[(1) - (2)]), state, "duplicate const qualifier");

      (yyval.type_qualifier) = (yyvsp[(2) - (2)].type_qualifier);
      (yyval.type_qualifier).flags.q.constant = 1;
   ;}
    break;

  case 123:
#line 969 "./glsl/glsl_parser.yy"
    {
      if ((yyvsp[(2) - (2)].type_qualifier).flags.q.precise)
         _mesa_glsl_error(&(yylsp[(1) - (2)]), state, "duplicate precise qualifier");

      (yyval.type_qualifier) = (yyvsp[(2) - (2)].type_qualifier);
      (yyval.type_qualifier).flags.q.precise = 1;
   ;}
    break;

  case 124:
#line 977 "./glsl/glsl_parser.yy"
    {
      if (((yyvsp[(1) - (2)].type_qualifier).flags.q.in || (yyvsp[(1) - (2)].type_qualifier).flags.q.out) && ((yyvsp[(2) - (2)].type_qualifier).flags.q.in || (yyvsp[(2) - (2)].type_qualifier).flags.q.out))
         _mesa_glsl_error(&(yylsp[(1) - (2)]), state, "duplicate in/out/inout qualifier");

      if (!state->has_420pack_or_es31() && (yyvsp[(2) - (2)].type_qualifier).flags.q.constant)
         _mesa_glsl_error(&(yylsp[(1) - (2)]), state, "in/out/inout must come after const "
                                      "or precise");

      (yyval.type_qualifier) = (yyvsp[(1) - (2)].type_qualifier);
      (yyval.type_qualifier).merge_qualifier(&(yylsp[(1) - (2)]), state, (yyvsp[(2) - (2)].type_qualifier), false);
   ;}
    break;

  case 125:
#line 989 "./glsl/glsl_parser.yy"
    {
      if ((yyvsp[(2) - (2)].type_qualifier).precision != ast_precision_none)
         _mesa_glsl_error(&(yylsp[(1) - (2)]), state, "duplicate precision qualifier");

      if (!state->has_420pack_or_es31() &&
          (yyvsp[(2) - (2)].type_qualifier).flags.i != 0)
         _mesa_glsl_error(&(yylsp[(1) - (2)]), state, "precision qualifiers must come last");

      (yyval.type_qualifier) = (yyvsp[(2) - (2)].type_qualifier);
      (yyval.type_qualifier).precision = (yyvsp[(1) - (2)].n);
   ;}
    break;

  case 126:
#line 1001 "./glsl/glsl_parser.yy"
    {
      (yyval.type_qualifier) = (yyvsp[(1) - (2)].type_qualifier);
      (yyval.type_qualifier).merge_qualifier(&(yylsp[(1) - (2)]), state, (yyvsp[(2) - (2)].type_qualifier), false);
   ;}
    break;

  case 127:
#line 1008 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.in = 1;
   ;}
    break;

  case 128:
#line 1013 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.out = 1;
   ;}
    break;

  case 129:
#line 1018 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.in = 1;
      (yyval.type_qualifier).flags.q.out = 1;
   ;}
    break;

  case 132:
#line 1032 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[(3) - (3)].identifier), NULL, NULL);
      decl->set_location((yylsp[(3) - (3)]));

      (yyval.declarator_list) = (yyvsp[(1) - (3)].declarator_list);
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[(3) - (3)].identifier), ir_var_auto));
   ;}
    break;

  case 133:
#line 1042 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[(3) - (4)].identifier), (yyvsp[(4) - (4)].array_specifier), NULL);
      decl->set_location_range((yylsp[(3) - (4)]), (yylsp[(4) - (4)]));

      (yyval.declarator_list) = (yyvsp[(1) - (4)].declarator_list);
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[(3) - (4)].identifier), ir_var_auto));
   ;}
    break;

  case 134:
#line 1052 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[(3) - (6)].identifier), (yyvsp[(4) - (6)].array_specifier), (yyvsp[(6) - (6)].expression));
      decl->set_location_range((yylsp[(3) - (6)]), (yylsp[(4) - (6)]));

      (yyval.declarator_list) = (yyvsp[(1) - (6)].declarator_list);
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[(3) - (6)].identifier), ir_var_auto));
   ;}
    break;

  case 135:
#line 1062 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[(3) - (5)].identifier), NULL, (yyvsp[(5) - (5)].expression));
      decl->set_location((yylsp[(3) - (5)]));

      (yyval.declarator_list) = (yyvsp[(1) - (5)].declarator_list);
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[(3) - (5)].identifier), ir_var_auto));
   ;}
    break;

  case 136:
#line 1076 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      /* Empty declaration list is valid. */
      (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[(1) - (1)].fully_specified_type));
      (yyval.declarator_list)->set_location((yylsp[(1) - (1)]));
   ;}
    break;

  case 137:
#line 1083 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[(2) - (2)].identifier), NULL, NULL);
      decl->set_location((yylsp[(2) - (2)]));

      (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[(1) - (2)].fully_specified_type));
      (yyval.declarator_list)->set_location_range((yylsp[(1) - (2)]), (yylsp[(2) - (2)]));
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[(2) - (2)].identifier), ir_var_auto));
   ;}
    break;

  case 138:
#line 1094 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[(2) - (3)].identifier), (yyvsp[(3) - (3)].array_specifier), NULL);
      decl->set_location_range((yylsp[(2) - (3)]), (yylsp[(3) - (3)]));

      (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[(1) - (3)].fully_specified_type));
      (yyval.declarator_list)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[(2) - (3)].identifier), ir_var_auto));
   ;}
    break;

  case 139:
#line 1105 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[(2) - (5)].identifier), (yyvsp[(3) - (5)].array_specifier), (yyvsp[(5) - (5)].expression));
      decl->set_location_range((yylsp[(2) - (5)]), (yylsp[(3) - (5)]));

      (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[(1) - (5)].fully_specified_type));
      (yyval.declarator_list)->set_location_range((yylsp[(1) - (5)]), (yylsp[(3) - (5)]));
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[(2) - (5)].identifier), ir_var_auto));
   ;}
    break;

  case 140:
#line 1116 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[(2) - (4)].identifier), NULL, (yyvsp[(4) - (4)].expression));
      decl->set_location((yylsp[(2) - (4)]));

      (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[(1) - (4)].fully_specified_type));
      (yyval.declarator_list)->set_location_range((yylsp[(1) - (4)]), (yylsp[(2) - (4)]));
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[(2) - (4)].identifier), ir_var_auto));
   ;}
    break;

  case 141:
#line 1127 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[(2) - (2)].identifier), NULL, NULL);
      decl->set_location((yylsp[(2) - (2)]));

      (yyval.declarator_list) = new(ctx) ast_declarator_list(NULL);
      (yyval.declarator_list)->set_location_range((yylsp[(1) - (2)]), (yylsp[(2) - (2)]));
      (yyval.declarator_list)->invariant = true;

      (yyval.declarator_list)->declarations.push_tail(&decl->link);
   ;}
    break;

  case 142:
#line 1139 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[(2) - (2)].identifier), NULL, NULL);
      decl->set_location((yylsp[(2) - (2)]));

      (yyval.declarator_list) = new(ctx) ast_declarator_list(NULL);
      (yyval.declarator_list)->set_location_range((yylsp[(1) - (2)]), (yylsp[(2) - (2)]));
      (yyval.declarator_list)->precise = true;

      (yyval.declarator_list)->declarations.push_tail(&decl->link);
   ;}
    break;

  case 143:
#line 1154 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.fully_specified_type) = new(ctx) ast_fully_specified_type();
      (yyval.fully_specified_type)->set_location((yylsp[(1) - (1)]));
      (yyval.fully_specified_type)->specifier = (yyvsp[(1) - (1)].type_specifier);
   ;}
    break;

  case 144:
#line 1161 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.fully_specified_type) = new(ctx) ast_fully_specified_type();
      (yyval.fully_specified_type)->set_location_range((yylsp[(1) - (2)]), (yylsp[(2) - (2)]));
      (yyval.fully_specified_type)->qualifier = (yyvsp[(1) - (2)].type_qualifier);
      if (!(yyval.fully_specified_type)->qualifier.push_to_global(& (yylsp[(1) - (2)]), state)) {
         YYERROR;
      }
      (yyval.fully_specified_type)->specifier = (yyvsp[(2) - (2)].type_specifier);
      if ((yyval.fully_specified_type)->specifier->structure != NULL &&
          (yyval.fully_specified_type)->specifier->structure->is_declaration) {
            (yyval.fully_specified_type)->specifier->structure->layout = &(yyval.fully_specified_type)->qualifier;
      }
   ;}
    break;

  case 145:
#line 1179 "./glsl/glsl_parser.yy"
    {
      (yyval.type_qualifier) = (yyvsp[(3) - (4)].type_qualifier);
   ;}
    break;

  case 147:
#line 1187 "./glsl/glsl_parser.yy"
    {
      (yyval.type_qualifier) = (yyvsp[(1) - (3)].type_qualifier);
      if (!(yyval.type_qualifier).merge_qualifier(& (yylsp[(3) - (3)]), state, (yyvsp[(3) - (3)].type_qualifier), true)) {
         YYERROR;
      }
   ;}
    break;

  case 148:
#line 1197 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));

      /* Layout qualifiers for ARB_fragment_coord_conventions. */
      if (!(yyval.type_qualifier).flags.i && (state->ARB_fragment_coord_conventions_enable ||
                          state->is_version(150, 0))) {
         if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), "origin_upper_left", state) == 0) {
            (yyval.type_qualifier).flags.q.origin_upper_left = 1;
         } else if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), "pixel_center_integer",
                                           state) == 0) {
            (yyval.type_qualifier).flags.q.pixel_center_integer = 1;
         }

         if ((yyval.type_qualifier).flags.i && state->ARB_fragment_coord_conventions_warn) {
            _mesa_glsl_warning(& (yylsp[(1) - (1)]), state,
                               "GL_ARB_fragment_coord_conventions layout "
                               "identifier `%s' used", (yyvsp[(1) - (1)].identifier));
         }
      }

      /* Layout qualifiers for AMD/ARB_conservative_depth. */
      if (!(yyval.type_qualifier).flags.i &&
          (state->AMD_conservative_depth_enable ||
           state->ARB_conservative_depth_enable ||
           state->is_version(420, 0))) {
         if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), "depth_any", state) == 0) {
            (yyval.type_qualifier).flags.q.depth_type = 1;
            (yyval.type_qualifier).depth_type = ast_depth_any;
         } else if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), "depth_greater", state) == 0) {
            (yyval.type_qualifier).flags.q.depth_type = 1;
            (yyval.type_qualifier).depth_type = ast_depth_greater;
         } else if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), "depth_less", state) == 0) {
            (yyval.type_qualifier).flags.q.depth_type = 1;
            (yyval.type_qualifier).depth_type = ast_depth_less;
         } else if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), "depth_unchanged",
                                           state) == 0) {
            (yyval.type_qualifier).flags.q.depth_type = 1;
            (yyval.type_qualifier).depth_type = ast_depth_unchanged;
         }

         if ((yyval.type_qualifier).flags.i && state->AMD_conservative_depth_warn) {
            _mesa_glsl_warning(& (yylsp[(1) - (1)]), state,
                               "GL_AMD_conservative_depth "
                               "layout qualifier `%s' is used", (yyvsp[(1) - (1)].identifier));
         }
         if ((yyval.type_qualifier).flags.i && state->ARB_conservative_depth_warn) {
            _mesa_glsl_warning(& (yylsp[(1) - (1)]), state,
                               "GL_ARB_conservative_depth "
                               "layout qualifier `%s' is used", (yyvsp[(1) - (1)].identifier));
         }
      }

      /* See also interface_block_layout_qualifier. */
      if (!(yyval.type_qualifier).flags.i && state->has_uniform_buffer_objects()) {
         if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), "std140", state) == 0) {
            (yyval.type_qualifier).flags.q.std140 = 1;
         } else if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), "shared", state) == 0) {
            (yyval.type_qualifier).flags.q.shared = 1;
         } else if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), "std430", state) == 0) {
            (yyval.type_qualifier).flags.q.std430 = 1;
         } else if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), "column_major", state) == 0) {
            (yyval.type_qualifier).flags.q.column_major = 1;
         /* "row_major" is a reserved word in GLSL 1.30+. Its token is parsed
          * below in the interface_block_layout_qualifier rule.
          *
          * It is not a reserved word in GLSL ES 3.00, so it's handled here as
          * an identifier.
          *
          * Also, this takes care of alternate capitalizations of
          * "row_major" (which is necessary because layout qualifiers
          * are case-insensitive in desktop GLSL).
          */
         } else if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), "row_major", state) == 0) {
            (yyval.type_qualifier).flags.q.row_major = 1;
         /* "packed" is a reserved word in GLSL, and its token is
          * parsed below in the interface_block_layout_qualifier rule.
          * However, we must take care of alternate capitalizations of
          * "packed", because layout qualifiers are case-insensitive
          * in desktop GLSL.
          */
         } else if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), "packed", state) == 0) {
           (yyval.type_qualifier).flags.q.packed = 1;
         }

         if ((yyval.type_qualifier).flags.i && state->ARB_uniform_buffer_object_warn) {
            _mesa_glsl_warning(& (yylsp[(1) - (1)]), state,
                               "#version 140 / GL_ARB_uniform_buffer_object "
                               "layout qualifier `%s' is used", (yyvsp[(1) - (1)].identifier));
         }
      }

      /* Layout qualifiers for GLSL 1.50 geometry shaders. */
      if (!(yyval.type_qualifier).flags.i) {
         static const struct {
            const char *s;
            GLenum e;
         } map[] = {
                 { "points", GL_POINTS },
                 { "lines", GL_LINES },
                 { "lines_adjacency", GL_LINES_ADJACENCY },
                 { "line_strip", GL_LINE_STRIP },
                 { "triangles", GL_TRIANGLES },
                 { "triangles_adjacency", GL_TRIANGLES_ADJACENCY },
                 { "triangle_strip", GL_TRIANGLE_STRIP },
         };
         for (unsigned i = 0; i < ARRAY_SIZE(map); i++) {
            if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), map[i].s, state) == 0) {
               (yyval.type_qualifier).flags.q.prim_type = 1;
               (yyval.type_qualifier).prim_type = map[i].e;
               break;
            }
         }

         if ((yyval.type_qualifier).flags.i && !state->has_geometry_shader() &&
             !state->has_tessellation_shader()) {
            _mesa_glsl_error(& (yylsp[(1) - (1)]), state, "#version 150 layout "
                             "qualifier `%s' used", (yyvsp[(1) - (1)].identifier));
         }
      }

      /* Layout qualifiers for ARB_shader_image_load_store. */
      if (state->has_shader_image_load_store()) {
         if (!(yyval.type_qualifier).flags.i) {
            static const struct {
               const char *name;
               GLenum format;
               glsl_base_type base_type;
               /** Minimum desktop GLSL version required for the image
                * format.  Use 130 if already present in the original
                * ARB extension.
                */
               unsigned required_glsl;
               /** Minimum GLSL ES version required for the image format. */
               unsigned required_essl;
               /* NV_image_formats */
               bool nv_image_formats;
            } map[] = {
               { "rgba32f", GL_RGBA32F, GLSL_TYPE_FLOAT, 130, 310, false },
               { "rgba16f", GL_RGBA16F, GLSL_TYPE_FLOAT, 130, 310, false },
               { "rg32f", GL_RG32F, GLSL_TYPE_FLOAT, 130, 0, true },
               { "rg16f", GL_RG16F, GLSL_TYPE_FLOAT, 130, 0, true },
               { "r11f_g11f_b10f", GL_R11F_G11F_B10F, GLSL_TYPE_FLOAT, 130, 0, true },
               { "r32f", GL_R32F, GLSL_TYPE_FLOAT, 130, 310, false },
               { "r16f", GL_R16F, GLSL_TYPE_FLOAT, 130, 0, true },
               { "rgba32ui", GL_RGBA32UI, GLSL_TYPE_UINT, 130, 310, false },
               { "rgba16ui", GL_RGBA16UI, GLSL_TYPE_UINT, 130, 310, false },
               { "rgb10_a2ui", GL_RGB10_A2UI, GLSL_TYPE_UINT, 130, 0, true },
               { "rgba8ui", GL_RGBA8UI, GLSL_TYPE_UINT, 130, 310, false },
               { "rg32ui", GL_RG32UI, GLSL_TYPE_UINT, 130, 0, true },
               { "rg16ui", GL_RG16UI, GLSL_TYPE_UINT, 130, 0, true },
               { "rg8ui", GL_RG8UI, GLSL_TYPE_UINT, 130, 0, true },
               { "r32ui", GL_R32UI, GLSL_TYPE_UINT, 130, 310, false },
               { "r16ui", GL_R16UI, GLSL_TYPE_UINT, 130, 0, true },
               { "r8ui", GL_R8UI, GLSL_TYPE_UINT, 130, 0, true },
               { "rgba32i", GL_RGBA32I, GLSL_TYPE_INT, 130, 310, false },
               { "rgba16i", GL_RGBA16I, GLSL_TYPE_INT, 130, 310, false },
               { "rgba8i", GL_RGBA8I, GLSL_TYPE_INT, 130, 310, false },
               { "rg32i", GL_RG32I, GLSL_TYPE_INT, 130, 0, true },
               { "rg16i", GL_RG16I, GLSL_TYPE_INT, 130, 0, true },
               { "rg8i", GL_RG8I, GLSL_TYPE_INT, 130, 0, true },
               { "r32i", GL_R32I, GLSL_TYPE_INT, 130, 310, false },
               { "r16i", GL_R16I, GLSL_TYPE_INT, 130, 0, true },
               { "r8i", GL_R8I, GLSL_TYPE_INT, 130, 0, true },
               { "rgba16", GL_RGBA16, GLSL_TYPE_FLOAT, 130, 0, true },
               { "rgb10_a2", GL_RGB10_A2, GLSL_TYPE_FLOAT, 130, 0, true },
               { "rgba8", GL_RGBA8, GLSL_TYPE_FLOAT, 130, 310, false },
               { "rg16", GL_RG16, GLSL_TYPE_FLOAT, 130, 0, true },
               { "rg8", GL_RG8, GLSL_TYPE_FLOAT, 130, 0, true },
               { "r16", GL_R16, GLSL_TYPE_FLOAT, 130, 0, true },
               { "r8", GL_R8, GLSL_TYPE_FLOAT, 130, 0, true },
               { "rgba16_snorm", GL_RGBA16_SNORM, GLSL_TYPE_FLOAT, 130, 0, true },
               { "rgba8_snorm", GL_RGBA8_SNORM, GLSL_TYPE_FLOAT, 130, 310, false },
               { "rg16_snorm", GL_RG16_SNORM, GLSL_TYPE_FLOAT, 130, 0, true },
               { "rg8_snorm", GL_RG8_SNORM, GLSL_TYPE_FLOAT, 130, 0, true },
               { "r16_snorm", GL_R16_SNORM, GLSL_TYPE_FLOAT, 130, 0, true },
               { "r8_snorm", GL_R8_SNORM, GLSL_TYPE_FLOAT, 130, 0, true }
            };

            for (unsigned i = 0; i < ARRAY_SIZE(map); i++) {
               if ((state->is_version(map[i].required_glsl,
                                      map[i].required_essl) ||
                    (state->NV_image_formats_enable &&
                     map[i].nv_image_formats)) &&
                   match_layout_qualifier((yyvsp[(1) - (1)].identifier), map[i].name, state) == 0) {
                  (yyval.type_qualifier).flags.q.explicit_image_format = 1;
                  (yyval.type_qualifier).image_format = map[i].format;
                  (yyval.type_qualifier).image_base_type = map[i].base_type;
                  break;
               }
            }
         }
      }

      if (!(yyval.type_qualifier).flags.i) {
         if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), "early_fragment_tests", state) == 0) {
            /* From section 4.4.1.3 of the GLSL 4.50 specification
             * (Fragment Shader Inputs):
             *
             *  "Fragment shaders also allow the following layout
             *   qualifier on in only (not with variable declarations)
             *     layout-qualifier-id
             *        early_fragment_tests
             *   [...]"
             */
            if (state->stage != MESA_SHADER_FRAGMENT) {
               _mesa_glsl_error(& (yylsp[(1) - (1)]), state,
                                "early_fragment_tests layout qualifier only "
                                "valid in fragment shaders");
            }

            (yyval.type_qualifier).flags.q.early_fragment_tests = 1;
         }

         if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), "inner_coverage", state) == 0) {
            if (state->stage != MESA_SHADER_FRAGMENT) {
               _mesa_glsl_error(& (yylsp[(1) - (1)]), state,
                                "inner_coverage layout qualifier only "
                                "valid in fragment shaders");
            }

	    if (state->INTEL_conservative_rasterization_enable) {
	       (yyval.type_qualifier).flags.q.inner_coverage = 1;
	    } else {
	       _mesa_glsl_error(& (yylsp[(1) - (1)]), state,
                                "inner_coverage layout qualifier present, "
                                "but the INTEL_conservative_rasterization extension "
                                "is not enabled.");
            }
         }

         if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), "post_depth_coverage", state) == 0) {
            if (state->stage != MESA_SHADER_FRAGMENT) {
               _mesa_glsl_error(& (yylsp[(1) - (1)]), state,
                                "post_depth_coverage layout qualifier only "
                                "valid in fragment shaders");
            }

            if (state->ARB_post_depth_coverage_enable ||
		state->INTEL_conservative_rasterization_enable) {
               (yyval.type_qualifier).flags.q.post_depth_coverage = 1;
            } else {
               _mesa_glsl_error(& (yylsp[(1) - (1)]), state,
                                "post_depth_coverage layout qualifier present, "
                                "but the GL_ARB_post_depth_coverage extension "
                                "is not enabled.");
            }
         }

         if ((yyval.type_qualifier).flags.q.post_depth_coverage && (yyval.type_qualifier).flags.q.inner_coverage) {
            _mesa_glsl_error(& (yylsp[(1) - (1)]), state,
                             "post_depth_coverage & inner_coverage layout qualifiers "
                             "are mutually exclusive");
         }
      }

      const bool pixel_interlock_ordered = match_layout_qualifier((yyvsp[(1) - (1)].identifier),
         "pixel_interlock_ordered", state) == 0;
      const bool pixel_interlock_unordered = match_layout_qualifier((yyvsp[(1) - (1)].identifier),
         "pixel_interlock_unordered", state) == 0;
      const bool sample_interlock_ordered = match_layout_qualifier((yyvsp[(1) - (1)].identifier),
         "sample_interlock_ordered", state) == 0;
      const bool sample_interlock_unordered = match_layout_qualifier((yyvsp[(1) - (1)].identifier),
         "sample_interlock_unordered", state) == 0;

      if (pixel_interlock_ordered + pixel_interlock_unordered +
          sample_interlock_ordered + sample_interlock_unordered > 0 &&
          state->stage != MESA_SHADER_FRAGMENT) {
         _mesa_glsl_error(& (yylsp[(1) - (1)]), state, "interlock layout qualifiers: "
                          "pixel_interlock_ordered, pixel_interlock_unordered, "
                          "sample_interlock_ordered and sample_interlock_unordered, "
                          "only valid in fragment shader input layout declaration.");
      } else if (pixel_interlock_ordered + pixel_interlock_unordered +
                 sample_interlock_ordered + sample_interlock_unordered > 0 &&
                 !state->ARB_fragment_shader_interlock_enable &&
                 !state->NV_fragment_shader_interlock_enable) {
         _mesa_glsl_error(& (yylsp[(1) - (1)]), state,
                          "interlock layout qualifier present, but the "
                          "GL_ARB_fragment_shader_interlock or "
                          "GL_NV_fragment_shader_interlock extension is not "
                          "enabled.");
      } else {
         (yyval.type_qualifier).flags.q.pixel_interlock_ordered = pixel_interlock_ordered;
         (yyval.type_qualifier).flags.q.pixel_interlock_unordered = pixel_interlock_unordered;
         (yyval.type_qualifier).flags.q.sample_interlock_ordered = sample_interlock_ordered;
         (yyval.type_qualifier).flags.q.sample_interlock_unordered = sample_interlock_unordered;
      }

      /* Layout qualifiers for tessellation evaluation shaders. */
      if (!(yyval.type_qualifier).flags.i) {
         static const struct {
            const char *s;
            GLenum e;
         } map[] = {
                 /* triangles already parsed by gs-specific code */
                 { "quads", GL_QUADS },
                 { "isolines", GL_ISOLINES },
         };
         for (unsigned i = 0; i < ARRAY_SIZE(map); i++) {
            if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), map[i].s, state) == 0) {
               (yyval.type_qualifier).flags.q.prim_type = 1;
               (yyval.type_qualifier).prim_type = map[i].e;
               break;
            }
         }

         if ((yyval.type_qualifier).flags.i && !state->has_tessellation_shader()) {
            _mesa_glsl_error(& (yylsp[(1) - (1)]), state,
                             "primitive mode qualifier `%s' requires "
                             "GLSL 4.00 or ARB_tessellation_shader", (yyvsp[(1) - (1)].identifier));
         }
      }
      if (!(yyval.type_qualifier).flags.i) {
         static const struct {
            const char *s;
            enum gl_tess_spacing e;
         } map[] = {
                 { "equal_spacing", TESS_SPACING_EQUAL },
                 { "fractional_odd_spacing", TESS_SPACING_FRACTIONAL_ODD },
                 { "fractional_even_spacing", TESS_SPACING_FRACTIONAL_EVEN },
         };
         for (unsigned i = 0; i < ARRAY_SIZE(map); i++) {
            if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), map[i].s, state) == 0) {
               (yyval.type_qualifier).flags.q.vertex_spacing = 1;
               (yyval.type_qualifier).vertex_spacing = map[i].e;
               break;
            }
         }

         if ((yyval.type_qualifier).flags.i && !state->has_tessellation_shader()) {
            _mesa_glsl_error(& (yylsp[(1) - (1)]), state,
                             "vertex spacing qualifier `%s' requires "
                             "GLSL 4.00 or ARB_tessellation_shader", (yyvsp[(1) - (1)].identifier));
         }
      }
      if (!(yyval.type_qualifier).flags.i) {
         if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), "cw", state) == 0) {
            (yyval.type_qualifier).flags.q.ordering = 1;
            (yyval.type_qualifier).ordering = GL_CW;
         } else if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), "ccw", state) == 0) {
            (yyval.type_qualifier).flags.q.ordering = 1;
            (yyval.type_qualifier).ordering = GL_CCW;
         }

         if ((yyval.type_qualifier).flags.i && !state->has_tessellation_shader()) {
            _mesa_glsl_error(& (yylsp[(1) - (1)]), state,
                             "ordering qualifier `%s' requires "
                             "GLSL 4.00 or ARB_tessellation_shader", (yyvsp[(1) - (1)].identifier));
         }
      }
      if (!(yyval.type_qualifier).flags.i) {
         if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), "point_mode", state) == 0) {
            (yyval.type_qualifier).flags.q.point_mode = 1;
            (yyval.type_qualifier).point_mode = true;
         }

         if ((yyval.type_qualifier).flags.i && !state->has_tessellation_shader()) {
            _mesa_glsl_error(& (yylsp[(1) - (1)]), state,
                             "qualifier `point_mode' requires "
                             "GLSL 4.00 or ARB_tessellation_shader");
         }
      }

      if (!(yyval.type_qualifier).flags.i) {
         static const struct {
            const char *s;
            uint32_t mask;
         } map[] = {
                 { "blend_support_multiply",       BLEND_MULTIPLY },
                 { "blend_support_screen",         BLEND_SCREEN },
                 { "blend_support_overlay",        BLEND_OVERLAY },
                 { "blend_support_darken",         BLEND_DARKEN },
                 { "blend_support_lighten",        BLEND_LIGHTEN },
                 { "blend_support_colordodge",     BLEND_COLORDODGE },
                 { "blend_support_colorburn",      BLEND_COLORBURN },
                 { "blend_support_hardlight",      BLEND_HARDLIGHT },
                 { "blend_support_softlight",      BLEND_SOFTLIGHT },
                 { "blend_support_difference",     BLEND_DIFFERENCE },
                 { "blend_support_exclusion",      BLEND_EXCLUSION },
                 { "blend_support_hsl_hue",        BLEND_HSL_HUE },
                 { "blend_support_hsl_saturation", BLEND_HSL_SATURATION },
                 { "blend_support_hsl_color",      BLEND_HSL_COLOR },
                 { "blend_support_hsl_luminosity", BLEND_HSL_LUMINOSITY },
                 { "blend_support_all_equations",  BLEND_ALL },
         };
         for (unsigned i = 0; i < ARRAY_SIZE(map); i++) {
            if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), map[i].s, state) == 0) {
               (yyval.type_qualifier).flags.q.blend_support = 1;
               state->fs_blend_support |= map[i].mask;
               break;
            }
         }

         if ((yyval.type_qualifier).flags.i &&
             !state->KHR_blend_equation_advanced_enable &&
             !state->is_version(0, 320)) {
            _mesa_glsl_error(& (yylsp[(1) - (1)]), state,
                             "advanced blending layout qualifiers require "
                             "ESSL 3.20 or KHR_blend_equation_advanced");
         }

         if ((yyval.type_qualifier).flags.i && state->stage != MESA_SHADER_FRAGMENT) {
            _mesa_glsl_error(& (yylsp[(1) - (1)]), state,
                             "advanced blending layout qualifiers only "
                             "valid in fragment shaders");
         }
      }

      /* Layout qualifiers for ARB_compute_variable_group_size. */
      if (!(yyval.type_qualifier).flags.i) {
         if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), "local_size_variable", state) == 0) {
            (yyval.type_qualifier).flags.q.local_size_variable = 1;
         }

         if ((yyval.type_qualifier).flags.i && !state->ARB_compute_variable_group_size_enable) {
            _mesa_glsl_error(& (yylsp[(1) - (1)]), state,
                             "qualifier `local_size_variable` requires "
                             "ARB_compute_variable_group_size");
         }
      }

      /* Layout qualifiers for ARB_bindless_texture. */
      if (!(yyval.type_qualifier).flags.i) {
         if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), "bindless_sampler", state) == 0)
            (yyval.type_qualifier).flags.q.bindless_sampler = 1;
         if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), "bound_sampler", state) == 0)
            (yyval.type_qualifier).flags.q.bound_sampler = 1;

         if (state->has_shader_image_load_store()) {
            if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), "bindless_image", state) == 0)
               (yyval.type_qualifier).flags.q.bindless_image = 1;
            if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), "bound_image", state) == 0)
               (yyval.type_qualifier).flags.q.bound_image = 1;
         }

         if ((yyval.type_qualifier).flags.i && !state->has_bindless()) {
            _mesa_glsl_error(& (yylsp[(1) - (1)]), state,
                             "qualifier `%s` requires "
                             "ARB_bindless_texture", (yyvsp[(1) - (1)].identifier));
         }
      }

      if (!(yyval.type_qualifier).flags.i &&
          state->EXT_shader_framebuffer_fetch_non_coherent_enable) {
         if (match_layout_qualifier((yyvsp[(1) - (1)].identifier), "noncoherent", state) == 0)
            (yyval.type_qualifier).flags.q.non_coherent = 1;
      }

      if (!(yyval.type_qualifier).flags.i) {
         _mesa_glsl_error(& (yylsp[(1) - (1)]), state, "unrecognized layout identifier "
                          "`%s'", (yyvsp[(1) - (1)].identifier));
         YYERROR;
      }
   ;}
    break;

  case 149:
#line 1651 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      void *ctx = state->linalloc;

      if ((yyvsp[(3) - (3)].expression)->oper != ast_int_constant &&
          (yyvsp[(3) - (3)].expression)->oper != ast_uint_constant &&
          !state->has_enhanced_layouts()) {
         _mesa_glsl_error(& (yylsp[(1) - (3)]), state,
                          "compile-time constant expressions require "
                          "GLSL 4.40 or ARB_enhanced_layouts");
      }

      if (match_layout_qualifier("align", (yyvsp[(1) - (3)].identifier), state) == 0) {
         if (!state->has_enhanced_layouts()) {
            _mesa_glsl_error(& (yylsp[(1) - (3)]), state,
                             "align qualifier requires "
                             "GLSL 4.40 or ARB_enhanced_layouts");
         } else {
            (yyval.type_qualifier).flags.q.explicit_align = 1;
            (yyval.type_qualifier).align = (yyvsp[(3) - (3)].expression);
         }
      }

      if (match_layout_qualifier("location", (yyvsp[(1) - (3)].identifier), state) == 0) {
         (yyval.type_qualifier).flags.q.explicit_location = 1;

         if ((yyval.type_qualifier).flags.q.attribute == 1 &&
             state->ARB_explicit_attrib_location_warn) {
            _mesa_glsl_warning(& (yylsp[(1) - (3)]), state,
                               "GL_ARB_explicit_attrib_location layout "
                               "identifier `%s' used", (yyvsp[(1) - (3)].identifier));
         }
         (yyval.type_qualifier).location = (yyvsp[(3) - (3)].expression);
      }

      if (match_layout_qualifier("component", (yyvsp[(1) - (3)].identifier), state) == 0) {
         if (!state->has_enhanced_layouts()) {
            _mesa_glsl_error(& (yylsp[(1) - (3)]), state,
                             "component qualifier requires "
                             "GLSL 4.40 or ARB_enhanced_layouts");
         } else {
            (yyval.type_qualifier).flags.q.explicit_component = 1;
            (yyval.type_qualifier).component = (yyvsp[(3) - (3)].expression);
         }
      }

      if (match_layout_qualifier("index", (yyvsp[(1) - (3)].identifier), state) == 0) {
         if (state->es_shader && !state->EXT_blend_func_extended_enable) {
            _mesa_glsl_error(& (yylsp[(3) - (3)]), state, "index layout qualifier requires EXT_blend_func_extended");
            YYERROR;
         }

         (yyval.type_qualifier).flags.q.explicit_index = 1;
         (yyval.type_qualifier).index = (yyvsp[(3) - (3)].expression);
      }

      if ((state->has_420pack_or_es31() ||
           state->has_atomic_counters() ||
           state->has_shader_storage_buffer_objects()) &&
          match_layout_qualifier("binding", (yyvsp[(1) - (3)].identifier), state) == 0) {
         (yyval.type_qualifier).flags.q.explicit_binding = 1;
         (yyval.type_qualifier).binding = (yyvsp[(3) - (3)].expression);
      }

      if ((state->has_atomic_counters() ||
           state->has_enhanced_layouts()) &&
          match_layout_qualifier("offset", (yyvsp[(1) - (3)].identifier), state) == 0) {
         (yyval.type_qualifier).flags.q.explicit_offset = 1;
         (yyval.type_qualifier).offset = (yyvsp[(3) - (3)].expression);
      }

      if (match_layout_qualifier("max_vertices", (yyvsp[(1) - (3)].identifier), state) == 0) {
         (yyval.type_qualifier).flags.q.max_vertices = 1;
         (yyval.type_qualifier).max_vertices = new(ctx) ast_layout_expression((yylsp[(1) - (3)]), (yyvsp[(3) - (3)].expression));
         if (!state->has_geometry_shader()) {
            _mesa_glsl_error(& (yylsp[(3) - (3)]), state,
                             "#version 150 max_vertices qualifier "
                             "specified", (yyvsp[(3) - (3)].expression));
         }
      }

      if (state->stage == MESA_SHADER_GEOMETRY) {
         if (match_layout_qualifier("stream", (yyvsp[(1) - (3)].identifier), state) == 0 &&
             state->check_explicit_attrib_stream_allowed(& (yylsp[(3) - (3)]))) {
            (yyval.type_qualifier).flags.q.stream = 1;
            (yyval.type_qualifier).flags.q.explicit_stream = 1;
            (yyval.type_qualifier).stream = (yyvsp[(3) - (3)].expression);
         }
      }

      if (state->has_enhanced_layouts()) {
         if (match_layout_qualifier("xfb_buffer", (yyvsp[(1) - (3)].identifier), state) == 0) {
            (yyval.type_qualifier).flags.q.xfb_buffer = 1;
            (yyval.type_qualifier).flags.q.explicit_xfb_buffer = 1;
            (yyval.type_qualifier).xfb_buffer = (yyvsp[(3) - (3)].expression);
         }

         if (match_layout_qualifier("xfb_offset", (yyvsp[(1) - (3)].identifier), state) == 0) {
            (yyval.type_qualifier).flags.q.explicit_xfb_offset = 1;
            (yyval.type_qualifier).offset = (yyvsp[(3) - (3)].expression);
         }

         if (match_layout_qualifier("xfb_stride", (yyvsp[(1) - (3)].identifier), state) == 0) {
            (yyval.type_qualifier).flags.q.xfb_stride = 1;
            (yyval.type_qualifier).flags.q.explicit_xfb_stride = 1;
            (yyval.type_qualifier).xfb_stride = (yyvsp[(3) - (3)].expression);
         }
      }

      static const char * const local_size_qualifiers[3] = {
         "local_size_x",
         "local_size_y",
         "local_size_z",
      };
      for (int i = 0; i < 3; i++) {
         if (match_layout_qualifier(local_size_qualifiers[i], (yyvsp[(1) - (3)].identifier),
                                    state) == 0) {
            if (!state->has_compute_shader()) {
               _mesa_glsl_error(& (yylsp[(3) - (3)]), state,
                                "%s qualifier requires GLSL 4.30 or "
                                "GLSL ES 3.10 or ARB_compute_shader",
                                local_size_qualifiers[i]);
               YYERROR;
            } else {
               (yyval.type_qualifier).flags.q.local_size |= (1 << i);
               (yyval.type_qualifier).local_size[i] = new(ctx) ast_layout_expression((yylsp[(1) - (3)]), (yyvsp[(3) - (3)].expression));
            }
            break;
         }
      }

      if (match_layout_qualifier("invocations", (yyvsp[(1) - (3)].identifier), state) == 0) {
         (yyval.type_qualifier).flags.q.invocations = 1;
         (yyval.type_qualifier).invocations = new(ctx) ast_layout_expression((yylsp[(1) - (3)]), (yyvsp[(3) - (3)].expression));
         if (!state->is_version(400, 320) &&
             !state->ARB_gpu_shader5_enable &&
             !state->OES_geometry_shader_enable &&
             !state->EXT_geometry_shader_enable) {
            _mesa_glsl_error(& (yylsp[(3) - (3)]), state,
                             "GL_ARB_gpu_shader5 invocations "
                             "qualifier specified", (yyvsp[(3) - (3)].expression));
         }
      }

      /* Layout qualifiers for tessellation control shaders. */
      if (match_layout_qualifier("vertices", (yyvsp[(1) - (3)].identifier), state) == 0) {
         (yyval.type_qualifier).flags.q.vertices = 1;
         (yyval.type_qualifier).vertices = new(ctx) ast_layout_expression((yylsp[(1) - (3)]), (yyvsp[(3) - (3)].expression));
         if (!state->has_tessellation_shader()) {
            _mesa_glsl_error(& (yylsp[(1) - (3)]), state,
                             "vertices qualifier requires GLSL 4.00 or "
                             "ARB_tessellation_shader");
         }
      }

      /* If the identifier didn't match any known layout identifiers,
       * emit an error.
       */
      if (!(yyval.type_qualifier).flags.i) {
         _mesa_glsl_error(& (yylsp[(1) - (3)]), state, "unrecognized layout identifier "
                          "`%s'", (yyvsp[(1) - (3)].identifier));
         YYERROR;
      }
   ;}
    break;

  case 150:
#line 1816 "./glsl/glsl_parser.yy"
    {
      (yyval.type_qualifier) = (yyvsp[(1) - (1)].type_qualifier);
      /* Layout qualifiers for ARB_uniform_buffer_object. */
      if ((yyval.type_qualifier).flags.q.uniform && !state->has_uniform_buffer_objects()) {
         _mesa_glsl_error(& (yylsp[(1) - (1)]), state,
                          "#version 140 / GL_ARB_uniform_buffer_object "
                          "layout qualifier `%s' is used", (yyvsp[(1) - (1)].type_qualifier));
      } else if ((yyval.type_qualifier).flags.q.uniform && state->ARB_uniform_buffer_object_warn) {
         _mesa_glsl_warning(& (yylsp[(1) - (1)]), state,
                            "#version 140 / GL_ARB_uniform_buffer_object "
                            "layout qualifier `%s' is used", (yyvsp[(1) - (1)].type_qualifier));
      }
   ;}
    break;

  case 151:
#line 1842 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.row_major = 1;
   ;}
    break;

  case 152:
#line 1847 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.packed = 1;
   ;}
    break;

  case 153:
#line 1852 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.shared = 1;
   ;}
    break;

  case 154:
#line 1860 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.subroutine = 1;
   ;}
    break;

  case 155:
#line 1865 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.subroutine = 1;
      (yyval.type_qualifier).subroutine_list = (yyvsp[(3) - (4)].subroutine_list);
   ;}
    break;

  case 156:
#line 1874 "./glsl/glsl_parser.yy"
    {
        void *ctx = state->linalloc;
        ast_declaration *decl = new(ctx)  ast_declaration((yyvsp[(1) - (1)].identifier), NULL, NULL);
        decl->set_location((yylsp[(1) - (1)]));

        (yyval.subroutine_list) = new(ctx) ast_subroutine_list();
        (yyval.subroutine_list)->declarations.push_tail(&decl->link);
   ;}
    break;

  case 157:
#line 1883 "./glsl/glsl_parser.yy"
    {
        void *ctx = state->linalloc;
        ast_declaration *decl = new(ctx)  ast_declaration((yyvsp[(3) - (3)].identifier), NULL, NULL);
        decl->set_location((yylsp[(3) - (3)]));

        (yyval.subroutine_list) = (yyvsp[(1) - (3)].subroutine_list);
        (yyval.subroutine_list)->declarations.push_tail(&decl->link);
   ;}
    break;

  case 158:
#line 1895 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.smooth = 1;
   ;}
    break;

  case 159:
#line 1900 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.flat = 1;
   ;}
    break;

  case 160:
#line 1905 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.noperspective = 1;
   ;}
    break;

  case 161:
#line 1914 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.invariant = 1;
   ;}
    break;

  case 162:
#line 1919 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.precise = 1;
   ;}
    break;

  case 169:
#line 1930 "./glsl/glsl_parser.yy"
    {
      memset(&(yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).precision = (yyvsp[(1) - (1)].n);
   ;}
    break;

  case 170:
#line 1948 "./glsl/glsl_parser.yy"
    {
      if ((yyvsp[(2) - (2)].type_qualifier).flags.q.precise)
         _mesa_glsl_error(&(yylsp[(1) - (2)]), state, "duplicate \"precise\" qualifier");

      (yyval.type_qualifier) = (yyvsp[(2) - (2)].type_qualifier);
      (yyval.type_qualifier).flags.q.precise = 1;
   ;}
    break;

  case 171:
#line 1956 "./glsl/glsl_parser.yy"
    {
      if ((yyvsp[(2) - (2)].type_qualifier).flags.q.invariant)
         _mesa_glsl_error(&(yylsp[(1) - (2)]), state, "duplicate \"invariant\" qualifier");

      if (!state->has_420pack_or_es31() && (yyvsp[(2) - (2)].type_qualifier).flags.q.precise)
         _mesa_glsl_error(&(yylsp[(1) - (2)]), state,
                          "\"invariant\" must come after \"precise\"");

      (yyval.type_qualifier) = (yyvsp[(2) - (2)].type_qualifier);
      (yyval.type_qualifier).flags.q.invariant = 1;

      /* GLSL ES 3.00 spec, section 4.6.1 "The Invariant Qualifier":
       *
       * "Only variables output from a shader can be candidates for invariance.
       * This includes user-defined output variables and the built-in output
       * variables. As only outputs can be declared as invariant, an invariant
       * output from one shader stage will still match an input of a subsequent
       * stage without the input being declared as invariant."
       *
       * On the desktop side, this text first appears in GLSL 4.30.
       */
      if (state->is_version(430, 300) && (yyval.type_qualifier).flags.q.in)
         _mesa_glsl_error(&(yylsp[(1) - (2)]), state, "invariant qualifiers cannot be used with shader inputs");
   ;}
    break;

  case 172:
#line 1981 "./glsl/glsl_parser.yy"
    {
      /* Section 4.3 of the GLSL 1.40 specification states:
       * "...qualified with one of these interpolation qualifiers"
       *
       * GLSL 1.30 claims to allow "one or more", but insists that:
       * "These interpolation qualifiers may only precede the qualifiers in,
       *  centroid in, out, or centroid out in a declaration."
       *
       * ...which means that e.g. smooth can't precede smooth, so there can be
       * only one after all, and the 1.40 text is a clarification, not a change.
       */
      if ((yyvsp[(2) - (2)].type_qualifier).has_interpolation())
         _mesa_glsl_error(&(yylsp[(1) - (2)]), state, "duplicate interpolation qualifier");

      if (!state->has_420pack_or_es31() &&
          ((yyvsp[(2) - (2)].type_qualifier).flags.q.precise || (yyvsp[(2) - (2)].type_qualifier).flags.q.invariant)) {
         _mesa_glsl_error(&(yylsp[(1) - (2)]), state, "interpolation qualifiers must come "
                          "after \"precise\" or \"invariant\"");
      }

      (yyval.type_qualifier) = (yyvsp[(1) - (2)].type_qualifier);
      (yyval.type_qualifier).merge_qualifier(&(yylsp[(1) - (2)]), state, (yyvsp[(2) - (2)].type_qualifier), false);
   ;}
    break;

  case 173:
#line 2005 "./glsl/glsl_parser.yy"
    {
      /* In the absence of ARB_shading_language_420pack, layout qualifiers may
       * appear no later than auxiliary storage qualifiers. There is no
       * particularly clear spec language mandating this, but in all examples
       * the layout qualifier precedes the storage qualifier.
       *
       * We allow combinations of layout with interpolation, invariant or
       * precise qualifiers since these are useful in ARB_separate_shader_objects.
       * There is no clear spec guidance on this either.
       */
      (yyval.type_qualifier) = (yyvsp[(1) - (2)].type_qualifier);
      (yyval.type_qualifier).merge_qualifier(& (yylsp[(1) - (2)]), state, (yyvsp[(2) - (2)].type_qualifier), false, (yyvsp[(2) - (2)].type_qualifier).has_layout());
   ;}
    break;

  case 174:
#line 2019 "./glsl/glsl_parser.yy"
    {
      (yyval.type_qualifier) = (yyvsp[(1) - (2)].type_qualifier);
      (yyval.type_qualifier).merge_qualifier(&(yylsp[(1) - (2)]), state, (yyvsp[(2) - (2)].type_qualifier), false);
   ;}
    break;

  case 175:
#line 2024 "./glsl/glsl_parser.yy"
    {
      if ((yyvsp[(2) - (2)].type_qualifier).has_auxiliary_storage()) {
         _mesa_glsl_error(&(yylsp[(1) - (2)]), state,
                          "duplicate auxiliary storage qualifier (centroid or sample)");
      }

      if (!state->has_420pack_or_es31() &&
          ((yyvsp[(2) - (2)].type_qualifier).flags.q.precise || (yyvsp[(2) - (2)].type_qualifier).flags.q.invariant ||
           (yyvsp[(2) - (2)].type_qualifier).has_interpolation() || (yyvsp[(2) - (2)].type_qualifier).has_layout())) {
         _mesa_glsl_error(&(yylsp[(1) - (2)]), state, "auxiliary storage qualifiers must come "
                          "just before storage qualifiers");
      }
      (yyval.type_qualifier) = (yyvsp[(1) - (2)].type_qualifier);
      (yyval.type_qualifier).merge_qualifier(&(yylsp[(1) - (2)]), state, (yyvsp[(2) - (2)].type_qualifier), false);
   ;}
    break;

  case 176:
#line 2040 "./glsl/glsl_parser.yy"
    {
      /* Section 4.3 of the GLSL 1.20 specification states:
       * "Variable declarations may have a storage qualifier specified..."
       *  1.30 clarifies this to "may have one storage qualifier".
       */
      if ((yyvsp[(2) - (2)].type_qualifier).has_storage())
         _mesa_glsl_error(&(yylsp[(1) - (2)]), state, "duplicate storage qualifier");

      if (!state->has_420pack_or_es31() &&
          ((yyvsp[(2) - (2)].type_qualifier).flags.q.precise || (yyvsp[(2) - (2)].type_qualifier).flags.q.invariant || (yyvsp[(2) - (2)].type_qualifier).has_interpolation() ||
           (yyvsp[(2) - (2)].type_qualifier).has_layout() || (yyvsp[(2) - (2)].type_qualifier).has_auxiliary_storage())) {
         _mesa_glsl_error(&(yylsp[(1) - (2)]), state, "storage qualifiers must come after "
                          "precise, invariant, interpolation, layout and auxiliary "
                          "storage qualifiers");
      }

      (yyval.type_qualifier) = (yyvsp[(1) - (2)].type_qualifier);
      (yyval.type_qualifier).merge_qualifier(&(yylsp[(1) - (2)]), state, (yyvsp[(2) - (2)].type_qualifier), false);
   ;}
    break;

  case 177:
#line 2060 "./glsl/glsl_parser.yy"
    {
      if ((yyvsp[(2) - (2)].type_qualifier).precision != ast_precision_none)
         _mesa_glsl_error(&(yylsp[(1) - (2)]), state, "duplicate precision qualifier");

      if (!(state->has_420pack_or_es31()) &&
          (yyvsp[(2) - (2)].type_qualifier).flags.i != 0)
         _mesa_glsl_error(&(yylsp[(1) - (2)]), state, "precision qualifiers must come last");

      (yyval.type_qualifier) = (yyvsp[(2) - (2)].type_qualifier);
      (yyval.type_qualifier).precision = (yyvsp[(1) - (2)].n);
   ;}
    break;

  case 178:
#line 2072 "./glsl/glsl_parser.yy"
    {
      (yyval.type_qualifier) = (yyvsp[(1) - (2)].type_qualifier);
      (yyval.type_qualifier).merge_qualifier(&(yylsp[(1) - (2)]), state, (yyvsp[(2) - (2)].type_qualifier), false);
   ;}
    break;

  case 179:
#line 2080 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.centroid = 1;
   ;}
    break;

  case 180:
#line 2085 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.sample = 1;
   ;}
    break;

  case 181:
#line 2090 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.patch = 1;
   ;}
    break;

  case 182:
#line 2097 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.constant = 1;
   ;}
    break;

  case 183:
#line 2102 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.attribute = 1;
   ;}
    break;

  case 184:
#line 2107 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.varying = 1;
   ;}
    break;

  case 185:
#line 2112 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.in = 1;
   ;}
    break;

  case 186:
#line 2117 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.out = 1;

      if (state->stage == MESA_SHADER_GEOMETRY &&
          state->has_explicit_attrib_stream()) {
         /* Section 4.3.8.2 (Output Layout Qualifiers) of the GLSL 4.00
          * spec says:
          *
          *     "If the block or variable is declared with the stream
          *     identifier, it is associated with the specified stream;
          *     otherwise, it is associated with the current default stream."
          */
          (yyval.type_qualifier).flags.q.stream = 1;
          (yyval.type_qualifier).flags.q.explicit_stream = 0;
          (yyval.type_qualifier).stream = state->out_qualifier->stream;
      }

      if (state->has_enhanced_layouts()) {
          (yyval.type_qualifier).flags.q.xfb_buffer = 1;
          (yyval.type_qualifier).flags.q.explicit_xfb_buffer = 0;
          (yyval.type_qualifier).xfb_buffer = state->out_qualifier->xfb_buffer;
      }
   ;}
    break;

  case 187:
#line 2142 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.in = 1;
      (yyval.type_qualifier).flags.q.out = 1;

      if (!state->has_framebuffer_fetch() ||
          !state->is_version(130, 300) ||
          state->stage != MESA_SHADER_FRAGMENT)
         _mesa_glsl_error(&(yylsp[(1) - (1)]), state, "A single interface variable cannot be "
                          "declared as both input and output");
   ;}
    break;

  case 188:
#line 2154 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.uniform = 1;
   ;}
    break;

  case 189:
#line 2159 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.buffer = 1;
   ;}
    break;

  case 190:
#line 2164 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.shared_storage = 1;
   ;}
    break;

  case 191:
#line 2172 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.coherent = 1;
   ;}
    break;

  case 192:
#line 2177 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q._volatile = 1;
   ;}
    break;

  case 193:
#line 2182 "./glsl/glsl_parser.yy"
    {
      STATIC_ASSERT(sizeof((yyval.type_qualifier).flags.q) <= sizeof((yyval.type_qualifier).flags.i));
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.restrict_flag = 1;
   ;}
    break;

  case 194:
#line 2188 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.read_only = 1;
   ;}
    break;

  case 195:
#line 2193 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.write_only = 1;
   ;}
    break;

  case 196:
#line 2201 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.array_specifier) = new(ctx) ast_array_specifier((yylsp[(1) - (2)]), new(ctx) ast_expression(
                                                  ast_unsized_array_dim, NULL,
                                                  NULL, NULL));
      (yyval.array_specifier)->set_location_range((yylsp[(1) - (2)]), (yylsp[(2) - (2)]));
   ;}
    break;

  case 197:
#line 2209 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.array_specifier) = new(ctx) ast_array_specifier((yylsp[(1) - (3)]), (yyvsp[(2) - (3)].expression));
      (yyval.array_specifier)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
   ;}
    break;

  case 198:
#line 2215 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.array_specifier) = (yyvsp[(1) - (3)].array_specifier);

      if (state->check_arrays_of_arrays_allowed(& (yylsp[(1) - (3)]))) {
         (yyval.array_specifier)->add_dimension(new(ctx) ast_expression(ast_unsized_array_dim, NULL,
                                                   NULL, NULL));
      }
   ;}
    break;

  case 199:
#line 2225 "./glsl/glsl_parser.yy"
    {
      (yyval.array_specifier) = (yyvsp[(1) - (4)].array_specifier);

      if (state->check_arrays_of_arrays_allowed(& (yylsp[(1) - (4)]))) {
         (yyval.array_specifier)->add_dimension((yyvsp[(3) - (4)].expression));
      }
   ;}
    break;

  case 201:
#line 2237 "./glsl/glsl_parser.yy"
    {
      (yyval.type_specifier) = (yyvsp[(1) - (2)].type_specifier);
      (yyval.type_specifier)->array_specifier = (yyvsp[(2) - (2)].array_specifier);
   ;}
    break;

  case 202:
#line 2245 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.type_specifier) = new(ctx) ast_type_specifier((yyvsp[(1) - (1)].type));
      (yyval.type_specifier)->set_location((yylsp[(1) - (1)]));
   ;}
    break;

  case 203:
#line 2251 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.type_specifier) = new(ctx) ast_type_specifier((yyvsp[(1) - (1)].struct_specifier));
      (yyval.type_specifier)->set_location((yylsp[(1) - (1)]));
   ;}
    break;

  case 204:
#line 2257 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.type_specifier) = new(ctx) ast_type_specifier((yyvsp[(1) - (1)].identifier));
      (yyval.type_specifier)->set_location((yylsp[(1) - (1)]));
   ;}
    break;

  case 205:
#line 2265 "./glsl/glsl_parser.yy"
    { (yyval.type) = glsl_type::void_type; ;}
    break;

  case 206:
#line 2266 "./glsl/glsl_parser.yy"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 207:
#line 2271 "./glsl/glsl_parser.yy"
    {
      state->check_precision_qualifiers_allowed(&(yylsp[(1) - (1)]));
      (yyval.n) = ast_precision_high;
   ;}
    break;

  case 208:
#line 2276 "./glsl/glsl_parser.yy"
    {
      state->check_precision_qualifiers_allowed(&(yylsp[(1) - (1)]));
      (yyval.n) = ast_precision_medium;
   ;}
    break;

  case 209:
#line 2281 "./glsl/glsl_parser.yy"
    {
      state->check_precision_qualifiers_allowed(&(yylsp[(1) - (1)]));
      (yyval.n) = ast_precision_low;
   ;}
    break;

  case 210:
#line 2289 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.struct_specifier) = new(ctx) ast_struct_specifier((yyvsp[(2) - (5)].identifier), (yyvsp[(4) - (5)].declarator_list));
      (yyval.struct_specifier)->set_location_range((yylsp[(2) - (5)]), (yylsp[(5) - (5)]));
      state->symbols->add_type((yyvsp[(2) - (5)].identifier), glsl_type::void_type);
   ;}
    break;

  case 211:
#line 2296 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;

      /* All anonymous structs have the same name. This simplifies matching of
       * globals whose type is an unnamed struct.
       *
       * It also avoids a memory leak when the same shader is compiled over and
       * over again.
       */
      (yyval.struct_specifier) = new(ctx) ast_struct_specifier("#anon_struct", (yyvsp[(3) - (4)].declarator_list));

      (yyval.struct_specifier)->set_location_range((yylsp[(2) - (4)]), (yylsp[(4) - (4)]));
   ;}
    break;

  case 212:
#line 2313 "./glsl/glsl_parser.yy"
    {
      (yyval.declarator_list) = (yyvsp[(1) - (1)].declarator_list);
      (yyvsp[(1) - (1)].declarator_list)->link.self_link();
   ;}
    break;

  case 213:
#line 2318 "./glsl/glsl_parser.yy"
    {
      (yyval.declarator_list) = (yyvsp[(1) - (2)].declarator_list);
      (yyval.declarator_list)->link.insert_before(& (yyvsp[(2) - (2)].declarator_list)->link);
   ;}
    break;

  case 214:
#line 2326 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      ast_fully_specified_type *const type = (yyvsp[(1) - (3)].fully_specified_type);
      type->set_location((yylsp[(1) - (3)]));

      if (state->has_bindless()) {
         ast_type_qualifier input_layout_mask;

         /* Allow to declare qualifiers for images. */
         input_layout_mask.flags.i = 0;
         input_layout_mask.flags.q.coherent = 1;
         input_layout_mask.flags.q._volatile = 1;
         input_layout_mask.flags.q.restrict_flag = 1;
         input_layout_mask.flags.q.read_only = 1;
         input_layout_mask.flags.q.write_only = 1;
         input_layout_mask.flags.q.explicit_image_format = 1;

         if ((type->qualifier.flags.i & ~input_layout_mask.flags.i) != 0) {
            _mesa_glsl_error(&(yylsp[(1) - (3)]), state,
                             "only precision and image qualifiers may be "
                             "applied to structure members");
         }
      } else {
         if (type->qualifier.flags.i != 0)
            _mesa_glsl_error(&(yylsp[(1) - (3)]), state,
                             "only precision qualifiers may be applied to "
                             "structure members");
      }

      (yyval.declarator_list) = new(ctx) ast_declarator_list(type);
      (yyval.declarator_list)->set_location((yylsp[(2) - (3)]));

      (yyval.declarator_list)->declarations.push_degenerate_list_at_head(& (yyvsp[(2) - (3)].declaration)->link);
   ;}
    break;

  case 215:
#line 2364 "./glsl/glsl_parser.yy"
    {
      (yyval.declaration) = (yyvsp[(1) - (1)].declaration);
      (yyvsp[(1) - (1)].declaration)->link.self_link();
   ;}
    break;

  case 216:
#line 2369 "./glsl/glsl_parser.yy"
    {
      (yyval.declaration) = (yyvsp[(1) - (3)].declaration);
      (yyval.declaration)->link.insert_before(& (yyvsp[(3) - (3)].declaration)->link);
   ;}
    break;

  case 217:
#line 2377 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.declaration) = new(ctx) ast_declaration((yyvsp[(1) - (1)].identifier), NULL, NULL);
      (yyval.declaration)->set_location((yylsp[(1) - (1)]));
   ;}
    break;

  case 218:
#line 2383 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.declaration) = new(ctx) ast_declaration((yyvsp[(1) - (2)].identifier), (yyvsp[(2) - (2)].array_specifier), NULL);
      (yyval.declaration)->set_location_range((yylsp[(1) - (2)]), (yylsp[(2) - (2)]));
   ;}
    break;

  case 220:
#line 2393 "./glsl/glsl_parser.yy"
    {
      (yyval.expression) = (yyvsp[(2) - (3)].expression);
   ;}
    break;

  case 221:
#line 2397 "./glsl/glsl_parser.yy"
    {
      (yyval.expression) = (yyvsp[(2) - (4)].expression);
   ;}
    break;

  case 222:
#line 2404 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.expression) = new(ctx) ast_aggregate_initializer();
      (yyval.expression)->set_location((yylsp[(1) - (1)]));
      (yyval.expression)->expressions.push_tail(& (yyvsp[(1) - (1)].expression)->link);
   ;}
    break;

  case 223:
#line 2411 "./glsl/glsl_parser.yy"
    {
      (yyvsp[(1) - (3)].expression)->expressions.push_tail(& (yyvsp[(3) - (3)].expression)->link);
   ;}
    break;

  case 225:
#line 2423 "./glsl/glsl_parser.yy"
    { (yyval.node) = (ast_node *) (yyvsp[(1) - (1)].compound_statement); ;}
    break;

  case 233:
#line 2438 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.compound_statement) = new(ctx) ast_compound_statement(true, NULL);
      (yyval.compound_statement)->set_location_range((yylsp[(1) - (2)]), (yylsp[(2) - (2)]));
   ;}
    break;

  case 234:
#line 2444 "./glsl/glsl_parser.yy"
    {
      state->symbols->push_scope();
   ;}
    break;

  case 235:
#line 2448 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.compound_statement) = new(ctx) ast_compound_statement(true, (yyvsp[(3) - (4)].node));
      (yyval.compound_statement)->set_location_range((yylsp[(1) - (4)]), (yylsp[(4) - (4)]));
      state->symbols->pop_scope();
   ;}
    break;

  case 236:
#line 2457 "./glsl/glsl_parser.yy"
    { (yyval.node) = (ast_node *) (yyvsp[(1) - (1)].compound_statement); ;}
    break;

  case 238:
#line 2463 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.compound_statement) = new(ctx) ast_compound_statement(false, NULL);
      (yyval.compound_statement)->set_location_range((yylsp[(1) - (2)]), (yylsp[(2) - (2)]));
   ;}
    break;

  case 239:
#line 2469 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.compound_statement) = new(ctx) ast_compound_statement(false, (yyvsp[(2) - (3)].node));
      (yyval.compound_statement)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
   ;}
    break;

  case 240:
#line 2478 "./glsl/glsl_parser.yy"
    {
      if ((yyvsp[(1) - (1)].node) == NULL) {
         _mesa_glsl_error(& (yylsp[(1) - (1)]), state, "<nil> statement");
         assert((yyvsp[(1) - (1)].node) != NULL);
      }

      (yyval.node) = (yyvsp[(1) - (1)].node);
      (yyval.node)->link.self_link();
   ;}
    break;

  case 241:
#line 2488 "./glsl/glsl_parser.yy"
    {
      if ((yyvsp[(2) - (2)].node) == NULL) {
         _mesa_glsl_error(& (yylsp[(2) - (2)]), state, "<nil> statement");
         assert((yyvsp[(2) - (2)].node) != NULL);
      }
      (yyval.node) = (yyvsp[(1) - (2)].node);
      (yyval.node)->link.insert_before(& (yyvsp[(2) - (2)].node)->link);
   ;}
    break;

  case 242:
#line 2500 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.node) = new(ctx) ast_expression_statement(NULL);
      (yyval.node)->set_location((yylsp[(1) - (1)]));
   ;}
    break;

  case 243:
#line 2506 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.node) = new(ctx) ast_expression_statement((yyvsp[(1) - (2)].expression));
      (yyval.node)->set_location((yylsp[(1) - (2)]));
   ;}
    break;

  case 244:
#line 2515 "./glsl/glsl_parser.yy"
    {
      (yyval.node) = new(state->linalloc) ast_selection_statement((yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].selection_rest_statement).then_statement,
                                                        (yyvsp[(5) - (5)].selection_rest_statement).else_statement);
      (yyval.node)->set_location_range((yylsp[(1) - (5)]), (yylsp[(5) - (5)]));
   ;}
    break;

  case 245:
#line 2524 "./glsl/glsl_parser.yy"
    {
      (yyval.selection_rest_statement).then_statement = (yyvsp[(1) - (3)].node);
      (yyval.selection_rest_statement).else_statement = (yyvsp[(3) - (3)].node);
   ;}
    break;

  case 246:
#line 2529 "./glsl/glsl_parser.yy"
    {
      (yyval.selection_rest_statement).then_statement = (yyvsp[(1) - (1)].node);
      (yyval.selection_rest_statement).else_statement = NULL;
   ;}
    break;

  case 247:
#line 2537 "./glsl/glsl_parser.yy"
    {
      (yyval.node) = (ast_node *) (yyvsp[(1) - (1)].expression);
   ;}
    break;

  case 248:
#line 2541 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[(2) - (4)].identifier), NULL, (yyvsp[(4) - (4)].expression));
      ast_declarator_list *declarator = new(ctx) ast_declarator_list((yyvsp[(1) - (4)].fully_specified_type));
      decl->set_location_range((yylsp[(2) - (4)]), (yylsp[(4) - (4)]));
      declarator->set_location((yylsp[(1) - (4)]));

      declarator->declarations.push_tail(&decl->link);
      (yyval.node) = declarator;
   ;}
    break;

  case 249:
#line 2559 "./glsl/glsl_parser.yy"
    {
      (yyval.node) = new(state->linalloc) ast_switch_statement((yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].switch_body));
      (yyval.node)->set_location_range((yylsp[(1) - (5)]), (yylsp[(5) - (5)]));
   ;}
    break;

  case 250:
#line 2567 "./glsl/glsl_parser.yy"
    {
      (yyval.switch_body) = new(state->linalloc) ast_switch_body(NULL);
      (yyval.switch_body)->set_location_range((yylsp[(1) - (2)]), (yylsp[(2) - (2)]));
   ;}
    break;

  case 251:
#line 2572 "./glsl/glsl_parser.yy"
    {
      (yyval.switch_body) = new(state->linalloc) ast_switch_body((yyvsp[(2) - (3)].case_statement_list));
      (yyval.switch_body)->set_location_range((yylsp[(1) - (3)]), (yylsp[(3) - (3)]));
   ;}
    break;

  case 252:
#line 2580 "./glsl/glsl_parser.yy"
    {
      (yyval.case_label) = new(state->linalloc) ast_case_label((yyvsp[(2) - (3)].expression));
      (yyval.case_label)->set_location((yylsp[(2) - (3)]));
   ;}
    break;

  case 253:
#line 2585 "./glsl/glsl_parser.yy"
    {
      (yyval.case_label) = new(state->linalloc) ast_case_label(NULL);
      (yyval.case_label)->set_location((yylsp[(2) - (2)]));
   ;}
    break;

  case 254:
#line 2593 "./glsl/glsl_parser.yy"
    {
      ast_case_label_list *labels = new(state->linalloc) ast_case_label_list();

      labels->labels.push_tail(& (yyvsp[(1) - (1)].case_label)->link);
      (yyval.case_label_list) = labels;
      (yyval.case_label_list)->set_location((yylsp[(1) - (1)]));
   ;}
    break;

  case 255:
#line 2601 "./glsl/glsl_parser.yy"
    {
      (yyval.case_label_list) = (yyvsp[(1) - (2)].case_label_list);
      (yyval.case_label_list)->labels.push_tail(& (yyvsp[(2) - (2)].case_label)->link);
   ;}
    break;

  case 256:
#line 2609 "./glsl/glsl_parser.yy"
    {
      ast_case_statement *stmts = new(state->linalloc) ast_case_statement((yyvsp[(1) - (2)].case_label_list));
      stmts->set_location((yylsp[(2) - (2)]));

      stmts->stmts.push_tail(& (yyvsp[(2) - (2)].node)->link);
      (yyval.case_statement) = stmts;
   ;}
    break;

  case 257:
#line 2617 "./glsl/glsl_parser.yy"
    {
      (yyval.case_statement) = (yyvsp[(1) - (2)].case_statement);
      (yyval.case_statement)->stmts.push_tail(& (yyvsp[(2) - (2)].node)->link);
   ;}
    break;

  case 258:
#line 2625 "./glsl/glsl_parser.yy"
    {
      ast_case_statement_list *cases= new(state->linalloc) ast_case_statement_list();
      cases->set_location((yylsp[(1) - (1)]));

      cases->cases.push_tail(& (yyvsp[(1) - (1)].case_statement)->link);
      (yyval.case_statement_list) = cases;
   ;}
    break;

  case 259:
#line 2633 "./glsl/glsl_parser.yy"
    {
      (yyval.case_statement_list) = (yyvsp[(1) - (2)].case_statement_list);
      (yyval.case_statement_list)->cases.push_tail(& (yyvsp[(2) - (2)].case_statement)->link);
   ;}
    break;

  case 260:
#line 2641 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.node) = new(ctx) ast_iteration_statement(ast_iteration_statement::ast_while,
                                            NULL, (yyvsp[(3) - (5)].node), NULL, (yyvsp[(5) - (5)].node));
      (yyval.node)->set_location_range((yylsp[(1) - (5)]), (yylsp[(4) - (5)]));
   ;}
    break;

  case 261:
#line 2648 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.node) = new(ctx) ast_iteration_statement(ast_iteration_statement::ast_do_while,
                                            NULL, (yyvsp[(5) - (7)].expression), NULL, (yyvsp[(2) - (7)].node));
      (yyval.node)->set_location_range((yylsp[(1) - (7)]), (yylsp[(6) - (7)]));
   ;}
    break;

  case 262:
#line 2655 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.node) = new(ctx) ast_iteration_statement(ast_iteration_statement::ast_for,
                                            (yyvsp[(3) - (6)].node), (yyvsp[(4) - (6)].for_rest_statement).cond, (yyvsp[(4) - (6)].for_rest_statement).rest, (yyvsp[(6) - (6)].node));
      (yyval.node)->set_location_range((yylsp[(1) - (6)]), (yylsp[(6) - (6)]));
   ;}
    break;

  case 266:
#line 2671 "./glsl/glsl_parser.yy"
    {
      (yyval.node) = NULL;
   ;}
    break;

  case 267:
#line 2678 "./glsl/glsl_parser.yy"
    {
      (yyval.for_rest_statement).cond = (yyvsp[(1) - (2)].node);
      (yyval.for_rest_statement).rest = NULL;
   ;}
    break;

  case 268:
#line 2683 "./glsl/glsl_parser.yy"
    {
      (yyval.for_rest_statement).cond = (yyvsp[(1) - (3)].node);
      (yyval.for_rest_statement).rest = (yyvsp[(3) - (3)].expression);
   ;}
    break;

  case 269:
#line 2692 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.node) = new(ctx) ast_jump_statement(ast_jump_statement::ast_continue, NULL);
      (yyval.node)->set_location((yylsp[(1) - (2)]));
   ;}
    break;

  case 270:
#line 2698 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.node) = new(ctx) ast_jump_statement(ast_jump_statement::ast_break, NULL);
      (yyval.node)->set_location((yylsp[(1) - (2)]));
   ;}
    break;

  case 271:
#line 2704 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.node) = new(ctx) ast_jump_statement(ast_jump_statement::ast_return, NULL);
      (yyval.node)->set_location((yylsp[(1) - (2)]));
   ;}
    break;

  case 272:
#line 2710 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.node) = new(ctx) ast_jump_statement(ast_jump_statement::ast_return, (yyvsp[(2) - (3)].expression));
      (yyval.node)->set_location_range((yylsp[(1) - (3)]), (yylsp[(2) - (3)]));
   ;}
    break;

  case 273:
#line 2716 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.node) = new(ctx) ast_jump_statement(ast_jump_statement::ast_discard, NULL);
      (yyval.node)->set_location((yylsp[(1) - (2)]));
   ;}
    break;

  case 274:
#line 2724 "./glsl/glsl_parser.yy"
    { (yyval.node) = (yyvsp[(1) - (1)].function_definition); ;}
    break;

  case 275:
#line 2725 "./glsl/glsl_parser.yy"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 276:
#line 2726 "./glsl/glsl_parser.yy"
    { (yyval.node) = NULL; ;}
    break;

  case 277:
#line 2727 "./glsl/glsl_parser.yy"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 278:
#line 2728 "./glsl/glsl_parser.yy"
    { (yyval.node) = NULL; ;}
    break;

  case 279:
#line 2733 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      (yyval.function_definition) = new(ctx) ast_function_definition();
      (yyval.function_definition)->set_location_range((yylsp[(1) - (2)]), (yylsp[(2) - (2)]));
      (yyval.function_definition)->prototype = (yyvsp[(1) - (2)].function);
      (yyval.function_definition)->body = (yyvsp[(2) - (2)].compound_statement);

      state->symbols->pop_scope();
   ;}
    break;

  case 280:
#line 2747 "./glsl/glsl_parser.yy"
    {
      (yyval.node) = (yyvsp[(1) - (1)].interface_block);
   ;}
    break;

  case 281:
#line 2751 "./glsl/glsl_parser.yy"
    {
      ast_interface_block *block = (ast_interface_block *) (yyvsp[(2) - (2)].node);

      if (!(yyvsp[(1) - (2)].type_qualifier).merge_qualifier(& (yylsp[(1) - (2)]), state, block->layout, false,
                              block->layout.has_layout())) {
         YYERROR;
      }

      block->layout = (yyvsp[(1) - (2)].type_qualifier);

      (yyval.node) = block;
   ;}
    break;

  case 282:
#line 2764 "./glsl/glsl_parser.yy"
    {
      ast_interface_block *block = (ast_interface_block *)(yyvsp[(2) - (2)].node);

      if (!block->default_layout.flags.q.buffer) {
            _mesa_glsl_error(& (yylsp[(1) - (2)]), state,
                             "memory qualifiers can only be used in the "
                             "declaration of shader storage blocks");
      }
      if (!(yyvsp[(1) - (2)].type_qualifier).merge_qualifier(& (yylsp[(1) - (2)]), state, block->layout, false)) {
         YYERROR;
      }
      block->layout = (yyvsp[(1) - (2)].type_qualifier);
      (yyval.node) = block;
   ;}
    break;

  case 283:
#line 2782 "./glsl/glsl_parser.yy"
    {
      ast_interface_block *const block = (yyvsp[(6) - (7)].interface_block);

      if ((yyvsp[(1) - (7)].type_qualifier).flags.q.uniform) {
         block->default_layout = *state->default_uniform_qualifier;
      } else if ((yyvsp[(1) - (7)].type_qualifier).flags.q.buffer) {
         block->default_layout = *state->default_shader_storage_qualifier;
      }
      block->block_name = (yyvsp[(2) - (7)].identifier);
      block->declarations.push_degenerate_list_at_head(& (yyvsp[(4) - (7)].declarator_list)->link);

      _mesa_ast_process_interface_block(& (yylsp[(1) - (7)]), state, block, (yyvsp[(1) - (7)].type_qualifier));

      (yyval.interface_block) = block;
   ;}
    break;

  case 284:
#line 2801 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.in = 1;
   ;}
    break;

  case 285:
#line 2806 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.out = 1;
   ;}
    break;

  case 286:
#line 2811 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.uniform = 1;
   ;}
    break;

  case 287:
#line 2816 "./glsl/glsl_parser.yy"
    {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.buffer = 1;
   ;}
    break;

  case 288:
#line 2821 "./glsl/glsl_parser.yy"
    {
      if (!(yyvsp[(1) - (2)].type_qualifier).flags.q.patch) {
         _mesa_glsl_error(&(yylsp[(1) - (2)]), state, "invalid interface qualifier");
      }
      if ((yyvsp[(2) - (2)].type_qualifier).has_auxiliary_storage()) {
         _mesa_glsl_error(&(yylsp[(1) - (2)]), state, "duplicate patch qualifier");
      }
      (yyval.type_qualifier) = (yyvsp[(2) - (2)].type_qualifier);
      (yyval.type_qualifier).flags.q.patch = 1;
   ;}
    break;

  case 289:
#line 2835 "./glsl/glsl_parser.yy"
    {
      (yyval.interface_block) = new(state->linalloc) ast_interface_block(NULL, NULL);
   ;}
    break;

  case 290:
#line 2839 "./glsl/glsl_parser.yy"
    {
      (yyval.interface_block) = new(state->linalloc) ast_interface_block((yyvsp[(1) - (1)].identifier), NULL);
      (yyval.interface_block)->set_location((yylsp[(1) - (1)]));
   ;}
    break;

  case 291:
#line 2844 "./glsl/glsl_parser.yy"
    {
      (yyval.interface_block) = new(state->linalloc) ast_interface_block((yyvsp[(1) - (2)].identifier), (yyvsp[(2) - (2)].array_specifier));
      (yyval.interface_block)->set_location_range((yylsp[(1) - (2)]), (yylsp[(2) - (2)]));
   ;}
    break;

  case 292:
#line 2852 "./glsl/glsl_parser.yy"
    {
      (yyval.declarator_list) = (yyvsp[(1) - (1)].declarator_list);
      (yyvsp[(1) - (1)].declarator_list)->link.self_link();
   ;}
    break;

  case 293:
#line 2857 "./glsl/glsl_parser.yy"
    {
      (yyval.declarator_list) = (yyvsp[(1) - (2)].declarator_list);
      (yyvsp[(2) - (2)].declarator_list)->link.insert_before(& (yyval.declarator_list)->link);
   ;}
    break;

  case 294:
#line 2865 "./glsl/glsl_parser.yy"
    {
      void *ctx = state->linalloc;
      ast_fully_specified_type *type = (yyvsp[(1) - (3)].fully_specified_type);
      type->set_location((yylsp[(1) - (3)]));

      if (type->qualifier.flags.q.attribute) {
         _mesa_glsl_error(& (yylsp[(1) - (3)]), state,
                          "keyword 'attribute' cannot be used with "
                          "interface block member");
      } else if (type->qualifier.flags.q.varying) {
         _mesa_glsl_error(& (yylsp[(1) - (3)]), state,
                          "keyword 'varying' cannot be used with "
                          "interface block member");
      }

      (yyval.declarator_list) = new(ctx) ast_declarator_list(type);
      (yyval.declarator_list)->set_location((yylsp[(2) - (3)]));

      (yyval.declarator_list)->declarations.push_degenerate_list_at_head(& (yyvsp[(2) - (3)].declaration)->link);
   ;}
    break;

  case 295:
#line 2889 "./glsl/glsl_parser.yy"
    {
      (yyval.type_qualifier) = (yyvsp[(1) - (2)].type_qualifier);
      if (!(yyval.type_qualifier).merge_qualifier(& (yylsp[(1) - (2)]), state, (yyvsp[(2) - (2)].type_qualifier), false, true)) {
         YYERROR;
      }
   ;}
    break;

  case 297:
#line 2900 "./glsl/glsl_parser.yy"
    {
      (yyval.type_qualifier) = (yyvsp[(1) - (2)].type_qualifier);
      if (!(yyval.type_qualifier).merge_qualifier(& (yylsp[(1) - (2)]), state, (yyvsp[(2) - (2)].type_qualifier), false, true)) {
         YYERROR;
      }
   ;}
    break;

  case 299:
#line 2911 "./glsl/glsl_parser.yy"
    {
      (yyval.type_qualifier) = (yyvsp[(1) - (2)].type_qualifier);
      if (!(yyval.type_qualifier).merge_qualifier(& (yylsp[(1) - (2)]), state, (yyvsp[(2) - (2)].type_qualifier), false, true)) {
         YYERROR;
      }
      if (!(yyval.type_qualifier).validate_in_qualifier(& (yylsp[(1) - (2)]), state)) {
         YYERROR;
      }
   ;}
    break;

  case 300:
#line 2921 "./glsl/glsl_parser.yy"
    {
      if (!(yyvsp[(1) - (3)].type_qualifier).validate_in_qualifier(& (yylsp[(1) - (3)]), state)) {
         YYERROR;
      }
   ;}
    break;

  case 301:
#line 2930 "./glsl/glsl_parser.yy"
    {
      (yyval.type_qualifier) = (yyvsp[(1) - (2)].type_qualifier);
      if (!(yyval.type_qualifier).merge_qualifier(& (yylsp[(1) - (2)]), state, (yyvsp[(2) - (2)].type_qualifier), false, true)) {
         YYERROR;
      }
      if (!(yyval.type_qualifier).validate_out_qualifier(& (yylsp[(1) - (2)]), state)) {
         YYERROR;
      }
   ;}
    break;

  case 302:
#line 2940 "./glsl/glsl_parser.yy"
    {
      if (!(yyvsp[(1) - (3)].type_qualifier).validate_out_qualifier(& (yylsp[(1) - (3)]), state)) {
         YYERROR;
      }
   ;}
    break;

  case 303:
#line 2949 "./glsl/glsl_parser.yy"
    {
      (yyval.node) = NULL;
      if (!state->default_uniform_qualifier->
             merge_qualifier(& (yylsp[(1) - (1)]), state, (yyvsp[(1) - (1)].type_qualifier), false)) {
         YYERROR;
      }
      if (!state->default_uniform_qualifier->
             push_to_global(& (yylsp[(1) - (1)]), state)) {
         YYERROR;
      }
   ;}
    break;

  case 304:
#line 2961 "./glsl/glsl_parser.yy"
    {
      (yyval.node) = NULL;
      if (!state->default_shader_storage_qualifier->
             merge_qualifier(& (yylsp[(1) - (1)]), state, (yyvsp[(1) - (1)].type_qualifier), false)) {
         YYERROR;
      }
      if (!state->default_shader_storage_qualifier->
             push_to_global(& (yylsp[(1) - (1)]), state)) {
         YYERROR;
      }

      /* From the GLSL 4.50 spec, section 4.4.5:
       *
       *     "It is a compile-time error to specify the binding identifier for
       *     the global scope or for block member declarations."
       */
      if (state->default_shader_storage_qualifier->flags.q.explicit_binding) {
         _mesa_glsl_error(& (yylsp[(1) - (1)]), state,
                          "binding qualifier cannot be set for default layout");
      }
   ;}
    break;

  case 305:
#line 2983 "./glsl/glsl_parser.yy"
    {
      (yyval.node) = NULL;
      if (!(yyvsp[(1) - (1)].type_qualifier).merge_into_in_qualifier(& (yylsp[(1) - (1)]), state, (yyval.node))) {
         YYERROR;
      }
      if (!state->in_qualifier->push_to_global(& (yylsp[(1) - (1)]), state)) {
         YYERROR;
      }
   ;}
    break;

  case 306:
#line 2993 "./glsl/glsl_parser.yy"
    {
      (yyval.node) = NULL;
      if (!(yyvsp[(1) - (1)].type_qualifier).merge_into_out_qualifier(& (yylsp[(1) - (1)]), state, (yyval.node))) {
         YYERROR;
      }
      if (!state->out_qualifier->push_to_global(& (yylsp[(1) - (1)]), state)) {
         YYERROR;
      }
   ;}
    break;


/* Line 1267 of yacc.c.  */
#line 5699 "glsl/glsl_parser.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
      yyerror (&yylloc, state, YY_("syntax error"));
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
	    yyerror (&yylloc, state, yymsg);
	  }
	else
	  {
	    yyerror (&yylloc, state, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval, &yylloc, state);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
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

  yyerror_range[0] = yylsp[1-yylen];
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp, state);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, state, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc, state);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp, state);
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



