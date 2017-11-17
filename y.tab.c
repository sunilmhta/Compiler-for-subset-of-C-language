/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "assign3.y" /* yacc.c:339  */

	#include <bits/stdc++.h>
	#include "assign3.cpp"
	#include <stdio.h>
	#include <stdlib.h>
	#include <stdarg.h>
	#include <string.h>

	using namespace std;

	vector<string> code;

 	int yylex(void);
    extern int yylineno;
    void yyerror(const char *s)
    {

        fprintf(stderr,"Error detected in line %d.\n",yylineno);
    }
    bool flagtoPrintSymbolTable = true;
    int scope = 0;
    string varType = "";
    string funcName = "global";
    std::vector<allVariables> tempParams;
    std::vector<string> funcChecker;
    bool structFlag = false;
    std::vector<string> ThreeAddrCode;
    int variableIndex=1;

#line 96 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BREAK = 258,
    CASE = 259,
    CHAR = 260,
    CONST = 261,
    CONTINUE = 262,
    DO = 263,
    ELSE = 264,
    ELLIPSIS = 265,
    FLOAT = 266,
    FOR = 267,
    GOTO = 268,
    IF = 269,
    INT = 270,
    MAIN = 271,
    RETURN = 272,
    STRUCT = 273,
    SWITCH = 274,
    SIZEOF = 275,
    TYPEDEF = 276,
    VOID = 277,
    WHILE = 278,
    FUNC_NAME = 279,
    TYPEDEF_NAME = 280,
    ENUMERATION_CONSTANT = 281,
    AND_OP = 282,
    OR_OP = 283,
    MUL_ASSIGN = 284,
    DIV_ASSIGN = 285,
    MOD_ASSIGN = 286,
    ADD_ASSIGN = 287,
    SUB_ASSIGN = 288,
    LEFT_ASSIGN = 289,
    RIGHT_ASSIGN = 290,
    AND_ASSIGN = 291,
    XOR_ASSIGN = 292,
    OR_ASSIGN = 293,
    PTR_OP = 294,
    INC_OP = 295,
    DEC_OP = 296,
    LEFT_OP = 297,
    RIGHT_OP = 298,
    LE_OP = 299,
    GE_OP = 300,
    EQ_OP = 301,
    NE_OP = 302,
    IDENTIFIER = 303,
    CHARLITERAL = 304,
    STRING = 305,
    INTNUM = 306,
    FLOATNUM = 307
  };
#endif
/* Tokens.  */
#define BREAK 258
#define CASE 259
#define CHAR 260
#define CONST 261
#define CONTINUE 262
#define DO 263
#define ELSE 264
#define ELLIPSIS 265
#define FLOAT 266
#define FOR 267
#define GOTO 268
#define IF 269
#define INT 270
#define MAIN 271
#define RETURN 272
#define STRUCT 273
#define SWITCH 274
#define SIZEOF 275
#define TYPEDEF 276
#define VOID 277
#define WHILE 278
#define FUNC_NAME 279
#define TYPEDEF_NAME 280
#define ENUMERATION_CONSTANT 281
#define AND_OP 282
#define OR_OP 283
#define MUL_ASSIGN 284
#define DIV_ASSIGN 285
#define MOD_ASSIGN 286
#define ADD_ASSIGN 287
#define SUB_ASSIGN 288
#define LEFT_ASSIGN 289
#define RIGHT_ASSIGN 290
#define AND_ASSIGN 291
#define XOR_ASSIGN 292
#define OR_ASSIGN 293
#define PTR_OP 294
#define INC_OP 295
#define DEC_OP 296
#define LEFT_OP 297
#define RIGHT_OP 298
#define LE_OP 299
#define GE_OP 300
#define EQ_OP 301
#define NE_OP 302
#define IDENTIFIER 303
#define CHARLITERAL 304
#define STRING 305
#define INTNUM 306
#define FLOATNUM 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 32 "assign3.y" /* yacc.c:355  */

    node *Node;

#line 244 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 261 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  94
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   892

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  162
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  267

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,     2,     2,     2,    71,    66,     2,
      60,    61,    69,    67,    57,    68,    72,    70,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    53,
      62,    54,    63,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    58,     2,    59,    65,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,    64,    56,    73,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    83,    83,    91,    95,   102,   106,   110,   111,   117,
     121,   129,   143,   175,   181,   188,   195,   202,   213,   224,
     228,   254,   258,   259,   264,   269,   278,   325,   342,   348,
     349,   354,   355,   358,   360,   381,   396,   404,   410,   416,
     437,   448,   449,   449,   456,   457,   461,   465,   470,   471,
     472,   473,   474,   478,   479,   483,   484,   488,   489,   490,
     494,   495,   496,   497,   498,   499,   500,   506,   507,   511,
     515,   519,   523,   527,   527,   531,   531,   535,   540,   544,
     548,   553,   561,   566,   574,   579,   587,   592,   600,   605,
     613,   618,   626,   627,   631,   632,   633,   637,   638,   639,
     640,   641,   645,   646,   647,   651,   652,   653,   657,   658,
     659,   660,   664,   665,   669,   670,   671,   672,   673,   676,
     677,   678,   679,   680,   681,   682,   686,   693,   694,   695,
     696,   697,   701,   702,   703,   704,   705,   706,   707,   708,
     709,   710,   711,   715,   723,   732,   740,   748,   756,   764,
     775,   776,   777,   787,   800,   804,   808,   842,   845,   849,
     856,   878,   878
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DO", "ELSE", "ELLIPSIS", "FLOAT", "FOR", "GOTO", "IF",
  "INT", "MAIN", "RETURN", "STRUCT", "SWITCH", "SIZEOF", "TYPEDEF", "VOID",
  "WHILE", "FUNC_NAME", "TYPEDEF_NAME", "ENUMERATION_CONSTANT", "AND_OP",
  "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP",
  "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "IDENTIFIER", "CHARLITERAL",
  "STRING", "INTNUM", "FLOATNUM", "';'", "'='", "'{'", "'}'", "','", "'['",
  "']'", "'('", "')'", "'<'", "'>'", "'|'", "'^'", "'&'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'.'", "'~'", "'!'", "$accept", "program",
  "start_statement", "statement", "simple_declaration", "assignment",
  "type_class", "struct_specifier", "structHeader",
  "struct_declaration_list", "declaration_list", "init_declator",
  "declarator", "parameter_list", "parameter_declaration",
  "assignment_expression", "compound_statement", "$@1", "block_item_list",
  "block_item", "instructions", "expression_statement",
  "selection_statement", "ifExpression", "conditional_operators",
  "iteration_statement", "temp_statement", "$@2", "temp_statement2", "$@3",
  "expression", "expressionAssignment", "conditional_expression",
  "logical_and_expression", "logical_or_expression",
  "inclusive_or_expression", "exclusive_or_expression", "and_expression",
  "equality_expression", "relational_expression", "shift_expression",
  "additive_expression", "multiplicative_expression", "cast_expression",
  "unary_expression", "postfix_expression", "primary_expression",
  "assignment_operator", "unary_operator", "jump_statement",
  "function_declaration", "identifier_list", "temp_function",
  "temp_function_end", "$@4", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,    59,    61,   123,   125,    44,    91,    93,
      40,    41,    60,    62,   124,    94,    38,    43,    45,    42,
      47,    37,    46,   126,    33
};
# endif

