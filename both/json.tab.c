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
   especially those whose name start with JSON_ or json_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with json or JSON, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define JSONBISON 30802

/* Bison version string.  */
#define JSONBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define JSONSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define JSONPURE 2

/* Push parsers.  */
#define JSONPUSH 0

/* Pull parsers.  */
#define JSONPULL 1

/* "%code top" blocks.  */
#line 5 "../json/json.y"

	#include <stdio.h>

#line 72 "C:\\Users\\carlo\\Documents\\Escritorio\\BisonFlexMultipleParsers\\both\\json.tab.c"




# ifndef JSON_CAST
#  ifdef __cplusplus
#   define JSON_CAST(Type, Val) static_cast<Type> (Val)
#   define JSON_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define JSON_CAST(Type, Val) ((Type) (Val))
#   define JSON_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef JSON_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define JSON_NULLPTR nullptr
#   else
#    define JSON_NULLPTR 0
#   endif
#  else
#   define JSON_NULLPTR ((void*)0)
#  endif
# endif

#include "json.tab.h"
/* Symbol kind.  */
enum jsonsymbol_kind_t
{
  JSONSYMBOL_JSONEMPTY = -2,
  JSONSYMBOL_JSONEOF = 0,                      /* "end of file"  */
  JSONSYMBOL_JSONerror = 1,                    /* error  */
  JSONSYMBOL_JSONUNDEF = 2,                    /* "invalid token"  */
  JSONSYMBOL_JSON_TOK_Comma = 3,             /* JSON_TOK_Comma  */
  JSONSYMBOL_JSON_TOK_Semicolon = 4,         /* JSON_TOK_Semicolon  */
  JSONSYMBOL_JSON_TOK_True = 5,              /* JSON_TOK_True  */
  JSONSYMBOL_JSON_TOK_False = 6,             /* JSON_TOK_False  */
  JSONSYMBOL_JSON_TOK_Null = 7,              /* JSON_TOK_Null  */
  JSONSYMBOL_JSON_TOK_Bracket0 = 8,          /* JSON_TOK_Bracket0  */
  JSONSYMBOL_JSON_TOK_Bracket1 = 9,          /* JSON_TOK_Bracket1  */
  JSONSYMBOL_JSON_TOK_Curly0 = 10,           /* JSON_TOK_Curly0  */
  JSONSYMBOL_JSON_TOK_Curly1 = 11,           /* JSON_TOK_Curly1  */
  JSONSYMBOL_JSON_TOK_String = 12,           /* JSON_TOK_String  */
  JSONSYMBOL_JSON_TOK_Number = 13,           /* JSON_TOK_Number  */
  JSONSYMBOL_JSON_TOK_Ws = 14,               /* JSON_TOK_Ws  */
  JSONSYMBOL_JSONACCEPT = 15,                  /* $accept  */
  JSONSYMBOL_json = 16,                      /* json  */
  JSONSYMBOL_value = 17,                     /* value  */
  JSONSYMBOL_object = 18,                    /* object  */
  JSONSYMBOL_members = 19,                   /* members  */
  JSONSYMBOL_member = 20,                    /* member  */
  JSONSYMBOL_array = 21,                     /* array  */
  JSONSYMBOL_elements = 22,                  /* elements  */
  JSONSYMBOL_element = 23,                   /* element  */
  JSONSYMBOL_ws = 24                         /* ws  */
};
typedef enum jsonsymbol_kind_t jsonsymbol_kind_t;



/* Unqualified %code blocks.  */
#line 11 "../json/json.y"

	int jsonlex(JSONSTYPE* jsonlvalp, JSONLTYPE* jsonllocp, jsonscan_t scanner);
	void jsonerror(JSONLTYPE* jsonllocp, jsonscan_t unused, const char* msg);

#line 139 "C:\\Users\\carlo\\Documents\\Escritorio\\BisonFlexMultipleParsers\\both\\json.tab.c"

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
#  define JSON_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ jsontype_int8;
#elif defined JSON_STDINT_H
typedef int_least8_t jsontype_int8;
#else
typedef signed char jsontype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ jsontype_int16;
#elif defined JSON_STDINT_H
typedef int_least16_t jsontype_int16;
#else
typedef short jsontype_int16;
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
typedef __UINT_LEAST8_TYPE__ jsontype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined JSON_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t jsontype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char jsontype_uint8;
#else
typedef short jsontype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ jsontype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined JSON_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t jsontype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short jsontype_uint16;
#else
typedef int jsontype_uint16;
#endif

