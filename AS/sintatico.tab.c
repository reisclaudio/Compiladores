/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "sintatico.y"


#include<stdio.h>
#include<string.h>

extern int yylex();
extern char* yytext;
void yyerror(char *s);

void imprimeErro(int linha);
void imprimeCursor (int coluna);

extern int lines;
extern int chars;


#line 87 "sintatico.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_SINTATICO_TAB_H_INCLUDED
# define YY_YY_SINTATICO_TAB_H_INCLUDED
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
    VOID = 258,
    INT = 259,
    CHAR = 260,
    RETURN = 261,
    BREAK = 262,
    SWITCH = 263,
    CASE = 264,
    DEFAULT = 265,
    DO = 266,
    WHILE = 267,
    FOR = 268,
    IF = 269,
    ELSE = 270,
    TYPEDEF = 271,
    STRUCT = 272,
    PLUS = 273,
    MINUS = 274,
    MULTIPLY = 275,
    DIV = 276,
    REMAINDER = 277,
    INC = 278,
    DEC = 279,
    BITWISE_AND = 280,
    BITWISE_OR = 281,
    BITWISE_NOT = 282,
    BITWISE_XOR = 283,
    NOT = 284,
    LOGICAL_AND = 285,
    LOGICAL_OR = 286,
    EQUAL = 287,
    NOT_EQUAL = 288,
    GREATER_THAN = 289,
    LESS_THAN = 290,
    GREATER_EQUAL = 291,
    LESS_EQUAL = 292,
    R_SHIFT = 293,
    L_SHIFT = 294,
    ASSIGN = 295,
    ADD_ASSIGN = 296,
    MINUS_ASSIGN = 297,
    SEMICOLON = 298,
    COMMA = 299,
    COLON = 300,
    L_PAREN = 301,
    R_PAREN = 302,
    L_CURLY_BRACKET = 303,
    R_CURLY_BRACKET = 304,
    L_SQUARE_BRACKET = 305,
    R_SQUARE_BRACKET = 306,
    TERNARY_CONDITION = 307,
    NUMBER_SIGN = 308,
    POINTER = 309,
    PRINTF = 310,
    SCANF = 311,
    DEFINE = 312,
    EXIT = 313,
    IDENTIFIER = 314,
    CHARACTER = 315,
    STRING = 316,
    NUM_HEXA = 317,
    NUM_OCTAL = 318,
    NUM_INTEGER = 319,
    EOF_ = 320,
    UNTERMINATED_COMMENT = 321,
    ERROR_LEXICAL = 322
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTATICO_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   304

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  260

#define YYUNDEFTOK  2
#define YYMAXUTOK   322


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      65,    66,    67
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    88,    88,    89,    91,    92,    94,    95,    96,    98,
     100,   101,   103,   104,   106,   107,   109,   110,   112,   114,
     116,   117,   119,   121,   122,   124,   125,   127,   128,   129,
     131,   133,   135,   136,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   150,   151,   153,   154,   156,
     157,   159,   161,   162,   164,   165,   167,   168,   169,   171,
     173,   174,   176,   178,   179,   181,   183,   184,   186,   188,
     189,   191,   193,   194,   196,   198,   199,   201,   203,   204,
     205,   207,   209,   210,   211,   212,   213,   215,   217,   218,
     219,   221,   223,   224,   225,   227,   229,   230,   231,   232,
     234,   235,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   247,   248,   250,   251,   252,   253,   255,   256,   258,
     259,   261,   262,   263,   264,   265,   267,   268,   269
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VOID", "INT", "CHAR", "RETURN", "BREAK",
  "SWITCH", "CASE", "DEFAULT", "DO", "WHILE", "FOR", "IF", "ELSE",
  "TYPEDEF", "STRUCT", "PLUS", "MINUS", "MULTIPLY", "DIV", "REMAINDER",
  "INC", "DEC", "BITWISE_AND", "BITWISE_OR", "BITWISE_NOT", "BITWISE_XOR",
  "NOT", "LOGICAL_AND", "LOGICAL_OR", "EQUAL", "NOT_EQUAL", "GREATER_THAN",
  "LESS_THAN", "GREATER_EQUAL", "LESS_EQUAL", "R_SHIFT", "L_SHIFT",
  "ASSIGN", "ADD_ASSIGN", "MINUS_ASSIGN", "SEMICOLON", "COMMA", "COLON",
  "L_PAREN", "R_PAREN", "L_CURLY_BRACKET", "R_CURLY_BRACKET",
  "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "TERNARY_CONDITION",
  "NUMBER_SIGN", "POINTER", "PRINTF", "SCANF", "DEFINE", "EXIT",
  "IDENTIFIER", "CHARACTER", "STRING", "NUM_HEXA", "NUM_OCTAL",
  "NUM_INTEGER", "EOF_", "UNTERMINATED_COMMENT", "ERROR_LEXICAL",
  "$accept", "programa", "programa_aux", "declaracoes", "dec_variaveis",
  "dec_variaveis_aux", "asterisco", "dec_variaveis_aux2",
  "dec_variaveis_aux3", "dec_prototipos", "funcao", "funcao_aux",
  "parametros", "parametros_aux", "parametros_aux2", "tipo", "bloco",
  "comandos", "comandos_aux", "lista_comandos", "lista_comandos_aux",
  "lista_comandos_aux2", "lista_comandos_aux3", "expressao",
  "expressao_aux", "expressao_at", "expressao_at_aux", "expressao_cond",
  "expressao_cond_aux", "expressao_orLogico", "expressao_orLogico_aux",
  "expressao_andLogico", "expressao_andLogico_aux", "expressao_or",
  "expressao_or_aux", "expressao_xor", "expressao_xor_aux",
  "expressao_and", "expressao_and_aux", "expressao_igual",
  "expressao_igual_aux", "expressao_relac", "expressao_relac_aux",
  "expressao_shift", "expressao_shift_aux", "expressao_add",
  "expressao_add_aux", "expressao_multi", "expressao_multi_aux",
  "expressao_cast", "expressao_una", "expressao_pFixa",
  "expressao_pFixa_aux", "expressao_pFixa_aux2", "expressao_pFixa_aux3",
  "expressao_prim", "numero", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322
};
# endif

