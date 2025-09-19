/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with EVAL_ or eval_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with eval or EVAL, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define EVALBISON 30802

/* Bison version string.  */
#define EVALBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define EVALSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define EVALPURE 2

/* Push parsers.  */
#define EVALPUSH 0

/* Pull parsers.  */
#define EVALPULL 1

/* "%code top" blocks.  */
#line 5 "../eval/eval.y"

  #include <stdio.h>

#line 72 "C:\\Users\\carlo\\Documents\\Escritorio\\BisonFlexMultipleParsers\\both\\eval.tab.c"




# ifndef EVAL_CAST
#  ifdef __cplusplus
#   define EVAL_CAST(Type, Val) static_cast<Type> (Val)
#   define EVAL_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define EVAL_CAST(Type, Val) ((Type) (Val))
#   define EVAL_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef EVAL_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define EVAL_NULLPTR nullptr
#   else
#    define EVAL_NULLPTR 0
#   endif
#  else
#   define EVAL_NULLPTR ((void*)0)
#  endif
# endif

#include "eval.tab.h"
/* Symbol kind.  */
enum evalsymbol_kind_t
{
  EVALSYMBOL_EVALEMPTY = -2,
  EVALSYMBOL_EVALEOF = 0,                      /* "end of file"  */
  EVALSYMBOL_EVALerror = 1,                    /* error  */
  EVALSYMBOL_EVALUNDEF = 2,                    /* "invalid token"  */
  EVALSYMBOL_NUMBER = 3,                     /* NUMBER  */
  EVALSYMBOL_UNOP = 4,                       /* UNOP  */
  EVALSYMBOL_5_ = 5,                         /* '+'  */
  EVALSYMBOL_6_ = 6,                         /* '-'  */
  EVALSYMBOL_7_ = 7,                         /* '*'  */
  EVALSYMBOL_8_ = 8,                         /* '/'  */
  EVALSYMBOL_9_ = 9,                         /* '%'  */
  EVALSYMBOL_10_n_ = 10,                     /* '\n'  */
  EVALSYMBOL_11_ = 11,                       /* '('  */
  EVALSYMBOL_12_ = 12,                       /* ')'  */
  EVALSYMBOL_EVALACCEPT = 13,                  /* $accept  */
  EVALSYMBOL_input = 14,                     /* input  */
  EVALSYMBOL_expr = 15                       /* expr  */
};
typedef enum evalsymbol_kind_t evalsymbol_kind_t;



/* Unqualified %code blocks.  */
#line 11 "../eval/eval.y"

  int evallex(EVALSTYPE* evallvalp, EVALLTYPE* evalllocp, evalscan_t scanner);
  void evalerror(EVALLTYPE* evalllocp, evalscan_t unused, const char* msg);

#line 130 "C:\\Users\\carlo\\Documents\\Escritorio\\BisonFlexMultipleParsers\\both\\eval.tab.c"

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
#  define EVAL_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ evaltype_int8;
#elif defined EVAL_STDINT_H
typedef int_least8_t evaltype_int8;
#else
typedef signed char evaltype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ evaltype_int16;
#elif defined EVAL_STDINT_H
typedef int_least16_t evaltype_int16;
#else
typedef short evaltype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ evaltype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined EVAL_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t evaltype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char evaltype_uint8;
#else
typedef short evaltype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ evaltype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined EVAL_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t evaltype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short evaltype_uint16;
#else
typedef int evaltype_uint16;
#endif

#ifndef EVALPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define EVALPTRDIFF_T __PTRDIFF_TYPE__
#  define EVALPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define EVALPTRDIFF_T ptrdiff_t
#  define EVALPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define EVALPTRDIFF_T long
#  define EVALPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef EVALSIZE_T
# ifdef __SIZE_TYPE__
#  define EVALSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define EVALSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define EVALSIZE_T size_t
# else
#  define EVALSIZE_T unsigned
# endif
#endif

#define EVALSIZE_MAXIMUM                                  \
  EVAL_CAST (EVALPTRDIFF_T,                                 \
           (EVALPTRDIFF_MAXIMUM < EVAL_CAST (EVALSIZE_T, -1)  \
            ? EVALPTRDIFF_MAXIMUM                         \
            : EVAL_CAST (EVALSIZE_T, -1)))

#define EVALSIZEOF(X) EVAL_CAST (EVALPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef evaltype_int8 eval_state_t;

/* State numbers in computations.  */
typedef int eval_state_fast_t;

#ifndef EVAL_
# if defined EVALENABLE_NLS && EVALENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define EVAL_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef EVAL_
#  define EVAL_(Msgid) Msgid
# endif
#endif