#define YYPACT_NINF -140

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-140)))

#define YYTABLE_NINF -88

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     374,   -34,    12,  -140,    22,   586,  -140,     8,    17,  -140,
     359,    40,  -140,    30,   739,   739,    65,  -140,  -140,  -140,
    -140,  -140,    81,    67,   646,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,   144,   225,  -140,  -140,    73,   108,  -140,   111,
    -140,  -140,  -140,  -140,  -140,   134,   -35,  -140,  -140,   126,
     148,   107,   115,   121,   143,    -2,   154,   131,    28,  -140,
     645,   210,   200,   770,  -140,  -140,    15,   374,  -140,  -140,
    -140,   170,   677,   287,  -140,  -140,  -140,  -140,  -140,    81,
     260,   161,   770,   770,  -140,  -140,  -140,    81,   171,   404,
    -140,   518,   168,   -25,  -140,  -140,  -140,  -140,   -18,  -140,
     -31,    33,  -140,  -140,     9,  -140,   770,   770,   770,   770,
     770,   770,   770,   770,   770,   770,   770,   770,   770,   770,
     770,   770,   770,   770,   770,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,   770,   183,  -140,  -140,
     770,   173,   187,  -140,  -140,  -140,   108,    39,  -140,  -140,
     300,   184,   677,     6,   287,   818,   177,   332,  -140,    81,
    -140,    74,   404,  -140,    82,   192,  -140,   108,   446,  -140,
    -140,   770,  -140,  -140,   108,    81,     5,  -140,   192,  -140,
      36,   586,  -140,  -140,   107,   178,   115,   121,   143,    -2,
      -2,   154,   154,   154,   154,   131,   131,    28,    28,  -140,
    -140,  -140,  -140,  -140,    -7,  -140,  -140,   197,   204,   123,
    -140,   770,   708,   677,   787,   194,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,    81,   586,  -140,   404,   586,   215,   211,
      -5,  -140,  -140,  -140,  -140,   404,   208,  -140,   216,  -140,
    -140,  -140,  -140,  -140,    98,   586,   112,  -140,   116,   404,
     262,  -140,  -140,  -140,  -140,  -140,   219,  -140,   586,   221,
     586,  -140,  -140,   287,  -140,   222,  -140
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    15,     0,     0,    17,     0,     0,    16,
       0,     0,    14,     0,     0,     0,   126,   129,   130,   127,
     128,    53,     0,    42,     0,   143,   145,   147,   144,   146,
     148,   149,     0,     0,     4,     5,     0,     0,     7,     0,
      48,     8,    50,    49,    51,     0,     0,    78,    80,    82,
       0,    84,    88,    90,    92,    94,    97,   102,   105,   108,
     112,   114,   119,     0,    52,     6,    33,     0,   151,   150,
     126,     0,    73,     0,    35,    38,    36,    37,   152,     0,
       0,    20,     0,     0,   115,   119,   116,     0,   157,   118,
      41,     0,     0,     0,     1,     3,    11,    28,     0,    25,
      27,    13,    75,    72,     0,    54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   132,     0,     0,   124,   125,
       0,     0,     0,   117,   112,   161,     0,     0,    31,   155,
       0,     0,     0,    13,     0,    59,     0,     0,   153,     0,
      19,     0,    12,   159,     0,   126,    46,     0,     0,    44,
      47,     0,   131,    10,     0,     0,     0,   160,     0,    22,
      13,     0,    71,    79,    85,    83,    89,    91,    93,    95,
      96,   100,   101,    98,    99,   103,   104,   106,   107,   109,
     110,   111,    81,   123,     0,   121,   122,     0,    34,    33,
     154,     0,     0,     0,     0,     0,    61,    62,    63,    64,
      60,    65,    66,     0,     0,    40,    39,     0,     0,     0,
      27,    43,    45,   113,    24,    26,     0,    29,     0,    23,
      76,   120,   162,    32,     0,     0,     0,    74,     0,    58,
      56,    67,   158,   156,    30,    18,     0,    69,     0,     0,
       0,    68,    70,     0,    55,     0,    57
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,  -140,   217,   -23,   -32,  -140,     7,  -140,  -140,  -140,
    -140,   122,   -24,  -140,    88,    -8,    83,  -140,  -140,   136,
      -4,   -66,  -140,  -139,    54,  -140,  -140,  -140,   202,  -140,
     -20,   -90,  -140,   201,  -140,   203,   207,   209,   213,    97,
     172,    99,   101,   -29,    -6,  -140,     0,  -140,   -77,  -140,
    -140,  -140,  -140,   174,  -140
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    32,    33,    34,    35,    36,   167,    38,    39,   180,
      98,    99,   230,   147,   148,   155,    40,    91,   168,   169,
      41,    42,    43,   156,   223,    44,    45,   153,   103,   181,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    85,   136,    63,    64,
      65,   164,    66,   149,   207
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      62,    71,    80,   159,    93,    62,   152,    37,    84,    86,
      95,     3,   159,   100,    89,   215,   183,     6,   105,    67,
       3,     9,   106,   175,    62,   104,     6,   176,    12,   177,
       9,    92,   106,    62,   143,   173,   172,    12,     3,   174,
      37,     3,   114,   115,     6,    62,   202,     6,     9,   175,
     106,     9,   241,   176,   178,    12,   236,   144,    12,   166,
     116,   117,   161,    93,   237,    68,   106,    62,    72,   179,
     102,   157,    62,   146,    37,    69,   145,    73,   159,   162,
     159,   178,    62,    62,   178,   159,   212,   170,    81,   -21,
      82,    62,   238,   199,   200,   201,   209,   122,   123,   124,
     145,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,    87,
     204,   213,   208,    90,   265,    88,    96,    95,     3,    74,
      75,   106,    76,    77,     6,   227,   166,   159,     9,   228,
      62,    79,   233,   229,    94,    12,   214,   247,   239,   159,
      62,   226,    62,   107,   -86,   106,    97,    37,   159,   256,
     216,   217,   218,   219,   170,   144,   101,   235,    62,   106,
     220,   109,   159,   258,    14,    15,   108,   240,   221,   222,
     110,    62,    70,    17,    18,    19,    20,   111,    22,   112,
     113,   244,   246,   151,    24,   102,   118,   119,   120,   121,
      25,    26,    27,    28,    29,   107,   -87,    30,    31,   189,
     190,    62,    62,    62,   160,   249,   146,   195,   196,   163,
     250,   197,   198,   251,    62,    -2,     1,    62,     2,   171,
       3,   203,     4,     5,   205,   206,     6,     7,   224,     8,
       9,   257,    10,    11,   211,    62,    87,    12,    13,   137,
     138,   139,    23,   -77,   262,   248,   264,   -77,    62,   -77,
      62,   -77,   176,   252,   253,    14,    15,   254,   140,   255,
     141,   260,   261,    16,    17,    18,    19,    20,    21,    22,
      23,   263,   142,   266,   150,    24,   191,   192,   193,   194,
     242,    25,    26,    27,    28,    29,   234,   243,    30,    31,
      -9,     1,   259,     2,   232,     3,   182,     4,     5,   185,
     184,     6,     7,   158,     8,     9,   186,    10,    11,   187,
       0,   210,    12,    13,   188,     0,    25,    26,    27,    28,
      29,     0,     0,    30,    31,    74,    75,     0,    76,    77,
      14,    15,     0,     0,     0,     0,     0,   154,    16,    17,
      18,    19,    20,    21,    22,    23,     0,     0,     0,     0,
      24,     0,     0,     0,     0,     0,    25,    26,    27,    28,
      29,     0,     0,    30,    31,     1,     0,     2,     0,     3,
       0,     4,     5,     0,     0,     6,     7,     0,     8,     9,
       0,    10,    11,   225,     0,     0,    12,    13,    25,    26,
      27,    28,    29,     0,     0,    30,    31,    74,    75,     0,
      76,    77,    78,     0,    14,    15,     0,     0,     0,    79,
       0,     0,    16,    17,    18,    19,    20,    21,    22,    23,
       0,     0,     0,     0,    24,     0,     0,     0,     0,     0,
      25,    26,    27,    28,    29,     0,     0,    30,    31,     2,
       0,     3,     0,     4,     5,     0,     0,     6,     7,     0,
       8,     9,     0,    10,     0,     0,     0,     0,    12,    13,
      25,    26,    27,    28,    29,     0,     0,    30,    31,     0,
       0,     0,     0,     0,     0,     0,    14,    15,     0,     0,
       0,     0,     0,     0,   165,    17,    18,    19,    20,    21,
      22,    23,   231,     0,     0,     0,    24,     0,     0,     0,
       0,     0,    25,    26,    27,    28,    29,     0,     0,    30,
      31,     2,     0,     3,     0,     4,     5,     0,     0,     6,
       7,     0,     8,     9,     0,    10,     0,     0,     0,     0,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,    15,
       0,     0,     0,     0,     0,     0,   165,    17,    18,    19,
      20,    21,    22,    23,     0,     0,     0,     0,    24,     0,
       0,     0,     0,     0,    25,    26,    27,    28,    29,     2,
       0,    30,    31,     4,     5,     0,     0,     0,     7,     0,
       8,     0,     0,    10,     0,     0,     0,     0,     0,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,    15,     0,     0,
       0,     0,     0,     0,    70,    17,    18,    19,    20,    21,
      22,    23,     0,     0,     0,     0,    24,     0,     0,     0,
       0,     3,    25,    26,    27,    28,    29,     6,     0,    30,
      31,     9,     0,     0,     0,     0,     0,     0,    12,     0,
       0,     0,     0,     0,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,     0,     0,    14,    15,     0,     0,
       0,     0,     0,     0,    70,    17,    18,    19,    20,   135,
      22,     0,     0,     0,     0,     0,    24,     0,     0,     0,
       0,     0,    25,    26,    27,    28,    29,    14,    15,    30,
      31,     0,     0,     0,     0,    70,    17,    18,    19,    20,
      21,    22,     0,     0,     0,     0,     0,    24,     0,     0,
       0,     0,     0,    25,    26,    27,    28,    29,    14,    15,
      30,    31,     0,     0,     0,     0,    70,    17,    18,    19,
      20,     0,    22,     0,     0,     0,     0,     0,    24,   245,
       0,     0,     0,     0,    25,    26,    27,    28,    29,    14,
      15,    30,    31,     0,     0,     0,     0,    70,    17,    18,
      19,    20,     0,    22,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,     0,    25,    26,    27,    28,    29,
      14,    15,    30,    31,     0,     0,     0,     0,    70,    17,
      18,    19,    20,     0,    22,     0,     0,     0,     0,     0,
      24,   216,   217,   218,   219,     0,    25,    26,    27,    28,
      29,   220,     0,    30,    31,     0,     0,     0,   225,   221,
     222,     0,     0,    25,    26,    27,    28,    29,     0,     0,
      30,    31,   216,   217,   218,   219,     0,     0,     0,     0,
       0,     0,   220,     0,     0,     0,     0,     0,     0,     0,
     221,   222,     0,     0,    25,    26,    27,    28,    29,     0,
       0,    30,    31
};