#define YYPACT_NINF (-198)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      28,  -198,  -198,  -198,   -14,    35,    14,  -198,  -198,  -198,
    -198,    18,   -11,  -198,  -198,   -20,    18,    -3,    -1,   228,
    -198,  -198,  -198,   -25,   228,   228,   228,   240,   240,   228,
     228,   228,   181,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
      38,  -198,    36,    60,    67,    79,    84,    82,    20,    29,
      39,    76,    64,    62,    37,  -198,  -198,   114,   228,   -10,
     -38,  -198,  -198,  -198,  -198,   228,  -198,  -198,  -198,  -198,
    -198,    18,    77,   228,  -198,   228,  -198,   228,  -198,   228,
    -198,   228,  -198,   228,  -198,   228,  -198,   228,   228,  -198,
     228,   228,   228,   228,  -198,   228,   228,  -198,   228,   228,
    -198,   228,   228,   228,  -198,  -198,  -198,  -198,   228,  -198,
    -198,   228,   228,  -198,    81,    18,    93,   228,    18,  -198,
    -198,   114,    83,  -198,    38,    87,    60,    67,    79,    84,
      82,    20,    20,    29,    29,    29,    29,    39,    39,    76,
      76,    64,    64,    64,  -198,   105,   106,   103,  -198,    97,
     117,   125,  -198,   111,   114,   102,    18,   228,  -198,   228,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,   228,  -198,
    -198,  -198,   117,  -198,  -198,   117,  -198,   228,   123,   126,
     127,   129,  -198,   102,   130,   132,   133,  -198,   138,   102,
     139,  -198,  -198,  -198,   137,   150,  -198,   184,   228,   228,
     228,   148,   141,   142,   228,  -198,  -198,  -198,  -198,   114,
    -198,  -198,   161,   162,   168,   166,  -198,   173,   174,   175,
    -198,   228,   123,   228,   123,   228,   176,   195,   178,   177,
    -198,   182,   211,  -198,   185,   171,  -198,   188,   228,   123,
    -198,  -198,   186,  -198,   187,  -198,   189,   123,  -198,  -198
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    29,    27,    28,     0,     0,     0,     4,     7,     8,
       5,    13,     0,     1,     3,     0,    13,     0,     0,     0,
       2,    12,     9,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,   123,   124,   127,   128,   126,     6,
      53,    54,    61,    64,    67,    70,    73,    76,    80,    86,
      90,    94,    99,   100,   102,   111,   122,    24,     0,    17,
       0,   107,   100,   108,   106,     0,   103,   104,   105,   109,
     110,    13,     0,     0,    51,     0,    59,     0,    62,     0,
      65,     0,    68,     0,    71,     0,    74,     0,     0,    77,
       0,     0,     0,     0,    81,     0,     0,    87,     0,     0,
      91,     0,     0,     0,    95,    56,    57,    58,     0,   114,
     115,   118,     0,   112,     0,    13,     0,     0,    13,    11,
      18,    21,     0,   125,    53,     0,    64,    67,    70,    73,
      76,    80,    80,    86,    86,    86,    86,    90,    90,    94,
      94,    99,    99,    99,    55,   120,     0,     0,    22,     0,
      15,    17,    16,     0,    21,     0,    13,     0,    52,     0,
      63,    66,    69,    72,    75,    78,    79,    84,    82,    85,
      83,    89,    88,    92,    93,    96,    97,    98,   118,   117,
     116,   113,    15,    14,    10,    15,    20,    48,     0,     0,
       0,     0,    43,     0,     0,     0,     0,    44,     0,    33,
       0,   101,    60,   119,    26,     0,    47,     0,     0,    48,
       0,     0,     0,     0,     0,    19,    32,    31,    42,    24,
      23,    41,     0,     0,     0,     0,    30,    50,     0,     0,
      25,     0,     0,    48,     0,     0,     0,     0,     0,     0,
      36,     0,    46,    49,     0,     0,    40,     0,    48,     0,
      35,    38,     0,    34,     0,    45,     0,     0,    39,    37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -198,   229,  -198,  -198,  -117,   118,    -9,  -135,    86,  -198,
    -198,    85,  -198,    19,  -198,   -31,  -177,  -179,  -198,  -198,
    -198,  -197,  -198,   -16,   144,   -67,  -198,    90,  -198,  -198,
     124,   179,   134,   183,   143,   191,   146,   190,   136,   169,
     -22,    50,   -65,   -17,     3,    47,     7,    53,    -8,    -2,
     -19,  -198,  -198,    92,  -198,  -198,  -198
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,    17,   153,    59,   119,     9,
      10,   155,    60,   114,   220,    11,   197,   198,   217,   199,
     250,   205,   236,   206,    74,    40,   108,    41,    76,    42,
      78,    43,    80,    44,    82,    45,    84,    46,    86,    47,
      89,    48,    94,    49,    97,    50,   100,    51,   104,    52,
      62,    54,   113,   146,   179,    55,    56
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,    71,    18,    39,   154,   120,   124,    21,    66,    67,
     121,   207,   224,    53,   211,   183,    72,     1,     2,     3,
     216,    57,    61,    63,    64,    58,   115,    68,    69,    70,
     117,     1,     2,     3,   118,    13,   241,   154,    16,    53,
      22,   144,   116,    12,   145,    20,    53,   204,    19,    72,
     151,   254,    87,    88,    53,   240,    53,   242,    23,   125,
     109,   110,   122,    90,    91,    92,    93,     4,   167,   168,
     169,   170,   255,   133,   134,   135,   136,    95,    96,    14,
     259,     4,    73,   111,   101,   102,   103,   112,    75,    53,
     156,    77,    53,    53,    98,    99,   147,    79,    53,   141,
     142,   143,   105,   106,   107,    81,   149,    85,   187,   165,
     166,   145,    83,   188,   189,   190,   191,     1,     2,     3,
      24,    25,    26,   156,   123,    27,    28,    29,   148,    30,
     157,    31,   159,   175,   176,   177,    53,   131,   132,   200,
     171,   172,   137,   138,   150,   192,   173,   174,    32,   178,
     193,   139,   140,   180,   181,   201,   182,   194,   195,    53,
     196,    33,    34,    35,    36,    37,    38,    58,    53,   118,
     185,   193,   208,   209,    53,   210,   212,   200,   213,   214,
      53,   219,   218,   200,     1,     2,     3,   215,   115,    53,
      53,    53,   223,   221,   225,    53,   222,   226,   229,    24,
      25,    26,   227,   228,    27,    28,    29,   231,    30,   232,
      31,   233,    53,   234,    53,   239,    53,   235,   237,   243,
     245,   246,   238,   244,   247,   248,   249,    32,   251,    53,
     252,   253,   258,   256,   257,    15,   152,   184,   230,   186,
      33,    34,    35,    36,    37,    38,    24,    25,    26,   202,
     160,    27,    28,    29,   130,    30,   126,    31,    24,    25,
      26,   161,   127,    27,    28,    29,   164,    30,   158,    31,
     203,   162,   128,   129,    32,   163,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    65,    33,    34,    35,
      36,    37,    38,     0,     0,     0,     0,     0,     0,    33,
      34,    35,    36,    37,    38
};