#ifndef JSONPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define JSONPTRDIFF_T __PTRDIFF_TYPE__
#  define JSONPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define JSONPTRDIFF_T ptrdiff_t
#  define JSONPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define JSONPTRDIFF_T long
#  define JSONPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef JSONSIZE_T
# ifdef __SIZE_TYPE__
#  define JSONSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define JSONSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define JSONSIZE_T size_t
# else
#  define JSONSIZE_T unsigned
# endif
#endif

#define JSONSIZE_MAXIMUM                                  \
  JSON_CAST (JSONPTRDIFF_T,                                 \
           (JSONPTRDIFF_MAXIMUM < JSON_CAST (JSONSIZE_T, -1)  \
            ? JSONPTRDIFF_MAXIMUM                         \
            : JSON_CAST (JSONSIZE_T, -1)))

#define JSONSIZEOF(X) JSON_CAST (JSONPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef jsontype_int8 json_state_t;

/* State numbers in computations.  */
typedef int json_state_fast_t;

#ifndef JSON_
# if defined JSONENABLE_NLS && JSONENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define JSON_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef JSON_
#  define JSON_(Msgid) Msgid
# endif
#endif


#ifndef JSON_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define JSON_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define JSON_ATTRIBUTE_PURE
# endif
#endif

#ifndef JSON_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define JSON_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define JSON_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define JSON_USE(E) ((void) (E))
#else
# define JSON_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about jsonlval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define JSON_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define JSON_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define JSON_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define JSON_INITIAL_VALUE(Value) Value
#endif
#ifndef JSON_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define JSON_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define JSON_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef JSON_INITIAL_VALUE
# define JSON_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define JSON_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define JSON_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef JSON_IGNORE_USELESS_CAST_BEGIN
# define JSON_IGNORE_USELESS_CAST_BEGIN
# define JSON_IGNORE_USELESS_CAST_END
#endif


#define JSON_ASSERT(E) ((void) (0 && (E)))

#if !defined jsonoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef JSONSTACK_USE_ALLOCA
#  if JSONSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define JSONSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define JSONSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define JSONSTACK_ALLOC alloca
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