static const yytype_int16 yycheck[] =
{
       0,     5,    10,    80,    24,     5,    72,     0,    14,    15,
      33,     5,    89,    37,    22,   154,   106,    11,    53,    53,
       5,    15,    57,    54,    24,    45,    11,    58,    22,    60,
      15,    24,    57,    33,    63,    53,    61,    22,     5,    57,
      33,     5,    44,    45,    11,    45,   136,    11,    15,    54,
      57,    15,    59,    58,    48,    22,    51,    63,    22,    91,
      62,    63,    82,    83,    59,    53,    57,    67,    60,   101,
      61,    79,    72,    66,    67,    53,    61,    60,   155,    87,
     157,    48,    82,    83,    48,   162,   152,    91,    48,    56,
      60,    91,    56,   122,   123,   124,    57,    69,    70,    71,
      61,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,    54,
     140,   153,   146,    56,   263,    60,    53,   150,     5,    48,
      49,    57,    51,    52,    11,    61,   168,   214,    15,    57,
     140,    60,   171,    61,     0,    22,   154,   213,   180,   226,
     150,   159,   152,    27,    28,    57,    48,   150,   235,    61,
      44,    45,    46,    47,   168,   171,    55,   175,   168,    57,
      54,    64,   249,    61,    40,    41,    28,   181,    62,    63,
      65,   181,    48,    49,    50,    51,    52,    66,    54,    46,
      47,   211,   212,    23,    60,    61,    42,    43,    67,    68,
      66,    67,    68,    69,    70,    27,    28,    73,    74,   112,
     113,   211,   212,   213,    53,   223,   209,   118,   119,    48,
     224,   120,   121,   227,   224,     0,     1,   227,     3,    61,
       5,    48,     7,     8,    61,    48,    11,    12,    61,    14,
      15,   245,    17,    18,    60,   245,    54,    22,    23,    39,
      40,    41,    55,    53,   258,    61,   260,    57,   258,    59,
     260,    61,    58,    48,    53,    40,    41,    59,    58,    53,
      60,     9,    53,    48,    49,    50,    51,    52,    53,    54,
      55,    60,    72,    61,    67,    60,   114,   115,   116,   117,
     207,    66,    67,    68,    69,    70,   174,   209,    73,    74,
       0,     1,   248,     3,   168,     5,   104,     7,     8,   108,
     107,    11,    12,    53,    14,    15,   109,    17,    18,   110,
      -1,   147,    22,    23,   111,    -1,    66,    67,    68,    69,
      70,    -1,    -1,    73,    74,    48,    49,    -1,    51,    52,
      40,    41,    -1,    -1,    -1,    -1,    -1,    60,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,
      70,    -1,    -1,    73,    74,     1,    -1,     3,    -1,     5,
      -1,     7,     8,    -1,    -1,    11,    12,    -1,    14,    15,
      -1,    17,    18,    61,    -1,    -1,    22,    23,    66,    67,
      68,    69,    70,    -1,    -1,    73,    74,    48,    49,    -1,
      51,    52,    53,    -1,    40,    41,    -1,    -1,    -1,    60,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      66,    67,    68,    69,    70,    -1,    -1,    73,    74,     3,
      -1,     5,    -1,     7,     8,    -1,    -1,    11,    12,    -1,
      14,    15,    -1,    17,    -1,    -1,    -1,    -1,    22,    23,
      66,    67,    68,    69,    70,    -1,    -1,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    66,    67,    68,    69,    70,    -1,    -1,    73,
      74,     3,    -1,     5,    -1,     7,     8,    -1,    -1,    11,
      12,    -1,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,     3,
      -1,    73,    74,     7,     8,    -1,    -1,    -1,    12,    -1,
      14,    -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      -1,     5,    66,    67,    68,    69,    70,    11,    -1,    73,
      74,    15,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    54,
      54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    66,    67,    68,    69,    70,    40,    41,    73,
      74,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    40,    41,
      73,    74,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    61,
      -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,    40,
      41,    73,    74,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,
      40,    41,    73,    74,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    44,    45,    46,    47,    -1,    66,    67,    68,    69,
      70,    54,    -1,    73,    74,    -1,    -1,    -1,    61,    62,
      63,    -1,    -1,    66,    67,    68,    69,    70,    -1,    -1,
      73,    74,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    63,    -1,    -1,    66,    67,    68,    69,    70,    -1,
      -1,    73,    74
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     5,     7,     8,    11,    12,    14,    15,
      17,    18,    22,    23,    40,    41,    48,    49,    50,    51,
      52,    53,    54,    55,    60,    66,    67,    68,    69,    70,
      73,    74,    76,    77,    78,    79,    80,    81,    82,    83,
      91,    95,    96,    97,   100,   101,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   123,   124,   125,   127,    53,    53,    53,
      48,    95,    60,    60,    48,    49,    51,    52,    53,    60,
      90,    48,    60,    60,   119,   121,   119,    54,    60,    90,
      56,    92,    81,   105,     0,    78,    53,    48,    85,    86,
      87,    55,    61,   103,   105,    53,    57,    27,    28,    64,
      65,    66,    46,    47,    44,    45,    62,    63,    42,    43,
      67,    68,    69,    70,    71,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    54,   122,    39,    40,    41,
      58,    60,    72,   118,   119,    61,    81,    88,    89,   128,
      77,    23,    96,   102,    60,    90,    98,    90,    53,   123,
      53,   105,    90,    48,   126,    48,    79,    81,    93,    94,
      95,    61,    61,    53,    57,    54,    58,    60,    48,    79,
      84,   104,   103,   106,   110,   108,   111,   112,   113,   114,
     114,   115,   115,   115,   115,   116,   116,   117,   117,   118,
     118,   118,   106,    48,   105,    61,    48,   129,    87,    57,
     128,    60,    96,    79,    90,    98,    44,    45,    46,    47,
      54,    62,    63,    99,    61,    61,    90,    61,    57,    61,
      87,    56,    94,   118,    86,    90,    51,    59,    56,    79,
      95,    59,    91,    89,   105,    61,   105,    96,    61,    90,
      95,    95,    48,    53,    59,    53,    61,    95,    61,    99,
       9,    53,    95,    60,    95,    98,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    75,    76,    77,    77,    78,    78,    78,    78,    78,
      79,    79,    80,    80,    81,    81,    81,    81,    82,    82,
      83,    84,    84,    84,    85,    85,    86,    86,    87,    87,
      87,    88,    88,    89,    89,    90,    90,    90,    90,    90,
      90,    91,    92,    91,    93,    93,    94,    94,    95,    95,
      95,    95,    95,    96,    96,    97,    97,    98,    98,    98,
      99,    99,    99,    99,    99,    99,    99,   100,   100,   100,
     100,   100,   100,   102,   101,   104,   103,   105,   105,   105,
     106,   106,   107,   107,   108,   108,   109,   109,   110,   110,
     111,   111,   112,   112,   113,   113,   113,   114,   114,   114,
     114,   114,   115,   115,   115,   116,   116,   116,   117,   117,
     117,   117,   118,   118,   119,   119,   119,   119,   119,   120,
     120,   120,   120,   120,   120,   120,   121,   121,   121,   121,
     121,   121,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   123,   123,   123,   123,   123,   123,   123,
     124,   124,   124,   124,   125,   125,   125,   126,   126,   126,
     127,   129,   128
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     3,
       3,     2,     3,     0,     1,     1,     1,     1,     5,     3,
       2,     0,     1,     2,     3,     1,     3,     1,     1,     3,
       4,     1,     3,     0,     2,     1,     1,     1,     1,     3,
       3,     2,     0,     4,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     7,     5,     7,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     7,     6,
       7,     3,     2,     0,     5,     0,     3,     1,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     4,     1,     2,     2,     2,     2,     1,
       4,     3,     3,     3,     2,     2,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     3,     3,     2,     5,     0,     3,     1,
       3,     0,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 84 "assign3.y" /* yacc.c:1646  */
    {
			if(flagtoPrintSymbolTable)
				PrintSymbolTable();
		}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 92 "assign3.y" /* yacc.c:1646  */
    {
		(yyval.Node) = addNode("start_statement",(yyvsp[-1].Node),(yyvsp[0].Node));
	}
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 96 "assign3.y" /* yacc.c:1646  */
    {
		(yyval.Node)=addNode("start_statement",(yyvsp[0].Node));
	}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 103 "assign3.y" /* yacc.c:1646  */
    {
		(yyval.Node)=addNode("statement",(yyvsp[0].Node));
    }
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 107 "assign3.y" /* yacc.c:1646  */
    {
        // cout<<"starting here:\n";
    }
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 112 "assign3.y" /* yacc.c:1646  */
    {
        // cout<<"instructions\n";
    }
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 117 "assign3.y" /* yacc.c:1646  */
    {}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 122 "assign3.y" /* yacc.c:1646  */
    {
		(yyval.Node)=addNode("simple_declaration",(yyvsp[-2].Node),(yyvsp[-1].Node));
        (yyval.Node)->childType = (yyvsp[-2].Node)->children[0]->nodeValue;
       // cout<<"simple_declaration->type_class declaration_list\n";
        varType="";

    }
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 130 "assign3.y" /* yacc.c:1646  */
    {
        (yyval.Node)=addNode("simple_declaration",(yyvsp[-1].Node));
        (yyval.Node)->childType = (yyvsp[-1].Node)->childType;
        if (structFlag)
        {
            cout<<"No assignments allowed inside the structure\n";
            flagtoPrintSymbolTable = false;
        }

    }
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 144 "assign3.y" /* yacc.c:1646  */
    {
        //PrintSymbolTable();
        // cout<<"assignment->IDENTIFIER  \n";

        if(!lookup((yyvsp[-2].Node)->nodeValue,funcName,scope) && !lookup((yyvsp[-2].Node)->nodeValue,"global",0))
        {
            cout<<"Error: Variable " << (yyvsp[-2].Node)->nodeValue<< " is not declared \n";
            flagtoPrintSymbolTable = false;
        }
        else
        {
            // cout << "Here: "<< getType($1,funcName,scope) << " fgf"<< $3->childType;
            if(getType((yyvsp[-2].Node),funcName,scope) != (yyvsp[0].Node)->childType)
            {
                printf("Error: Type mismatch errro in line no. %d\n",yylineno);
                //cout<<$1->childType << " "<< $3->childType <<std::endl;
                flagtoPrintSymbolTable = false;
            }
            (yyval.Node) = addNode("assignment",(yyvsp[-2].Node),(yyvsp[0].Node));
            (yyval.Node)->Operator = "=";
            string Leftname = "T"+to_string(variableIndex);
            variableIndex++;
            (yyvsp[0].Node)->threeAddrName = Leftname;
            string Rightname = "T"+to_string(variableIndex);
            variableIndex++;
            (yyval.Node)->threeAddrName = Rightname;
            (yyvsp[-2].Node)->threeAddrName = (yyvsp[-2].Node)->nodeValue;
        }

        GenerateCode((yyval.Node));
    }
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 175 "assign3.y" /* yacc.c:1646  */
    {}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 182 "assign3.y" /* yacc.c:1646  */
    {
		(yyval.Node)=addNode("type_class",(yyvsp[0].Node));
		(yyval.Node)->childType = (yyvsp[0].Node)->nodeName;
        //cout<<"type_class->INT\n";
        varType = "void";
    }
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 189 "assign3.y" /* yacc.c:1646  */
    {
        (yyval.Node)=addNode("type_class",(yyvsp[0].Node));
        (yyval.Node)->childType = (yyvsp[0].Node)->nodeName;
        //cout<<"type_class->INT\n";
        varType = "char";
    }
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 196 "assign3.y" /* yacc.c:1646  */
    {
        (yyval.Node)=addNode("type_class",(yyvsp[0].Node));
        (yyval.Node)->childType = (yyvsp[0].Node)->nodeName;
        //cout<<"type_class->INT\n";
        varType = "int";
    }
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 203 "assign3.y" /* yacc.c:1646  */
    {
        (yyval.Node)=addNode("type_class",(yyvsp[0].Node));
        (yyval.Node)->childType = (yyvsp[0].Node)->nodeName;
        //cout<<"type_class->INT\n";
        varType = "float";
    }
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 214 "assign3.y" /* yacc.c:1646  */
    {
        scope--;
        if (scope>=1)
        {
            cout<<"Error: struct should be declared globally\n";
            flagtoPrintSymbolTable = false;
        }
        structFlag = false;
        funcName = "global";
    }
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 229 "assign3.y" /* yacc.c:1646  */
    {
        scope++;
        structFlag = true;
        string currentStructName = (yyvsp[0].Node)->nodeValue;
        funcName = currentStructName;

        // cout<<funcName << "sunil\n";
        if (globalSymbolTable.size() == 0)
            dummyInsert();
        int index=returnIndexinVector(globalSymbolTable[0].localVariables,0,currentStructName);
        if (!lookup(currentStructName) && index < 0)
        {
            insertData(currentStructName,(yyvsp[-1].Node)->nodeValue);
        }
        else
        {
            cout<<"Error in line "<<yylineno<<std::endl;
            cout<<"Name " << currentStructName <<"already exists\n";
            flagtoPrintSymbolTable = false;
        }

    }
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 254 "assign3.y" /* yacc.c:1646  */
    {
        cout << "structure can't be empty.\n";
        flagtoPrintSymbolTable = false;
    }
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 265 "assign3.y" /* yacc.c:1646  */
    {
        (yyval.Node)=addNode("declaration_list",(yyvsp[-2].Node),(yyvsp[0].Node));
        (yyval.Node)->childType = (yyvsp[-2].Node)->childType;
    }
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 270 "assign3.y" /* yacc.c:1646  */
    {
       (yyval.Node)=addNode("declaration_list",(yyvsp[0].Node));
       (yyval.Node)->childType = (yyvsp[0].Node)->childType;
       //cout<<"declaration_list->init_declator\n";
    }
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 279 "assign3.y" /* yacc.c:1646  */
    {
        if (structFlag)
        {
            cout<<"Error: assignments not allowed inside structure\n";
            flagtoPrintSymbolTable = false;
        }
        (yyval.Node)=addNode("init_declator",(yyvsp[-2].Node),(yyvsp[0].Node));
        (yyval.Node)->childType = (yyvsp[-2].Node)->childType;
        //handle this with getleafnode function
        // cout<<"1-----" << $1->childType << " gap------" << $3->childType<<std::endl;
        if((yyvsp[-2].Node)->childType != (yyvsp[0].Node)->childType)
        {
            printf("Error: Type mismatch errro in line no. %d\n",yylineno);
            flagtoPrintSymbolTable = false;
        }
        (yyval.Node)=addNode("init_declator",(yyvsp[-2].Node));
        (yyval.Node)->childType = (yyvsp[-2].Node)->childType;
        if (funcName == (yyvsp[-2].Node)->children[0]->nodeValue )
        {
            cout<<"Error in line " << yylineno << ", Variable name can't be equal to function name\n";
            flagtoPrintSymbolTable = false;
        }
        if (!lookup((yyvsp[-2].Node)->children[0]->nodeValue,funcName,scope))
        {
            insertData((yyvsp[-2].Node)->children[0]->nodeValue,funcName,varType,"var",scope);
            (yyval.Node)->Operator = "=";
            string Leftname = "T"+to_string(variableIndex);
            variableIndex++;
            // $3->threeAddrName = Leftname;
            string Rightname = "T"+to_string(variableIndex);
            variableIndex++;
            // $$->threeAddrName = Rightname;
            // $1->threeAddrName = $1->childType;
            (yyvsp[-2].Node)->threeAddrName = Leftname;
            (yyvsp[0].Node)->threeAddrName = Rightname;
            cout<<Leftname<<" "<<Rightname << " "<<std::endl;
            (yyval.Node)->threeAddrName = "T"+to_string(variableIndex);
            variableIndex++;
            GenerateCode((yyval.Node));
        }
        else
        {
            cout<<"Error in line: "<<yylineno<<" Variable Name already exists.\n";
            flagtoPrintSymbolTable = false;
        }
    }
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 326 "assign3.y" /* yacc.c:1646  */
    {
        (yyval.Node)=addNode("init_declator",(yyvsp[0].Node));
        (yyval.Node)->childType = (yyvsp[0].Node)->nodeName;
        if (!lookup((yyvsp[0].Node)->children[0]->nodeValue,funcName,scope))
        {
            insertData((yyvsp[0].Node)->children[0]->nodeValue,funcName,varType,"var",scope);
        }
        else
        {
            cout<<"Error in line: "<<yylineno<<" Variable Name already exists.\n";
            flagtoPrintSymbolTable = false;
        }
    }
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 343 "assign3.y" /* yacc.c:1646  */
    {
        (yyval.Node) = addNode("identifer",(yyvsp[0].Node));
        (yyval.Node)->childType = varType;
        (yyvsp[0].Node)->threeAddrName = (yyvsp[0].Node)->nodeValue;
    }
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 361 "assign3.y" /* yacc.c:1646  */
    {
        allVariables temp;
        temp.var_name = (yyvsp[0].Node)->children[0]->nodeValue;
        temp.varType = (yyvsp[-1].Node)->children[0]->nodeValue;
        temp.scope = scope;
        temp.paramOrVar = "params";
        for (int i = 0; i < tempParams.size(); ++i)
        {
            if (tempParams[i].var_name == temp.var_name)
            {
                cout<<"Variable name "<<temp.var_name << " already exists.\n";
                flagtoPrintSymbolTable = false;
                break;
            }
        }
        tempParams.push_back(temp);
    }
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 382 "assign3.y" /* yacc.c:1646  */
    {
        if(lookup((yyvsp[0].Node)->nodeValue,funcName,scope) || lookup((yyvsp[0].Node)->nodeValue,"global",0) )
        {
            (yyval.Node)=addNode("assignment_expression",(yyvsp[0].Node));
            std::string currentIdentifierType = getType((yyvsp[0].Node),funcName,scope);
            (yyval.Node)->childType = currentIdentifierType;
        }
        else
        {
            cout<<"Error: Variable " << (yyvsp[0].Node)->nodeValue<< " is not declared \n";
            flagtoPrintSymbolTable = false;
        }
        (yyvsp[0].Node)->threeAddrName = (yyvsp[0].Node) -> nodeValue;
    }
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 397 "assign3.y" /* yacc.c:1646  */
    {
        (yyval.Node)=addNode("assignment_expression");
        (yyval.Node)->childType = "int";
        (yyvsp[0].Node)->threeAddrName = (yyvsp[0].Node) -> nodeValue;
        // cout<<"assignment_expression->INTNUM\n";
        // cout<<$$->childType<<std::endl;
    }
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 405 "assign3.y" /* yacc.c:1646  */
    {
        (yyval.Node)=addNode("assignment_expression");
        (yyval.Node)->childType = "float";

    }
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 411 "assign3.y" /* yacc.c:1646  */
    {
        (yyval.Node)=addNode("assignment_expression");
        (yyval.Node)->childType = "char";

    }
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 417 "assign3.y" /* yacc.c:1646  */
    {
        // cout<<"assi2+assi2\n";
        if((yyvsp[-2].Node)->childType != (yyvsp[0].Node)->childType)
        {
            // cout<<"assi+assi\n";
            printf("Error: Type mismatch errro in line no. %d\n",yylineno);
            flagtoPrintSymbolTable = false;
        }
        (yyval.Node)=addNode("assignment_expression",(yyvsp[-2].Node),(yyvsp[0].Node));
        (yyval.Node)->Operator = (yyvsp[-1].Node) -> children[0] -> nodeValue;
        (yyval.Node)->childType = (yyvsp[-2].Node)->childType;
        // string Rootname = "T"+to_string(variableIndex);
        string Leftname = "T"+to_string(variableIndex);
        (yyvsp[-2].Node)-> threeAddrName = Leftname;
        variableIndex++;
        string Rightname = "T"+to_string(variableIndex);
        (yyvsp[0].Node)-> threeAddrName = Rightname;
        // cout << "Left: "<<Leftname << " Rightname: " << Rightname << std::endl;
        variableIndex++;
    }
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 438 "assign3.y" /* yacc.c:1646  */
    {
        (yyval.Node)=addNode("assignment_expression",(yyvsp[-1].Node));
        (yyval.Node)->childType = (yyvsp[-1].Node)->childType;

    }
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 449 "assign3.y" /* yacc.c:1646  */
    {scope++;}
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 450 "assign3.y" /* yacc.c:1646  */
    {
        scope--;
    }
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 462 "assign3.y" /* yacc.c:1646  */
    {
        // cout <<"simple_declaration\n";
    }
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 508 "assign3.y" /* yacc.c:1646  */
    {
        // cout<<"1\n";
    }
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 512 "assign3.y" /* yacc.c:1646  */
    {
        // cout<<"2\n";
    }
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 516 "assign3.y" /* yacc.c:1646  */
    {
        // cout<<"3\n";
    }
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 520 "assign3.y" /* yacc.c:1646  */
    {
        // cout << "for statement:\n";
    }
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 527 "assign3.y" /* yacc.c:1646  */
    {scope++;}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 527 "assign3.y" /* yacc.c:1646  */
    {}
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 531 "assign3.y" /* yacc.c:1646  */
    {scope--;}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 536 "assign3.y" /* yacc.c:1646  */
    {
        // cout<<"1*"<<std::endl;

    }
#line 2178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 541 "assign3.y" /* yacc.c:1646  */
    {
        // cout<<"1"<<std::endl;
    }
#line 2186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 549 "assign3.y" /* yacc.c:1646  */
    {
        // cout<<"2"<<std::endl;

    }
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 554 "assign3.y" /* yacc.c:1646  */
    {
        // cout<<"2*"<<std::endl;

    }
#line 2204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 562 "assign3.y" /* yacc.c:1646  */
    {
        // cout<<"3"<<std::endl;

    }
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 567 "assign3.y" /* yacc.c:1646  */
    {
        // cout<<"3*"<<std::endl;

    }
#line 2222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 575 "assign3.y" /* yacc.c:1646  */
    {
        // cout<<"4"<<std::endl;

    }
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 580 "assign3.y" /* yacc.c:1646  */
    {
        // cout<<"4*"<<std::endl;

    }
#line 2240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 588 "assign3.y" /* yacc.c:1646  */
    {
        // cout<<"5"<<std::endl;

    }
#line 2249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 593 "assign3.y" /* yacc.c:1646  */
    {
        // cout<<"5*"<<std::endl;

    }
#line 2258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 601 "assign3.y" /* yacc.c:1646  */
    {
        // cout<<"6"<<std::endl;

    }
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 606 "assign3.y" /* yacc.c:1646  */
    {
        // cout<<"6*"<<std::endl;

    }
#line 2276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 614 "assign3.y" /* yacc.c:1646  */
    {
        // cout<<"7"<<std::endl;

    }
#line 2285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 619 "assign3.y" /* yacc.c:1646  */
    {
        // cout<<"7*"<<std::endl;

    }
#line 2294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 687 "assign3.y" /* yacc.c:1646  */
    {
        // if (!lookup(funcName,))
        {
            /* code */
        }
    }
#line 2305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 716 "assign3.y" /* yacc.c:1646  */
    {
        // $$ = addNode("unary_operator",$1);
        node* newNode = new node();
        newNode-> nodeValue = "&";
        (yyval.Node) = addNode("unary_expression",newNode);

    }
#line 2317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 724 "assign3.y" /* yacc.c:1646  */
    {
        // $$ = addNode("unary_operator",$1);
        node* newNode = new node();
             newNode-> nodeValue = "*";
             (yyval.Node) = addNode("unary_expression",newNode);


    }
#line 2330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 733 "assign3.y" /* yacc.c:1646  */
    {
        // $$ = addNode("unary_operator",$1);
        node* newNode = new node();
         newNode-> nodeValue = "+";
         (yyval.Node) = addNode("unary_expression",newNode);

    }
#line 2342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 741 "assign3.y" /* yacc.c:1646  */
    {
        // $$ = addNode("unary_operator",$1);
        node* newNode = new node();
         newNode-> nodeValue = "/";
         (yyval.Node) = addNode("unary_expression",newNode);

    }
#line 2354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 749 "assign3.y" /* yacc.c:1646  */
    {
        // $$ = addNode("unary_operator",$1);
        node* newNode = new node();
             newNode-> nodeValue = "-";
             (yyval.Node) = addNode("unary_expression",newNode);

    }
#line 2366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 757 "assign3.y" /* yacc.c:1646  */
    {
        // $$ = addNode("unary_operator",$1);
        node* newNode = new node();
             newNode-> nodeValue = "~";
             (yyval.Node) = addNode("unary_expression",newNode);

    }
#line 2378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 765 "assign3.y" /* yacc.c:1646  */
    {
        // $$ = addNode("unary_operator",$1);
        node* newNode = new node();
             newNode-> nodeValue = "!";
             (yyval.Node) = addNode("unary_expression",newNode);

    }
#line 2390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 778 "assign3.y" /* yacc.c:1646  */
    {
        int index= returnIndexInTable(funcName);
        string returnType =  globalSymbolTable[index].funcReturnType;
        if ( returnType != "void")
        {
            cout<<"Error in line " << yylineno << " Function must return " << returnType <<" value\n";
            flagtoPrintSymbolTable = false;
        }
    }
#line 2404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 788 "assign3.y" /* yacc.c:1646  */
    {
        int index= returnIndexInTable(funcName);
        if (globalSymbolTable[index].funcReturnType != (yyvsp[-1].Node)->childType)
        {
            cout<<"Error in line " << yylineno << " Function Return type mismatch\n";
            flagtoPrintSymbolTable = false;
        }
    }
#line 2417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 801 "assign3.y" /* yacc.c:1646  */
    {
        // cout<<"1\n";
    }
#line 2425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 805 "assign3.y" /* yacc.c:1646  */
    {
        // cout<<"second here\n";
    }
#line 2433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 809 "assign3.y" /* yacc.c:1646  */
    {
        // cout<<"Here: ";
        int indexinFunction = returnIndexInTable((yyvsp[-4].Node)->nodeValue);
        // std::cout<<indexinFunction;
        std::vector<allVariables> v = globalSymbolTable[indexinFunction].paramListPtr;
        // reverse(v.begin(), v.end());
        if (v.size() < funcChecker.size())
        {
            std::cout<<"Too many arguments in the function call at line "<< yylineno << "\n";
            flagtoPrintSymbolTable = false;
        }
        else if (v.size() > funcChecker.size())
        {
            std::cout<<"Too few arguments in the function call at line "<< yylineno << "\n";
            flagtoPrintSymbolTable = false;
        }
        else
        {
            for (int i = 0; i < v.size(); ++i)
            {
                if(v[i].varType != funcChecker[i])
                {
                    cout<<"Error, Incompatible function arguments\n" ;
                    flagtoPrintSymbolTable = false;
                    break;
                }
            }
        }
    }
#line 2467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 842 "assign3.y" /* yacc.c:1646  */
    {

    }
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 846 "assign3.y" /* yacc.c:1646  */
    {
        funcChecker.push_back(getType((yyvsp[0].Node),funcName,scope));
    }
#line 2483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 850 "assign3.y" /* yacc.c:1646  */
    {
        funcChecker.push_back(getType((yyvsp[0].Node),funcName,scope));
    }
#line 2491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 857 "assign3.y" /* yacc.c:1646  */
    {
        scope++;
        // cout<<"coming here:\n";
        string currentFuncName = (yyvsp[-1].Node)->children[0]->nodeValue;
        funcName = currentFuncName;
        // cout<<funcName << "sunil\n";
        if (!lookup(currentFuncName))
        {
            insertData(currentFuncName,(yyvsp[-2].Node)->children[0]->nodeValue);
        }
        else
        {
            cout<<"Error in line "<<yylineno<<std::endl;
            cout<<"Function Name " << currentFuncName <<"already exists\n";
            flagtoPrintSymbolTable = false;
        }

    }
#line 2514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 878 "assign3.y" /* yacc.c:1646  */
    {scope--;updateSymboltable(funcName,tempParams);tempParams.clear();}
#line 2520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 879 "assign3.y" /* yacc.c:1646  */
    {
        funcName = "global";
    }
#line 2528 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2532 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 889 "assign3.y" /* yacc.c:1906  */



int main(int ac,char **av)
{
  extern FILE *yyin;
  if(ac > 1 && !(yyin = fopen(av[1], "r")))
  {
    perror(av[1]);
    exit(1);
  }
  yyparse();
  return 0;
}