static const yytype_int16 yycheck[] =
{
      19,    32,    11,    19,   121,    43,    73,    16,    27,    28,
      48,   188,   209,    32,   193,   150,    32,     3,     4,     5,
     199,    46,    24,    25,    26,    50,    57,    29,    30,    31,
      40,     3,     4,     5,    44,     0,   233,   154,    20,    58,
      43,   108,    58,    57,   111,    65,    65,   182,    59,    65,
     117,   248,    32,    33,    73,   232,    75,   234,    59,    75,
      23,    24,    71,    34,    35,    36,    37,    53,   133,   134,
     135,   136,   249,    90,    91,    92,    93,    38,    39,    65,
     257,    53,    44,    46,    20,    21,    22,    50,    52,   108,
     121,    31,   111,   112,    18,    19,   112,    30,   117,   101,
     102,   103,    40,    41,    42,    26,   115,    25,     6,   131,
     132,   178,    28,    11,    12,    13,    14,     3,     4,     5,
      18,    19,    20,   154,    47,    23,    24,    25,    47,    27,
      47,    29,    45,   141,   142,   143,   155,    87,    88,   155,
     137,   138,    95,    96,    51,    43,   139,   140,    46,    44,
      48,    98,    99,    47,    51,   157,    59,    55,    56,   178,
      58,    59,    60,    61,    62,    63,    64,    50,   187,    44,
      59,    48,    46,    46,   193,    46,    46,   193,    46,    46,
     199,    44,    43,   199,     3,     4,     5,    49,   219,   208,
     209,   210,   208,    43,   210,   214,    12,    49,   214,    18,
      19,    20,    61,    61,    23,    24,    25,    46,    27,    47,
      29,    43,   231,    47,   233,   231,   235,    44,    44,   235,
      25,    43,    47,    47,    47,    43,    15,    46,    43,   248,
      59,    43,    43,    47,    47,     6,   118,   151,   219,   154,
      59,    60,    61,    62,    63,    64,    18,    19,    20,   159,
     126,    23,    24,    25,    85,    27,    77,    29,    18,    19,
      20,   127,    79,    23,    24,    25,   130,    27,   124,    29,
     178,   128,    81,    83,    46,   129,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,    53,    69,    70,    71,    72,    77,
      78,    83,    57,     0,    65,    69,    20,    73,    74,    59,
      65,    74,    43,    59,    18,    19,    20,    23,    24,    25,
      27,    29,    46,    59,    60,    61,    62,    63,    64,    91,
      93,    95,    97,    99,   101,   103,   105,   107,   109,   111,
     113,   115,   117,   118,   119,   123,   124,    46,    50,    75,
      80,   117,   118,   117,   117,    46,   118,   118,   117,   117,
     117,    83,    91,    44,    92,    52,    96,    31,    98,    30,
     100,    26,   102,    28,   104,    25,   106,    32,    33,   108,
      34,    35,    36,    37,   110,    38,    39,   112,    18,    19,
     114,    20,    21,    22,   116,    40,    41,    42,    94,    23,
      24,    46,    50,   120,    81,    83,    91,    40,    44,    76,
      43,    48,    74,    47,    93,    91,    99,   101,   103,   105,
     107,   109,   109,   111,   111,   111,   111,   113,   113,   115,
     115,   117,   117,   117,    93,    93,   121,    91,    47,    74,
      51,    93,    73,    74,    72,    79,    83,    47,    92,    45,
      98,   100,   102,   104,   106,   108,   108,   110,   110,   110,
     110,   112,   112,   114,   114,   116,   116,   116,    44,   122,
      47,    51,    59,    75,    76,    59,    79,     6,    11,    12,
      13,    14,    43,    48,    55,    56,    58,    84,    85,    87,
      91,   117,    95,   121,    75,    89,    91,    84,    46,    46,
      46,    85,    46,    46,    46,    49,    85,    86,    43,    44,
      82,    43,    12,    91,    89,    91,    49,    61,    61,    91,
      81,    46,    47,    43,    47,    44,    90,    44,    47,    91,
      84,    89,    84,    91,    47,    25,    43,    47,    43,    15,
      88,    43,    59,    43,    89,    84,    47,    47,    43,    84
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    68,    69,    69,    70,    70,    71,    71,    71,    72,
      73,    73,    74,    74,    75,    75,    76,    76,    77,    78,
      79,    79,    80,    81,    81,    82,    82,    83,    83,    83,
      84,    85,    86,    86,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    88,    88,    89,    89,    90,
      90,    91,    92,    92,    93,    93,    94,    94,    94,    95,
      96,    96,    97,    98,    98,    99,   100,   100,   101,   102,
     102,   103,   104,   104,   105,   106,   106,   107,   108,   108,
     108,   109,   110,   110,   110,   110,   110,   111,   112,   112,
     112,   113,   114,   114,   114,   115,   116,   116,   116,   116,
     117,   117,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   119,   119,   120,   120,   120,   120,   121,   121,   122,
     122,   123,   123,   123,   123,   123,   124,   124,   124
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     1,     1,     4,     1,     1,     3,
       6,     4,     2,     0,     4,     0,     2,     0,     5,     8,
       2,     0,     3,     5,     0,     2,     0,     1,     1,     1,
       3,     2,     1,     0,     7,     6,     5,     9,     6,     8,
       5,     3,     2,     1,     1,     2,     0,     1,     0,     2,
       0,     2,     3,     0,     1,     3,     1,     1,     1,     2,
       4,     0,     2,     3,     0,     2,     3,     0,     2,     3,
       0,     2,     3,     0,     2,     3,     0,     2,     3,     3,
       0,     2,     3,     3,     3,     3,     0,     2,     3,     3,
       0,     2,     3,     3,     0,     2,     3,     3,     3,     0,
       1,     5,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     2,     3,     1,     1,     3,     2,     0,     2,
       0,     1,     1,     1,     1,     3,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 88 "sintatico.y"
                                     {printf("SUCCESSFUL COMPILATION."); return 0;}
#line 1585 "sintatico.tab.c"
    break;

  case 3:
#line 89 "sintatico.y"
                            {printf("SUCCESSFUL COMPILATION."); return 0;}
#line 1591 "sintatico.tab.c"
    break;

  case 4:
#line 91 "sintatico.y"
                          {}
#line 1597 "sintatico.tab.c"
    break;

  case 5:
#line 92 "sintatico.y"
                 {}
#line 1603 "sintatico.tab.c"
    break;

  case 6:
#line 94 "sintatico.y"
                                                     {}
#line 1609 "sintatico.tab.c"
    break;

  case 7:
#line 95 "sintatico.y"
                            {}
#line 1615 "sintatico.tab.c"
    break;

  case 8:
#line 96 "sintatico.y"
                             {}
#line 1621 "sintatico.tab.c"
    break;

  case 9:
#line 98 "sintatico.y"
                                                {}
#line 1627 "sintatico.tab.c"
    break;

  case 10:
#line 100 "sintatico.y"
                                                                                                  {}
#line 1633 "sintatico.tab.c"
    break;

  case 11:
#line 101 "sintatico.y"
                                                                             {}
#line 1639 "sintatico.tab.c"
    break;

  case 12:
#line 103 "sintatico.y"
                              {}
#line 1645 "sintatico.tab.c"
    break;

  case 13:
#line 104 "sintatico.y"
          {}
#line 1651 "sintatico.tab.c"
    break;

  case 14:
#line 106 "sintatico.y"
                                                                                   {}
#line 1657 "sintatico.tab.c"
    break;

  case 15:
#line 107 "sintatico.y"
                  {}
#line 1663 "sintatico.tab.c"
    break;

  case 16:
#line 109 "sintatico.y"
                                            {}
#line 1669 "sintatico.tab.c"
    break;

  case 17:
#line 110 "sintatico.y"
                  {}
#line 1675 "sintatico.tab.c"
    break;

  case 18:
#line 112 "sintatico.y"
                                                               {}
#line 1681 "sintatico.tab.c"
    break;

  case 19:
#line 114 "sintatico.y"
                                                                                                 {}
#line 1687 "sintatico.tab.c"
    break;

  case 20:
#line 116 "sintatico.y"
                                     {}
#line 1693 "sintatico.tab.c"
    break;

  case 21:
#line 117 "sintatico.y"
          {}
#line 1699 "sintatico.tab.c"
    break;

  case 22:
#line 119 "sintatico.y"
                                           {}
#line 1705 "sintatico.tab.c"
    break;

  case 23:
#line 121 "sintatico.y"
                                                                             {}
#line 1711 "sintatico.tab.c"
    break;

  case 24:
#line 122 "sintatico.y"
          {}
#line 1717 "sintatico.tab.c"
    break;

  case 26:
#line 125 "sintatico.y"
          {}
#line 1723 "sintatico.tab.c"
    break;

  case 27:
#line 127 "sintatico.y"
          {}
#line 1729 "sintatico.tab.c"
    break;

  case 28:
#line 128 "sintatico.y"
               {}
#line 1735 "sintatico.tab.c"
    break;

  case 29:
#line 129 "sintatico.y"
               {}
#line 1741 "sintatico.tab.c"
    break;

  case 30:
#line 131 "sintatico.y"
                                                {}
#line 1747 "sintatico.tab.c"
    break;

  case 31:
#line 133 "sintatico.y"
                                      {}
#line 1753 "sintatico.tab.c"
    break;

  case 32:
#line 135 "sintatico.y"
                       {}
#line 1759 "sintatico.tab.c"
    break;

  case 33:
#line 136 "sintatico.y"
          {}
#line 1765 "sintatico.tab.c"
    break;

  case 34:
#line 138 "sintatico.y"
                                                                   {}
#line 1771 "sintatico.tab.c"
    break;

  case 35:
#line 139 "sintatico.y"
                                                                {}
#line 1777 "sintatico.tab.c"
    break;

  case 36:
#line 140 "sintatico.y"
                                                {}
#line 1783 "sintatico.tab.c"
    break;

  case 37:
#line 141 "sintatico.y"
                                                                                                                    {}
#line 1789 "sintatico.tab.c"
    break;

  case 38:
#line 142 "sintatico.y"
                                                                      {}
#line 1795 "sintatico.tab.c"
    break;

  case 39:
#line 143 "sintatico.y"
                                                                              {}
#line 1801 "sintatico.tab.c"
    break;

  case 40:
#line 144 "sintatico.y"
                                                   {}
#line 1807 "sintatico.tab.c"
    break;

  case 41:
#line 145 "sintatico.y"
                                               {}
#line 1813 "sintatico.tab.c"
    break;

  case 42:
#line 146 "sintatico.y"
                              {}
#line 1819 "sintatico.tab.c"
    break;

  case 43:
#line 147 "sintatico.y"
                    {}
#line 1825 "sintatico.tab.c"
    break;

  case 44:
#line 148 "sintatico.y"
                {}
#line 1831 "sintatico.tab.c"
    break;

  case 45:
#line 150 "sintatico.y"
                               {}
#line 1837 "sintatico.tab.c"
    break;

  case 46:
#line 151 "sintatico.y"
          {}
#line 1843 "sintatico.tab.c"
    break;

  case 47:
#line 153 "sintatico.y"
                               {}
#line 1849 "sintatico.tab.c"
    break;

  case 48:
#line 154 "sintatico.y"
          {}
#line 1855 "sintatico.tab.c"
    break;

  case 49:
#line 156 "sintatico.y"
                                     {}
#line 1861 "sintatico.tab.c"
    break;

  case 50:
#line 157 "sintatico.y"
          {}
#line 1867 "sintatico.tab.c"
    break;

  case 51:
#line 159 "sintatico.y"
                                      {}
#line 1873 "sintatico.tab.c"
    break;

  case 52:
#line 161 "sintatico.y"
                                                {}
#line 1879 "sintatico.tab.c"
    break;

  case 53:
#line 162 "sintatico.y"
          {}
#line 1885 "sintatico.tab.c"
    break;

  case 54:
#line 164 "sintatico.y"
                             {}
#line 1891 "sintatico.tab.c"
    break;

  case 55:
#line 165 "sintatico.y"
                                                      {}
#line 1897 "sintatico.tab.c"
    break;

  case 56:
#line 167 "sintatico.y"
                         {}
#line 1903 "sintatico.tab.c"
    break;

  case 57:
#line 168 "sintatico.y"
                     {}
#line 1909 "sintatico.tab.c"
    break;

  case 58:
#line 169 "sintatico.y"
                       {}
#line 1915 "sintatico.tab.c"
    break;

  case 59:
#line 171 "sintatico.y"
                                                      {}
#line 1921 "sintatico.tab.c"
    break;

  case 60:
#line 173 "sintatico.y"
                                                                     {}
#line 1927 "sintatico.tab.c"
    break;

  case 61:
#line 174 "sintatico.y"
          {}
#line 1933 "sintatico.tab.c"
    break;

  case 62:
#line 176 "sintatico.y"
                                                               {}
#line 1939 "sintatico.tab.c"
    break;

  case 63:
#line 178 "sintatico.y"
                                                                              {}
#line 1945 "sintatico.tab.c"
    break;

  case 64:
#line 179 "sintatico.y"
          {}
#line 1951 "sintatico.tab.c"
    break;

  case 65:
#line 181 "sintatico.y"
                                                          {}
#line 1957 "sintatico.tab.c"
    break;

  case 66:
#line 183 "sintatico.y"
                                                                          {}
#line 1963 "sintatico.tab.c"
    break;

  case 67:
#line 184 "sintatico.y"
          {}
#line 1969 "sintatico.tab.c"
    break;

  case 68:
#line 186 "sintatico.y"
                                             {}
#line 1975 "sintatico.tab.c"
    break;

  case 69:
#line 188 "sintatico.y"
                                                            {}
#line 1981 "sintatico.tab.c"
    break;

  case 70:
#line 189 "sintatico.y"
          {}
#line 1987 "sintatico.tab.c"
    break;

  case 71:
#line 191 "sintatico.y"
                                               {}
#line 1993 "sintatico.tab.c"
    break;

  case 72:
#line 193 "sintatico.y"
                                                               {}
#line 1999 "sintatico.tab.c"
    break;

  case 73:
#line 194 "sintatico.y"
          {}
#line 2005 "sintatico.tab.c"
    break;

  case 74:
#line 196 "sintatico.y"
                                                 {}
#line 2011 "sintatico.tab.c"
    break;

  case 75:
#line 198 "sintatico.y"
                                                                 {}
#line 2017 "sintatico.tab.c"
    break;

  case 76:
#line 199 "sintatico.y"
          {}
#line 2023 "sintatico.tab.c"
    break;

  case 77:
#line 201 "sintatico.y"
                                                     {}
#line 2029 "sintatico.tab.c"
    break;

  case 78:
#line 203 "sintatico.y"
                                                               {}
#line 2035 "sintatico.tab.c"
    break;

  case 79:
#line 204 "sintatico.y"
                                                        {}
#line 2041 "sintatico.tab.c"
    break;

  case 80:
#line 205 "sintatico.y"
          {}
#line 2047 "sintatico.tab.c"
    break;

  case 81:
#line 207 "sintatico.y"
                                                     {}
#line 2053 "sintatico.tab.c"
    break;

  case 82:
#line 209 "sintatico.y"
                                                                   {}
#line 2059 "sintatico.tab.c"
    break;

  case 83:
#line 210 "sintatico.y"
                                                         {}
#line 2065 "sintatico.tab.c"
    break;

  case 84:
#line 211 "sintatico.y"
                                                           {}
#line 2071 "sintatico.tab.c"
    break;

  case 85:
#line 212 "sintatico.y"
                                                            {}
#line 2077 "sintatico.tab.c"
    break;

  case 86:
#line 213 "sintatico.y"
          {}
#line 2083 "sintatico.tab.c"
    break;

  case 87:
#line 215 "sintatico.y"
                                                   {}
#line 2089 "sintatico.tab.c"
    break;

  case 88:
#line 217 "sintatico.y"
                                                               {}
#line 2095 "sintatico.tab.c"
    break;

  case 89:
#line 218 "sintatico.y"
                                                    {}
#line 2101 "sintatico.tab.c"
    break;

  case 90:
#line 219 "sintatico.y"
          {}
#line 2107 "sintatico.tab.c"
    break;

  case 91:
#line 221 "sintatico.y"
                                                 {}
#line 2113 "sintatico.tab.c"
    break;

  case 92:
#line 223 "sintatico.y"
                                                          {}
#line 2119 "sintatico.tab.c"
    break;

  case 93:
#line 224 "sintatico.y"
                                                  {}
#line 2125 "sintatico.tab.c"
    break;

  case 94:
#line 225 "sintatico.y"
          {}
#line 2131 "sintatico.tab.c"
    break;

  case 95:
#line 227 "sintatico.y"
                                                    {}
#line 2137 "sintatico.tab.c"
    break;

  case 96:
#line 229 "sintatico.y"
                                                                 {}
#line 2143 "sintatico.tab.c"
    break;

  case 97:
#line 230 "sintatico.y"
                                                 {}
#line 2149 "sintatico.tab.c"
    break;

  case 98:
#line 231 "sintatico.y"
                                                       {}
#line 2155 "sintatico.tab.c"
    break;

  case 99:
#line 232 "sintatico.y"
          {}
#line 2161 "sintatico.tab.c"
    break;

  case 100:
#line 234 "sintatico.y"
                              {}
#line 2167 "sintatico.tab.c"
    break;

  case 101:
#line 235 "sintatico.y"
                                                        {}
#line 2173 "sintatico.tab.c"
    break;

  case 102:
#line 237 "sintatico.y"
                               {}
#line 2179 "sintatico.tab.c"
    break;

  case 103:
#line 238 "sintatico.y"
                            {}
#line 2185 "sintatico.tab.c"
    break;

  case 104:
#line 239 "sintatico.y"
                            {}
#line 2191 "sintatico.tab.c"
    break;

  case 105:
#line 240 "sintatico.y"
                                     {}
#line 2197 "sintatico.tab.c"
    break;

  case 106:
#line 241 "sintatico.y"
                                  {}
#line 2203 "sintatico.tab.c"
    break;

  case 107:
#line 242 "sintatico.y"
                              {}
#line 2209 "sintatico.tab.c"
    break;

  case 108:
#line 243 "sintatico.y"
                               {}
#line 2215 "sintatico.tab.c"
    break;

  case 109:
#line 244 "sintatico.y"
                                     {}
#line 2221 "sintatico.tab.c"
    break;

  case 110:
#line 245 "sintatico.y"
                             {}
#line 2227 "sintatico.tab.c"
    break;

  case 111:
#line 247 "sintatico.y"
                                {}
#line 2233 "sintatico.tab.c"
    break;

  case 112:
#line 248 "sintatico.y"
                                              {}
#line 2239 "sintatico.tab.c"
    break;

  case 113:
#line 250 "sintatico.y"
                                                                 {}
#line 2245 "sintatico.tab.c"
    break;

  case 114:
#line 251 "sintatico.y"
              {}
#line 2251 "sintatico.tab.c"
    break;

  case 115:
#line 252 "sintatico.y"
              {}
#line 2257 "sintatico.tab.c"
    break;

  case 116:
#line 253 "sintatico.y"
                                               {}
#line 2263 "sintatico.tab.c"
    break;

  case 117:
#line 255 "sintatico.y"
                                                        {}
#line 2269 "sintatico.tab.c"
    break;

  case 118:
#line 256 "sintatico.y"
          {}
#line 2275 "sintatico.tab.c"
    break;

  case 119:
#line 258 "sintatico.y"
                                                 {}
#line 2281 "sintatico.tab.c"
    break;

  case 120:
#line 259 "sintatico.y"
          {}
#line 2287 "sintatico.tab.c"
    break;

  case 121:
#line 261 "sintatico.y"
                           {}
#line 2293 "sintatico.tab.c"
    break;

  case 122:
#line 262 "sintatico.y"
                 {}
#line 2299 "sintatico.tab.c"
    break;

  case 123:
#line 263 "sintatico.y"
                    {}
#line 2305 "sintatico.tab.c"
    break;

  case 124:
#line 264 "sintatico.y"
                 {}
#line 2311 "sintatico.tab.c"
    break;

  case 125:
#line 265 "sintatico.y"
                                    {}
#line 2317 "sintatico.tab.c"
    break;

  case 126:
#line 267 "sintatico.y"
                    {}
#line 2323 "sintatico.tab.c"
    break;

  case 127:
#line 268 "sintatico.y"
                   {}
#line 2329 "sintatico.tab.c"
    break;

  case 128:
#line 269 "sintatico.y"
                    {}
#line 2335 "sintatico.tab.c"
    break;


#line 2339 "sintatico.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 271 "sintatico.y"


void yyerror(char *s){
        if (yychar == ERROR_LEXICAL){
                printf("error:lexical:%d:%d: %s", lines, chars, yytext);
        }
        else if (yychar == EOF_){
                printf("error:syntax:%d:%d: expected declaration or statement at end of input\n", lines, chars);
        }
        else{
                int column = chars - strlen(yytext);
                printf("error:syntax:%d:%d: %s\n", lines, column, yytext);
                imprimeErro(lines);
                imprimeCursor(column);

        }
}

void imprimeErro(int linha){
        int i=1;
	char lido;

        
	fseek(stdin, 0, SEEK_SET);

	while(i < linha){
		lido = fgetc(stdin);
		if(lido == 10){
                        i++;
                }
		if(lido == EOF){
                        break;
                }
	}

	lido = fgetc(stdin);
	while(lido != 10 && lido != EOF){
		printf("%c", lido);
		lido = fgetc(stdin);
	}
}

void imprimeCursor (int coluna){
        int i;

        printf("\n");
        for(i=1;i<coluna;i++){
                printf(" ");
        }
	printf("^");
}

int main (int argc, char **argv){
        yyparse();
}