# ifdef JSONSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define JSONSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef JSONSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define JSONSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define JSONSTACK_ALLOC JSONMALLOC
#  define JSONSTACK_FREE JSONFREE
#  ifndef JSONSTACK_ALLOC_MAXIMUM
#   define JSONSTACK_ALLOC_MAXIMUM JSONSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined JSONMALLOC || defined malloc) \
             && (defined JSONFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef JSONMALLOC
#   define JSONMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (JSONSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef JSONFREE
#   define JSONFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined jsonoverflow */

#if (! defined jsonoverflow \
     && (! defined __cplusplus \
         || (defined JSONLTYPE_IS_TRIVIAL && JSONLTYPE_IS_TRIVIAL \
             && defined JSONSTYPE_IS_TRIVIAL && JSONSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union jsonalloc
{
  json_state_t jsonss_alloc;
  JSONSTYPE jsonvs_alloc;
  JSONLTYPE jsonls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define JSONSTACK_GAP_MAXIMUM (JSONSIZEOF (union jsonalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define JSONSTACK_BYTES(N) \
     ((N) * (JSONSIZEOF (json_state_t) + JSONSIZEOF (JSONSTYPE) \
             + JSONSIZEOF (JSONLTYPE)) \
      + 2 * JSONSTACK_GAP_MAXIMUM)

# define JSONCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables JSONSIZE and JSONSTACKSIZE give the old and new number of
   elements in the stack, and JSONPTR gives the new location of the
   stack.  Advance JSONPTR to a properly aligned location for the next
   stack.  */
# define JSONSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        JSONPTRDIFF_T jsonnewbytes;                                         \
        JSONCOPY (&jsonptr->Stack_alloc, Stack, jsonsize);                    \
        Stack = &jsonptr->Stack_alloc;                                    \
        jsonnewbytes = jsonstacksize * JSONSIZEOF (*Stack) + JSONSTACK_GAP_MAXIMUM; \
        jsonptr += jsonnewbytes / JSONSIZEOF (*jsonptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined JSONCOPY_NEEDED && JSONCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef JSONCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define JSONCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, JSON_CAST (JSONSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define JSONCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          JSONPTRDIFF_T jsoni;                      \
          for (jsoni = 0; jsoni < (Count); jsoni++)   \
            (Dst)[jsoni] = (Src)[jsoni];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !JSONCOPY_NEEDED */

/* JSONFINAL -- State number of the termination state.  */
#define JSONFINAL  5
/* JSONLAST -- Last index in JSONTABLE.  */
#define JSONLAST   34

/* JSONNTOKENS -- Number of terminals.  */
#define JSONNTOKENS  15
/* JSONNNTS -- Number of nonterminals.  */
#define JSONNNTS  10
/* JSONNRULES -- Number of rules.  */
#define JSONNRULES  21
/* JSONNSTATES -- Number of states.  */
#define JSONNSTATES  36

/* JSONMAXUTOK -- Last valid token kind.  */
#define JSONMAXUTOK   269


/* JSONTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by jsonlex, with out-of-bounds checking.  */
#define JSONTRANSLATE(JSONX)                                \
  (0 <= (JSONX) && (JSONX) <= JSONMAXUTOK                     \
   ? JSON_CAST (jsonsymbol_kind_t, jsontranslate[JSONX])        \
   : JSONSYMBOL_JSONUNDEF)

/* JSONTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by jsonlex.  */
static const jsontype_int8 jsontranslate[] =
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14
};

#if JSONDEBUG
/* JSONRLINE[JSONN] -- Source line where rule number JSONN was defined.  */
static const jsontype_int8 jsonrline[] =
{
       0,    33,    33,    37,    38,    39,    40,    41,    42,    43,
      47,    48,    52,    53,    57,    61,    62,    66,    67,    71,
      75,    76
};
#endif

/** Accessing symbol of state STATE.  */
#define JSON_ACCESSING_SYMBOL(State) JSON_CAST (jsonsymbol_kind_t, jsonstos[State])

#if JSONDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   JSONSYMBOL.  No bounds checking.  */
static const char *jsonsymbol_name (jsonsymbol_kind_t jsonsymbol) JSON_ATTRIBUTE_UNUSED;

/* JSONTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at JSONNTOKENS, nonterminals.  */
static const char *const jsontname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "JSON_TOK_Comma",
  "JSON_TOK_Semicolon", "JSON_TOK_True", "JSON_TOK_False", "JSON_TOK_Null",
  "JSON_TOK_Bracket0", "JSON_TOK_Bracket1", "JSON_TOK_Curly0",
  "JSON_TOK_Curly1", "JSON_TOK_String", "JSON_TOK_Number", "JSON_TOK_Ws",
  "$accept", "json", "value", "object", "members", "member", "array",
  "elements", "element", "ws", JSON_NULLPTR
};

static const char *
jsonsymbol_name (jsonsymbol_kind_t jsonsymbol)
{
  return jsontname[jsonsymbol];
}
#endif

#define JSONPACT_NINF (-12)

#define jsonpact_value_is_default(Yyn) \
  ((Yyn) == JSONPACT_NINF)

#define JSONTABLE_NINF (-1)

#define jsontable_value_is_error(Yyn) \
  0

/* JSONPACT[STATE-NUM] -- Index in JSONTABLE of the portion describing
   STATE-NUM.  */
static const jsontype_int8 jsonpact[] =
{
     -11,   -12,     4,   -12,    10,   -12,   -12,   -12,   -12,   -11,
     -11,   -12,   -12,   -11,   -12,   -12,     3,    23,     1,    16,
      25,    13,   -12,   -12,   -11,   -12,   -12,   -11,   -12,   -11,
     -12,   -12,    17,    26,   -11,   -12
};

/* JSONDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when JSONTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const jsontype_int8 jsondefact[] =
{
      20,    21,     0,     2,     0,     1,     7,     8,     9,    20,
      20,     5,     6,    20,     3,     4,     0,    17,     0,     0,
      12,     0,    19,    16,    20,    15,    11,    20,    10,    20,
      18,    13,     0,     0,    20,    14
};

/* JSONPGOTO[NTERM-NUM].  */
static const jsontype_int8 jsonpgoto[] =
{
     -12,   -12,   -12,   -12,     5,   -12,   -12,     7,     0,    -8
};

/* JSONDEFGOTO[NTERM-NUM].  */
static const jsontype_int8 jsondefgoto[] =
{
       0,     2,    13,    14,    19,    20,    15,    16,    17,     4
};

/* JSONTABLE[JSONPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If JSONTABLE_NINF, syntax error.  */
static const jsontype_int8 jsontable[] =
{
       3,    18,    21,     1,     5,    22,     6,     7,     8,     9,
      25,    10,    23,    11,    12,     6,     7,     8,     9,    32,
      10,    33,    11,    12,    28,    29,    24,    26,    27,    29,
      34,    30,    31,     0,    35
};

static const jsontype_int8 jsoncheck[] =
{
       0,     9,    10,    14,     0,    13,     5,     6,     7,     8,
       9,    10,     9,    12,    13,     5,     6,     7,     8,    27,
      10,    29,    12,    13,    11,    12,     3,    11,     3,    12,
       4,    24,    27,    -1,    34
};

/* JSONSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const jsontype_int8 jsonstos[] =
{
       0,    14,    16,    23,    24,     0,     5,     6,     7,     8,
      10,    12,    13,    17,    18,    21,    22,    23,    24,    19,
      20,    24,    24,     9,     3,     9,    11,     3,    11,    12,
      22,    19,    24,    24,     4,    23
};

/* JSONR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const jsontype_int8 jsonr1[] =
{
       0,    15,    16,    17,    17,    17,    17,    17,    17,    17,
      18,    18,    19,    19,    20,    21,    21,    22,    22,    23,
      24,    24
};

/* JSONR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const jsontype_int8 jsonr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     3,     5,     3,     3,     1,     3,     3,
       0,     1
};


enum { JSONENOMEM = -2 };

#define jsonerrok         (jsonerrstatus = 0)
#define jsonclearin       (jsonchar = JSONEMPTY)

#define JSONACCEPT        goto jsonacceptlab
#define JSONABORT         goto jsonabortlab
#define JSONERROR         goto jsonerrorlab
#define JSONNOMEM         goto jsonexhaustedlab


#define JSONRECOVERING()  (!!jsonerrstatus)

#define JSONBACKUP(Token, Value)                                    \
  do                                                              \
    if (jsonchar == JSONEMPTY)                                        \
      {                                                           \
        jsonchar = (Token);                                         \
        jsonlval = (Value);                                         \
        JSONPOPSTACK (jsonlen);                                       \
        jsonstate = *jsonssp;                                         \
        goto jsonbackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        jsonerror (&jsonlloc, scanner, JSON_("syntax error: cannot back up")); \
        JSONERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use JSONerror or JSONUNDEF. */
#define JSONERRCODE JSONUNDEF

/* JSONLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef JSONLLOC_DEFAULT
# define JSONLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = JSONRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = JSONRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = JSONRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = JSONRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            JSONRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            JSONRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define JSONRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if JSONDEBUG

# ifndef JSONFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define JSONFPRINTF fprintf
# endif

# define JSONDPRINTF(Args)                        \
do {                                            \
  if (jsondebug)                                  \
    JSONFPRINTF Args;                             \
} while (0)


/* JSONLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef JSONLOCATION_PRINT

#  if defined JSON_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private JSON_LOCATION_PRINT macros.  */
#   define JSONLOCATION_PRINT(File, Loc)  JSON_LOCATION_PRINT(File, *(Loc))

#  elif defined JSONLTYPE_IS_TRIVIAL && JSONLTYPE_IS_TRIVIAL

/* Print *JSONLOCP on JSONO.  Private, do not rely on its existence. */

JSON_ATTRIBUTE_UNUSED
static int
json_location_print_ (FILE *jsono, JSONLTYPE const * const jsonlocp)
{
  int res = 0;
  int end_col = 0 != jsonlocp->last_column ? jsonlocp->last_column - 1 : 0;
  if (0 <= jsonlocp->first_line)
    {
      res += JSONFPRINTF (jsono, "%d", jsonlocp->first_line);
      if (0 <= jsonlocp->first_column)
        res += JSONFPRINTF (jsono, ".%d", jsonlocp->first_column);
    }
  if (0 <= jsonlocp->last_line)
    {
      if (jsonlocp->first_line < jsonlocp->last_line)
        {
          res += JSONFPRINTF (jsono, "-%d", jsonlocp->last_line);
          if (0 <= end_col)
            res += JSONFPRINTF (jsono, ".%d", end_col);
        }
      else if (0 <= end_col && jsonlocp->first_column < end_col)
        res += JSONFPRINTF (jsono, "-%d", end_col);
    }
  return res;
}

#   define JSONLOCATION_PRINT  json_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private JSON_LOCATION_PRINT macros.  */
#   define JSON_LOCATION_PRINT(File, Loc)  JSONLOCATION_PRINT(File, &(Loc))

#  else

#   define JSONLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private JSON_LOCATION_PRINT macros.  */
#   define JSON_LOCATION_PRINT  JSONLOCATION_PRINT

#  endif
# endif /* !defined JSONLOCATION_PRINT */


# define JSON_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (jsondebug)                                                            \
    {                                                                     \
      JSONFPRINTF (stderr, "%s ", Title);                                   \
      json_symbol_print (stderr,                                            \
                  Kind, Value, Location, scanner); \
      JSONFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on JSONO.  |
`-----------------------------------*/

static void
json_symbol_value_print (FILE *jsono,
                       jsonsymbol_kind_t jsonkind, JSONSTYPE const * const jsonvaluep, JSONLTYPE const * const jsonlocationp, jsonscan_t scanner)
{
  FILE *jsonoutput = jsono;
  JSON_USE (jsonoutput);
  JSON_USE (jsonlocationp);
  JSON_USE (scanner);
  if (!jsonvaluep)
    return;
  JSON_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  JSON_USE (jsonkind);
  JSON_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on JSONO.  |
`---------------------------*/

static void
json_symbol_print (FILE *jsono,
                 jsonsymbol_kind_t jsonkind, JSONSTYPE const * const jsonvaluep, JSONLTYPE const * const jsonlocationp, jsonscan_t scanner)
{
  JSONFPRINTF (jsono, "%s %s (",
             jsonkind < JSONNTOKENS ? "token" : "nterm", jsonsymbol_name (jsonkind));

  JSONLOCATION_PRINT (jsono, jsonlocationp);
  JSONFPRINTF (jsono, ": ");
  json_symbol_value_print (jsono, jsonkind, jsonvaluep, jsonlocationp, scanner);
  JSONFPRINTF (jsono, ")");
}

/*------------------------------------------------------------------.
| json_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
json_stack_print (json_state_t *jsonbottom, json_state_t *jsontop)
{
  JSONFPRINTF (stderr, "Stack now");
  for (; jsonbottom <= jsontop; jsonbottom++)
    {
      int jsonbot = *jsonbottom;
      JSONFPRINTF (stderr, " %d", jsonbot);
    }
  JSONFPRINTF (stderr, "\n");
}

# define JSON_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (jsondebug)                                                  \
    json_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the JSONRULE is going to be reduced.  |
`------------------------------------------------*/

static void
json_reduce_print (json_state_t *jsonssp, JSONSTYPE *jsonvsp, JSONLTYPE *jsonlsp,
                 int jsonrule, jsonscan_t scanner)
{
  int jsonlno = jsonrline[jsonrule];
  int jsonnrhs = jsonr2[jsonrule];
  int jsoni;
  JSONFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             jsonrule - 1, jsonlno);
  /* The symbols being reduced.  */
  for (jsoni = 0; jsoni < jsonnrhs; jsoni++)
    {
      JSONFPRINTF (stderr, "   $%d = ", jsoni + 1);
      json_symbol_print (stderr,
                       JSON_ACCESSING_SYMBOL (+jsonssp[jsoni + 1 - jsonnrhs]),
                       &jsonvsp[(jsoni + 1) - (jsonnrhs)],
                       &(jsonlsp[(jsoni + 1) - (jsonnrhs)]), scanner);
      JSONFPRINTF (stderr, "\n");
    }
}

# define JSON_REDUCE_PRINT(Rule)          \
do {                                    \
  if (jsondebug)                          \
    json_reduce_print (jsonssp, jsonvsp, jsonlsp, Rule, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int jsondebug;
#else /* !JSONDEBUG */
# define JSONDPRINTF(Args) ((void) 0)
# define JSON_SYMBOL_PRINT(Title, Kind, Value, Location)
# define JSON_STACK_PRINT(Bottom, Top)
# define JSON_REDUCE_PRINT(Rule)
#endif /* !JSONDEBUG */


/* JSONINITDEPTH -- initial size of the parser's stacks.  */
#ifndef JSONINITDEPTH
# define JSONINITDEPTH 200
#endif

/* JSONMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   JSONSTACK_ALLOC_MAXIMUM < JSONSTACK_BYTES (JSONMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef JSONMAXDEPTH
# define JSONMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
jsondestruct (const char *jsonmsg,
            jsonsymbol_kind_t jsonkind, JSONSTYPE *jsonvaluep, JSONLTYPE *jsonlocationp, jsonscan_t scanner)
{
  JSON_USE (jsonvaluep);
  JSON_USE (jsonlocationp);
  JSON_USE (scanner);
  if (!jsonmsg)
    jsonmsg = "Deleting";
  JSON_SYMBOL_PRINT (jsonmsg, jsonkind, jsonvaluep, jsonlocationp);

  JSON_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  JSON_USE (jsonkind);
  JSON_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| jsonparse.  |
`----------*/

int
jsonparse (jsonscan_t scanner)
{
/* Lookahead token kind.  */
int jsonchar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
JSON_INITIAL_VALUE (static JSONSTYPE jsonval_default;)
JSONSTYPE jsonlval JSON_INITIAL_VALUE (= jsonval_default);

/* Location data for the lookahead symbol.  */
static JSONLTYPE jsonloc_default
# if defined JSONLTYPE_IS_TRIVIAL && JSONLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
JSONLTYPE jsonlloc = jsonloc_default;

    /* Number of syntax errors so far.  */
    int jsonnerrs = 0;

    json_state_fast_t jsonstate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int jsonerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow jsonoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    JSONPTRDIFF_T jsonstacksize = JSONINITDEPTH;

    /* The state stack: array, bottom, top.  */
    json_state_t jsonssa[JSONINITDEPTH];
    json_state_t *jsonss = jsonssa;
    json_state_t *jsonssp = jsonss;

    /* The semantic value stack: array, bottom, top.  */
    JSONSTYPE jsonvsa[JSONINITDEPTH];
    JSONSTYPE *jsonvs = jsonvsa;
    JSONSTYPE *jsonvsp = jsonvs;

    /* The location stack: array, bottom, top.  */
    JSONLTYPE jsonlsa[JSONINITDEPTH];
    JSONLTYPE *jsonls = jsonlsa;
    JSONLTYPE *jsonlsp = jsonls;

  int jsonn;
  /* The return value of jsonparse.  */
  int jsonresult;
  /* Lookahead symbol kind.  */
  jsonsymbol_kind_t jsontoken = JSONSYMBOL_JSONEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  JSONSTYPE jsonval;
  JSONLTYPE jsonloc;

  /* The locations where the error started and ended.  */
  JSONLTYPE jsonerror_range[3];



#define JSONPOPSTACK(N)   (jsonvsp -= (N), jsonssp -= (N), jsonlsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int jsonlen = 0;

  JSONDPRINTF ((stderr, "Starting parse\n"));

  jsonchar = JSONEMPTY; /* Cause a token to be read.  */

  jsonlsp[0] = jsonlloc;
  goto jsonsetstate;


/*------------------------------------------------------------.
| jsonnewstate -- push a new state, which is found in jsonstate.  |
`------------------------------------------------------------*/
jsonnewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  jsonssp++;


/*--------------------------------------------------------------------.
| jsonsetstate -- set current state (the top of the stack) to jsonstate.  |
`--------------------------------------------------------------------*/
jsonsetstate:
  JSONDPRINTF ((stderr, "Entering state %d\n", jsonstate));
  JSON_ASSERT (0 <= jsonstate && jsonstate < JSONNSTATES);
  JSON_IGNORE_USELESS_CAST_BEGIN
  *jsonssp = JSON_CAST (json_state_t, jsonstate);
  JSON_IGNORE_USELESS_CAST_END
  JSON_STACK_PRINT (jsonss, jsonssp);

  if (jsonss + jsonstacksize - 1 <= jsonssp)
#if !defined jsonoverflow && !defined JSONSTACK_RELOCATE
    JSONNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      JSONPTRDIFF_T jsonsize = jsonssp - jsonss + 1;

# if defined jsonoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        json_state_t *jsonss1 = jsonss;
        JSONSTYPE *jsonvs1 = jsonvs;
        JSONLTYPE *jsonls1 = jsonls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if jsonoverflow is a macro.  */
        jsonoverflow (JSON_("memory exhausted"),
                    &jsonss1, jsonsize * JSONSIZEOF (*jsonssp),
                    &jsonvs1, jsonsize * JSONSIZEOF (*jsonvsp),
                    &jsonls1, jsonsize * JSONSIZEOF (*jsonlsp),
                    &jsonstacksize);
        jsonss = jsonss1;
        jsonvs = jsonvs1;
        jsonls = jsonls1;
      }
# else /* defined JSONSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (JSONMAXDEPTH <= jsonstacksize)
        JSONNOMEM;
      jsonstacksize *= 2;
      if (JSONMAXDEPTH < jsonstacksize)
        jsonstacksize = JSONMAXDEPTH;

      {
        json_state_t *jsonss1 = jsonss;
        union jsonalloc *jsonptr =
          JSON_CAST (union jsonalloc *,
                   JSONSTACK_ALLOC (JSON_CAST (JSONSIZE_T, JSONSTACK_BYTES (jsonstacksize))));
        if (! jsonptr)
          JSONNOMEM;
        JSONSTACK_RELOCATE (jsonss_alloc, jsonss);
        JSONSTACK_RELOCATE (jsonvs_alloc, jsonvs);
        JSONSTACK_RELOCATE (jsonls_alloc, jsonls);
#  undef JSONSTACK_RELOCATE
        if (jsonss1 != jsonssa)
          JSONSTACK_FREE (jsonss1);
      }
# endif

      jsonssp = jsonss + jsonsize - 1;
      jsonvsp = jsonvs + jsonsize - 1;
      jsonlsp = jsonls + jsonsize - 1;

      JSON_IGNORE_USELESS_CAST_BEGIN
      JSONDPRINTF ((stderr, "Stack size increased to %ld\n",
                  JSON_CAST (long, jsonstacksize)));
      JSON_IGNORE_USELESS_CAST_END

      if (jsonss + jsonstacksize - 1 <= jsonssp)
        JSONABORT;
    }
#endif /* !defined jsonoverflow && !defined JSONSTACK_RELOCATE */


  if (jsonstate == JSONFINAL)
    JSONACCEPT;

  goto jsonbackup;


/*-----------.
| jsonbackup.  |
`-----------*/
jsonbackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  jsonn = jsonpact[jsonstate];
  if (jsonpact_value_is_default (jsonn))
    goto jsondefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* JSONCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (jsonchar == JSONEMPTY)
    {
      JSONDPRINTF ((stderr, "Reading a token\n"));
      jsonchar = jsonlex (&jsonlval, &jsonlloc, scanner);
    }

  if (jsonchar <= JSONEOF)
    {
      jsonchar = JSONEOF;
      jsontoken = JSONSYMBOL_JSONEOF;
      JSONDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (jsonchar == JSONerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      jsonchar = JSONUNDEF;
      jsontoken = JSONSYMBOL_JSONerror;
      jsonerror_range[1] = jsonlloc;
      goto jsonerrlab1;
    }
  else
    {
      jsontoken = JSONTRANSLATE (jsonchar);
      JSON_SYMBOL_PRINT ("Next token is", jsontoken, &jsonlval, &jsonlloc);
    }

  /* If the proper action on seeing token JSONTOKEN is to reduce or to
     detect an error, take that action.  */
  jsonn += jsontoken;
  if (jsonn < 0 || JSONLAST < jsonn || jsoncheck[jsonn] != jsontoken)
    goto jsondefault;
  jsonn = jsontable[jsonn];
  if (jsonn <= 0)
    {
      if (jsontable_value_is_error (jsonn))
        goto jsonerrlab;
      jsonn = -jsonn;
      goto jsonreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (jsonerrstatus)
    jsonerrstatus--;

  /* Shift the lookahead token.  */
  JSON_SYMBOL_PRINT ("Shifting", jsontoken, &jsonlval, &jsonlloc);
  jsonstate = jsonn;
  JSON_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++jsonvsp = jsonlval;
  JSON_IGNORE_MAYBE_UNINITIALIZED_END
  *++jsonlsp = jsonlloc;

  /* Discard the shifted token.  */
  jsonchar = JSONEMPTY;
  goto jsonnewstate;


/*-----------------------------------------------------------.
| jsondefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
jsondefault:
  jsonn = jsondefact[jsonstate];
  if (jsonn == 0)
    goto jsonerrlab;
  goto jsonreduce;


/*-----------------------------.
| jsonreduce -- do a reduction.  |
`-----------------------------*/
jsonreduce:
  /* jsonn is the number of a rule to reduce with.  */
  jsonlen = jsonr2[jsonn];

  /* If JSONLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets JSONVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to JSONVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that JSONVAL may be used uninitialized.  */
  jsonval = jsonvsp[1-jsonlen];

  /* Default location. */
  JSONLLOC_DEFAULT (jsonloc, (jsonlsp - jsonlen), jsonlen);
  jsonerror_range[1] = jsonloc;
  JSON_REDUCE_PRINT (jsonn);
  switch (jsonn)
    {

#line 1229 "C:\\Users\\carlo\\Documents\\Escritorio\\BisonFlexMultipleParsers\\both\\json.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter jsonchar, and that requires
     that jsontoken be updated with the new translation.  We take the
     approach of translating immediately before every use of jsontoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     JSONABORT, JSONACCEPT, or JSONERROR immediately after altering jsonchar or
     if it invokes JSONBACKUP.  In the case of JSONABORT or JSONACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of JSONERROR or JSONBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  JSON_SYMBOL_PRINT ("-> $$ =", JSON_CAST (jsonsymbol_kind_t, jsonr1[jsonn]), &jsonval, &jsonloc);

  JSONPOPSTACK (jsonlen);
  jsonlen = 0;

  *++jsonvsp = jsonval;
  *++jsonlsp = jsonloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int jsonlhs = jsonr1[jsonn] - JSONNTOKENS;
    const int jsoni = jsonpgoto[jsonlhs] + *jsonssp;
    jsonstate = (0 <= jsoni && jsoni <= JSONLAST && jsoncheck[jsoni] == *jsonssp
               ? jsontable[jsoni]
               : jsondefgoto[jsonlhs]);
  }

  goto jsonnewstate;


/*--------------------------------------.
| jsonerrlab -- here on detecting error.  |
`--------------------------------------*/
jsonerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  jsontoken = jsonchar == JSONEMPTY ? JSONSYMBOL_JSONEMPTY : JSONTRANSLATE (jsonchar);
  /* If not already recovering from an error, report this error.  */
  if (!jsonerrstatus)
    {
      ++jsonnerrs;
      jsonerror (&jsonlloc, scanner, JSON_("syntax error"));
    }

  jsonerror_range[1] = jsonlloc;
  if (jsonerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (jsonchar <= JSONEOF)
        {
          /* Return failure if at end of input.  */
          if (jsonchar == JSONEOF)
            JSONABORT;
        }
      else
        {
          jsondestruct ("Error: discarding",
                      jsontoken, &jsonlval, &jsonlloc, scanner);
          jsonchar = JSONEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto jsonerrlab1;


/*---------------------------------------------------.
| jsonerrorlab -- error raised explicitly by JSONERROR.  |
`---------------------------------------------------*/
jsonerrorlab:
  /* Pacify compilers when the user code never invokes JSONERROR and the
     label jsonerrorlab therefore never appears in user code.  */
  if (0)
    JSONERROR;
  ++jsonnerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this JSONERROR.  */
  JSONPOPSTACK (jsonlen);
  jsonlen = 0;
  JSON_STACK_PRINT (jsonss, jsonssp);
  jsonstate = *jsonssp;
  goto jsonerrlab1;


/*-------------------------------------------------------------.
| jsonerrlab1 -- common code for both syntax error and JSONERROR.  |
`-------------------------------------------------------------*/
jsonerrlab1:
  jsonerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      jsonn = jsonpact[jsonstate];
      if (!jsonpact_value_is_default (jsonn))
        {
          jsonn += JSONSYMBOL_JSONerror;
          if (0 <= jsonn && jsonn <= JSONLAST && jsoncheck[jsonn] == JSONSYMBOL_JSONerror)
            {
              jsonn = jsontable[jsonn];
              if (0 < jsonn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (jsonssp == jsonss)
        JSONABORT;

      jsonerror_range[1] = *jsonlsp;
      jsondestruct ("Error: popping",
                  JSON_ACCESSING_SYMBOL (jsonstate), jsonvsp, jsonlsp, scanner);
      JSONPOPSTACK (1);
      jsonstate = *jsonssp;
      JSON_STACK_PRINT (jsonss, jsonssp);
    }

  JSON_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++jsonvsp = jsonlval;
  JSON_IGNORE_MAYBE_UNINITIALIZED_END

  jsonerror_range[2] = jsonlloc;
  ++jsonlsp;
  JSONLLOC_DEFAULT (*jsonlsp, jsonerror_range, 2);

  /* Shift the error token.  */
  JSON_SYMBOL_PRINT ("Shifting", JSON_ACCESSING_SYMBOL (jsonn), jsonvsp, jsonlsp);

  jsonstate = jsonn;
  goto jsonnewstate;


/*-------------------------------------.
| jsonacceptlab -- JSONACCEPT comes here.  |
`-------------------------------------*/
jsonacceptlab:
  jsonresult = 0;
  goto jsonreturnlab;


/*-----------------------------------.
| jsonabortlab -- JSONABORT comes here.  |
`-----------------------------------*/
jsonabortlab:
  jsonresult = 1;
  goto jsonreturnlab;


/*-----------------------------------------------------------.
| jsonexhaustedlab -- JSONNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
jsonexhaustedlab:
  jsonerror (&jsonlloc, scanner, JSON_("memory exhausted"));
  jsonresult = 2;
  goto jsonreturnlab;


/*----------------------------------------------------------.
| jsonreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
jsonreturnlab:
  if (jsonchar != JSONEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      jsontoken = JSONTRANSLATE (jsonchar);
      jsondestruct ("Cleanup: discarding lookahead",
                  jsontoken, &jsonlval, &jsonlloc, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this JSONABORT or JSONACCEPT.  */
  JSONPOPSTACK (jsonlen);
  JSON_STACK_PRINT (jsonss, jsonssp);
  while (jsonssp != jsonss)
    {
      jsondestruct ("Cleanup: popping",
                  JSON_ACCESSING_SYMBOL (+*jsonssp), jsonvsp, jsonlsp, scanner);
      JSONPOPSTACK (1);
    }
#ifndef jsonoverflow
  if (jsonss != jsonssa)
    JSONSTACK_FREE (jsonss);
#endif

  return jsonresult;
}

#line 79 "../json/json.y"


void jsonerror(JSONLTYPE* jsonllocp, jsonscan_t unused, const char* msg) {
  fprintf(stderr, "[%d:%d]: %s\n",
				  jsonllocp->first_line, jsonllocp->first_column, msg);
}