#ifndef EVAL_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define EVAL_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define EVAL_ATTRIBUTE_PURE
# endif
#endif

#ifndef EVAL_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define EVAL_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define EVAL_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define EVAL_USE(E) ((void) (E))
#else
# define EVAL_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about evallval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define EVAL_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define EVAL_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define EVAL_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define EVAL_INITIAL_VALUE(Value) Value
#endif
#ifndef EVAL_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define EVAL_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define EVAL_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef EVAL_INITIAL_VALUE
# define EVAL_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define EVAL_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define EVAL_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef EVAL_IGNORE_USELESS_CAST_BEGIN
# define EVAL_IGNORE_USELESS_CAST_BEGIN
# define EVAL_IGNORE_USELESS_CAST_END
#endif


#define EVAL_ASSERT(E) ((void) (0 && (E)))

#if !defined evaloverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef EVALSTACK_USE_ALLOCA
#  if EVALSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define EVALSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define EVALSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define EVALSTACK_ALLOC alloca
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

# ifdef EVALSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define EVALSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef EVALSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define EVALSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define EVALSTACK_ALLOC EVALMALLOC
#  define EVALSTACK_FREE EVALFREE
#  ifndef EVALSTACK_ALLOC_MAXIMUM
#   define EVALSTACK_ALLOC_MAXIMUM EVALSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined EVALMALLOC || defined malloc) \
             && (defined EVALFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef EVALMALLOC
#   define EVALMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (EVALSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef EVALFREE
#   define EVALFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined evaloverflow */

#if (! defined evaloverflow \
     && (! defined __cplusplus \
         || (defined EVALLTYPE_IS_TRIVIAL && EVALLTYPE_IS_TRIVIAL \
             && defined EVALSTYPE_IS_TRIVIAL && EVALSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union evalalloc
{
  eval_state_t evalss_alloc;
  EVALSTYPE evalvs_alloc;
  EVALLTYPE evalls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define EVALSTACK_GAP_MAXIMUM (EVALSIZEOF (union evalalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define EVALSTACK_BYTES(N) \
     ((N) * (EVALSIZEOF (eval_state_t) + EVALSIZEOF (EVALSTYPE) \
             + EVALSIZEOF (EVALLTYPE)) \
      + 2 * EVALSTACK_GAP_MAXIMUM)

# define EVALCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables EVALSIZE and EVALSTACKSIZE give the old and new number of
   elements in the stack, and EVALPTR gives the new location of the
   stack.  Advance EVALPTR to a properly aligned location for the next
   stack.  */
# define EVALSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        EVALPTRDIFF_T evalnewbytes;                                         \
        EVALCOPY (&evalptr->Stack_alloc, Stack, evalsize);                    \
        Stack = &evalptr->Stack_alloc;                                    \
        evalnewbytes = evalstacksize * EVALSIZEOF (*Stack) + EVALSTACK_GAP_MAXIMUM; \
        evalptr += evalnewbytes / EVALSIZEOF (*evalptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined EVALCOPY_NEEDED && EVALCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef EVALCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define EVALCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, EVAL_CAST (EVALSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define EVALCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          EVALPTRDIFF_T evali;                      \
          for (evali = 0; evali < (Count); evali++)   \
            (Dst)[evali] = (Src)[evali];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !EVALCOPY_NEEDED */

/* EVALFINAL -- State number of the termination state.  */
#define EVALFINAL  2
/* EVALLAST -- Last index in EVALTABLE.  */
#define EVALLAST   38

/* EVALNTOKENS -- Number of terminals.  */
#define EVALNTOKENS  13
/* EVALNNTS -- Number of nonterminals.  */
#define EVALNNTS  3
/* EVALNRULES -- Number of rules.  */
#define EVALNRULES  13
/* EVALNSTATES -- Number of states.  */
#define EVALNSTATES  24

/* EVALMAXUTOK -- Last valid token kind.  */
#define EVALMAXUTOK   259


/* EVALTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by evallex, with out-of-bounds checking.  */
#define EVALTRANSLATE(EVALX)                                \
  (0 <= (EVALX) && (EVALX) <= EVALMAXUTOK                     \
   ? EVAL_CAST (evalsymbol_kind_t, evaltranslate[EVALX])        \
   : EVALSYMBOL_EVALUNDEF)

/* EVALTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by evallex.  */
static const evaltype_int8 evaltranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      10,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     9,     2,     2,
      11,    12,     7,     5,     2,     6,     2,     8,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4
};

#if EVALDEBUG
/* EVALRLINE[EVALN] -- Source line where rule number EVALN was defined.  */
static const evaltype_int8 evalrline[] =
{
       0,    21,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32
};
#endif

/** Accessing symbol of state STATE.  */
#define EVAL_ACCESSING_SYMBOL(State) EVAL_CAST (evalsymbol_kind_t, evalstos[State])

#if EVALDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   EVALSYMBOL.  No bounds checking.  */
static const char *evalsymbol_name (evalsymbol_kind_t evalsymbol) EVAL_ATTRIBUTE_UNUSED;

/* EVALTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at EVALNTOKENS, nonterminals.  */
static const char *const evaltname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUMBER", "UNOP",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'\\n'", "'('", "')'", "$accept",
  "input", "expr", EVAL_NULLPTR
};

static const char *
evalsymbol_name (evalsymbol_kind_t evalsymbol)
{
  return evaltname[evalsymbol];
}
#endif

#define EVALPACT_NINF (-10)

#define evalpact_value_is_default(Yyn) \
  ((Yyn) == EVALPACT_NINF)

#define EVALTABLE_NINF (-1)

#define evaltable_value_is_error(Yyn) \
  0

/* EVALPACT[STATE-NUM] -- Index in EVALTABLE of the portion describing
   STATE-NUM.  */
static const evaltype_int8 evalpact[] =
{
     -10,    12,   -10,    -9,   -10,    13,   -10,    13,    28,   -10,
     -10,    20,    13,    13,    13,    13,    13,   -10,   -10,    -4,
      -4,   -10,   -10,   -10
};

/* EVALDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when EVALTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const evaltype_int8 evaldefact[] =
{
       2,     0,     1,     0,     6,     0,     4,     0,     0,     5,
       8,     0,     0,     0,     0,     0,     0,     3,     7,     9,
      10,    11,    12,    13
};

/* EVALPGOTO[NTERM-NUM].  */
static const evaltype_int8 evalpgoto[] =
{
     -10,   -10,    -5
};

/* EVALDEFGOTO[NTERM-NUM].  */
static const evaltype_int8 evaldefgoto[] =
{
       0,     1,     8
};

/* EVALTABLE[EVALPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If EVALTABLE_NINF, syntax error.  */
static const evaltype_int8 evaltable[] =
{
      10,     9,    11,    14,    15,    16,     0,    19,    20,    21,
      22,    23,     2,     3,     0,     4,     4,     0,     5,     5,
       0,     0,     6,     7,     7,    12,    13,    14,    15,    16,
       0,     0,    18,    12,    13,    14,    15,    16,    17
};

static const evaltype_int8 evalcheck[] =
{
       5,    10,     7,     7,     8,     9,    -1,    12,    13,    14,
      15,    16,     0,     1,    -1,     3,     3,    -1,     6,     6,
      -1,    -1,    10,    11,    11,     5,     6,     7,     8,     9,
      -1,    -1,    12,     5,     6,     7,     8,     9,    10
};

/* EVALSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const evaltype_int8 evalstos[] =
{
       0,    14,     0,     1,     3,     6,    10,    11,    15,    10,
      15,    15,     5,     6,     7,     8,     9,    10,    12,    15,
      15,    15,    15,    15
};

/* EVALR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const evaltype_int8 evalr1[] =
{
       0,    13,    14,    14,    14,    14,    15,    15,    15,    15,
      15,    15,    15,    15
};

/* EVALR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const evaltype_int8 evalr2[] =
{
       0,     2,     0,     3,     2,     3,     1,     3,     2,     3,
       3,     3,     3,     3
};


enum { EVALENOMEM = -2 };

#define evalerrok         (evalerrstatus = 0)
#define evalclearin       (evalchar = EVALEMPTY)

#define EVALACCEPT        goto evalacceptlab
#define EVALABORT         goto evalabortlab
#define EVALERROR         goto evalerrorlab
#define EVALNOMEM         goto evalexhaustedlab


#define EVALRECOVERING()  (!!evalerrstatus)

#define EVALBACKUP(Token, Value)                                    \
  do                                                              \
    if (evalchar == EVALEMPTY)                                        \
      {                                                           \
        evalchar = (Token);                                         \
        evallval = (Value);                                         \
        EVALPOPSTACK (evallen);                                       \
        evalstate = *evalssp;                                         \
        goto evalbackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        evalerror (&evallloc, scanner, EVAL_("syntax error: cannot back up")); \
        EVALERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use EVALerror or EVALUNDEF. */
#define EVALERRCODE EVALUNDEF

/* EVALLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef EVALLLOC_DEFAULT
# define EVALLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = EVALRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = EVALRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = EVALRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = EVALRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            EVALRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            EVALRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define EVALRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if EVALDEBUG

# ifndef EVALFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define EVALFPRINTF fprintf
# endif

# define EVALDPRINTF(Args)                        \
do {                                            \
  if (evaldebug)                                  \
    EVALFPRINTF Args;                             \
} while (0)


/* EVALLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef EVALLOCATION_PRINT

#  if defined EVAL_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private EVAL_LOCATION_PRINT macros.  */
#   define EVALLOCATION_PRINT(File, Loc)  EVAL_LOCATION_PRINT(File, *(Loc))

#  elif defined EVALLTYPE_IS_TRIVIAL && EVALLTYPE_IS_TRIVIAL

/* Print *EVALLOCP on EVALO.  Private, do not rely on its existence. */

EVAL_ATTRIBUTE_UNUSED
static int
eval_location_print_ (FILE *evalo, EVALLTYPE const * const evallocp)
{
  int res = 0;
  int end_col = 0 != evallocp->last_column ? evallocp->last_column - 1 : 0;
  if (0 <= evallocp->first_line)
    {
      res += EVALFPRINTF (evalo, "%d", evallocp->first_line);
      if (0 <= evallocp->first_column)
        res += EVALFPRINTF (evalo, ".%d", evallocp->first_column);
    }
  if (0 <= evallocp->last_line)
    {
      if (evallocp->first_line < evallocp->last_line)
        {
          res += EVALFPRINTF (evalo, "-%d", evallocp->last_line);
          if (0 <= end_col)
            res += EVALFPRINTF (evalo, ".%d", end_col);
        }
      else if (0 <= end_col && evallocp->first_column < end_col)
        res += EVALFPRINTF (evalo, "-%d", end_col);
    }
  return res;
}

#   define EVALLOCATION_PRINT  eval_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private EVAL_LOCATION_PRINT macros.  */
#   define EVAL_LOCATION_PRINT(File, Loc)  EVALLOCATION_PRINT(File, &(Loc))

#  else

#   define EVALLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private EVAL_LOCATION_PRINT macros.  */
#   define EVAL_LOCATION_PRINT  EVALLOCATION_PRINT

#  endif
# endif /* !defined EVALLOCATION_PRINT */


# define EVAL_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (evaldebug)                                                            \
    {                                                                     \
      EVALFPRINTF (stderr, "%s ", Title);                                   \
      eval_symbol_print (stderr,                                            \
                  Kind, Value, Location, scanner); \
      EVALFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on EVALO.  |
`-----------------------------------*/

static void
eval_symbol_value_print (FILE *evalo,
                       evalsymbol_kind_t evalkind, EVALSTYPE const * const evalvaluep, EVALLTYPE const * const evallocationp, evalscan_t scanner)
{
  FILE *evaloutput = evalo;
  EVAL_USE (evaloutput);
  EVAL_USE (evallocationp);
  EVAL_USE (scanner);
  if (!evalvaluep)
    return;
  EVAL_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  EVAL_USE (evalkind);
  EVAL_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on EVALO.  |
`---------------------------*/

static void
eval_symbol_print (FILE *evalo,
                 evalsymbol_kind_t evalkind, EVALSTYPE const * const evalvaluep, EVALLTYPE const * const evallocationp, evalscan_t scanner)
{
  EVALFPRINTF (evalo, "%s %s (",
             evalkind < EVALNTOKENS ? "token" : "nterm", evalsymbol_name (evalkind));

  EVALLOCATION_PRINT (evalo, evallocationp);
  EVALFPRINTF (evalo, ": ");
  eval_symbol_value_print (evalo, evalkind, evalvaluep, evallocationp, scanner);
  EVALFPRINTF (evalo, ")");
}

/*------------------------------------------------------------------.
| eval_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
eval_stack_print (eval_state_t *evalbottom, eval_state_t *evaltop)
{
  EVALFPRINTF (stderr, "Stack now");
  for (; evalbottom <= evaltop; evalbottom++)
    {
      int evalbot = *evalbottom;
      EVALFPRINTF (stderr, " %d", evalbot);
    }
  EVALFPRINTF (stderr, "\n");
}

# define EVAL_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (evaldebug)                                                  \
    eval_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the EVALRULE is going to be reduced.  |
`------------------------------------------------*/

static void
eval_reduce_print (eval_state_t *evalssp, EVALSTYPE *evalvsp, EVALLTYPE *evallsp,
                 int evalrule, evalscan_t scanner)
{
  int evallno = evalrline[evalrule];
  int evalnrhs = evalr2[evalrule];
  int evali;
  EVALFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             evalrule - 1, evallno);
  /* The symbols being reduced.  */
  for (evali = 0; evali < evalnrhs; evali++)
    {
      EVALFPRINTF (stderr, "   $%d = ", evali + 1);
      eval_symbol_print (stderr,
                       EVAL_ACCESSING_SYMBOL (+evalssp[evali + 1 - evalnrhs]),
                       &evalvsp[(evali + 1) - (evalnrhs)],
                       &(evallsp[(evali + 1) - (evalnrhs)]), scanner);
      EVALFPRINTF (stderr, "\n");
    }
}

# define EVAL_REDUCE_PRINT(Rule)          \
do {                                    \
  if (evaldebug)                          \
    eval_reduce_print (evalssp, evalvsp, evallsp, Rule, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int evaldebug;
#else /* !EVALDEBUG */
# define EVALDPRINTF(Args) ((void) 0)
# define EVAL_SYMBOL_PRINT(Title, Kind, Value, Location)
# define EVAL_STACK_PRINT(Bottom, Top)
# define EVAL_REDUCE_PRINT(Rule)
#endif /* !EVALDEBUG */


/* EVALINITDEPTH -- initial size of the parser's stacks.  */
#ifndef EVALINITDEPTH
# define EVALINITDEPTH 200
#endif

/* EVALMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   EVALSTACK_ALLOC_MAXIMUM < EVALSTACK_BYTES (EVALMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef EVALMAXDEPTH
# define EVALMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
evaldestruct (const char *evalmsg,
            evalsymbol_kind_t evalkind, EVALSTYPE *evalvaluep, EVALLTYPE *evallocationp, evalscan_t scanner)
{
  EVAL_USE (evalvaluep);
  EVAL_USE (evallocationp);
  EVAL_USE (scanner);
  if (!evalmsg)
    evalmsg = "Deleting";
  EVAL_SYMBOL_PRINT (evalmsg, evalkind, evalvaluep, evallocationp);

  EVAL_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  EVAL_USE (evalkind);
  EVAL_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| evalparse.  |
`----------*/

int
evalparse (evalscan_t scanner)
{
/* Lookahead token kind.  */
int evalchar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
EVAL_INITIAL_VALUE (static EVALSTYPE evalval_default;)
EVALSTYPE evallval EVAL_INITIAL_VALUE (= evalval_default);

/* Location data for the lookahead symbol.  */
static EVALLTYPE evalloc_default
# if defined EVALLTYPE_IS_TRIVIAL && EVALLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
EVALLTYPE evallloc = evalloc_default;

    /* Number of syntax errors so far.  */
    int evalnerrs = 0;

    eval_state_fast_t evalstate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int evalerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow evaloverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    EVALPTRDIFF_T evalstacksize = EVALINITDEPTH;

    /* The state stack: array, bottom, top.  */
    eval_state_t evalssa[EVALINITDEPTH];
    eval_state_t *evalss = evalssa;
    eval_state_t *evalssp = evalss;

    /* The semantic value stack: array, bottom, top.  */
    EVALSTYPE evalvsa[EVALINITDEPTH];
    EVALSTYPE *evalvs = evalvsa;
    EVALSTYPE *evalvsp = evalvs;

    /* The location stack: array, bottom, top.  */
    EVALLTYPE evallsa[EVALINITDEPTH];
    EVALLTYPE *evalls = evallsa;
    EVALLTYPE *evallsp = evalls;

  int evaln;
  /* The return value of evalparse.  */
  int evalresult;
  /* Lookahead symbol kind.  */
  evalsymbol_kind_t evaltoken = EVALSYMBOL_EVALEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  EVALSTYPE evalval;
  EVALLTYPE evalloc;

  /* The locations where the error started and ended.  */
  EVALLTYPE evalerror_range[3];



#define EVALPOPSTACK(N)   (evalvsp -= (N), evalssp -= (N), evallsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int evallen = 0;

  EVALDPRINTF ((stderr, "Starting parse\n"));

  evalchar = EVALEMPTY; /* Cause a token to be read.  */

  evallsp[0] = evallloc;
  goto evalsetstate;


/*------------------------------------------------------------.
| evalnewstate -- push a new state, which is found in evalstate.  |
`------------------------------------------------------------*/
evalnewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  evalssp++;


/*--------------------------------------------------------------------.
| evalsetstate -- set current state (the top of the stack) to evalstate.  |
`--------------------------------------------------------------------*/
evalsetstate:
  EVALDPRINTF ((stderr, "Entering state %d\n", evalstate));
  EVAL_ASSERT (0 <= evalstate && evalstate < EVALNSTATES);
  EVAL_IGNORE_USELESS_CAST_BEGIN
  *evalssp = EVAL_CAST (eval_state_t, evalstate);
  EVAL_IGNORE_USELESS_CAST_END
  EVAL_STACK_PRINT (evalss, evalssp);

  if (evalss + evalstacksize - 1 <= evalssp)
#if !defined evaloverflow && !defined EVALSTACK_RELOCATE
    EVALNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      EVALPTRDIFF_T evalsize = evalssp - evalss + 1;

# if defined evaloverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        eval_state_t *evalss1 = evalss;
        EVALSTYPE *evalvs1 = evalvs;
        EVALLTYPE *evalls1 = evalls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if evaloverflow is a macro.  */
        evaloverflow (EVAL_("memory exhausted"),
                    &evalss1, evalsize * EVALSIZEOF (*evalssp),
                    &evalvs1, evalsize * EVALSIZEOF (*evalvsp),
                    &evalls1, evalsize * EVALSIZEOF (*evallsp),
                    &evalstacksize);
        evalss = evalss1;
        evalvs = evalvs1;
        evalls = evalls1;
      }
# else /* defined EVALSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (EVALMAXDEPTH <= evalstacksize)
        EVALNOMEM;
      evalstacksize *= 2;
      if (EVALMAXDEPTH < evalstacksize)
        evalstacksize = EVALMAXDEPTH;

      {
        eval_state_t *evalss1 = evalss;
        union evalalloc *evalptr =
          EVAL_CAST (union evalalloc *,
                   EVALSTACK_ALLOC (EVAL_CAST (EVALSIZE_T, EVALSTACK_BYTES (evalstacksize))));
        if (! evalptr)
          EVALNOMEM;
        EVALSTACK_RELOCATE (evalss_alloc, evalss);
        EVALSTACK_RELOCATE (evalvs_alloc, evalvs);
        EVALSTACK_RELOCATE (evalls_alloc, evalls);
#  undef EVALSTACK_RELOCATE
        if (evalss1 != evalssa)
          EVALSTACK_FREE (evalss1);
      }
# endif

      evalssp = evalss + evalsize - 1;
      evalvsp = evalvs + evalsize - 1;
      evallsp = evalls + evalsize - 1;

      EVAL_IGNORE_USELESS_CAST_BEGIN
      EVALDPRINTF ((stderr, "Stack size increased to %ld\n",
                  EVAL_CAST (long, evalstacksize)));
      EVAL_IGNORE_USELESS_CAST_END

      if (evalss + evalstacksize - 1 <= evalssp)
        EVALABORT;
    }
#endif /* !defined evaloverflow && !defined EVALSTACK_RELOCATE */


  if (evalstate == EVALFINAL)
    EVALACCEPT;

  goto evalbackup;


/*-----------.
| evalbackup.  |
`-----------*/
evalbackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  evaln = evalpact[evalstate];
  if (evalpact_value_is_default (evaln))
    goto evaldefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* EVALCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (evalchar == EVALEMPTY)
    {
      EVALDPRINTF ((stderr, "Reading a token\n"));
      evalchar = evallex (&evallval, &evallloc, scanner);
    }

  if (evalchar <= EVALEOF)
    {
      evalchar = EVALEOF;
      evaltoken = EVALSYMBOL_EVALEOF;
      EVALDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (evalchar == EVALerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      evalchar = EVALUNDEF;
      evaltoken = EVALSYMBOL_EVALerror;
      evalerror_range[1] = evallloc;
      goto evalerrlab1;
    }
  else
    {
      evaltoken = EVALTRANSLATE (evalchar);
      EVAL_SYMBOL_PRINT ("Next token is", evaltoken, &evallval, &evallloc);
    }

  /* If the proper action on seeing token EVALTOKEN is to reduce or to
     detect an error, take that action.  */
  evaln += evaltoken;
  if (evaln < 0 || EVALLAST < evaln || evalcheck[evaln] != evaltoken)
    goto evaldefault;
  evaln = evaltable[evaln];
  if (evaln <= 0)
    {
      if (evaltable_value_is_error (evaln))
        goto evalerrlab;
      evaln = -evaln;
      goto evalreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (evalerrstatus)
    evalerrstatus--;

  /* Shift the lookahead token.  */
  EVAL_SYMBOL_PRINT ("Shifting", evaltoken, &evallval, &evallloc);
  evalstate = evaln;
  EVAL_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++evalvsp = evallval;
  EVAL_IGNORE_MAYBE_UNINITIALIZED_END
  *++evallsp = evallloc;

  /* Discard the shifted token.  */
  evalchar = EVALEMPTY;
  goto evalnewstate;


/*-----------------------------------------------------------.
| evaldefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
evaldefault:
  evaln = evaldefact[evalstate];
  if (evaln == 0)
    goto evalerrlab;
  goto evalreduce;


/*-----------------------------.
| evalreduce -- do a reduction.  |
`-----------------------------*/
evalreduce:
  /* evaln is the number of a rule to reduce with.  */
  evallen = evalr2[evaln];

  /* If EVALLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets EVALVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to EVALVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that EVALVAL may be used uninitialized.  */
  evalval = evalvsp[1-evallen];

  /* Default location. */
  EVALLLOC_DEFAULT (evalloc, (evallsp - evallen), evallen);
  evalerror_range[1] = evalloc;
  EVAL_REDUCE_PRINT (evaln);
  switch (evaln)
    {
  case 3: /* input: input expr '\n'  */
#line 22 "../eval/eval.y"
                            { printf("[%d]: %d\n", (evallsp[-1]).first_line, evalvsp[-1]); }
#line 1212 "C:\\Users\\carlo\\Documents\\Escritorio\\BisonFlexMultipleParsers\\both\\eval.tab.c"
    break;

  case 5: /* input: input error '\n'  */
#line 24 "../eval/eval.y"
                            { evalerrok; }
#line 1218 "C:\\Users\\carlo\\Documents\\Escritorio\\BisonFlexMultipleParsers\\both\\eval.tab.c"
    break;

  case 7: /* expr: '(' expr ')'  */
#line 26 "../eval/eval.y"
                            { evalval = evalvsp[-1]; }
#line 1224 "C:\\Users\\carlo\\Documents\\Escritorio\\BisonFlexMultipleParsers\\both\\eval.tab.c"
    break;

  case 8: /* expr: '-' expr  */
#line 27 "../eval/eval.y"
                            { evalval = -evalvsp[0]; }
#line 1230 "C:\\Users\\carlo\\Documents\\Escritorio\\BisonFlexMultipleParsers\\both\\eval.tab.c"
    break;

  case 9: /* expr: expr '+' expr  */
#line 28 "../eval/eval.y"
                            { evalval = evalvsp[-2] + evalvsp[0]; }
#line 1236 "C:\\Users\\carlo\\Documents\\Escritorio\\BisonFlexMultipleParsers\\both\\eval.tab.c"
    break;

  case 10: /* expr: expr '-' expr  */
#line 29 "../eval/eval.y"
                            { evalval = evalvsp[-2] - evalvsp[0]; }
#line 1242 "C:\\Users\\carlo\\Documents\\Escritorio\\BisonFlexMultipleParsers\\both\\eval.tab.c"
    break;

  case 11: /* expr: expr '*' expr  */
#line 30 "../eval/eval.y"
                            { evalval = evalvsp[-2] * evalvsp[0]; }
#line 1248 "C:\\Users\\carlo\\Documents\\Escritorio\\BisonFlexMultipleParsers\\both\\eval.tab.c"
    break;

  case 12: /* expr: expr '/' expr  */
#line 31 "../eval/eval.y"
                            { evalval = evalvsp[-2] / evalvsp[0]; }
#line 1254 "C:\\Users\\carlo\\Documents\\Escritorio\\BisonFlexMultipleParsers\\both\\eval.tab.c"
    break;

  case 13: /* expr: expr '%' expr  */
#line 32 "../eval/eval.y"
                            { evalval = evalvsp[-2] % evalvsp[0]; }
#line 1260 "C:\\Users\\carlo\\Documents\\Escritorio\\BisonFlexMultipleParsers\\both\\eval.tab.c"
    break;


#line 1264 "C:\\Users\\carlo\\Documents\\Escritorio\\BisonFlexMultipleParsers\\both\\eval.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter evalchar, and that requires
     that evaltoken be updated with the new translation.  We take the
     approach of translating immediately before every use of evaltoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     EVALABORT, EVALACCEPT, or EVALERROR immediately after altering evalchar or
     if it invokes EVALBACKUP.  In the case of EVALABORT or EVALACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of EVALERROR or EVALBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  EVAL_SYMBOL_PRINT ("-> $$ =", EVAL_CAST (evalsymbol_kind_t, evalr1[evaln]), &evalval, &evalloc);

  EVALPOPSTACK (evallen);
  evallen = 0;

  *++evalvsp = evalval;
  *++evallsp = evalloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int evallhs = evalr1[evaln] - EVALNTOKENS;
    const int evali = evalpgoto[evallhs] + *evalssp;
    evalstate = (0 <= evali && evali <= EVALLAST && evalcheck[evali] == *evalssp
               ? evaltable[evali]
               : evaldefgoto[evallhs]);
  }

  goto evalnewstate;


/*--------------------------------------.
| evalerrlab -- here on detecting error.  |
`--------------------------------------*/
evalerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  evaltoken = evalchar == EVALEMPTY ? EVALSYMBOL_EVALEMPTY : EVALTRANSLATE (evalchar);
  /* If not already recovering from an error, report this error.  */
  if (!evalerrstatus)
    {
      ++evalnerrs;
      evalerror (&evallloc, scanner, EVAL_("syntax error"));
    }

  evalerror_range[1] = evallloc;
  if (evalerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (evalchar <= EVALEOF)
        {
          /* Return failure if at end of input.  */
          if (evalchar == EVALEOF)
            EVALABORT;
        }
      else
        {
          evaldestruct ("Error: discarding",
                      evaltoken, &evallval, &evallloc, scanner);
          evalchar = EVALEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto evalerrlab1;


/*---------------------------------------------------.
| evalerrorlab -- error raised explicitly by EVALERROR.  |
`---------------------------------------------------*/
evalerrorlab:
  /* Pacify compilers when the user code never invokes EVALERROR and the
     label evalerrorlab therefore never appears in user code.  */
  if (0)
    EVALERROR;
  ++evalnerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this EVALERROR.  */
  EVALPOPSTACK (evallen);
  evallen = 0;
  EVAL_STACK_PRINT (evalss, evalssp);
  evalstate = *evalssp;
  goto evalerrlab1;


/*-------------------------------------------------------------.
| evalerrlab1 -- common code for both syntax error and EVALERROR.  |
`-------------------------------------------------------------*/
evalerrlab1:
  evalerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      evaln = evalpact[evalstate];
      if (!evalpact_value_is_default (evaln))
        {
          evaln += EVALSYMBOL_EVALerror;
          if (0 <= evaln && evaln <= EVALLAST && evalcheck[evaln] == EVALSYMBOL_EVALerror)
            {
              evaln = evaltable[evaln];
              if (0 < evaln)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (evalssp == evalss)
        EVALABORT;

      evalerror_range[1] = *evallsp;
      evaldestruct ("Error: popping",
                  EVAL_ACCESSING_SYMBOL (evalstate), evalvsp, evallsp, scanner);
      EVALPOPSTACK (1);
      evalstate = *evalssp;
      EVAL_STACK_PRINT (evalss, evalssp);
    }

  EVAL_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++evalvsp = evallval;
  EVAL_IGNORE_MAYBE_UNINITIALIZED_END

  evalerror_range[2] = evallloc;
  ++evallsp;
  EVALLLOC_DEFAULT (*evallsp, evalerror_range, 2);

  /* Shift the error token.  */
  EVAL_SYMBOL_PRINT ("Shifting", EVAL_ACCESSING_SYMBOL (evaln), evalvsp, evallsp);

  evalstate = evaln;
  goto evalnewstate;


/*-------------------------------------.
| evalacceptlab -- EVALACCEPT comes here.  |
`-------------------------------------*/
evalacceptlab:
  evalresult = 0;
  goto evalreturnlab;


/*-----------------------------------.
| evalabortlab -- EVALABORT comes here.  |
`-----------------------------------*/
evalabortlab:
  evalresult = 1;
  goto evalreturnlab;


/*-----------------------------------------------------------.
| evalexhaustedlab -- EVALNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
evalexhaustedlab:
  evalerror (&evallloc, scanner, EVAL_("memory exhausted"));
  evalresult = 2;
  goto evalreturnlab;


/*----------------------------------------------------------.
| evalreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
evalreturnlab:
  if (evalchar != EVALEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      evaltoken = EVALTRANSLATE (evalchar);
      evaldestruct ("Cleanup: discarding lookahead",
                  evaltoken, &evallval, &evallloc, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this EVALABORT or EVALACCEPT.  */
  EVALPOPSTACK (evallen);
  EVAL_STACK_PRINT (evalss, evalssp);
  while (evalssp != evalss)
    {
      evaldestruct ("Cleanup: popping",
                  EVAL_ACCESSING_SYMBOL (+*evalssp), evalvsp, evallsp, scanner);
      EVALPOPSTACK (1);
    }
#ifndef evaloverflow
  if (evalss != evalssa)
    EVALSTACK_FREE (evalss);
#endif

  return evalresult;
}

#line 34 "../eval/eval.y"


void evalerror(EVALLTYPE* evalllocp, evalscan_t unused, const char* msg) {
  fprintf(stderr, "[%d:%d]: %s\n",
                  evalllocp->first_line, evalllocp->first_column, msg);
}
