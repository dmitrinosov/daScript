/* A Bison parser, made by GNU Bison 3.7.6.  */

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
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         DAS_YYSTYPE
#define YYLTYPE         DAS_YYLTYPE
/* Substitute the variable and function names.  */
#define yyparse         das_yyparse
#define yylex           das_yylex
#define yyerror         das_yyerror
#define yydebug         das_yydebug
#define yynerrs         das_yynerrs

/* First part of user prologue.  */

    #include "daScript/misc/platform.h"
    #include "daScript/simulate/debug_info.h"
    #include "daScript/ast/compilation_errors.h"

    #ifdef _MSC_VER
    #pragma warning(disable:4262)
    #pragma warning(disable:4127)
    #pragma warning(disable:4702)
    #endif

    using namespace das;

    union DAS_YYSTYPE;
    struct DAS_YYLTYPE;

    #define YY_NO_UNISTD_H
    #include "lex.yy.h"

    void das_yyerror ( DAS_YYLTYPE * lloc, yyscan_t scanner, const string & error );
    void das_yyfatalerror ( DAS_YYLTYPE * lloc, yyscan_t scanner, const string & error, CompilationError cerr );
    int yylex ( DAS_YYSTYPE *lvalp, DAS_YYLTYPE *llocp, yyscan_t scanner );
    void yybegin ( const char * str );

    void das_yybegin_reader ( yyscan_t yyscanner );
    void das_yyend_reader ( yyscan_t yyscanner );

    #undef yyextra
    #define yyextra (*((das::DasParserState **)(scanner)))


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

#include "ds_parser.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LEXER_ERROR = 3,                /* "lexer error"  */
  YYSYMBOL_DAS_STRUCT = 4,                 /* "struct"  */
  YYSYMBOL_DAS_CLASS = 5,                  /* "class"  */
  YYSYMBOL_DAS_LET = 6,                    /* "let"  */
  YYSYMBOL_DAS_DEF = 7,                    /* "def"  */
  YYSYMBOL_DAS_WHILE = 8,                  /* "while"  */
  YYSYMBOL_DAS_IF = 9,                     /* "if"  */
  YYSYMBOL_DAS_STATIC_IF = 10,             /* "static_if"  */
  YYSYMBOL_DAS_ELSE = 11,                  /* "else"  */
  YYSYMBOL_DAS_FOR = 12,                   /* "for"  */
  YYSYMBOL_DAS_CATCH = 13,                 /* "recover"  */
  YYSYMBOL_DAS_TRUE = 14,                  /* "true"  */
  YYSYMBOL_DAS_FALSE = 15,                 /* "false"  */
  YYSYMBOL_DAS_NEWT = 16,                  /* "new"  */
  YYSYMBOL_DAS_TYPEINFO = 17,              /* "typeinfo"  */
  YYSYMBOL_DAS_TYPE = 18,                  /* "type"  */
  YYSYMBOL_DAS_IN = 19,                    /* "in"  */
  YYSYMBOL_DAS_IS = 20,                    /* "is"  */
  YYSYMBOL_DAS_AS = 21,                    /* "as"  */
  YYSYMBOL_DAS_ELIF = 22,                  /* "elif"  */
  YYSYMBOL_DAS_STATIC_ELIF = 23,           /* "static_elif"  */
  YYSYMBOL_DAS_ARRAY = 24,                 /* "array"  */
  YYSYMBOL_DAS_RETURN = 25,                /* "return"  */
  YYSYMBOL_DAS_NULL = 26,                  /* "null"  */
  YYSYMBOL_DAS_BREAK = 27,                 /* "break"  */
  YYSYMBOL_DAS_TRY = 28,                   /* "try"  */
  YYSYMBOL_DAS_OPTIONS = 29,               /* "options"  */
  YYSYMBOL_DAS_TABLE = 30,                 /* "table"  */
  YYSYMBOL_DAS_EXPECT = 31,                /* "expect"  */
  YYSYMBOL_DAS_CONST = 32,                 /* "const"  */
  YYSYMBOL_DAS_REQUIRE = 33,               /* "require"  */
  YYSYMBOL_DAS_OPERATOR = 34,              /* "operator"  */
  YYSYMBOL_DAS_ENUM = 35,                  /* "enum"  */
  YYSYMBOL_DAS_FINALLY = 36,               /* "finally"  */
  YYSYMBOL_DAS_DELETE = 37,                /* "delete"  */
  YYSYMBOL_DAS_DEREF = 38,                 /* "deref"  */
  YYSYMBOL_DAS_TYPEDEF = 39,               /* "typedef"  */
  YYSYMBOL_DAS_WITH = 40,                  /* "with"  */
  YYSYMBOL_DAS_AKA = 41,                   /* "aka"  */
  YYSYMBOL_DAS_ASSUME = 42,                /* "assume"  */
  YYSYMBOL_DAS_CAST = 43,                  /* "cast"  */
  YYSYMBOL_DAS_OVERRIDE = 44,              /* "override"  */
  YYSYMBOL_DAS_ABSTRACT = 45,              /* "abstract"  */
  YYSYMBOL_DAS_UPCAST = 46,                /* "upcast"  */
  YYSYMBOL_DAS_ITERATOR = 47,              /* "iterator"  */
  YYSYMBOL_DAS_VAR = 48,                   /* "var"  */
  YYSYMBOL_DAS_ADDR = 49,                  /* "addr"  */
  YYSYMBOL_DAS_CONTINUE = 50,              /* "continue"  */
  YYSYMBOL_DAS_WHERE = 51,                 /* "where"  */
  YYSYMBOL_DAS_PASS = 52,                  /* "pass"  */
  YYSYMBOL_DAS_REINTERPRET = 53,           /* "reinterpret"  */
  YYSYMBOL_DAS_MODULE = 54,                /* "module"  */
  YYSYMBOL_DAS_PUBLIC = 55,                /* "public"  */
  YYSYMBOL_DAS_LABEL = 56,                 /* "label"  */
  YYSYMBOL_DAS_GOTO = 57,                  /* "goto"  */
  YYSYMBOL_DAS_IMPLICIT = 58,              /* "implicit"  */
  YYSYMBOL_DAS_EXPLICIT = 59,              /* "explicit"  */
  YYSYMBOL_DAS_SHARED = 60,                /* "shared"  */
  YYSYMBOL_DAS_PRIVATE = 61,               /* "private"  */
  YYSYMBOL_DAS_SMART_PTR = 62,             /* "smart_ptr"  */
  YYSYMBOL_DAS_UNSAFE = 63,                /* "unsafe"  */
  YYSYMBOL_DAS_TBOOL = 64,                 /* "bool"  */
  YYSYMBOL_DAS_TVOID = 65,                 /* "void"  */
  YYSYMBOL_DAS_TSTRING = 66,               /* "string"  */
  YYSYMBOL_DAS_TAUTO = 67,                 /* "auto"  */
  YYSYMBOL_DAS_TINT = 68,                  /* "int"  */
  YYSYMBOL_DAS_TINT2 = 69,                 /* "int2"  */
  YYSYMBOL_DAS_TINT3 = 70,                 /* "int3"  */
  YYSYMBOL_DAS_TINT4 = 71,                 /* "int4"  */
  YYSYMBOL_DAS_TUINT = 72,                 /* "uint"  */
  YYSYMBOL_DAS_TBITFIELD = 73,             /* "bitfield"  */
  YYSYMBOL_DAS_TUINT2 = 74,                /* "uint2"  */
  YYSYMBOL_DAS_TUINT3 = 75,                /* "uint3"  */
  YYSYMBOL_DAS_TUINT4 = 76,                /* "uint4"  */
  YYSYMBOL_DAS_TFLOAT = 77,                /* "float"  */
  YYSYMBOL_DAS_TFLOAT2 = 78,               /* "float2"  */
  YYSYMBOL_DAS_TFLOAT3 = 79,               /* "float3"  */
  YYSYMBOL_DAS_TFLOAT4 = 80,               /* "float4"  */
  YYSYMBOL_DAS_TRANGE = 81,                /* "range"  */
  YYSYMBOL_DAS_TURANGE = 82,               /* "urange"  */
  YYSYMBOL_DAS_TBLOCK = 83,                /* "block"  */
  YYSYMBOL_DAS_TINT64 = 84,                /* "int64"  */
  YYSYMBOL_DAS_TUINT64 = 85,               /* "uint64"  */
  YYSYMBOL_DAS_TDOUBLE = 86,               /* "double"  */
  YYSYMBOL_DAS_TFUNCTION = 87,             /* "function"  */
  YYSYMBOL_DAS_TLAMBDA = 88,               /* "lambda"  */
  YYSYMBOL_DAS_TINT8 = 89,                 /* "int8"  */
  YYSYMBOL_DAS_TUINT8 = 90,                /* "uint8"  */
  YYSYMBOL_DAS_TINT16 = 91,                /* "int16"  */
  YYSYMBOL_DAS_TUINT16 = 92,               /* "uint16"  */
  YYSYMBOL_DAS_TTUPLE = 93,                /* "tuple"  */
  YYSYMBOL_DAS_TVARIANT = 94,              /* "variant"  */
  YYSYMBOL_DAS_GENERATOR = 95,             /* "generator"  */
  YYSYMBOL_DAS_YIELD = 96,                 /* "yield"  */
  YYSYMBOL_DAS_SEALED = 97,                /* "sealed"  */
  YYSYMBOL_ADDEQU = 98,                    /* "+="  */
  YYSYMBOL_SUBEQU = 99,                    /* "-="  */
  YYSYMBOL_DIVEQU = 100,                   /* "/="  */
  YYSYMBOL_MULEQU = 101,                   /* "*="  */
  YYSYMBOL_MODEQU = 102,                   /* "%="  */
  YYSYMBOL_ANDEQU = 103,                   /* "&="  */
  YYSYMBOL_OREQU = 104,                    /* "|="  */
  YYSYMBOL_XOREQU = 105,                   /* "^="  */
  YYSYMBOL_SHL = 106,                      /* "<<"  */
  YYSYMBOL_SHR = 107,                      /* ">>"  */
  YYSYMBOL_ADDADD = 108,                   /* "++"  */
  YYSYMBOL_SUBSUB = 109,                   /* "--"  */
  YYSYMBOL_LEEQU = 110,                    /* "<="  */
  YYSYMBOL_SHLEQU = 111,                   /* "<<="  */
  YYSYMBOL_SHREQU = 112,                   /* ">>="  */
  YYSYMBOL_GREQU = 113,                    /* ">="  */
  YYSYMBOL_EQUEQU = 114,                   /* "=="  */
  YYSYMBOL_NOTEQU = 115,                   /* "!="  */
  YYSYMBOL_RARROW = 116,                   /* "->"  */
  YYSYMBOL_LARROW = 117,                   /* "<-"  */
  YYSYMBOL_QQ = 118,                       /* "??"  */
  YYSYMBOL_QDOT = 119,                     /* "?."  */
  YYSYMBOL_QBRA = 120,                     /* "?["  */
  YYSYMBOL_LPIPE = 121,                    /* "<|"  */
  YYSYMBOL_LBPIPE = 122,                   /* " <|"  */
  YYSYMBOL_LAPIPE = 123,                   /* "@ <|"  */
  YYSYMBOL_LFPIPE = 124,                   /* "@@ <|"  */
  YYSYMBOL_RPIPE = 125,                    /* "|>"  */
  YYSYMBOL_CLONEEQU = 126,                 /* ":="  */
  YYSYMBOL_ROTL = 127,                     /* "<<<"  */
  YYSYMBOL_ROTR = 128,                     /* ">>>"  */
  YYSYMBOL_ROTLEQU = 129,                  /* "<<<="  */
  YYSYMBOL_ROTREQU = 130,                  /* ">>>="  */
  YYSYMBOL_MAPTO = 131,                    /* "=>"  */
  YYSYMBOL_COLCOL = 132,                   /* "::"  */
  YYSYMBOL_ANDAND = 133,                   /* "&&"  */
  YYSYMBOL_OROR = 134,                     /* "||"  */
  YYSYMBOL_XORXOR = 135,                   /* "^^"  */
  YYSYMBOL_ANDANDEQU = 136,                /* "&&="  */
  YYSYMBOL_OROREQU = 137,                  /* "||="  */
  YYSYMBOL_XORXOREQU = 138,                /* "^^="  */
  YYSYMBOL_DOTDOT = 139,                   /* ".."  */
  YYSYMBOL_BRABRAB = 140,                  /* "[["  */
  YYSYMBOL_BRACBRB = 141,                  /* "[{"  */
  YYSYMBOL_CBRCBRB = 142,                  /* "{{"  */
  YYSYMBOL_INTEGER = 143,                  /* "integer constant"  */
  YYSYMBOL_LONG_INTEGER = 144,             /* "long integer constant"  */
  YYSYMBOL_UNSIGNED_INTEGER = 145,         /* "unsigned integer constant"  */
  YYSYMBOL_UNSIGNED_LONG_INTEGER = 146,    /* "unsigned long integer constant"  */
  YYSYMBOL_FLOAT = 147,                    /* "floating point constant"  */
  YYSYMBOL_DOUBLE = 148,                   /* "double constant"  */
  YYSYMBOL_NAME = 149,                     /* "name"  */
  YYSYMBOL_BEGIN_STRING = 150,             /* "start of the string"  */
  YYSYMBOL_STRING_CHARACTER = 151,         /* STRING_CHARACTER  */
  YYSYMBOL_STRING_CHARACTER_ESC = 152,     /* STRING_CHARACTER_ESC  */
  YYSYMBOL_END_STRING = 153,               /* "end of the string"  */
  YYSYMBOL_BEGIN_STRING_EXPR = 154,        /* "{"  */
  YYSYMBOL_END_STRING_EXPR = 155,          /* "}"  */
  YYSYMBOL_END_OF_READ = 156,              /* "end of failed eader macro"  */
  YYSYMBOL_157_ = 157,                     /* ','  */
  YYSYMBOL_158_ = 158,                     /* '='  */
  YYSYMBOL_159_ = 159,                     /* '?'  */
  YYSYMBOL_160_ = 160,                     /* ':'  */
  YYSYMBOL_161_ = 161,                     /* '|'  */
  YYSYMBOL_162_ = 162,                     /* '^'  */
  YYSYMBOL_163_ = 163,                     /* '&'  */
  YYSYMBOL_164_ = 164,                     /* '<'  */
  YYSYMBOL_165_ = 165,                     /* '>'  */
  YYSYMBOL_166_ = 166,                     /* '-'  */
  YYSYMBOL_167_ = 167,                     /* '+'  */
  YYSYMBOL_168_ = 168,                     /* '*'  */
  YYSYMBOL_169_ = 169,                     /* '/'  */
  YYSYMBOL_170_ = 170,                     /* '%'  */
  YYSYMBOL_UNARY_MINUS = 171,              /* UNARY_MINUS  */
  YYSYMBOL_UNARY_PLUS = 172,               /* UNARY_PLUS  */
  YYSYMBOL_173_ = 173,                     /* '~'  */
  YYSYMBOL_174_ = 174,                     /* '!'  */
  YYSYMBOL_PRE_INC = 175,                  /* PRE_INC  */
  YYSYMBOL_PRE_DEC = 176,                  /* PRE_DEC  */
  YYSYMBOL_POST_INC = 177,                 /* POST_INC  */
  YYSYMBOL_POST_DEC = 178,                 /* POST_DEC  */
  YYSYMBOL_DEREF = 179,                    /* DEREF  */
  YYSYMBOL_180_ = 180,                     /* '.'  */
  YYSYMBOL_181_ = 181,                     /* '['  */
  YYSYMBOL_182_ = 182,                     /* ']'  */
  YYSYMBOL_183_ = 183,                     /* '('  */
  YYSYMBOL_184_ = 184,                     /* ')'  */
  YYSYMBOL_185_ = 185,                     /* '$'  */
  YYSYMBOL_186_ = 186,                     /* '@'  */
  YYSYMBOL_187_ = 187,                     /* ';'  */
  YYSYMBOL_188_ = 188,                     /* '{'  */
  YYSYMBOL_189_ = 189,                     /* '}'  */
  YYSYMBOL_190_ = 190,                     /* '#'  */
  YYSYMBOL_YYACCEPT = 191,                 /* $accept  */
  YYSYMBOL_program = 192,                  /* program  */
  YYSYMBOL_optional_public_or_private_module = 193, /* optional_public_or_private_module  */
  YYSYMBOL_module_name = 194,              /* module_name  */
  YYSYMBOL_module_declaration = 195,       /* module_declaration  */
  YYSYMBOL_character_sequence = 196,       /* character_sequence  */
  YYSYMBOL_string_constant = 197,          /* string_constant  */
  YYSYMBOL_string_builder_body = 198,      /* string_builder_body  */
  YYSYMBOL_string_builder = 199,           /* string_builder  */
  YYSYMBOL_reader_character_sequence = 200, /* reader_character_sequence  */
  YYSYMBOL_expr_reader = 201,              /* expr_reader  */
  YYSYMBOL_202_1 = 202,                    /* $@1  */
  YYSYMBOL_options_declaration = 203,      /* options_declaration  */
  YYSYMBOL_require_declaration = 204,      /* require_declaration  */
  YYSYMBOL_require_module_name = 205,      /* require_module_name  */
  YYSYMBOL_require_module = 206,           /* require_module  */
  YYSYMBOL_is_public_module = 207,         /* is_public_module  */
  YYSYMBOL_expect_declaration = 208,       /* expect_declaration  */
  YYSYMBOL_expect_list = 209,              /* expect_list  */
  YYSYMBOL_expect_error = 210,             /* expect_error  */
  YYSYMBOL_expression_label = 211,         /* expression_label  */
  YYSYMBOL_expression_goto = 212,          /* expression_goto  */
  YYSYMBOL_elif_or_static_elif = 213,      /* elif_or_static_elif  */
  YYSYMBOL_expression_else = 214,          /* expression_else  */
  YYSYMBOL_if_or_static_if = 215,          /* if_or_static_if  */
  YYSYMBOL_expression_if_then_else = 216,  /* expression_if_then_else  */
  YYSYMBOL_expression_for_loop = 217,      /* expression_for_loop  */
  YYSYMBOL_expression_unsafe = 218,        /* expression_unsafe  */
  YYSYMBOL_expression_while_loop = 219,    /* expression_while_loop  */
  YYSYMBOL_expression_with = 220,          /* expression_with  */
  YYSYMBOL_expression_with_alias = 221,    /* expression_with_alias  */
  YYSYMBOL_222_2 = 222,                    /* $@2  */
  YYSYMBOL_annotation_argument_value = 223, /* annotation_argument_value  */
  YYSYMBOL_annotation_argument_value_list = 224, /* annotation_argument_value_list  */
  YYSYMBOL_annotation_argument_name = 225, /* annotation_argument_name  */
  YYSYMBOL_annotation_argument = 226,      /* annotation_argument  */
  YYSYMBOL_annotation_argument_list = 227, /* annotation_argument_list  */
  YYSYMBOL_annotation_declaration_name = 228, /* annotation_declaration_name  */
  YYSYMBOL_annotation_declaration = 229,   /* annotation_declaration  */
  YYSYMBOL_annotation_list = 230,          /* annotation_list  */
  YYSYMBOL_optional_annotation_list = 231, /* optional_annotation_list  */
  YYSYMBOL_optional_function_argument_list = 232, /* optional_function_argument_list  */
  YYSYMBOL_optional_function_type = 233,   /* optional_function_type  */
  YYSYMBOL_function_name = 234,            /* function_name  */
  YYSYMBOL_global_function_declaration = 235, /* global_function_declaration  */
  YYSYMBOL_optional_public_or_private_function = 236, /* optional_public_or_private_function  */
  YYSYMBOL_function_declaration_header = 237, /* function_declaration_header  */
  YYSYMBOL_function_declaration = 238,     /* function_declaration  */
  YYSYMBOL_239_3 = 239,                    /* $@3  */
  YYSYMBOL_expression_block = 240,         /* expression_block  */
  YYSYMBOL_expression_any = 241,           /* expression_any  */
  YYSYMBOL_expressions = 242,              /* expressions  */
  YYSYMBOL_expr_pipe = 243,                /* expr_pipe  */
  YYSYMBOL_name_in_namespace = 244,        /* name_in_namespace  */
  YYSYMBOL_expression_delete = 245,        /* expression_delete  */
  YYSYMBOL_expr_new = 246,                 /* expr_new  */
  YYSYMBOL_expression_break = 247,         /* expression_break  */
  YYSYMBOL_expression_continue = 248,      /* expression_continue  */
  YYSYMBOL_expression_return = 249,        /* expression_return  */
  YYSYMBOL_expression_yield = 250,         /* expression_yield  */
  YYSYMBOL_expression_try_catch = 251,     /* expression_try_catch  */
  YYSYMBOL_kwd_let = 252,                  /* kwd_let  */
  YYSYMBOL_expression_let = 253,           /* expression_let  */
  YYSYMBOL_expr_cast = 254,                /* expr_cast  */
  YYSYMBOL_255_4 = 255,                    /* $@4  */
  YYSYMBOL_256_5 = 256,                    /* $@5  */
  YYSYMBOL_257_6 = 257,                    /* $@6  */
  YYSYMBOL_258_7 = 258,                    /* $@7  */
  YYSYMBOL_259_8 = 259,                    /* $@8  */
  YYSYMBOL_260_9 = 260,                    /* $@9  */
  YYSYMBOL_expr_type_decl = 261,           /* expr_type_decl  */
  YYSYMBOL_262_10 = 262,                   /* $@10  */
  YYSYMBOL_263_11 = 263,                   /* $@11  */
  YYSYMBOL_expr_type_info = 264,           /* expr_type_info  */
  YYSYMBOL_expr_list = 265,                /* expr_list  */
  YYSYMBOL_block_or_simple_block = 266,    /* block_or_simple_block  */
  YYSYMBOL_block_or_lambda = 267,          /* block_or_lambda  */
  YYSYMBOL_capture_entry = 268,            /* capture_entry  */
  YYSYMBOL_capture_list = 269,             /* capture_list  */
  YYSYMBOL_optional_capture_list = 270,    /* optional_capture_list  */
  YYSYMBOL_expr_block = 271,               /* expr_block  */
  YYSYMBOL_expr_numeric_const = 272,       /* expr_numeric_const  */
  YYSYMBOL_expr_assign = 273,              /* expr_assign  */
  YYSYMBOL_expr_assign_pipe = 274,         /* expr_assign_pipe  */
  YYSYMBOL_expr_named_call = 275,          /* expr_named_call  */
  YYSYMBOL_expr_method_call = 276,         /* expr_method_call  */
  YYSYMBOL_func_addr_expr = 277,           /* func_addr_expr  */
  YYSYMBOL_278_12 = 278,                   /* $@12  */
  YYSYMBOL_279_13 = 279,                   /* $@13  */
  YYSYMBOL_280_14 = 280,                   /* $@14  */
  YYSYMBOL_281_15 = 281,                   /* $@15  */
  YYSYMBOL_expr_field = 282,               /* expr_field  */
  YYSYMBOL_283_16 = 283,                   /* $@16  */
  YYSYMBOL_284_17 = 284,                   /* $@17  */
  YYSYMBOL_expr = 285,                     /* expr  */
  YYSYMBOL_286_18 = 286,                   /* $@18  */
  YYSYMBOL_287_19 = 287,                   /* $@19  */
  YYSYMBOL_optional_field_annotation = 288, /* optional_field_annotation  */
  YYSYMBOL_optional_override = 289,        /* optional_override  */
  YYSYMBOL_optional_constant = 290,        /* optional_constant  */
  YYSYMBOL_optional_public_or_private_member_variable = 291, /* optional_public_or_private_member_variable  */
  YYSYMBOL_structure_variable_declaration = 292, /* structure_variable_declaration  */
  YYSYMBOL_struct_variable_declaration_list = 293, /* struct_variable_declaration_list  */
  YYSYMBOL_294_20 = 294,                   /* $@20  */
  YYSYMBOL_295_21 = 295,                   /* $@21  */
  YYSYMBOL_296_22 = 296,                   /* $@22  */
  YYSYMBOL_function_argument_declaration = 297, /* function_argument_declaration  */
  YYSYMBOL_function_argument_list = 298,   /* function_argument_list  */
  YYSYMBOL_tuple_type = 299,               /* tuple_type  */
  YYSYMBOL_tuple_type_list = 300,          /* tuple_type_list  */
  YYSYMBOL_variant_type = 301,             /* variant_type  */
  YYSYMBOL_variant_type_list = 302,        /* variant_type_list  */
  YYSYMBOL_copy_or_move = 303,             /* copy_or_move  */
  YYSYMBOL_variable_declaration = 304,     /* variable_declaration  */
  YYSYMBOL_copy_or_move_or_clone = 305,    /* copy_or_move_or_clone  */
  YYSYMBOL_optional_ref = 306,             /* optional_ref  */
  YYSYMBOL_let_variable_declaration = 307, /* let_variable_declaration  */
  YYSYMBOL_global_variable_declaration_list = 308, /* global_variable_declaration_list  */
  YYSYMBOL_309_23 = 309,                   /* $@23  */
  YYSYMBOL_optional_shared = 310,          /* optional_shared  */
  YYSYMBOL_optional_public_or_private_variable = 311, /* optional_public_or_private_variable  */
  YYSYMBOL_global_let = 312,               /* global_let  */
  YYSYMBOL_313_24 = 313,                   /* $@24  */
  YYSYMBOL_enum_list = 314,                /* enum_list  */
  YYSYMBOL_single_alias = 315,             /* single_alias  */
  YYSYMBOL_316_25 = 316,                   /* $@25  */
  YYSYMBOL_alias_list = 317,               /* alias_list  */
  YYSYMBOL_alias_declaration = 318,        /* alias_declaration  */
  YYSYMBOL_optional_public_or_private_enum = 319, /* optional_public_or_private_enum  */
  YYSYMBOL_enum_name = 320,                /* enum_name  */
  YYSYMBOL_enum_declaration = 321,         /* enum_declaration  */
  YYSYMBOL_optional_structure_parent = 322, /* optional_structure_parent  */
  YYSYMBOL_optional_sealed = 323,          /* optional_sealed  */
  YYSYMBOL_structure_name = 324,           /* structure_name  */
  YYSYMBOL_class_or_struct = 325,          /* class_or_struct  */
  YYSYMBOL_optional_public_or_private_structure = 326, /* optional_public_or_private_structure  */
  YYSYMBOL_structure_declaration = 327,    /* structure_declaration  */
  YYSYMBOL_328_26 = 328,                   /* $@26  */
  YYSYMBOL_329_27 = 329,                   /* $@27  */
  YYSYMBOL_variable_name_with_pos_list = 330, /* variable_name_with_pos_list  */
  YYSYMBOL_basic_type_declaration = 331,   /* basic_type_declaration  */
  YYSYMBOL_enum_basic_type_declaration = 332, /* enum_basic_type_declaration  */
  YYSYMBOL_structure_type_declaration = 333, /* structure_type_declaration  */
  YYSYMBOL_auto_type_declaration = 334,    /* auto_type_declaration  */
  YYSYMBOL_bitfield_bits = 335,            /* bitfield_bits  */
  YYSYMBOL_bitfield_type_declaration = 336, /* bitfield_type_declaration  */
  YYSYMBOL_337_28 = 337,                   /* $@28  */
  YYSYMBOL_338_29 = 338,                   /* $@29  */
  YYSYMBOL_type_declaration = 339,         /* type_declaration  */
  YYSYMBOL_340_30 = 340,                   /* $@30  */
  YYSYMBOL_341_31 = 341,                   /* $@31  */
  YYSYMBOL_342_32 = 342,                   /* $@32  */
  YYSYMBOL_343_33 = 343,                   /* $@33  */
  YYSYMBOL_344_34 = 344,                   /* $@34  */
  YYSYMBOL_345_35 = 345,                   /* $@35  */
  YYSYMBOL_346_36 = 346,                   /* $@36  */
  YYSYMBOL_347_37 = 347,                   /* $@37  */
  YYSYMBOL_348_38 = 348,                   /* $@38  */
  YYSYMBOL_349_39 = 349,                   /* $@39  */
  YYSYMBOL_350_40 = 350,                   /* $@40  */
  YYSYMBOL_351_41 = 351,                   /* $@41  */
  YYSYMBOL_352_42 = 352,                   /* $@42  */
  YYSYMBOL_353_43 = 353,                   /* $@43  */
  YYSYMBOL_354_44 = 354,                   /* $@44  */
  YYSYMBOL_355_45 = 355,                   /* $@45  */
  YYSYMBOL_356_46 = 356,                   /* $@46  */
  YYSYMBOL_357_47 = 357,                   /* $@47  */
  YYSYMBOL_358_48 = 358,                   /* $@48  */
  YYSYMBOL_359_49 = 359,                   /* $@49  */
  YYSYMBOL_360_50 = 360,                   /* $@50  */
  YYSYMBOL_361_51 = 361,                   /* $@51  */
  YYSYMBOL_362_52 = 362,                   /* $@52  */
  YYSYMBOL_363_53 = 363,                   /* $@53  */
  YYSYMBOL_variant_alias_declaration = 364, /* variant_alias_declaration  */
  YYSYMBOL_365_54 = 365,                   /* $@54  */
  YYSYMBOL_366_55 = 366,                   /* $@55  */
  YYSYMBOL_bitfield_alias_declaration = 367, /* bitfield_alias_declaration  */
  YYSYMBOL_368_56 = 368,                   /* $@56  */
  YYSYMBOL_make_decl = 369,                /* make_decl  */
  YYSYMBOL_make_struct_fields = 370,       /* make_struct_fields  */
  YYSYMBOL_make_struct_dim = 371,          /* make_struct_dim  */
  YYSYMBOL_optional_block = 372,           /* optional_block  */
  YYSYMBOL_make_struct_decl = 373,         /* make_struct_decl  */
  YYSYMBOL_make_tuple = 374,               /* make_tuple  */
  YYSYMBOL_make_map_tuple = 375,           /* make_map_tuple  */
  YYSYMBOL_make_any_tuple = 376,           /* make_any_tuple  */
  YYSYMBOL_make_dim = 377,                 /* make_dim  */
  YYSYMBOL_make_dim_decl = 378,            /* make_dim_decl  */
  YYSYMBOL_make_table = 379,               /* make_table  */
  YYSYMBOL_make_table_decl = 380,          /* make_table_decl  */
  YYSYMBOL_array_comprehension_where = 381, /* array_comprehension_where  */
  YYSYMBOL_array_comprehension = 382       /* array_comprehension  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
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

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined DAS_YYLTYPE_IS_TRIVIAL && DAS_YYLTYPE_IS_TRIVIAL \
             && defined DAS_YYSTYPE_IS_TRIVIAL && DAS_YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7851

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  191
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  192
/* YYNRULES -- Number of rules.  */
#define YYNRULES  586
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1018

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   418


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   174,     2,   190,   185,   170,   163,     2,
     183,   184,   168,   167,   157,   166,   180,   169,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   160,   187,
     164,   158,   165,   159,   186,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   181,     2,   182,   162,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   188,   161,   189,   173,     2,     2,     2,
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
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   171,   172,   175,   176,   177,   178,   179
};

#if DAS_YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   452,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   468,   469,   470,   474,   475,
     479,   497,   498,   499,   500,   504,   508,   513,   522,   530,
     546,   551,   559,   559,   589,   610,   614,   617,   621,   627,
     636,   639,   645,   646,   650,   654,   655,   659,   662,   668,
     674,   677,   683,   684,   688,   689,   690,   699,   700,   704,
     713,   719,   727,   737,   746,   746,   753,   754,   755,   756,
     757,   758,   762,   767,   775,   776,   777,   781,   782,   783,
     784,   785,   786,   787,   788,   794,   797,   803,   804,   805,
     809,   817,   830,   834,   841,   842,   846,   847,   848,   852,
     855,   862,   866,   867,   868,   869,   870,   871,   872,   873,
     874,   875,   876,   877,   878,   879,   880,   881,   882,   883,
     884,   885,   886,   887,   888,   889,   890,   891,   892,   893,
     894,   895,   896,   897,   898,   899,   900,   901,   902,   903,
     904,   905,   906,   907,   908,   909,   910,   911,   912,   913,
     914,   918,   940,   941,   942,   946,   952,   952,   969,   973,
     984,   985,   986,   987,   988,   989,   990,   991,   992,   993,
     994,   995,   996,   997,   998,   999,  1000,  1001,  1002,  1003,
    1007,  1012,  1018,  1024,  1058,  1061,  1067,  1068,  1079,  1083,
    1089,  1092,  1095,  1099,  1105,  1109,  1113,  1116,  1119,  1124,
    1127,  1135,  1138,  1143,  1146,  1154,  1160,  1161,  1165,  1171,
    1171,  1171,  1174,  1174,  1174,  1179,  1179,  1179,  1187,  1187,
    1187,  1193,  1203,  1214,  1229,  1232,  1238,  1239,  1246,  1257,
    1258,  1259,  1263,  1264,  1265,  1266,  1270,  1275,  1283,  1284,
    1288,  1293,  1300,  1301,  1302,  1303,  1304,  1305,  1309,  1310,
    1311,  1312,  1313,  1314,  1315,  1316,  1317,  1318,  1319,  1320,
    1321,  1322,  1323,  1324,  1325,  1326,  1327,  1331,  1332,  1333,
    1334,  1338,  1349,  1354,  1364,  1368,  1368,  1368,  1375,  1375,
    1375,  1389,  1393,  1397,  1397,  1397,  1404,  1405,  1406,  1407,
    1408,  1409,  1410,  1411,  1412,  1413,  1414,  1415,  1416,  1417,
    1418,  1419,  1420,  1421,  1422,  1423,  1424,  1425,  1426,  1427,
    1428,  1429,  1430,  1431,  1432,  1433,  1434,  1435,  1436,  1437,
    1438,  1444,  1445,  1446,  1447,  1448,  1449,  1450,  1451,  1452,
    1453,  1454,  1455,  1456,  1460,  1464,  1467,  1470,  1471,  1472,
    1473,  1476,  1479,  1480,  1483,  1483,  1483,  1486,  1490,  1494,
    1498,  1499,  1500,  1501,  1502,  1503,  1504,  1505,  1506,  1507,
    1508,  1516,  1517,  1521,  1522,  1523,  1527,  1528,  1532,  1533,
    1534,  1538,  1548,  1551,  1551,  1570,  1569,  1584,  1583,  1596,
    1605,  1610,  1618,  1619,  1623,  1626,  1635,  1636,  1640,  1649,
    1650,  1655,  1656,  1660,  1666,  1672,  1675,  1679,  1685,  1694,
    1695,  1696,  1700,  1701,  1705,  1708,  1713,  1718,  1726,  1737,
    1740,  1740,  1760,  1761,  1765,  1766,  1767,  1771,  1774,  1774,
    1793,  1796,  1805,  1818,  1818,  1839,  1840,  1844,  1845,  1849,
    1850,  1851,  1855,  1865,  1872,  1882,  1883,  1887,  1888,  1892,
    1898,  1899,  1903,  1904,  1905,  1909,  1914,  1909,  1924,  1931,
    1940,  1946,  1957,  1958,  1959,  1960,  1961,  1962,  1963,  1964,
    1965,  1966,  1967,  1968,  1969,  1970,  1971,  1972,  1973,  1974,
    1975,  1976,  1977,  1978,  1979,  1980,  1981,  1985,  1986,  1987,
    1988,  1989,  1990,  1994,  2005,  2009,  2019,  2026,  2035,  2035,
    2035,  2048,  2049,  2050,  2051,  2052,  2066,  2072,  2076,  2080,
    2085,  2090,  2095,  2100,  2104,  2108,  2113,  2117,  2122,  2122,
    2122,  2128,  2135,  2135,  2135,  2140,  2140,  2140,  2146,  2146,
    2146,  2151,  2155,  2155,  2155,  2160,  2160,  2160,  2169,  2173,
    2173,  2173,  2178,  2178,  2178,  2187,  2191,  2191,  2191,  2196,
    2196,  2196,  2205,  2205,  2205,  2211,  2211,  2211,  2220,  2220,
    2220,  2244,  2244,  2264,  2265,  2266,  2267,  2271,  2278,  2285,
    2291,  2300,  2305,  2312,  2313,  2317,  2323,  2330,  2338,  2345,
    2353,  2365,  2368,  2382,  2391,  2392,  2396,  2401,  2408,  2413,
    2423,  2428,  2435,  2447,  2448,  2452,  2455
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "\"lexer error\"",
  "\"struct\"", "\"class\"", "\"let\"", "\"def\"", "\"while\"", "\"if\"",
  "\"static_if\"", "\"else\"", "\"for\"", "\"recover\"", "\"true\"",
  "\"false\"", "\"new\"", "\"typeinfo\"", "\"type\"", "\"in\"", "\"is\"",
  "\"as\"", "\"elif\"", "\"static_elif\"", "\"array\"", "\"return\"",
  "\"null\"", "\"break\"", "\"try\"", "\"options\"", "\"table\"",
  "\"expect\"", "\"const\"", "\"require\"", "\"operator\"", "\"enum\"",
  "\"finally\"", "\"delete\"", "\"deref\"", "\"typedef\"", "\"with\"",
  "\"aka\"", "\"assume\"", "\"cast\"", "\"override\"", "\"abstract\"",
  "\"upcast\"", "\"iterator\"", "\"var\"", "\"addr\"", "\"continue\"",
  "\"where\"", "\"pass\"", "\"reinterpret\"", "\"module\"", "\"public\"",
  "\"label\"", "\"goto\"", "\"implicit\"", "\"explicit\"", "\"shared\"",
  "\"private\"", "\"smart_ptr\"", "\"unsafe\"", "\"bool\"", "\"void\"",
  "\"string\"", "\"auto\"", "\"int\"", "\"int2\"", "\"int3\"", "\"int4\"",
  "\"uint\"", "\"bitfield\"", "\"uint2\"", "\"uint3\"", "\"uint4\"",
  "\"float\"", "\"float2\"", "\"float3\"", "\"float4\"", "\"range\"",
  "\"urange\"", "\"block\"", "\"int64\"", "\"uint64\"", "\"double\"",
  "\"function\"", "\"lambda\"", "\"int8\"", "\"uint8\"", "\"int16\"",
  "\"uint16\"", "\"tuple\"", "\"variant\"", "\"generator\"", "\"yield\"",
  "\"sealed\"", "\"+=\"", "\"-=\"", "\"/=\"", "\"*=\"", "\"%=\"", "\"&=\"",
  "\"|=\"", "\"^=\"", "\"<<\"", "\">>\"", "\"++\"", "\"--\"", "\"<=\"",
  "\"<<=\"", "\">>=\"", "\">=\"", "\"==\"", "\"!=\"", "\"->\"", "\"<-\"",
  "\"??\"", "\"?.\"", "\"?[\"", "\"<|\"", "\" <|\"", "\"@ <|\"",
  "\"@@ <|\"", "\"|>\"", "\":=\"", "\"<<<\"", "\">>>\"", "\"<<<=\"",
  "\">>>=\"", "\"=>\"", "\"::\"", "\"&&\"", "\"||\"", "\"^^\"", "\"&&=\"",
  "\"||=\"", "\"^^=\"", "\"..\"", "\"[[\"", "\"[{\"", "\"{{\"",
  "\"integer constant\"", "\"long integer constant\"",
  "\"unsigned integer constant\"", "\"unsigned long integer constant\"",
  "\"floating point constant\"", "\"double constant\"", "\"name\"",
  "\"start of the string\"", "STRING_CHARACTER", "STRING_CHARACTER_ESC",
  "\"end of the string\"", "\"{\"", "\"}\"",
  "\"end of failed eader macro\"", "','", "'='", "'?'", "':'", "'|'",
  "'^'", "'&'", "'<'", "'>'", "'-'", "'+'", "'*'", "'/'", "'%'",
  "UNARY_MINUS", "UNARY_PLUS", "'~'", "'!'", "PRE_INC", "PRE_DEC",
  "POST_INC", "POST_DEC", "DEREF", "'.'", "'['", "']'", "'('", "')'",
  "'$'", "'@'", "';'", "'{'", "'}'", "'#'", "$accept", "program",
  "optional_public_or_private_module", "module_name", "module_declaration",
  "character_sequence", "string_constant", "string_builder_body",
  "string_builder", "reader_character_sequence", "expr_reader", "$@1",
  "options_declaration", "require_declaration", "require_module_name",
  "require_module", "is_public_module", "expect_declaration",
  "expect_list", "expect_error", "expression_label", "expression_goto",
  "elif_or_static_elif", "expression_else", "if_or_static_if",
  "expression_if_then_else", "expression_for_loop", "expression_unsafe",
  "expression_while_loop", "expression_with", "expression_with_alias",
  "$@2", "annotation_argument_value", "annotation_argument_value_list",
  "annotation_argument_name", "annotation_argument",
  "annotation_argument_list", "annotation_declaration_name",
  "annotation_declaration", "annotation_list", "optional_annotation_list",
  "optional_function_argument_list", "optional_function_type",
  "function_name", "global_function_declaration",
  "optional_public_or_private_function", "function_declaration_header",
  "function_declaration", "$@3", "expression_block", "expression_any",
  "expressions", "expr_pipe", "name_in_namespace", "expression_delete",
  "expr_new", "expression_break", "expression_continue",
  "expression_return", "expression_yield", "expression_try_catch",
  "kwd_let", "expression_let", "expr_cast", "$@4", "$@5", "$@6", "$@7",
  "$@8", "$@9", "expr_type_decl", "$@10", "$@11", "expr_type_info",
  "expr_list", "block_or_simple_block", "block_or_lambda", "capture_entry",
  "capture_list", "optional_capture_list", "expr_block",
  "expr_numeric_const", "expr_assign", "expr_assign_pipe",
  "expr_named_call", "expr_method_call", "func_addr_expr", "$@12", "$@13",
  "$@14", "$@15", "expr_field", "$@16", "$@17", "expr", "$@18", "$@19",
  "optional_field_annotation", "optional_override", "optional_constant",
  "optional_public_or_private_member_variable",
  "structure_variable_declaration", "struct_variable_declaration_list",
  "$@20", "$@21", "$@22", "function_argument_declaration",
  "function_argument_list", "tuple_type", "tuple_type_list",
  "variant_type", "variant_type_list", "copy_or_move",
  "variable_declaration", "copy_or_move_or_clone", "optional_ref",
  "let_variable_declaration", "global_variable_declaration_list", "$@23",
  "optional_shared", "optional_public_or_private_variable", "global_let",
  "$@24", "enum_list", "single_alias", "$@25", "alias_list",
  "alias_declaration", "optional_public_or_private_enum", "enum_name",
  "enum_declaration", "optional_structure_parent", "optional_sealed",
  "structure_name", "class_or_struct",
  "optional_public_or_private_structure", "structure_declaration", "$@26",
  "$@27", "variable_name_with_pos_list", "basic_type_declaration",
  "enum_basic_type_declaration", "structure_type_declaration",
  "auto_type_declaration", "bitfield_bits", "bitfield_type_declaration",
  "$@28", "$@29", "type_declaration", "$@30", "$@31", "$@32", "$@33",
  "$@34", "$@35", "$@36", "$@37", "$@38", "$@39", "$@40", "$@41", "$@42",
  "$@43", "$@44", "$@45", "$@46", "$@47", "$@48", "$@49", "$@50", "$@51",
  "$@52", "$@53", "variant_alias_declaration", "$@54", "$@55",
  "bitfield_alias_declaration", "$@56", "make_decl", "make_struct_fields",
  "make_struct_dim", "optional_block", "make_struct_decl", "make_tuple",
  "make_map_tuple", "make_any_tuple", "make_dim", "make_dim_decl",
  "make_table", "make_table_decl", "array_comprehension_where",
  "array_comprehension", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,    44,    61,    63,
      58,   124,    94,    38,    60,    62,    45,    43,    42,    47,
      37,   412,   413,   126,    33,   414,   415,   416,   417,   418,
      46,    91,    93,    40,    41,    36,    64,    59,   123,   125,
      35
};
#endif

#define YYPACT_NINF (-676)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-540)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -676,    47,  -676,  -676,    26,   -72,   -31,  -101,  -676,   -76,
    -676,  -676,     8,  -676,  -676,  -676,  -676,  -676,   263,  -676,
      23,  -676,  -676,  -676,  -676,  -676,  -676,  -676,  -676,  -676,
     -11,  -676,   -82,     1,    55,  -676,  -676,   -31,    22,  -676,
    -676,    75,  -676,  -676,  -676,    23,   134,   139,  -676,  -676,
     172,    39,   145,  -676,   105,  -676,  -676,  -676,   297,   304,
     311,  -676,   316,    13,    26,   230,   -72,   208,   249,  -676,
     268,   269,  -676,   288,   270,   -84,   329,   271,  -676,  -676,
     309,    26,     8,  -676,  -676,  -676,  -676,  -676,  -676,  -676,
     312,  -676,  -676,  -676,  -676,  -676,   272,  -676,  -676,  -676,
    -676,  -676,   198,    83,  -676,  -676,  -676,  -676,   407,  -676,
    -676,  7616,  -676,  -676,   276,  -676,  -676,  -676,   315,   277,
    -676,    80,  -676,    -1,  -676,   -78,   371,  -676,   330,  -676,
    -676,   291,  -676,  -676,  -676,  -676,  -676,  -676,  -676,    81,
    -676,   305,   307,   310,   317,  -676,  -676,  -676,   290,  -676,
    -676,  -676,  -676,  -676,   322,  -676,  -676,  -676,  -676,  -676,
    -676,  -676,  -676,  -676,   324,  -676,  -676,  -676,   325,   327,
    -676,  -676,  -676,  -676,   335,   338,  -676,  -676,  -676,  -676,
    -676,  2609,  -676,  -676,   292,   326,  -676,  7230,   442,   450,
    -676,   321,   306,   289,  -676,  -676,   356,  -676,   319,    26,
     357,  -676,  -676,  -676,    83,  -676,  -676,  -676,  -676,  -676,
     360,  -676,    88,   202,   204,  -676,  -676,  -676,  -676,  -676,
    -676,   478,  -676,  -676,    14,  3024,  -676,   -77,   351,  -676,
     328,  -676,  -676,  -676,  -676,  -676,  -676,  -676,  -676,  -676,
    -676,  -676,  -676,  -676,  -676,  -676,  -676,  -676,  -676,  -676,
    -676,   331,  -676,  -676,  -676,  -676,  -676,  -676,  -676,  -676,
    -676,  -676,  -676,  -676,  -676,  -676,  -676,  -676,  -676,  -676,
    -676,  -676,  -676,  -676,  -676,  -676,  -676,   339,  -676,  -676,
    -100,   358,  -676,  -676,  -676,  -676,  -676,  -676,  -676,  -676,
     332,   -70,   364,   337,  -676,   330,   123,   471,  -676,   267,
    -676,  7616,  7616,  7616,  7616,   342,   315,  7616,   321,  7616,
     321,  7616,   321,  7702,   326,  -676,  -676,  -676,   345,  -676,
    -676,  -676,  7530,   348,   368,  -676,   350,   370,   372,   354,
     374,   359,  -676,   375,  4703,  4703,  7358,  7444,  4703,  -676,
    -676,  -676,  -676,  -676,  -676,  -676,  4703,  4703,  4703,   199,
    4703,  4703,  -676,  4703,  -676,   355,  -676,  -676,  -676,    61,
    -676,  -676,  -676,  -676,   347,  -676,  -676,  -676,  -676,  -676,
    -676,  5986,   361,  -676,  -676,  -676,  -676,  -676,  -676,  -676,
    7616,   -43,  -676,  -676,  -676,    -6,  -676,    85,  7616,  -676,
    1329,  -676,   -95,  -676,   199,  -676,  -676,   357,   363,   391,
     394,  7616,  -676,    32,   503,   719,  1945,  2003,  -676,   117,
    2105,   358,  2389,   358,  2548,   358,   -58,  -676,   135,  2609,
     149,  -676,   490,  -676,   199,  -676,  4703,  -676,  -676,  4703,
    -676,  4703,  7616,   320,   320,   357,  1682,   357,  1843,  6557,
    -676,   146,   280,   320,   320,   -26,  -676,   320,   320,  5354,
     114,  -676,  2449,   410,    40,   398,  4703,  4703,  -676,  -676,
    4703,  4703,  4703,  4703,   402,  4703,   403,  4703,  4703,  4703,
    4703,  4703,  4703,  4703,  4703,  4703,  3162,  4703,  4703,  4703,
    4703,  4703,  4703,  4703,  4703,  4703,  4703,   -64,  4703,  -676,
    3300,  2609,  -676,  -676,   357,  -676,    48,  -676,   330,  2609,
    -676,  4703,  -676,  -676,   357,  2165,  -676,   306,  4703,  4703,
     404,  -676,   367,   412,  3461,    31,  2311,   237,   237,  -676,
     520,   373,   376,  4703,  -676,  -676,  -676,  -676,  -676,  -676,
    -676,  -676,   378,   381,   383,  -676,  -676,  -676,   357,  -676,
     -83,  -676,  6488,    20,  4703,  -676,  -676,    12,  -676,  -676,
    -676,   517,  1041,  -676,  -676,  -676,  2610,  -676,  7616,  -676,
    -676,  -676,   422,  -676,   408,  -676,   409,  -676,   413,  7616,
    -676,  7702,  -676,   326,  3599,  3760,  7616,  5433,  7616,  7616,
    5512,  7616,  5591,  2688,     7,   237,   -36,  2004,  3921,  6557,
     415,   -21,   393,   420,  -676,  -676,    94,    10,  4082,   -21,
     248,  4703,  4703,   390,  -676,  4703,   258,   429,  -676,   243,
    -676,   432,  -676,    95,  6790,    96,   321,   424,  -676,  -676,
     509,   509,  7145,  7145,  7076,  7076,   406,   235,  -676,  6063,
     -52,   -52,   509,   509,  1017,   286,   634,  6859,   452,  6639,
     809,  7010,  7043,  7145,  7145,  1618,  1618,   235,   235,   235,
     454,  4703,  -676,   457,  4703,   598,  6140,  -676,   100,  -676,
    -676,  -676,  7616,  -676,  2610,  -676,   477,    15,  2610,  -676,
    -676,   487,  1140,   600,  6790,   477,   456,  -676,   455,   476,
    6790,  -676,  2610,  -676,  4794,   434,  -676,  -676,   435,  -676,
    -676,   477,  -676,  -676,  -676,  -676,   237,  -676,  4703,  4703,
    4703,  4703,  4703,  4703,  4703,  4703,  4703,  4703,  2748,  4703,
    4703,  4703,  4703,  4703,  4703,  2886,  -676,   890,     8,  -676,
     615,   330,   482,   478,  -676,  2610,  -676,  4896,  -676,  2826,
    -676,  -676,  -676,  -676,  -676,  -676,  -676,  -676,  -676,  2609,
    -676,  -676,  -676,  -676,   101,   483,  5670,  2964,  -676,  3102,
    3240,  -676,  3401,  -676,   410,  4703,  -676,  4703,  4703,   -15,
     484,   432,   444,   453,  4703,   469,  4703,  4703,   432,   448,
     470,  6790,  -676,  -676,  6708,  -676,   508,  7616,   321,    77,
     129,  4703,  -676,   511,   514,   515,   518,  -676,   152,   358,
    -676,  4243,  -676,  -676,  4703,  -676,  6217,  -676,  6294,  -676,
    -676,  -676,  1462,  -676,  6385,  -676,  4703,  -676,  4998,  4703,
    4703,  -676,   306,  -676,  -676,  -676,  -676,  -676,  5100,  -676,
    -676,  -676,   352,  -676,  6790,  6790,  6790,  6790,  6790,  6790,
    6790,  6790,  6790,  6790,  4703,  4703,  6790,  6790,  6790,  6790,
    6790,  6790,  6790,  4703,  4703,  6790,  -676,   160,   336,    16,
     485,  -676,  -676,  5202,  -676,  -676,  -676,  -676,  -676,  -676,
     158,  -676,  -676,  -676,  -676,  -676,   491,   -98,  6790,  6790,
     -21,   488,   103,   415,   499,  -676,  6790,  -676,  -676,   -96,
     -21,   500,  -676,  -676,  -676,  3431,   358,   501,  6790,  -676,
    -676,  -676,  -676,    96,   504,   -74,  7616,  -676,   109,    17,
    -676,  -676,  -676,   478,  4703,    86,  -676,  -676,  4703,  -676,
    1518,   306,  -676,  -676,  4703,  -676,  6941,  6790,  6941,  6790,
     496,  -676,  -676,     6,  -676,  -676,   336,  -676,  -676,  -676,
    4703,   538,  -676,  4703,  4703,  4703,  4404,  4703,   506,   510,
    4703,  4703,  -676,  4703,   505,  -676,  -676,   530,  -676,  -676,
    -676,  4565,  -676,  -676,  3540,  -676,  6790,   306,  6790,  -676,
    -676,   477,  -676,  -676,   664,   357,  5749,   532,  7145,  7145,
    7145,  -676,  5828,  5278,   516,  -676,  6790,  6790,  5278,   519,
     199,  -676,  4703,  6859,  -676,  -676,   352,    -1,  -676,  -676,
    -676,  -676,  4703,  -676,   648,   521,  -676,   513,  -676,  -676,
     199,    17,  -676,  -676,   522,    -1,  5907,  4703,   523,   526,
    -676,  -676,   306,  -676,  6790,  -676,  -676,  -676
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,    94,     1,   206,     0,     0,     0,     0,   207,     0,
     551,   548,     0,    14,     3,    10,     9,     8,     0,     7,
     412,     6,    11,     5,     4,    12,    13,    75,    76,    74,
      83,    85,    34,    47,    44,    45,    36,     0,    42,    35,
     423,     0,   428,    19,    18,   412,     0,     0,    88,    89,
       0,   186,    90,    92,     0,    87,   441,   440,   152,   429,
     442,   413,   414,     0,     0,     0,     0,    37,     0,    43,
       0,     0,    40,     0,     0,     0,    15,     0,   549,   188,
       0,     0,     0,    95,   154,   153,   156,   151,   431,   430,
       0,   444,   443,   445,   416,   415,   418,    81,    82,    79,
      80,    78,     0,     0,    77,    86,    48,    46,    42,    39,
      38,     0,   425,   427,     0,    16,    17,    20,     0,     0,
     187,     0,    93,     0,   432,     0,   437,   409,   361,    21,
      22,     0,    70,    71,    68,    69,    67,    66,    72,     0,
      41,     0,     0,     0,     0,   452,   472,   453,   484,   454,
     458,   459,   460,   461,   476,   465,   466,   467,   468,   469,
     470,   471,   473,   474,   521,   457,   464,   475,   528,   535,
     455,   462,   456,   463,     0,     0,   483,   491,   494,   492,
     493,   424,   426,   486,     0,     0,    91,     0,     0,     0,
     101,    96,     0,     0,   420,   438,     0,   446,   410,     0,
       0,    23,    24,    25,     0,    84,   512,   515,   518,   508,
       0,   488,   522,   529,   536,   542,   545,   499,   504,   498,
     511,     0,   507,   501,     0,     0,   503,     0,     0,   389,
       0,   150,   104,   105,   107,   106,   108,   109,   110,   111,
     137,   138,   135,   136,   128,   139,   140,   129,   126,   127,
     148,     0,   149,   141,   142,   143,   144,   115,   116,   117,
     112,   113,   114,   125,   131,   132,   130,   123,   124,   119,
     118,   120,   121,   122,   103,   102,   147,     0,   133,   134,
     361,    99,   180,   157,   477,   480,   478,   481,   479,   482,
       0,     0,   435,     0,   417,   361,     0,   448,   419,   402,
      73,     0,     0,     0,     0,     0,     0,     0,    96,     0,
      96,     0,    96,     0,     0,   506,   500,   502,     0,   505,
     292,   293,     0,     0,     0,   286,     0,     0,     0,     0,
       0,     0,   476,     0,     0,     0,     0,     0,     0,   242,
     244,   243,   245,   246,   247,    26,     0,     0,     0,     0,
       0,     0,   496,     0,   229,   230,   290,   289,   240,   287,
     353,   352,   351,   350,    94,   356,   288,   355,   354,   332,
     294,     0,     0,   291,   553,   554,   555,   556,   487,   552,
       0,     0,   146,   145,    97,     0,   382,     0,     0,   155,
       0,   420,     0,   433,     0,   439,   372,     0,     0,     0,
       0,     0,   403,     0,     0,     0,     0,     0,   485,     0,
       0,    99,     0,    99,     0,    99,   186,   386,     0,   384,
       0,   497,   190,   193,     0,   218,     0,   209,   212,     0,
     215,     0,     0,   321,   322,     0,   563,     0,     0,     0,
     580,     0,     0,   298,   297,   337,    32,   296,   295,     0,
     231,   359,     0,   238,     0,     0,     0,     0,   323,   324,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   283,     0,   495,
       0,   388,   550,   390,     0,   380,   393,    98,   361,   100,
     182,     0,    57,    58,     0,     0,   194,     0,     0,     0,
       0,   195,     0,     0,     0,     0,     0,     0,     0,   160,
     158,     0,     0,     0,   175,   170,   167,   166,   168,   169,
     181,   161,     0,     0,     0,   173,   174,   176,     0,   165,
       0,   162,   248,     0,     0,   421,   436,   373,   411,   362,
     449,   450,     0,   400,   401,   399,     0,   513,     0,   519,
     509,   489,     0,   523,     0,   530,     0,   537,     0,     0,
     543,     0,   546,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   186,     0,     0,   571,
     561,   563,     0,   574,   575,   576,     0,     0,     0,   563,
       0,     0,     0,     0,    29,     0,    27,     0,   325,   275,
     274,     0,   333,     0,   224,     0,    96,     0,   347,   348,
     299,   300,   312,   313,   310,   311,     0,   342,   330,     0,
     357,   358,   301,   302,   317,   318,   319,   320,     0,     0,
     315,   316,   314,   308,   309,   304,   303,   305,   306,   307,
       0,     0,   281,     0,     0,     0,     0,   335,     0,   381,
     392,   391,     0,   394,     0,   383,     0,     0,     0,   196,
     199,     0,   248,     0,   189,     0,     0,   179,     0,     0,
      51,    61,     0,   203,   248,   230,   184,   185,     0,   177,
     178,     0,   164,   171,   172,   208,     0,   163,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   434,     0,     0,   447,
       0,   361,     0,   399,   404,     0,   408,   248,   514,     0,
     520,   510,   490,   524,   526,   531,   533,   538,   540,   385,
     544,   387,   547,   191,     0,     0,     0,     0,   338,     0,
       0,   339,     0,   360,   238,     0,   564,     0,     0,   563,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   573,   581,   582,     0,    30,    33,     0,    96,     0,
       0,     0,   334,     0,     0,     0,     0,   236,     0,    99,
     344,     0,   328,   349,     0,   331,     0,   282,     0,   284,
     326,   336,   395,   398,   397,    62,     0,   200,   248,     0,
       0,   197,     0,    63,    64,    49,    50,   204,   248,   201,
     231,   180,    54,   183,   258,   259,   261,   260,   262,   252,
     253,   254,   263,   264,     0,     0,   250,   251,   265,   266,
     255,   256,   257,     0,     0,   249,   422,     0,   368,   363,
       0,   451,   406,   248,   407,   516,   527,   534,   541,   192,
       0,   221,   219,   210,   213,   216,     0,     0,   558,   557,
     563,     0,     0,   562,     0,   566,   572,   578,   577,     0,
     563,     0,   579,    28,    31,     0,    99,     0,   225,   234,
     235,   233,   232,     0,     0,     0,     0,   272,     0,   343,
     329,   327,   285,   391,     0,     0,   198,   205,     0,   202,
       0,     0,    52,    53,     0,    59,   269,   270,   267,   268,
      95,   369,   370,   363,   364,   365,   368,   374,   405,   517,
       0,     0,   220,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   565,     0,     0,   569,   276,     0,   271,   237,
     239,     0,   226,   241,     0,   273,   396,     0,    65,   159,
      55,     0,   379,   375,   366,     0,     0,     0,   211,   214,
     217,   340,     0,   583,     0,   567,   560,   559,   583,     0,
       0,   279,     0,   227,   345,    60,    54,     0,   367,   377,
     371,   222,     0,   341,     0,     0,   568,     0,   570,   277,
       0,   228,   346,    56,     0,     0,     0,     0,     0,     0,
     280,   376,     0,   223,   584,   585,   586,   378
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -676,  -676,  -676,  -676,  -676,   262,   637,  -676,  -676,  -676,
    -676,  -676,  -676,  -676,   673,  -676,   603,  -676,  -676,   646,
    -676,  -676,  -676,  -273,  -676,  -676,  -676,  -676,  -676,  -676,
    -676,  -676,   527,  -676,  -676,   650,   -46,  -676,   636,     3,
    -347,  -296,  -406,  -676,  -676,  -676,  -675,  -676,  -676,  -188,
    -676,  -102,  -494,   -12,  -676,  -676,  -676,  -676,  -676,  -676,
    -676,   721,  -676,  -676,  -676,  -676,  -676,  -676,  -676,  -676,
    -676,  -676,  -676,  -676,  -459,  -676,  -676,  -169,  -676,   -29,
    -497,  -676,  -387,  -676,  -676,  -676,  -676,  -676,  -676,  -676,
    -676,  -676,  -676,  -676,   382,  -676,  -676,  -127,  -197,  -676,
    -199,  -676,  -676,  -676,  -676,  -676,   236,  -676,   165,  -676,
    -366,   423,  -486,  -488,   186,  -676,  -379,  -676,  -676,   694,
    -676,  -676,  -676,   365,    25,  -676,  -676,  -676,  -676,  -676,
    -676,  -676,  -676,  -676,  -676,  -676,  -676,  -676,  -676,  -383,
     -86,  -676,  -676,  -676,   439,  -676,  -676,  -676,   -62,  -676,
    -676,  -676,  -676,  -676,  -676,  -676,  -676,  -676,  -676,  -676,
    -676,  -676,  -676,  -676,  -676,  -676,  -676,  -676,  -676,  -676,
    -676,  -676,  -676,  -676,  -676,  -676,  -676,  -676,   436,  -588,
    -430,  -567,  -676,  -676,  -325,   -20,   333,  -676,  -676,  -676,
    -221,  -676
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,   117,    45,    14,   131,   137,   442,   356,   776,
     357,   607,    15,    16,    38,    39,    72,    17,    34,    35,
     521,   522,   914,   915,   523,   524,   525,   526,   527,   528,
     529,   908,   138,   139,    30,    31,    32,    52,    53,    54,
      18,   281,   389,   191,    19,    86,   192,    87,   123,   358,
     530,   390,   531,   359,   532,   360,   533,   534,   535,   536,
     537,   538,   539,   361,   578,   933,   579,   934,   581,   935,
     362,   576,   932,   363,   613,   953,   364,   787,   788,   616,
     365,   366,   671,   541,   367,   368,   369,   777,   980,   778,
    1000,   370,   655,   902,   614,   896,  1002,   385,   926,   989,
     923,   850,   547,   721,   987,  1005,   386,   387,   417,   418,
     229,   230,   758,   495,   556,   403,   298,   198,   295,    62,
      96,    21,   128,   291,    42,    73,    75,    22,    90,   125,
      23,   395,   196,   197,    60,    93,    24,   126,   293,   299,
     372,   290,   178,   179,   184,   180,   306,   732,   419,   304,
     731,   301,   728,   302,   929,   303,   730,   307,   733,   308,
     856,   309,   735,   310,   857,   311,   737,   312,   858,   313,
     740,   314,   742,    25,    47,   119,    26,    46,   373,   590,
     591,   592,   374,   593,   594,   595,   596,   375,   441,   376,
     995,   377
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      55,   200,   496,   540,   283,   564,   659,   566,   599,   568,
     664,   670,   411,   440,   413,   493,   415,   453,   548,   -94,
     686,   687,   683,   780,   762,   177,   755,    97,    98,   767,
     585,   658,   769,   187,   806,   121,   585,   454,   455,   696,
     199,    48,   494,    68,    27,    28,   316,     2,    40,   181,
     924,   963,   584,     3,   597,   650,   651,   951,   617,   781,
     924,   781,   726,   544,   464,    40,    74,   466,   467,    49,
      55,    33,   378,    43,    80,    64,     4,    69,     5,   392,
       6,   660,   193,    61,   384,   652,     7,    41,   756,   937,
     757,   943,   545,   466,   467,     8,    80,   132,   133,   176,
     114,     9,   569,   925,   697,   113,   228,   188,   189,    44,
     194,   496,   379,   925,   282,   744,   653,   654,    36,   393,
      10,   667,   661,   456,   457,   458,   459,   460,   487,   488,
     461,   462,   463,   464,   779,   465,   466,   467,   468,    37,
      50,    11,   469,   297,   470,   471,   492,    63,   190,   553,
     472,   473,   474,   296,   487,   488,    99,    51,   554,   695,
     100,    65,   101,   102,   400,   660,   761,   400,   397,   392,
     803,    80,   400,   873,   807,    29,   476,   317,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   817,   618,
     555,    70,   871,   718,   660,   318,   103,   487,   488,   823,
     720,   719,    71,   757,   319,   400,   661,   493,   662,   716,
     451,   663,    66,   783,   431,   177,   177,   177,   177,   282,
     660,   177,   784,   177,    40,   177,   134,   177,    12,   940,
     135,   852,   136,   102,    13,   661,   177,    64,   204,   404,
     405,   406,   407,   781,   452,   410,    50,   412,  -525,   414,
     177,   177,   781,  -525,   785,   454,   455,   781,   781,   786,
     422,   661,    82,    51,   186,   205,   781,    56,    57,   497,
      58,  -525,   498,   957,   436,   438,   765,   772,   609,   782,
      64,   766,   561,    77,   801,   859,   760,    83,    78,   176,
     176,   176,   176,   955,   177,   176,   867,   176,    59,   176,
     570,   176,   177,   938,   562,   398,   454,   455,   879,   893,
     176,   887,  1004,   944,   572,   177,   904,    82,   491,   673,
     789,    79,   571,   930,   176,   176,   499,   681,    81,   870,
    1012,    50,   898,   602,   894,   603,   573,   446,   880,   552,
     454,   455,   920,   458,   459,   931,   177,   905,    51,   129,
     130,   464,    84,   465,   466,   467,   468,   284,    85,    88,
     469,   285,  -532,   911,  -539,    89,    91,  -532,   176,  -539,
     583,    94,    92,   106,   912,   913,   176,    95,   286,   287,
     288,   289,   546,   895,   115,  -532,   941,  -539,    71,   176,
     116,   921,   456,   457,   458,   459,   460,   922,   108,   461,
     462,   463,   464,  -278,   465,   466,   467,   468,  -278,   201,
     202,   469,   575,   470,   471,   487,   488,   109,   110,   472,
     176,   474,   354,   685,   400,   282,  -278,   401,   458,   459,
     402,   129,   130,   604,   605,   766,   464,   770,   610,   466,
     467,   468,   201,   202,   203,   469,   111,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   112,   120,   118,
     127,   124,    69,   182,   183,   185,   487,   488,   195,   206,
     199,   207,   177,   210,   208,   228,   278,   990,   805,   227,
     947,   209,   886,   177,   279,   177,   211,   813,   212,   213,
     177,   214,   177,   177,   282,   177,   729,   454,   455,   215,
     487,   488,   216,   822,   280,   292,   297,   739,   294,   305,
     315,   380,   399,   382,   747,   381,   749,   750,   388,   752,
     391,   383,   217,   540,   394,   396,   408,   421,    12,   454,
     455,   424,   425,   426,   427,   217,   428,   429,   430,   432,
     550,   450,   431,   551,   490,   549,   176,   619,   218,   219,
     615,   626,   628,   676,   677,   678,   688,   176,   722,   176,
     689,   218,   219,   690,   176,   692,   176,   176,   693,   176,
     694,   378,   760,   734,   736,   763,   177,   764,   738,   773,
     775,   779,   496,   456,   457,   458,   459,   460,   790,   791,
     461,   462,   463,   464,   849,   465,   466,   467,   468,   799,
     802,   793,   469,   795,   470,   471,   797,   371,   220,   696,
     472,   473,   474,   812,   814,   815,   475,   458,   459,   816,
     820,   220,   848,   821,   907,   464,   874,   465,   466,   467,
     468,   851,   860,   872,   469,   875,   476,   881,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   221,   222,
     176,   877,   882,   223,   454,   455,   224,   487,   488,   884,
     889,   221,   222,   890,   891,   282,   223,   892,   557,   224,
     939,   225,   927,   574,   936,   482,   483,   484,   485,   486,
     226,   942,   945,   962,   225,   948,   950,   967,   974,   487,
     488,   177,   975,   226,   979,   981,   988,   992,   996,  1007,
     104,   998,  1009,  1008,   606,  1015,    55,   952,  1016,  1011,
      67,   140,   107,  1003,   105,   885,   433,   434,   122,   910,
     439,   847,    20,   960,   949,   866,   964,   965,   443,   444,
     445,   300,   447,   448,   665,   449,   741,   420,   725,    76,
     456,   457,   458,   459,   460,   409,   878,   461,   462,   463,
     464,   217,   465,   466,   467,   468,   543,   997,   423,   469,
       0,   470,   471,     0,     0,   176,     0,   472,     0,   985,
       0,   600,   542,   986,     0,     0,     0,   218,   219,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,     0,     0,     0,   577,     0,
     177,   580,     0,   582,   487,   488,     0,     0,   589,     0,
     589,     0,     0,     0,  1017,     0,     0,     0,     0,   454,
     455,     0,     0,     0,   954,     0,     0,   220,   620,   621,
       0,     0,   622,   623,   624,   625,     0,   627,     0,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   639,   640,
     641,   642,   643,   644,   645,   646,   647,   648,   649,     0,
     656,     0,     0,     0,     0,     0,     0,   221,   222,     0,
       0,     0,   223,   666,   176,   224,     0,   672,     0,     0,
     674,   675,     0,     0,     0,     0,   680,     0,   684,     0,
     225,     0,     0,     0,     0,   691,   558,     0,     0,   226,
     454,   455,     0,     0,     0,   456,   457,   458,   459,   460,
       0,     0,   461,   462,   463,   464,   717,   465,   466,   467,
     468,     0,     0,     0,   469,     0,   470,   471,   727,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   746,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   999,   443,
     449,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     449,     0,     0,   771,   439,     0,     0,   774,  1010,   487,
     488,     0,     0,     0,     0,     0,   456,   457,   458,   459,
     460,     0,     0,   461,   462,   463,   464,     0,   465,   466,
     467,   468,     0,     0,     0,   469,     0,   470,   471,     0,
       0,     0,     0,   472,   473,   474,     0,     0,     0,   475,
       0,     0,     0,   796,     0,     0,   798,   454,   455,     0,
       0,     0,     0,     0,     0,     0,   804,     0,     0,   476,
     808,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,     0,     0,     0,   818,     0,     0,     0,     0,     0,
     487,   488,     0,   217,     0,     0,     0,   846,     0,     0,
     824,   825,   826,   827,   828,   829,   830,   831,   832,   833,
     836,   837,   838,   839,   840,   841,   842,   845,     0,   218,
     219,     0,     0,     0,     0,     0,     0,   853,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   456,   457,   458,   459,   460,     0,     0,
     461,   462,   463,   464,     0,   465,   466,   467,   468,   868,
     869,     0,   469,     0,   470,   471,   876,     0,   589,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   553,   220,
     454,   455,     0,   888,     0,     0,     0,   554,     0,     0,
       0,     0,     0,     0,     0,     0,   899,     0,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,     0,     0,
       0,   836,   845,     0,     0,     0,     0,   487,   488,   723,
     222,     0,     0,     0,   223,     0,     0,   224,     0,     0,
       0,     0,     0,     0,     0,     0,   916,   917,     0,     0,
       0,     0,   225,     0,     0,   918,   919,     0,   724,     0,
       0,   226,     0,     0,     0,     0,     0,     0,   698,   699,
     700,   701,   702,   703,   704,   705,   456,   457,   458,   459,
     460,   706,   707,   461,   462,   463,   464,   809,   465,   466,
     467,   468,     0,     0,     0,   469,   709,   470,   471,   710,
     711,     0,     0,   472,   473,   474,   712,   713,   714,   475,
       0,     0,     0,     0,     0,     0,   956,     0,     0,     0,
     958,     0,   542,     0,     0,     0,   961,     0,   810,   476,
       0,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,     0,   966,     0,     0,   968,   969,   970,   972,   973,
     487,   488,   976,   977,     0,   978,     0,   811,     0,     0,
     500,     0,     0,   983,     0,     3,     0,   501,   502,   503,
       0,   504,     0,   320,   321,   322,   323,   324,     0,     0,
       0,     0,     0,     0,   505,   325,   506,   507,     0,     0,
       0,     0,     0,     0,  1001,     0,   508,   326,     0,   509,
       0,   510,   327,     0,  1006,   328,     0,     8,   329,   511,
       0,   512,   330,     0,     0,   513,   514,     0,     0,  1014,
       0,     0,   515,   145,   146,   147,     0,   149,   150,   151,
     152,   153,   332,   155,   156,   157,   158,   159,   160,   161,
     162,   163,     0,   165,   166,   167,     0,     0,   170,   171,
     172,   173,     0,     0,   333,   516,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   334,   335,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   517,   518,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,     0,     0,     0,     0,   336,
     337,   338,   339,   340,   341,   342,   343,   344,    51,   345,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   217,   346,   347,   348,     0,   349,
       0,     0,   350,   351,     0,     0,     0,     0,     0,     0,
       0,     0,   353,     0,   354,   355,   519,   282,   520,   500,
     218,   219,     0,     0,     3,     0,   501,   502,   503,     0,
     504,     0,   320,   321,   322,   323,   324,     0,     0,     0,
       0,     0,     0,   505,   325,   506,   507,     0,     0,     0,
       0,     0,     0,     0,     0,   508,   326,     0,   509,     0,
     510,   327,     0,     0,   328,     0,     8,   329,   511,     0,
     512,   330,     0,     0,   513,   514,     0,     0,     0,   660,
     220,   515,   145,   146,   147,     0,   149,   150,   151,   152,
     153,   332,   155,   156,   157,   158,   159,   160,   161,   162,
     163,     0,   165,   166,   167,     0,     0,   170,   171,   172,
     173,     0,     0,   333,   516,     0,     0,     0,     0,     0,
     903,   222,     0,     0,     0,   223,   334,   335,   224,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   454,   455,
       0,   517,   518,   225,     0,     0,     0,     0,     0,     0,
      50,     0,   226,     0,     0,     0,     0,     0,   336,   337,
     338,   339,   340,   341,   342,   343,   344,    51,   345,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   346,   347,   348,     0,   349,     0,
       0,   350,   351,     0,     0,     0,   320,   321,   322,   323,
     324,   353,     0,   354,   355,   519,   282,   959,   325,     0,
       0,     0,     0,     0,   217,     0,     0,     0,     0,     0,
     326,     0,     0,     0,     0,   327,   458,   459,   328,     0,
       0,   329,     0,   585,   464,   330,   465,   466,   467,   468,
     218,   219,     0,   469,     0,   331,   145,   146,   147,     0,
     149,   150,   151,   152,   153,   332,   155,   156,   157,   158,
     159,   160,   161,   162,   163,     0,   165,   166,   167,     0,
       0,   170,   171,   172,   173,     0,     0,   333,     0,     0,
       0,     0,     0,     0,     0,     0,   484,   485,   486,     0,
     334,   335,     0,     0,     0,     0,     0,     0,   487,   488,
     220,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,     0,     0,
       0,     0,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   586,   345,     0,     0,     0,     0,     0,     0,     0,
     221,   222,     0,     0,     0,   223,     0,     0,   587,   347,
     348,     0,   349,     0,     0,   350,   351,   320,   321,   322,
     323,   324,     0,   225,     0,   588,     0,   354,   355,   325,
     282,     0,   226,     0,     0,   217,     0,     0,     0,     0,
       0,   326,     0,     0,     0,     0,   327,     0,     0,   328,
       0,     0,   329,     0,     0,     0,   330,     0,     0,     0,
       0,   218,   219,     0,     0,     0,   331,   145,   146,   147,
       0,   149,   150,   151,   152,   153,   332,   155,   156,   157,
     158,   159,   160,   161,   162,   163,     0,   165,   166,   167,
       0,     0,   170,   171,   172,   173,     0,     0,   333,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   334,   335,     0,     0,     0,     0,     0,     0,     0,
       0,   220,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,   217,     0,     0,
       0,     0,     0,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   586,   345,     0,     0,     0,     0,     0,     0,
       0,   221,   222,   218,   219,     0,   223,     0,     0,   587,
     347,   348,     0,   349,     0,     0,   350,   351,   320,   321,
     322,   323,   324,     0,   225,     0,   598,     0,   354,   355,
     325,   282,     0,   226,     0,   217,   316,     0,     0,     0,
       0,     0,   326,     0,     0,     0,     0,   327,     0,     0,
     328,     0,     0,   329,     0,     0,     0,   330,     0,     0,
       0,   218,   219,   220,     0,     0,     0,   331,   145,   146,
     147,     0,   149,   150,   151,   152,   153,   332,   155,   156,
     157,   158,   159,   160,   161,   162,   163,     0,   165,   166,
     167,     0,     0,   170,   171,   172,   173,     0,     0,   333,
       0,     0,     0,   221,   222,     0,     0,     0,   223,     0,
     559,   224,   334,   335,     0,     0,     0,     0,     0,     0,
       0,   220,     0,     0,     0,     0,   225,     0,     0,     0,
       0,     0,     0,     0,     0,   226,    50,   217,     0,     0,
       0,     0,     0,     0,   336,   337,   338,   339,   340,   341,
     342,   343,   344,    51,   345,     0,     0,     0,     0,     0,
       0,   221,   222,   218,   219,     0,   223,   317,   560,   224,
     346,   347,   348,     0,   349,     0,     0,   350,   351,   320,
     321,   322,   323,   324,   225,   318,     0,   353,     0,   354,
     355,   325,   282,   226,   319,     0,     0,     0,     0,     0,
       0,     0,     0,   326,     0,     0,     0,     0,   327,     0,
       0,   328,     0,     0,   329,     0,     0,     0,   330,     0,
       0,     0,     0,   220,     0,     0,     0,     0,   331,   145,
     146,   147,     0,   149,   150,   151,   152,   153,   332,   155,
     156,   157,   158,   159,   160,   161,   162,   163,     0,   165,
     166,   167,     0,     0,   170,   171,   172,   173,     0,     0,
     333,     0,     0,   221,   222,     0,     0,     0,   223,     0,
     563,   224,     0,   334,   335,     0,     0,     0,     0,     0,
       0,     0,   668,     0,     0,     0,   225,     0,   517,   518,
       0,     0,     0,     0,     0,   226,     0,    50,     0,     0,
       0,     0,     0,     0,     0,   336,   337,   338,   339,   340,
     341,   342,   343,   344,    51,   345,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   320,   321,   322,   323,   324,
       0,   346,   347,   348,     0,   349,     0,   325,   350,   351,
       0,     0,     0,     0,     0,     0,     0,     0,   353,   326,
     354,   355,   669,   282,   327,     0,     0,   328,     0,     0,
     329,     0,     0,     0,   330,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   331,   145,   146,   147,     0,   149,
     150,   151,   152,   153,   332,   155,   156,   157,   158,   159,
     160,   161,   162,   163,     0,   165,   166,   167,     0,     0,
     170,   171,   172,   173,     0,     0,   333,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   334,
     335,   217,     0,     0,     0,     0,     0,     0,   682,     0,
       0,     0,     0,     0,   517,   518,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,   218,   219,     0,
       0,   336,   337,   338,   339,   340,   341,   342,   343,   344,
      51,   345,     0,   320,   321,   322,   323,   324,     0,     0,
       0,     0,     0,     0,     0,   325,     0,   346,   347,   348,
       0,   349,     0,     0,   350,   351,     0,   326,     0,     0,
       0,     0,   327,     0,   353,   328,   354,   355,   329,   282,
       0,     0,   330,     0,     0,     0,     0,   220,     0,     0,
       0,     0,   331,   145,   146,   147,     0,   149,   150,   151,
     152,   153,   332,   155,   156,   157,   158,   159,   160,   161,
     162,   163,     0,   165,   166,   167,     0,     0,   170,   171,
     172,   173,     0,     0,   333,     0,     0,   221,   222,     0,
       0,     0,   223,     0,   565,   224,     0,   334,   335,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     225,     0,     0,     0,     0,     0,     0,     0,     0,   226,
     217,    50,     0,     0,     0,     0,     0,     0,     0,   336,
     337,   338,   339,   340,   341,   342,   343,   344,    51,   345,
       0,     0,     0,     0,     0,     0,   218,   219,     0,     0,
       0,     0,     0,     0,     0,   346,   347,   348,     0,   349,
       0,     0,   350,   351,   320,   321,   322,   323,   324,     0,
     611,     0,   353,   612,   354,   355,   325,   282,     0,     0,
       0,   217,     0,     0,     0,     0,     0,     0,   326,     0,
       0,     0,     0,   327,     0,     0,   328,     0,     0,   329,
       0,     0,     0,   330,     0,     0,   220,   218,   219,     0,
       0,     0,     0,   331,   145,   146,   147,     0,   149,   150,
     151,   152,   153,   332,   155,   156,   157,   158,   159,   160,
     161,   162,   163,     0,   165,   166,   167,     0,     0,   170,
     171,   172,   173,     0,     0,   333,   221,   222,     0,     0,
       0,   223,     0,   567,   224,     0,     0,     0,   334,   335,
     217,     0,     0,     0,     0,     0,     0,   220,     0,   225,
       0,     0,     0,   517,   518,     0,     0,     0,   226,     0,
       0,     0,    50,     0,     0,     0,   218,   219,     0,     0,
     336,   337,   338,   339,   340,   341,   342,   343,   344,    51,
     345,     0,   320,   321,   322,   323,   324,   221,   222,     0,
       0,     0,   223,     0,   325,   224,   346,   347,   348,     0,
     349,     0,     0,   350,   351,     0,   326,     0,     0,     0,
     225,   327,     0,   353,   328,   354,   355,   329,   282,   226,
       0,   330,     0,     0,     0,     0,   220,     0,     0,     0,
       0,   331,   145,   146,   147,     0,   149,   150,   151,   152,
     153,   332,   155,   156,   157,   158,   159,   160,   161,   162,
     163,     0,   165,   166,   167,     0,     0,   170,   171,   172,
     173,     0,     0,   333,     0,     0,   221,   222,     0,     0,
       0,   223,     0,   754,   224,     0,   334,   335,   217,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   225,
       0,   834,   835,     0,     0,     0,     0,     0,   226,     0,
      50,     0,     0,     0,   218,   219,     0,     0,   336,   337,
     338,   339,   340,   341,   342,   343,   344,    51,   345,     0,
     320,   321,   322,   323,   324,     0,     0,     0,     0,     0,
       0,     0,   325,     0,   346,   347,   348,     0,   349,     0,
       0,   350,   351,     0,   326,     0,     0,     0,     0,   327,
       0,   353,   328,   354,   355,   329,   282,     0,     0,   330,
       0,     0,     0,     0,   220,     0,     0,     0,     0,   331,
     145,   146,   147,     0,   149,   150,   151,   152,   153,   332,
     155,   156,   157,   158,   159,   160,   161,   162,   163,     0,
     165,   166,   167,     0,     0,   170,   171,   172,   173,     0,
       0,   333,     0,     0,   221,   222,     0,     0,     0,   223,
       0,   855,   224,     0,   334,   335,   217,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   225,     0,   843,
     844,     0,     0,     0,     0,     0,   226,     0,    50,     0,
       0,     0,   218,   219,     0,     0,   336,   337,   338,   339,
     340,   341,   342,   343,   344,    51,   345,     0,   320,   321,
     322,   323,   324,     0,     0,     0,     0,     0,     0,     0,
     325,     0,   346,   347,   348,     0,   349,     0,     0,   350,
     351,     0,   326,     0,     0,     0,     0,   327,     0,   353,
     328,   354,   355,   329,   282,     0,     0,   330,     0,     0,
       0,     0,   220,     0,     0,     0,     0,   331,   145,   146,
     147,     0,   149,   150,   151,   152,   153,   332,   155,   156,
     157,   158,   159,   160,   161,   162,   163,     0,   165,   166,
     167,     0,     0,   170,   171,   172,   173,     0,     0,   333,
       0,     0,   221,   222,     0,     0,     0,   223,     0,   862,
     224,     0,   334,   335,   217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   225,     0,     0,     0,     0,
       0,     0,     0,     0,   226,     0,    50,     0,     0,     0,
     218,   219,     0,     0,   336,   337,   338,   339,   340,   341,
     342,   343,   344,    51,   345,     0,   320,   321,   322,   323,
     324,     0,     0,   638,     0,     0,     0,     0,   325,     0,
     346,   347,   348,     0,   349,     0,     0,   350,   351,     0,
     326,     0,     0,     0,     0,   327,   352,   353,   328,   354,
     355,   329,   282,     0,     0,   330,     0,     0,     0,     0,
     220,     0,     0,     0,     0,   331,   145,   146,   147,     0,
     149,   150,   151,   152,   153,   332,   155,   156,   157,   158,
     159,   160,   161,   162,   163,     0,   165,   166,   167,     0,
       0,   170,   171,   172,   173,     0,     0,   333,     0,     0,
     221,   222,     0,     0,     0,   223,     0,   863,   224,     0,
     334,   335,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   225,     0,     0,     0,     0,     0,     0,
       0,     0,   226,     0,    50,     0,     0,     0,   218,   219,
       0,     0,   336,   337,   338,   339,   340,   341,   342,   343,
     344,    51,   345,     0,   320,   321,   322,   323,   324,     0,
       0,     0,     0,     0,     0,     0,   325,     0,   346,   347,
     348,     0,   349,     0,     0,   350,   351,     0,   326,     0,
       0,     0,     0,   327,     0,   353,   328,   354,   355,   329,
     282,     0,     0,   330,     0,     0,     0,     0,   220,     0,
       0,     0,     0,   331,   145,   146,   147,     0,   149,   150,
     151,   152,   153,   332,   155,   156,   157,   158,   159,   160,
     161,   162,   163,     0,   165,   166,   167,     0,     0,   170,
     171,   172,   173,     0,     0,   333,     0,     0,   221,   222,
       0,     0,     0,   223,     0,   864,   224,     0,   334,   335,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,     0,     0,     0,     0,     0,     0,     0,     0,
     226,     0,    50,   217,     0,     0,     0,     0,     0,     0,
     336,   337,   338,   339,   340,   341,   342,   343,   344,    51,
     345,     0,     0,     0,     0,     0,     0,     0,     0,   218,
     219,     0,     0,   217,     0,     0,   346,   347,   348,     0,
     349,     0,     0,   350,   351,   320,   321,   322,   323,   324,
       0,     0,     0,   353,   657,   354,   355,   325,   282,   218,
     219,     0,     0,     0,     0,     0,     0,     0,     0,   326,
       0,     0,     0,     0,   327,     0,     0,   328,     0,     0,
     329,     0,     0,     0,   330,     0,     0,   679,     0,   220,
       0,     0,     0,     0,   331,   145,   146,   147,     0,   149,
     150,   151,   152,   153,   332,   155,   156,   157,   158,   159,
     160,   161,   162,   163,     0,   165,   166,   167,     0,   220,
     170,   171,   172,   173,     0,     0,   333,     0,     0,   221,
     222,     0,     0,     0,   223,     0,   865,   224,     0,   334,
     335,     0,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   225,     0,     0,     0,     0,     0,     0,   221,
     222,   226,     0,    50,   223,     0,   946,   224,   218,   219,
       0,   336,   337,   338,   339,   340,   341,   342,   343,   344,
      51,   345,   225,   320,   321,   322,   323,   324,     0,     0,
       0,   226,     0,     0,     0,   325,     0,   346,   347,   348,
       0,   349,     0,     0,   350,   351,     0,   326,     0,     0,
       0,     0,   327,     0,   353,   328,   354,   355,   329,   282,
       0,     0,   330,     0,     0,     0,     0,     0,   220,     0,
       0,     0,   331,   145,   146,   147,     0,   149,   150,   151,
     152,   153,   332,   155,   156,   157,   158,   159,   160,   161,
     162,   163,     0,   165,   166,   167,     0,     0,   170,   171,
     172,   173,     0,     0,   333,     0,     0,     0,   221,   222,
       0,     0,     0,   223,     0,   984,   224,   334,   335,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,     0,     0,     0,     0,     0,     0,     0,     0,
     226,    50,     0,     0,     0,     0,     0,     0,     0,   336,
     337,   338,   339,   340,   341,   342,   343,   344,    51,   345,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   346,   347,   348,     0,   349,
       0,     0,   350,   351,   320,   321,   322,   323,   324,     0,
       0,     0,   353,   743,   354,   355,   325,   282,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   326,     0,
       0,     0,     0,   327,     0,     0,   328,     0,     0,   329,
       0,     0,     0,   330,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   331,   145,   146,   147,     0,   149,   150,
     151,   152,   153,   332,   155,   156,   157,   158,   159,   160,
     161,   162,   163,     0,   165,   166,   167,     0,     0,   170,
     171,   172,   173,     0,     0,   333,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   334,   335,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,     0,     0,     0,     0,
     336,   337,   338,   339,   340,   341,   342,   343,   344,    51,
     345,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   745,     0,   346,   347,   348,     0,
     349,     0,     0,   350,   351,   320,   321,   322,   323,   324,
       0,     0,     0,   353,     0,   354,   355,   325,   282,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   326,
       0,     0,     0,     0,   327,     0,     0,   328,     0,     0,
     329,     0,     0,     0,   330,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   331,   145,   146,   147,     0,   149,
     150,   151,   152,   153,   332,   155,   156,   157,   158,   159,
     160,   161,   162,   163,     0,   165,   166,   167,     0,     0,
     170,   171,   172,   173,     0,     0,   333,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   334,
     335,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     0,     0,     0,
       0,   336,   337,   338,   339,   340,   341,   342,   343,   344,
      51,   345,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   346,   347,   348,
       0,   349,     0,     0,   350,   351,   320,   321,   322,   323,
     324,     0,     0,     0,   353,   759,   354,   355,   325,   282,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     326,     0,     0,     0,     0,   327,     0,     0,   328,     0,
       0,   329,     0,     0,     0,   330,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   331,   145,   146,   147,     0,
     149,   150,   151,   152,   153,   332,   155,   156,   157,   158,
     159,   160,   161,   162,   163,     0,   165,   166,   167,     0,
       0,   170,   171,   172,   173,     0,     0,   333,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     334,   335,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,     0,     0,
       0,     0,   336,   337,   338,   339,   340,   341,   342,   343,
     344,    51,   345,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   346,   347,
     348,     0,   349,     0,     0,   350,   351,   320,   321,   322,
     323,   324,     0,     0,     0,   353,   768,   354,   355,   325,
     282,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   326,     0,     0,     0,     0,   327,     0,     0,   328,
       0,     0,   329,     0,     0,     0,   330,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   331,   145,   146,   147,
       0,   149,   150,   151,   152,   153,   332,   155,   156,   157,
     158,   159,   160,   161,   162,   163,     0,   165,   166,   167,
       0,     0,   170,   171,   172,   173,     0,     0,   333,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   334,   335,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     0,
       0,     0,     0,   336,   337,   338,   339,   340,   341,   342,
     343,   344,    51,   345,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   346,
     347,   348,     0,   349,     0,     0,   350,   351,   320,   321,
     322,   323,   324,     0,     0,     0,   353,   897,   354,   355,
     325,   282,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   326,     0,     0,     0,     0,   327,     0,     0,
     328,     0,     0,   329,     0,     0,     0,   330,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   331,   145,   146,
     147,     0,   149,   150,   151,   152,   153,   332,   155,   156,
     157,   158,   159,   160,   161,   162,   163,     0,   165,   166,
     167,     0,     0,   170,   171,   172,   173,     0,     0,   333,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   334,   335,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,     0,     0,     0,
       0,     0,     0,     0,   336,   337,   338,   339,   340,   341,
     342,   343,   344,    51,   345,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     346,   347,   348,     0,   349,     0,     0,   350,   351,   320,
     321,   322,   323,   324,     0,     0,     0,   353,   971,   354,
     355,   325,   282,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   326,     0,     0,     0,     0,   327,     0,
       0,   328,     0,     0,   329,     0,     0,     0,   330,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   331,   145,
     146,   147,     0,   149,   150,   151,   152,   153,   332,   155,
     156,   157,   158,   159,   160,   161,   162,   163,     0,   165,
     166,   167,     0,     0,   170,   171,   172,   173,     0,     0,
     333,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   334,   335,     0,     0,     0,     0,     0,
       0,     0,   982,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,     0,     0,     0,     0,   336,   337,   338,   339,   340,
     341,   342,   343,   344,    51,   345,     0,   320,   321,   322,
     323,   324,     0,     0,     0,     0,     0,     0,     0,   325,
       0,   346,   347,   348,     0,   349,     0,     0,   350,   351,
       0,   326,     0,     0,     0,     0,   327,     0,   353,   328,
     354,   355,   329,   282,     0,     0,   330,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   331,   145,   146,   147,
       0,   149,   150,   151,   152,   153,   332,   155,   156,   157,
     158,   159,   160,   161,   162,   163,     0,   165,   166,   167,
       0,     0,   170,   171,   172,   173,     0,     0,   333,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   334,   335,     0,   454,   455,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     0,
       0,     0,     0,   336,   337,   338,   339,   340,   341,   342,
     343,   344,    51,   345,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   346,
     347,   348,     0,   349,     0,     0,   350,   351,     0,     0,
       0,     0,     0,     0,     0,     0,   353,     0,   354,   355,
       0,   282,   698,   699,   700,   701,   702,   703,   704,   705,
     456,   457,   458,   459,   460,   706,   707,   461,   462,   463,
     464,   809,   465,   466,   467,   468,   454,   455,     0,   469,
     709,   470,   471,   710,   711,     0,     0,   472,   473,   474,
     712,   713,   714,   475,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   810,   476,     0,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   487,   488,     0,     0,     0,     0,
       0,   819,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   698,   699,   700,   701,   702,   703,
     704,   705,   456,   457,   458,   459,   460,   706,   707,   461,
     462,   463,   464,   809,   465,   466,   467,   468,   454,   455,
       0,   469,   709,   470,   471,   710,   711,     0,     0,   472,
     473,   474,   712,   713,   714,   475,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   810,   476,     0,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   487,   488,     0,     0,
       0,     0,     0,   854,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   698,   699,   700,   701,
     702,   703,   704,   705,   456,   457,   458,   459,   460,   706,
     707,   461,   462,   463,   464,   809,   465,   466,   467,   468,
     454,   455,     0,   469,   709,   470,   471,   710,   711,     0,
       0,   472,   473,   474,   712,   713,   714,   475,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   810,   476,     0,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   487,   488,
       0,     0,     0,     0,     0,   906,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   698,   699,
     700,   701,   702,   703,   704,   705,   456,   457,   458,   459,
     460,   706,   707,   461,   462,   463,   464,   809,   465,   466,
     467,   468,   454,   455,     0,   469,   709,   470,   471,   710,
     711,     0,     0,   472,   473,   474,   712,   713,   714,   475,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   810,   476,
       0,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     487,   488,     0,     0,     0,     0,     0,   909,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   454,   455,
     698,   699,   700,   701,   702,   703,   704,   705,   456,   457,
     458,   459,   460,   706,   707,   461,   462,   463,   464,   809,
     465,   466,   467,   468,     0,     0,     0,   469,   709,   470,
     471,   710,   711,     0,     0,   472,   473,   474,   712,   713,
     714,   475,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     810,   476,     0,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,     0,   454,   455,     0,     0,     0,     0,
       0,     0,   487,   488,   456,   457,   458,   459,   460,   928,
       0,   461,   462,   463,   464,     0,   465,   466,   467,   468,
       0,     0,     0,   469,     0,   470,   471,     0,     0,     0,
       0,   472,   473,   474,     0,     0,     0,   475,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   476,     0,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,     0,
       0,     0,     0,   454,   455,     0,     0,     0,   487,   488,
     456,   457,   458,   459,   460,   994,     0,   461,   462,   463,
     464,     0,   465,   466,   467,   468,     0,     0,     0,   469,
       0,   470,   471,     0,     0,     0,     0,   472,   473,   474,
       0,     0,     0,   475,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   476,     0,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,     0,     0,     0,     0,     0,
       0,     0,   454,   455,   487,   488,     0,     0,   608,   456,
     457,   458,   459,   460,     0,     0,   461,   462,   463,   464,
       0,   465,   466,   467,   468,     0,     0,     0,   469,     0,
     470,   471,     0,     0,     0,     0,   472,   473,   474,     0,
       0,     0,   475,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   476,     0,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,     0,     0,     0,     0,     0,     0,
       0,   454,   455,   487,   488,     0,     0,   748,   456,   457,
     458,   459,   460,     0,     0,   461,   462,   463,   464,     0,
     465,   466,   467,   468,     0,     0,     0,   469,     0,   470,
     471,     0,     0,     0,     0,   472,   473,   474,     0,     0,
       0,   475,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   476,     0,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,     0,     0,     0,     0,     0,     0,     0,
     454,   455,   487,   488,     0,     0,   751,   456,   457,   458,
     459,   460,     0,     0,   461,   462,   463,   464,     0,   465,
     466,   467,   468,     0,     0,     0,   469,     0,   470,   471,
       0,     0,     0,     0,   472,   473,   474,     0,     0,     0,
     475,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     476,     0,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,     0,     0,     0,     0,     0,     0,     0,   454,
     455,   487,   488,     0,     0,   753,   456,   457,   458,   459,
     460,     0,     0,   461,   462,   463,   464,     0,   465,   466,
     467,   468,     0,     0,     0,   469,     0,   470,   471,     0,
       0,     0,     0,   472,   473,   474,     0,     0,     0,   475,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   476,
       0,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,     0,     0,     0,     0,     0,     0,     0,   454,   455,
     487,   488,     0,     0,   861,   456,   457,   458,   459,   460,
       0,     0,   461,   462,   463,   464,     0,   465,   466,   467,
     468,     0,     0,     0,   469,     0,   470,   471,     0,     0,
       0,     0,   472,   473,   474,     0,     0,     0,   475,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   476,     0,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
       0,     0,     0,     0,     0,     0,     0,   454,   455,   487,
     488,     0,     0,   991,   456,   457,   458,   459,   460,     0,
       0,   461,   462,   463,   464,     0,   465,   466,   467,   468,
       0,     0,     0,   469,     0,   470,   471,     0,     0,     0,
       0,   472,   473,   474,     0,     0,     0,   475,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   476,     0,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,     0,
       0,     0,     0,     0,     0,     0,   454,   455,   487,   488,
       0,     0,   993,   456,   457,   458,   459,   460,     0,     0,
     461,   462,   463,   464,     0,   465,   466,   467,   468,     0,
       0,     0,   469,     0,   470,   471,     0,     0,     0,     0,
     472,   473,   474,     0,     0,     0,   475,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   476,     0,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,     0,     0,
       0,     0,     0,   454,   455,     0,     0,   487,   488,     0,
       0,  1013,   456,   457,   458,   459,   460,     0,     0,   461,
     462,   463,   464,     0,   465,   466,   467,   468,     0,     0,
       0,   469,     0,   470,   471,     0,     0,     0,     0,   472,
     473,   474,     0,     0,     0,   475,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   476,     0,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,     0,     0,     0,
     454,   455,     0,     0,     0,     0,   487,   488,   489,   456,
     457,   458,   459,   460,     0,     0,   461,   462,   463,   464,
       0,   465,   466,   467,   468,     0,     0,     0,   469,     0,
     470,   471,     0,     0,     0,     0,   472,   473,   474,     0,
       0,     0,   475,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   476,     0,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,     0,     0,     0,   454,   455,     0,
       0,     0,     0,   487,   488,   792,   456,   457,   458,   459,
     460,     0,     0,   461,   462,   463,   464,     0,   465,   466,
     467,   468,     0,     0,     0,   469,     0,   470,   471,     0,
       0,     0,     0,   472,   473,   474,     0,     0,     0,   475,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   476,
       0,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,     0,     0,     0,   454,   455,     0,     0,     0,     0,
     487,   488,   800,   456,   457,   458,   459,   460,     0,     0,
     461,   462,   463,   464,     0,   465,   466,   467,   468,     0,
       0,     0,   469,     0,   470,   471,     0,     0,     0,     0,
     472,   473,   474,     0,     0,     0,   475,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   476,     0,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   487,   488,   900,
     456,   457,   458,   459,   460,   454,   455,   461,   462,   463,
     464,     0,   465,   466,   467,   468,     0,     0,     0,   469,
       0,   470,   471,     0,     0,     0,     0,   472,   473,   474,
       0,     0,     0,   475,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   476,     0,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   487,   488,   901,     0,     0,     0,
       0,     0,     0,   698,   699,   700,   701,   702,   703,   704,
     705,   456,   457,   458,   459,   460,   706,   707,   461,   462,
     463,   464,   809,   465,   466,   467,   468,  -248,   454,   455,
     469,   709,   470,   471,   710,   711,     0,     0,   472,   473,
     474,   712,   713,   714,   475,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   810,   476,     0,   477,   478,   479,   480,
     481,   482,   483,   484,   485,   486,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   487,   488,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   454,   455,     0,
       0,     0,     0,     0,     0,     0,   698,   699,   700,   701,
     702,   703,   704,   705,   456,   457,   458,   459,   460,   706,
     707,   461,   462,   463,   464,   708,   465,   466,   467,   468,
       0,     0,     0,   469,   709,   470,   471,   710,   711,     0,
       0,   472,   473,   474,   712,   713,   714,   475,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   715,   476,     0,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   454,
     455,     0,     0,   456,   457,   458,   459,   460,   487,   488,
     461,   462,   463,   464,     0,   465,   466,   467,   468,     0,
       0,     0,   469,     0,   470,   471,     0,     0,   601,     0,
     472,   473,   474,     0,     0,     0,   475,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   476,     0,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   454,   455,
       0,     0,     0,     0,     0,     0,     0,   487,   488,     0,
       0,     0,     0,     0,     0,   456,   457,   458,   459,   460,
       0,     0,   461,   462,   463,   464,     0,   465,   466,   467,
     468,     0,     0,     0,   469,     0,   470,   471,     0,     0,
       0,     0,   472,   473,   474,     0,     0,     0,   475,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   476,   794,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     454,   455,     0,     0,   456,   457,   458,   459,   460,   487,
     488,   461,   462,   463,   464,     0,   465,   466,   467,   468,
       0,     0,     0,   469,     0,   470,   471,     0,     0,     0,
       0,   472,   473,   474,     0,     0,     0,   475,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   883,     0,     0,     0,   476,     0,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   454,
     455,     0,     0,     0,     0,     0,     0,     0,   487,   488,
       0,     0,     0,     0,     0,     0,   456,   457,   458,   459,
     460,     0,     0,   461,   462,   463,   464,     0,   465,   466,
     467,   468,     0,     0,     0,   469,     0,   470,   471,     0,
       0,     0,     0,   472,   473,   474,     0,     0,     0,   475,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   476,
       0,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   454,   455,     0,     0,   456,   457,   458,   459,   460,
     487,   488,   461,   462,   463,   464,     0,   465,   466,   467,
     468,     0,     0,     0,   469,     0,   470,   471,     0,     0,
       0,     0,   472,   473,   474,     0,     0,     0,  -540,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   476,     0,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     454,   455,     0,     0,     0,     0,     0,     0,     0,   487,
     488,     0,     0,     0,     0,     0,     0,   456,   457,     0,
       0,   460,     0,     0,   461,   462,   463,   464,     0,   465,
     466,   467,   468,   454,   455,     0,   469,     0,   470,   471,
       0,     0,     0,     0,   472,   473,   474,     0,     0,     0,
     475,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   454,   455,     0,     0,
     476,     0,   477,   478,   479,   480,   481,     0,     0,     0,
     485,     0,     0,     0,     0,     0,   456,   457,   458,   459,
     460,   487,   488,   461,   462,   463,   464,     0,   465,   466,
     467,   468,     0,     0,     0,   469,     0,   470,   471,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   456,
     457,   458,   459,   460,     0,     0,   461,   462,   463,   464,
       0,   465,   466,   467,   468,   454,   455,     0,   469,     0,
     470,   471,     0,   479,   480,   481,   482,   483,   484,   485,
     486,     0,   456,   457,   458,   459,   460,     0,     0,   461,
     487,   488,   464,     0,   465,   466,   467,   468,     0,     0,
       0,   469,     0,   470,   471,     0,     0,   480,   481,   482,
     483,   484,   485,   486,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   487,   488,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     480,   481,   482,   483,   484,   485,   486,     0,     0,     0,
       0,   456,   457,   458,   459,     0,   487,   488,     0,     0,
       0,   464,     0,   465,   466,   467,   468,   231,     0,     0,
     469,     0,   470,   471,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   482,   483,   484,   485,   486,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   487,   488,     0,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,     0,     0,     0,   250,
     251,     0,     0,     0,     0,     0,   252,   253,   254,   255,
     256,     0,     0,   257,   258,   259,   260,   261,   262,   263,
     435,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   141,     0,     0,     0,     0,     0,   142,     0,
       0,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,     0,     0,   274,   275,   143,     0,     0,     0,     0,
     276,   277,     0,     0,     0,     0,     0,     0,     0,     0,
     144,     0,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,     0,     0,     0,   437,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   141,     0,
       0,     0,     0,     0,   142,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,   143,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   144,    51,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   141,     0,     0,     0,     0,     0,
     142,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,   143,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   144,    51,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     141,     0,     0,     0,     0,     0,   142,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,   143,     0,     0,     0,     0,     0,     0,
     336,   337,   338,     0,     0,     0,     0,     0,   144,    51,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   141,     0,     0,     0,
       0,     0,   142,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,   143,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   144,    51,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   416
};

static const yytype_int16 yycheck[] =
{
      12,   128,   385,   390,   192,   411,   494,   413,   438,   415,
     496,   505,   308,   338,   310,   381,   312,   364,   397,     7,
     517,   518,   516,   611,   591,   111,    19,    14,    15,    19,
      51,   490,   599,    34,    19,    81,    51,    20,    21,   122,
     140,    33,    48,    21,    18,    19,    32,     0,   149,   111,
      44,    45,   435,     6,   437,   119,   120,   131,    18,   157,
      44,   157,   556,   158,   116,   149,    41,   119,   120,    61,
      82,   143,   149,   149,   132,   157,    29,    55,    31,   149,
      33,   117,   160,    60,   184,   149,    39,   188,   585,   187,
     126,   187,   187,   119,   120,    48,   132,    14,    15,   111,
      75,    54,   160,    97,   187,   189,   149,   108,   109,   185,
     188,   494,   189,    97,   188,   574,   180,   181,   149,   189,
      73,   504,   158,   106,   107,   108,   109,   110,   180,   181,
     113,   114,   115,   116,   149,   118,   119,   120,   121,   170,
     132,    94,   125,   149,   127,   128,   189,   158,   149,   117,
     133,   134,   135,   199,   180,   181,   143,   149,   126,   538,
     147,   160,   149,   150,   157,   117,   187,   157,   295,   149,
     664,   132,   157,   761,   668,   149,   159,   163,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   682,   149,
     158,   169,   759,   181,   117,   181,   183,   180,   181,   696,
     547,   189,   180,   126,   190,   157,   158,   573,   160,   189,
     149,   163,   157,   117,   183,   301,   302,   303,   304,   188,
     117,   307,   126,   309,   149,   311,   143,   313,   181,   126,
     147,   725,   149,   150,   187,   158,   322,   157,   157,   301,
     302,   303,   304,   157,   183,   307,   132,   309,   160,   311,
     336,   337,   157,   165,   158,    20,    21,   157,   157,   163,
     322,   158,   157,   149,   184,   184,   157,     4,     5,   184,
       7,   183,   187,   187,   336,   337,   182,   602,   164,   184,
     157,   187,   165,   149,   184,   184,   157,   182,   149,   301,
     302,   303,   304,   184,   380,   307,   755,   309,    35,   311,
     165,   313,   388,   870,   187,   182,    20,    21,   767,   157,
     322,   182,   987,   880,   165,   401,   802,   157,   380,   507,
     616,   149,   187,   165,   336,   337,   388,   515,   183,   759,
    1005,   132,   791,   187,   182,   189,   187,   349,   768,   401,
      20,    21,   182,   108,   109,   187,   432,   806,   149,   151,
     152,   116,    55,   118,   119,   120,   121,    68,    61,    55,
     125,    72,   160,    11,   160,    61,    55,   165,   380,   165,
     432,    55,    61,   143,    22,    23,   388,    61,    89,    90,
      91,    92,   394,   789,    55,   183,   872,   183,   180,   401,
      61,    55,   106,   107,   108,   109,   110,    61,   149,   113,
     114,   115,   116,   160,   118,   119,   120,   121,   165,   151,
     152,   125,   424,   127,   128,   180,   181,   149,   149,   133,
     432,   135,   185,   186,   157,   188,   183,   160,   108,   109,
     163,   151,   152,   153,   154,   187,   116,   189,   450,   119,
     120,   121,   151,   152,   153,   125,   158,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   187,   149,   188,
     188,   149,    55,   187,   149,   188,   180,   181,    97,   164,
     140,   164,   558,   183,   164,   149,    34,   965,   666,   187,
     886,   164,   778,   569,    34,   571,   164,   675,   164,   164,
     576,   164,   578,   579,   188,   581,   558,    20,    21,   164,
     180,   181,   164,   691,   183,   149,   149,   569,   189,   149,
      32,   160,    41,   182,   576,   187,   578,   579,   160,   581,
     188,   182,    32,   910,   160,   188,   184,   182,   181,    20,
      21,   183,   164,   183,   164,    32,   164,   183,   164,   164,
     149,   186,   183,   149,   183,   182,   558,   149,    58,    59,
     140,   149,   149,   149,   187,   143,    36,   569,    41,   571,
     187,    58,    59,   187,   576,   187,   578,   579,   187,   581,
     187,   149,   157,   165,   165,   182,   662,   157,   165,   189,
     151,   149,   965,   106,   107,   108,   109,   110,   164,   183,
     113,   114,   115,   116,   721,   118,   119,   120,   121,     1,
     662,   149,   125,   149,   127,   128,   149,   225,   118,   122,
     133,   134,   135,    13,   158,   160,   139,   108,   109,   143,
     186,   118,     7,   188,   812,   116,   182,   118,   119,   120,
     121,   149,   149,   149,   125,   182,   159,   189,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   158,   159,
     662,   182,   182,   163,    20,    21,   166,   180,   181,   151,
     149,   158,   159,   149,   149,   188,   163,   149,   165,   166,
     182,   181,   187,   183,   183,   166,   167,   168,   169,   170,
     190,   182,   182,   187,   181,   184,   182,   149,   182,   180,
     181,   777,   182,   190,   189,   165,    32,   165,   182,    51,
      63,   182,   189,   182,   442,   182,   718,   895,   182,   187,
      37,   108,    66,   986,    64,   777,   334,   335,    82,   821,
     338,   718,     1,   911,   893,   754,   923,   926,   346,   347,
     348,   204,   350,   351,   498,   353,   571,   314,   552,    45,
     106,   107,   108,   109,   110,   306,   766,   113,   114,   115,
     116,    32,   118,   119,   120,   121,   391,   978,   322,   125,
      -1,   127,   128,    -1,    -1,   777,    -1,   133,    -1,   957,
      -1,   438,   390,   961,    -1,    -1,    -1,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,    -1,    -1,    -1,   426,    -1,
     896,   429,    -1,   431,   180,   181,    -1,    -1,   436,    -1,
     438,    -1,    -1,    -1,  1012,    -1,    -1,    -1,    -1,    20,
      21,    -1,    -1,    -1,   896,    -1,    -1,   118,   456,   457,
      -1,    -1,   460,   461,   462,   463,    -1,   465,    -1,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,    -1,
     488,    -1,    -1,    -1,    -1,    -1,    -1,   158,   159,    -1,
      -1,    -1,   163,   501,   896,   166,    -1,   505,    -1,    -1,
     508,   509,    -1,    -1,    -1,    -1,   514,    -1,   516,    -1,
     181,    -1,    -1,    -1,    -1,   523,   187,    -1,    -1,   190,
      20,    21,    -1,    -1,    -1,   106,   107,   108,   109,   110,
      -1,    -1,   113,   114,   115,   116,   544,   118,   119,   120,
     121,    -1,    -1,    -1,   125,    -1,   127,   128,   556,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   575,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   980,   587,
     588,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     598,    -1,    -1,   601,   602,    -1,    -1,   605,  1000,   180,
     181,    -1,    -1,    -1,    -1,    -1,   106,   107,   108,   109,
     110,    -1,    -1,   113,   114,   115,   116,    -1,   118,   119,
     120,   121,    -1,    -1,    -1,   125,    -1,   127,   128,    -1,
      -1,    -1,    -1,   133,   134,   135,    -1,    -1,    -1,   139,
      -1,    -1,    -1,   651,    -1,    -1,   654,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   664,    -1,    -1,   159,
     668,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,    -1,    -1,    -1,   682,    -1,    -1,    -1,    -1,    -1,
     180,   181,    -1,    32,    -1,    -1,    -1,   187,    -1,    -1,
     698,   699,   700,   701,   702,   703,   704,   705,   706,   707,
     708,   709,   710,   711,   712,   713,   714,   715,    -1,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,   725,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,   107,   108,   109,   110,    -1,    -1,
     113,   114,   115,   116,    -1,   118,   119,   120,   121,   757,
     758,    -1,   125,    -1,   127,   128,   764,    -1,   766,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,   118,
      20,    21,    -1,   781,    -1,    -1,    -1,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   794,    -1,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,    -1,    -1,
      -1,   809,   810,    -1,    -1,    -1,    -1,   180,   181,   158,
     159,    -1,    -1,    -1,   163,    -1,    -1,   166,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   834,   835,    -1,    -1,
      -1,    -1,   181,    -1,    -1,   843,   844,    -1,   187,    -1,
      -1,   190,    -1,    -1,    -1,    -1,    -1,    -1,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,    -1,    -1,    -1,   125,   126,   127,   128,   129,
     130,    -1,    -1,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,    -1,    -1,    -1,    -1,   904,    -1,    -1,    -1,
     908,    -1,   910,    -1,    -1,    -1,   914,    -1,   158,   159,
      -1,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,    -1,   930,    -1,    -1,   933,   934,   935,   936,   937,
     180,   181,   940,   941,    -1,   943,    -1,   187,    -1,    -1,
       1,    -1,    -1,   951,    -1,     6,    -1,     8,     9,    10,
      -1,    12,    -1,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,   982,    -1,    37,    38,    -1,    40,
      -1,    42,    43,    -1,   992,    46,    -1,    48,    49,    50,
      -1,    52,    53,    -1,    -1,    56,    57,    -1,    -1,  1007,
      -1,    -1,    63,    64,    65,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    -1,    84,    85,    86,    -1,    -1,    89,    90,
      91,    92,    -1,    -1,    95,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,   166,   167,   168,    -1,   170,
      -1,    -1,   173,   174,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,    -1,   185,   186,   187,   188,   189,     1,
      58,    59,    -1,    -1,     6,    -1,     8,     9,    10,    -1,
      12,    -1,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,    -1,
      42,    43,    -1,    -1,    46,    -1,    48,    49,    50,    -1,
      52,    53,    -1,    -1,    56,    57,    -1,    -1,    -1,   117,
     118,    63,    64,    65,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    84,    85,    86,    -1,    -1,    89,    90,    91,
      92,    -1,    -1,    95,    96,    -1,    -1,    -1,    -1,    -1,
     158,   159,    -1,    -1,    -1,   163,   108,   109,   166,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      -1,   123,   124,   181,    -1,    -1,    -1,    -1,    -1,    -1,
     132,    -1,   190,    -1,    -1,    -1,    -1,    -1,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   166,   167,   168,    -1,   170,    -1,
      -1,   173,   174,    -1,    -1,    -1,    14,    15,    16,    17,
      18,   183,    -1,   185,   186,   187,   188,   189,    26,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    43,   108,   109,    46,    -1,
      -1,    49,    -1,    51,   116,    53,   118,   119,   120,   121,
      58,    59,    -1,   125,    -1,    63,    64,    65,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    -1,    84,    85,    86,    -1,
      -1,    89,    90,    91,    92,    -1,    -1,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   168,   169,   170,    -1,
     108,   109,    -1,    -1,    -1,    -1,    -1,    -1,   180,   181,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     158,   159,    -1,    -1,    -1,   163,    -1,    -1,   166,   167,
     168,    -1,   170,    -1,    -1,   173,   174,    14,    15,    16,
      17,    18,    -1,   181,    -1,   183,    -1,   185,   186,    26,
     188,    -1,   190,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    43,    -1,    -1,    46,
      -1,    -1,    49,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    58,    59,    -1,    -1,    -1,    63,    64,    65,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    -1,    84,    85,    86,
      -1,    -1,    89,    90,    91,    92,    -1,    -1,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   108,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,    -1,    32,    -1,    -1,
      -1,    -1,    -1,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   158,   159,    58,    59,    -1,   163,    -1,    -1,   166,
     167,   168,    -1,   170,    -1,    -1,   173,   174,    14,    15,
      16,    17,    18,    -1,   181,    -1,   183,    -1,   185,   186,
      26,   188,    -1,   190,    -1,    32,    32,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      46,    -1,    -1,    49,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    58,    59,   118,    -1,    -1,    -1,    63,    64,    65,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    84,    85,
      86,    -1,    -1,    89,    90,    91,    92,    -1,    -1,    95,
      -1,    -1,    -1,   158,   159,    -1,    -1,    -1,   163,    -1,
     165,   166,   108,   109,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,   132,    32,    -1,    -1,
      -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,    -1,    -1,    -1,    -1,    -1,
      -1,   158,   159,    58,    59,    -1,   163,   163,   165,   166,
     166,   167,   168,    -1,   170,    -1,    -1,   173,   174,    14,
      15,    16,    17,    18,   181,   181,    -1,   183,    -1,   185,
     186,    26,   188,   190,   190,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    84,
      85,    86,    -1,    -1,    89,    90,    91,    92,    -1,    -1,
      95,    -1,    -1,   158,   159,    -1,    -1,    -1,   163,    -1,
     165,   166,    -1,   108,   109,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   117,    -1,    -1,    -1,   181,    -1,   123,   124,
      -1,    -1,    -1,    -1,    -1,   190,    -1,   132,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,   166,   167,   168,    -1,   170,    -1,    26,   173,   174,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    38,
     185,   186,   187,   188,    43,    -1,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    84,    85,    86,    -1,    -1,
      89,    90,    91,    92,    -1,    -1,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,
     109,    32,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,
      -1,    -1,    -1,    -1,   123,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   132,    -1,    -1,    -1,    58,    59,    -1,
      -1,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,    -1,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,   166,   167,   168,
      -1,   170,    -1,    -1,   173,   174,    -1,    38,    -1,    -1,
      -1,    -1,    43,    -1,   183,    46,   185,   186,    49,   188,
      -1,    -1,    53,    -1,    -1,    -1,    -1,   118,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    -1,    84,    85,    86,    -1,    -1,    89,    90,
      91,    92,    -1,    -1,    95,    -1,    -1,   158,   159,    -1,
      -1,    -1,   163,    -1,   165,   166,    -1,   108,   109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,
      32,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   166,   167,   168,    -1,   170,
      -1,    -1,   173,   174,    14,    15,    16,    17,    18,    -1,
     181,    -1,   183,   184,   185,   186,    26,   188,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    46,    -1,    -1,    49,
      -1,    -1,    -1,    53,    -1,    -1,   118,    58,    59,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,    84,    85,    86,    -1,    -1,    89,
      90,    91,    92,    -1,    -1,    95,   158,   159,    -1,    -1,
      -1,   163,    -1,   165,   166,    -1,    -1,    -1,   108,   109,
      32,    -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,   181,
      -1,    -1,    -1,   123,   124,    -1,    -1,    -1,   190,    -1,
      -1,    -1,   132,    -1,    -1,    -1,    58,    59,    -1,    -1,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,    -1,    14,    15,    16,    17,    18,   158,   159,    -1,
      -1,    -1,   163,    -1,    26,   166,   166,   167,   168,    -1,
     170,    -1,    -1,   173,   174,    -1,    38,    -1,    -1,    -1,
     181,    43,    -1,   183,    46,   185,   186,    49,   188,   190,
      -1,    53,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    84,    85,    86,    -1,    -1,    89,    90,    91,
      92,    -1,    -1,    95,    -1,    -1,   158,   159,    -1,    -1,
      -1,   163,    -1,   165,   166,    -1,   108,   109,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,
      -1,   123,   124,    -1,    -1,    -1,    -1,    -1,   190,    -1,
     132,    -1,    -1,    -1,    58,    59,    -1,    -1,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,    -1,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,   166,   167,   168,    -1,   170,    -1,
      -1,   173,   174,    -1,    38,    -1,    -1,    -1,    -1,    43,
      -1,   183,    46,   185,   186,    49,   188,    -1,    -1,    53,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      84,    85,    86,    -1,    -1,    89,    90,    91,    92,    -1,
      -1,    95,    -1,    -1,   158,   159,    -1,    -1,    -1,   163,
      -1,   165,   166,    -1,   108,   109,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,    -1,   123,
     124,    -1,    -1,    -1,    -1,    -1,   190,    -1,   132,    -1,
      -1,    -1,    58,    59,    -1,    -1,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,    -1,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,   166,   167,   168,    -1,   170,    -1,    -1,   173,
     174,    -1,    38,    -1,    -1,    -1,    -1,    43,    -1,   183,
      46,   185,   186,    49,   188,    -1,    -1,    53,    -1,    -1,
      -1,    -1,   118,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    84,    85,
      86,    -1,    -1,    89,    90,    91,    92,    -1,    -1,    95,
      -1,    -1,   158,   159,    -1,    -1,    -1,   163,    -1,   165,
     166,    -1,   108,   109,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   190,    -1,   132,    -1,    -1,    -1,
      58,    59,    -1,    -1,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,    -1,    14,    15,    16,    17,
      18,    -1,    -1,    21,    -1,    -1,    -1,    -1,    26,    -1,
     166,   167,   168,    -1,   170,    -1,    -1,   173,   174,    -1,
      38,    -1,    -1,    -1,    -1,    43,   182,   183,    46,   185,
     186,    49,   188,    -1,    -1,    53,    -1,    -1,    -1,    -1,
     118,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    -1,    84,    85,    86,    -1,
      -1,    89,    90,    91,    92,    -1,    -1,    95,    -1,    -1,
     158,   159,    -1,    -1,    -1,   163,    -1,   165,   166,    -1,
     108,   109,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   190,    -1,   132,    -1,    -1,    -1,    58,    59,
      -1,    -1,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,    -1,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,   166,   167,
     168,    -1,   170,    -1,    -1,   173,   174,    -1,    38,    -1,
      -1,    -1,    -1,    43,    -1,   183,    46,   185,   186,    49,
     188,    -1,    -1,    53,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,    84,    85,    86,    -1,    -1,    89,
      90,    91,    92,    -1,    -1,    95,    -1,    -1,   158,   159,
      -1,    -1,    -1,   163,    -1,   165,   166,    -1,   108,   109,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     190,    -1,   132,    32,    -1,    -1,    -1,    -1,    -1,    -1,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    -1,    -1,    32,    -1,    -1,   166,   167,   168,    -1,
     170,    -1,    -1,   173,   174,    14,    15,    16,    17,    18,
      -1,    -1,    -1,   183,   184,   185,   186,    26,   188,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    -1,    -1,    56,    -1,   118,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    84,    85,    86,    -1,   118,
      89,    90,    91,    92,    -1,    -1,    95,    -1,    -1,   158,
     159,    -1,    -1,    -1,   163,    -1,   165,   166,    -1,   108,
     109,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,   158,
     159,   190,    -1,   132,   163,    -1,   165,   166,    58,    59,
      -1,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   181,    14,    15,    16,    17,    18,    -1,    -1,
      -1,   190,    -1,    -1,    -1,    26,    -1,   166,   167,   168,
      -1,   170,    -1,    -1,   173,   174,    -1,    38,    -1,    -1,
      -1,    -1,    43,    -1,   183,    46,   185,   186,    49,   188,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,   118,    -1,
      -1,    -1,    63,    64,    65,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    -1,    84,    85,    86,    -1,    -1,    89,    90,
      91,    92,    -1,    -1,    95,    -1,    -1,    -1,   158,   159,
      -1,    -1,    -1,   163,    -1,   165,   166,   108,   109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     190,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   166,   167,   168,    -1,   170,
      -1,    -1,   173,   174,    14,    15,    16,    17,    18,    -1,
      -1,    -1,   183,   184,   185,   186,    26,   188,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    46,    -1,    -1,    49,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,    84,    85,    86,    -1,    -1,    89,
      90,    91,    92,    -1,    -1,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   164,    -1,   166,   167,   168,    -1,
     170,    -1,    -1,   173,   174,    14,    15,    16,    17,    18,
      -1,    -1,    -1,   183,    -1,   185,   186,    26,   188,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,    65,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    84,    85,    86,    -1,    -1,
      89,    90,    91,    92,    -1,    -1,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,
     109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   166,   167,   168,
      -1,   170,    -1,    -1,   173,   174,    14,    15,    16,    17,
      18,    -1,    -1,    -1,   183,   184,   185,   186,    26,   188,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    43,    -1,    -1,    46,    -1,
      -1,    49,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    -1,    84,    85,    86,    -1,
      -1,    89,    90,    91,    92,    -1,    -1,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     108,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   166,   167,
     168,    -1,   170,    -1,    -1,   173,   174,    14,    15,    16,
      17,    18,    -1,    -1,    -1,   183,   184,   185,   186,    26,
     188,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    43,    -1,    -1,    46,
      -1,    -1,    49,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    -1,    84,    85,    86,
      -1,    -1,    89,    90,    91,    92,    -1,    -1,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   108,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   166,
     167,   168,    -1,   170,    -1,    -1,   173,   174,    14,    15,
      16,    17,    18,    -1,    -1,    -1,   183,   184,   185,   186,
      26,   188,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      46,    -1,    -1,    49,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    84,    85,
      86,    -1,    -1,    89,    90,    91,    92,    -1,    -1,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   108,   109,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     166,   167,   168,    -1,   170,    -1,    -1,   173,   174,    14,
      15,    16,    17,    18,    -1,    -1,    -1,   183,   184,   185,
     186,    26,   188,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    84,
      85,    86,    -1,    -1,    89,    90,    91,    92,    -1,    -1,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   108,   109,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,    -1,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,   166,   167,   168,    -1,   170,    -1,    -1,   173,   174,
      -1,    38,    -1,    -1,    -1,    -1,    43,    -1,   183,    46,
     185,   186,    49,   188,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    -1,    84,    85,    86,
      -1,    -1,    89,    90,    91,    92,    -1,    -1,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   108,   109,    -1,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   166,
     167,   168,    -1,   170,    -1,    -1,   173,   174,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,   185,   186,
      -1,   188,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,    20,    21,    -1,   125,
     126,   127,   128,   129,   130,    -1,    -1,   133,   134,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,   159,    -1,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   180,   181,    -1,    -1,    -1,    -1,
      -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,    20,    21,
      -1,   125,   126,   127,   128,   129,   130,    -1,    -1,   133,
     134,   135,   136,   137,   138,   139,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,   159,    -1,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   180,   181,    -1,    -1,
      -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
      20,    21,    -1,   125,   126,   127,   128,   129,   130,    -1,
      -1,   133,   134,   135,   136,   137,   138,   139,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,   159,    -1,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,   181,
      -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,    20,    21,    -1,   125,   126,   127,   128,   129,
     130,    -1,    -1,   133,   134,   135,   136,   137,   138,   139,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,   159,
      -1,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     180,   181,    -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,    -1,    -1,    -1,   125,   126,   127,
     128,   129,   130,    -1,    -1,   133,   134,   135,   136,   137,
     138,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     158,   159,    -1,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,    -1,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,   180,   181,   106,   107,   108,   109,   110,   187,
      -1,   113,   114,   115,   116,    -1,   118,   119,   120,   121,
      -1,    -1,    -1,   125,    -1,   127,   128,    -1,    -1,    -1,
      -1,   133,   134,   135,    -1,    -1,    -1,   139,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,    -1,
      -1,    -1,    -1,    20,    21,    -1,    -1,    -1,   180,   181,
     106,   107,   108,   109,   110,   187,    -1,   113,   114,   115,
     116,    -1,   118,   119,   120,   121,    -1,    -1,    -1,   125,
      -1,   127,   128,    -1,    -1,    -1,    -1,   133,   134,   135,
      -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,   180,   181,    -1,    -1,   184,   106,
     107,   108,   109,   110,    -1,    -1,   113,   114,   115,   116,
      -1,   118,   119,   120,   121,    -1,    -1,    -1,   125,    -1,
     127,   128,    -1,    -1,    -1,    -1,   133,   134,   135,    -1,
      -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,    -1,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,   180,   181,    -1,    -1,   184,   106,   107,
     108,   109,   110,    -1,    -1,   113,   114,   115,   116,    -1,
     118,   119,   120,   121,    -1,    -1,    -1,   125,    -1,   127,
     128,    -1,    -1,    -1,    -1,   133,   134,   135,    -1,    -1,
      -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,   180,   181,    -1,    -1,   184,   106,   107,   108,
     109,   110,    -1,    -1,   113,   114,   115,   116,    -1,   118,
     119,   120,   121,    -1,    -1,    -1,   125,    -1,   127,   128,
      -1,    -1,    -1,    -1,   133,   134,   135,    -1,    -1,    -1,
     139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,   180,   181,    -1,    -1,   184,   106,   107,   108,   109,
     110,    -1,    -1,   113,   114,   115,   116,    -1,   118,   119,
     120,   121,    -1,    -1,    -1,   125,    -1,   127,   128,    -1,
      -1,    -1,    -1,   133,   134,   135,    -1,    -1,    -1,   139,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
      -1,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
     180,   181,    -1,    -1,   184,   106,   107,   108,   109,   110,
      -1,    -1,   113,   114,   115,   116,    -1,   118,   119,   120,
     121,    -1,    -1,    -1,   125,    -1,   127,   128,    -1,    -1,
      -1,    -1,   133,   134,   135,    -1,    -1,    -1,   139,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,   180,
     181,    -1,    -1,   184,   106,   107,   108,   109,   110,    -1,
      -1,   113,   114,   115,   116,    -1,   118,   119,   120,   121,
      -1,    -1,    -1,   125,    -1,   127,   128,    -1,    -1,    -1,
      -1,   133,   134,   135,    -1,    -1,    -1,   139,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,   180,   181,
      -1,    -1,   184,   106,   107,   108,   109,   110,    -1,    -1,
     113,   114,   115,   116,    -1,   118,   119,   120,   121,    -1,
      -1,    -1,   125,    -1,   127,   128,    -1,    -1,    -1,    -1,
     133,   134,   135,    -1,    -1,    -1,   139,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    -1,   180,   181,    -1,
      -1,   184,   106,   107,   108,   109,   110,    -1,    -1,   113,
     114,   115,   116,    -1,   118,   119,   120,   121,    -1,    -1,
      -1,   125,    -1,   127,   128,    -1,    -1,    -1,    -1,   133,
     134,   135,    -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,    -1,    -1,    -1,
      20,    21,    -1,    -1,    -1,    -1,   180,   181,   182,   106,
     107,   108,   109,   110,    -1,    -1,   113,   114,   115,   116,
      -1,   118,   119,   120,   121,    -1,    -1,    -1,   125,    -1,
     127,   128,    -1,    -1,    -1,    -1,   133,   134,   135,    -1,
      -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,    -1,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,    -1,    -1,    -1,    20,    21,    -1,
      -1,    -1,    -1,   180,   181,   182,   106,   107,   108,   109,
     110,    -1,    -1,   113,   114,   115,   116,    -1,   118,   119,
     120,   121,    -1,    -1,    -1,   125,    -1,   127,   128,    -1,
      -1,    -1,    -1,   133,   134,   135,    -1,    -1,    -1,   139,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
      -1,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,
     180,   181,   182,   106,   107,   108,   109,   110,    -1,    -1,
     113,   114,   115,   116,    -1,   118,   119,   120,   121,    -1,
      -1,    -1,   125,    -1,   127,   128,    -1,    -1,    -1,    -1,
     133,   134,   135,    -1,    -1,    -1,   139,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,   181,   182,
     106,   107,   108,   109,   110,    20,    21,   113,   114,   115,
     116,    -1,   118,   119,   120,   121,    -1,    -1,    -1,   125,
      -1,   127,   128,    -1,    -1,    -1,    -1,   133,   134,   135,
      -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   180,   181,   182,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,    20,    21,
     125,   126,   127,   128,   129,   130,    -1,    -1,   133,   134,
     135,   136,   137,   138,   139,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   158,   159,    -1,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   180,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
      -1,    -1,    -1,   125,   126,   127,   128,   129,   130,    -1,
      -1,   133,   134,   135,   136,   137,   138,   139,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,   159,    -1,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,    20,
      21,    -1,    -1,   106,   107,   108,   109,   110,   180,   181,
     113,   114,   115,   116,    -1,   118,   119,   120,   121,    -1,
      -1,    -1,   125,    -1,   127,   128,    -1,    -1,   131,    -1,
     133,   134,   135,    -1,    -1,    -1,   139,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,   181,    -1,
      -1,    -1,    -1,    -1,    -1,   106,   107,   108,   109,   110,
      -1,    -1,   113,   114,   115,   116,    -1,   118,   119,   120,
     121,    -1,    -1,    -1,   125,    -1,   127,   128,    -1,    -1,
      -1,    -1,   133,   134,   135,    -1,    -1,    -1,   139,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
      20,    21,    -1,    -1,   106,   107,   108,   109,   110,   180,
     181,   113,   114,   115,   116,    -1,   118,   119,   120,   121,
      -1,    -1,    -1,   125,    -1,   127,   128,    -1,    -1,    -1,
      -1,   133,   134,   135,    -1,    -1,    -1,   139,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,   159,    -1,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,   181,
      -1,    -1,    -1,    -1,    -1,    -1,   106,   107,   108,   109,
     110,    -1,    -1,   113,   114,   115,   116,    -1,   118,   119,
     120,   121,    -1,    -1,    -1,   125,    -1,   127,   128,    -1,
      -1,    -1,    -1,   133,   134,   135,    -1,    -1,    -1,   139,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
      -1,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,    20,    21,    -1,    -1,   106,   107,   108,   109,   110,
     180,   181,   113,   114,   115,   116,    -1,   118,   119,   120,
     121,    -1,    -1,    -1,   125,    -1,   127,   128,    -1,    -1,
      -1,    -1,   133,   134,   135,    -1,    -1,    -1,   139,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,
     181,    -1,    -1,    -1,    -1,    -1,    -1,   106,   107,    -1,
      -1,   110,    -1,    -1,   113,   114,   115,   116,    -1,   118,
     119,   120,   121,    20,    21,    -1,   125,    -1,   127,   128,
      -1,    -1,    -1,    -1,   133,   134,   135,    -1,    -1,    -1,
     139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,
     159,    -1,   161,   162,   163,   164,   165,    -1,    -1,    -1,
     169,    -1,    -1,    -1,    -1,    -1,   106,   107,   108,   109,
     110,   180,   181,   113,   114,   115,   116,    -1,   118,   119,
     120,   121,    -1,    -1,    -1,   125,    -1,   127,   128,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
     107,   108,   109,   110,    -1,    -1,   113,   114,   115,   116,
      -1,   118,   119,   120,   121,    20,    21,    -1,   125,    -1,
     127,   128,    -1,   163,   164,   165,   166,   167,   168,   169,
     170,    -1,   106,   107,   108,   109,   110,    -1,    -1,   113,
     180,   181,   116,    -1,   118,   119,   120,   121,    -1,    -1,
      -1,   125,    -1,   127,   128,    -1,    -1,   164,   165,   166,
     167,   168,   169,   170,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   180,   181,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     164,   165,   166,   167,   168,   169,   170,    -1,    -1,    -1,
      -1,   106,   107,   108,   109,    -1,   180,   181,    -1,    -1,
      -1,   116,    -1,   118,   119,   120,   121,    37,    -1,    -1,
     125,    -1,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   166,   167,   168,   169,   170,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   180,   181,    -1,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    -1,    -1,    -1,   119,
     120,    -1,    -1,    -1,    -1,    -1,   126,   127,   128,   129,
     130,    -1,    -1,   133,   134,   135,   136,   137,   138,   139,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,    -1,    -1,   173,   174,    47,    -1,    -1,    -1,    -1,
     180,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     132,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,   149,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   132,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,   149,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   132,    47,    -1,    -1,    -1,    -1,    -1,    -1,
     140,   141,   142,    -1,    -1,    -1,    -1,    -1,    62,   149,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,   149,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   149
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   192,     0,     6,    29,    31,    33,    39,    48,    54,
      73,    94,   181,   187,   195,   203,   204,   208,   231,   235,
     252,   312,   318,   321,   327,   364,   367,    18,    19,   149,
     225,   226,   227,   143,   209,   210,   149,   170,   205,   206,
     149,   188,   315,   149,   185,   194,   368,   365,    33,    61,
     132,   149,   228,   229,   230,   244,     4,     5,     7,    35,
     325,    60,   310,   158,   157,   160,   157,   205,    21,    55,
     169,   180,   207,   316,   315,   317,   310,   149,   149,   149,
     132,   183,   157,   182,    55,    61,   236,   238,    55,    61,
     319,    55,    61,   326,    55,    61,   311,    14,    15,   143,
     147,   149,   150,   183,   197,   226,   143,   210,   149,   149,
     149,   158,   187,   189,   315,    55,    61,   193,   188,   366,
     149,   227,   229,   239,   149,   320,   328,   188,   313,   151,
     152,   196,    14,    15,   143,   147,   149,   197,   223,   224,
     207,    24,    30,    47,    62,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,   244,   331,   333,   334,
     336,   339,   187,   149,   335,   188,   184,    34,   108,   109,
     149,   234,   237,   160,   188,    97,   323,   324,   308,   140,
     288,   151,   152,   153,   157,   184,   164,   164,   164,   164,
     183,   164,   164,   164,   164,   164,   164,    32,    58,    59,
     118,   158,   159,   163,   166,   181,   190,   187,   149,   301,
     302,    37,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     119,   120,   126,   127,   128,   129,   130,   133,   134,   135,
     136,   137,   138,   139,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   173,   174,   180,   181,    34,    34,
     183,   232,   188,   240,    68,    72,    89,    90,    91,    92,
     332,   314,   149,   329,   189,   309,   227,   149,   307,   330,
     223,   342,   344,   346,   340,   149,   337,   348,   350,   352,
     354,   356,   358,   360,   362,    32,    32,   163,   181,   190,
      14,    15,    16,    17,    18,    26,    38,    43,    46,    49,
      53,    63,    73,    95,   108,   109,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   150,   166,   167,   168,   170,
     173,   174,   182,   183,   185,   186,   199,   201,   240,   244,
     246,   254,   261,   264,   267,   271,   272,   275,   276,   277,
     282,   285,   331,   369,   373,   378,   380,   382,   149,   189,
     160,   187,   182,   182,   184,   288,   297,   298,   160,   233,
     242,   188,   149,   189,   160,   322,   188,   288,   182,    41,
     157,   160,   163,   306,   339,   339,   339,   339,   184,   335,
     339,   232,   339,   232,   339,   232,   149,   299,   300,   339,
     302,   182,   339,   369,   183,   164,   183,   164,   164,   183,
     164,   183,   164,   285,   285,    12,   339,    12,   339,   285,
     375,   379,   198,   285,   285,   285,   244,   285,   285,   285,
     186,   149,   183,   231,    20,    21,   106,   107,   108,   109,
     110,   113,   114,   115,   116,   118,   119,   120,   121,   125,
     127,   128,   133,   134,   135,   139,   159,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   180,   181,   182,
     183,   339,   189,   301,    48,   304,   330,   184,   187,   339,
       1,     8,     9,    10,    12,    25,    27,    28,    37,    40,
      42,    50,    52,    56,    57,    63,    96,   123,   124,   187,
     189,   211,   212,   215,   216,   217,   218,   219,   220,   221,
     241,   243,   245,   247,   248,   249,   250,   251,   252,   253,
     273,   274,   285,   314,   158,   187,   244,   293,   307,   182,
     149,   149,   339,   117,   126,   158,   305,   165,   187,   165,
     165,   165,   187,   165,   233,   165,   233,   165,   233,   160,
     165,   187,   165,   187,   183,   244,   262,   285,   255,   257,
     285,   259,   285,   339,   330,    51,   149,   166,   183,   285,
     370,   371,   372,   374,   375,   376,   377,   330,   183,   371,
     377,   131,   187,   189,   153,   154,   196,   202,   184,   164,
     244,   181,   184,   265,   285,   140,   270,    18,   149,   149,
     285,   285,   285,   285,   285,   285,   149,   285,   149,   285,
     285,   285,   285,   285,   285,   285,   285,   285,    21,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     119,   120,   149,   180,   181,   283,   285,   184,   265,   304,
     117,   158,   160,   163,   303,   297,   285,   330,   117,   187,
     243,   273,   285,   240,   285,   285,   149,   187,   143,    56,
     285,   240,   117,   243,   285,   186,   271,   271,    36,   187,
     187,   285,   187,   187,   187,   307,   122,   187,    98,    99,
     100,   101,   102,   103,   104,   105,   111,   112,   117,   126,
     129,   130,   136,   137,   138,   158,   189,   285,   181,   189,
     231,   294,    41,   158,   187,   305,   243,   285,   343,   339,
     347,   341,   338,   349,   165,   353,   165,   357,   165,   339,
     361,   299,   363,   184,   265,   164,   285,   339,   184,   339,
     339,   184,   339,   184,   165,    19,   271,   126,   303,   184,
     157,   187,   372,   182,   157,   182,   187,    19,   184,   372,
     189,   285,   375,   189,   285,   151,   200,   278,   280,   149,
     370,   157,   184,   117,   126,   158,   163,   268,   269,   232,
     164,   183,   182,   149,   160,   149,   285,   149,   285,     1,
     182,   184,   339,   243,   285,   240,    19,   243,   285,   117,
     158,   187,    13,   240,   158,   160,   143,   243,   285,   187,
     186,   188,   240,   271,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   123,   124,   285,   285,   285,   285,
     285,   285,   285,   123,   124,   285,   187,   230,     7,   288,
     292,   149,   243,   285,   187,   165,   351,   355,   359,   184,
     149,   184,   165,   165,   165,   165,   270,   265,   285,   285,
     371,   372,   149,   370,   182,   182,   285,   182,   376,   265,
     371,   189,   182,   155,   151,   339,   232,   182,   285,   149,
     149,   149,   149,   157,   182,   233,   286,   184,   265,   285,
     182,   182,   284,   158,   303,   265,   187,   240,   222,   187,
     242,    11,    22,    23,   213,   214,   285,   285,   285,   285,
     182,    55,    61,   291,    44,    97,   289,   187,   187,   345,
     165,   187,   263,   256,   258,   260,   183,   187,   372,   182,
     126,   303,   182,   187,   372,   182,   165,   233,   184,   268,
     182,   131,   240,   266,   339,   184,   285,   187,   285,   189,
     240,   285,   187,    45,   289,   291,   285,   149,   285,   285,
     285,   184,   285,   285,   182,   182,   285,   285,   285,   189,
     279,   165,   117,   285,   165,   240,   240,   295,    32,   290,
     304,   184,   165,   184,   187,   381,   182,   381,   182,   244,
     281,   285,   287,   214,   237,   296,   285,    51,   182,   189,
     244,   187,   237,   184,   285,   182,   182,   240
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   191,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   193,   193,   193,   194,   194,
     195,   196,   196,   196,   196,   197,   198,   198,   198,   199,
     200,   200,   202,   201,   203,   204,   205,   205,   205,   205,
     206,   206,   207,   207,   208,   209,   209,   210,   210,   211,
     212,   212,   213,   213,   214,   214,   214,   215,   215,   216,
     217,   218,   219,   220,   222,   221,   223,   223,   223,   223,
     223,   223,   224,   224,   225,   225,   225,   226,   226,   226,
     226,   226,   226,   226,   226,   227,   227,   228,   228,   228,
     229,   229,   230,   230,   231,   231,   232,   232,   232,   233,
     233,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   235,   236,   236,   236,   237,   239,   238,   240,   240,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     242,   242,   242,   243,   243,   243,   244,   244,   244,   245,
     246,   246,   246,   246,   247,   248,   249,   249,   249,   249,
     249,   250,   250,   250,   250,   251,   252,   252,   253,   255,
     256,   254,   257,   258,   254,   259,   260,   254,   262,   263,
     261,   264,   264,   264,   265,   265,   266,   266,   266,   267,
     267,   267,   268,   268,   268,   268,   269,   269,   270,   270,
     271,   271,   272,   272,   272,   272,   272,   272,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   274,   274,   274,
     274,   275,   276,   276,   277,   278,   279,   277,   280,   281,
     277,   282,   282,   283,   284,   282,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   286,   287,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   288,   288,   289,   289,   289,   290,   290,   291,   291,
     291,   292,   293,   294,   293,   295,   293,   296,   293,   293,
     297,   297,   298,   298,   299,   299,   300,   300,   301,   302,
     302,   303,   303,   304,   304,   304,   304,   304,   304,   305,
     305,   305,   306,   306,   307,   307,   307,   307,   307,   308,
     309,   308,   310,   310,   311,   311,   311,   312,   313,   312,
     314,   314,   314,   316,   315,   317,   317,   318,   318,   319,
     319,   319,   320,   321,   321,   322,   322,   323,   323,   324,
     325,   325,   326,   326,   326,   328,   329,   327,   330,   330,
     330,   330,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   332,   332,   332,
     332,   332,   332,   333,   334,   334,   335,   335,   337,   338,
     336,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   340,   341,
     339,   339,   342,   343,   339,   344,   345,   339,   346,   347,
     339,   339,   348,   349,   339,   350,   351,   339,   339,   352,
     353,   339,   354,   355,   339,   339,   356,   357,   339,   358,
     359,   339,   360,   361,   339,   362,   363,   339,   365,   366,
     364,   368,   367,   369,   369,   369,   369,   370,   370,   370,
     370,   371,   371,   372,   372,   373,   373,   373,   373,   373,
     373,   374,   374,   375,   376,   376,   377,   377,   378,   378,
     379,   379,   380,   381,   381,   382,   382
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     0,     1,     1,     1,     1,
       4,     1,     1,     2,     2,     3,     0,     2,     4,     3,
       1,     2,     0,     4,     2,     2,     1,     2,     3,     3,
       2,     4,     0,     1,     2,     1,     3,     1,     3,     3,
       3,     2,     1,     1,     0,     2,     4,     1,     1,     4,
       6,     2,     3,     3,     0,     5,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     4,     1,     3,     0,     3,     0,     2,     3,     0,
       2,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     3,     2,     2,     2,
       2,     3,     0,     1,     1,     3,     0,     4,     3,     7,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     2,     2,     2,
       0,     2,     2,     3,     2,     2,     1,     3,     2,     2,
       2,     4,     5,     2,     1,     1,     2,     3,     4,     2,
       3,     3,     4,     2,     3,     4,     1,     1,     2,     0,
       0,     7,     0,     0,     7,     0,     0,     7,     0,     0,
       6,     5,     8,    10,     1,     3,     1,     2,     3,     1,
       1,     2,     2,     2,     2,     2,     1,     3,     0,     4,
       1,     6,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     4,     4,     4,
       4,     6,     5,     6,     3,     0,     0,     8,     0,     0,
       9,     3,     4,     0,     0,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     3,     4,     5,     4,     5,
       3,     4,     1,     3,     4,     3,     4,     2,     4,     4,
       7,     8,     3,     5,     0,     0,     8,     3,     3,     4,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     2,
       4,     0,     4,     0,     1,     1,     0,     1,     0,     1,
       1,     4,     0,     0,     4,     0,     8,     0,     9,     5,
       2,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     1,     1,     1,     2,     3,     5,     3,     3,     1,
       1,     1,     0,     1,     4,     6,     5,     5,     4,     0,
       0,     4,     0,     1,     0,     1,     1,     6,     0,     6,
       0,     3,     5,     0,     4,     2,     3,     4,     2,     0,
       1,     1,     1,     7,     9,     0,     2,     0,     1,     3,
       1,     1,     0,     1,     1,     0,     0,     9,     1,     3,
       3,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     0,     0,
       6,     1,     1,     1,     1,     4,     3,     4,     2,     2,
       3,     2,     3,     2,     2,     3,     3,     2,     0,     0,
       6,     2,     0,     0,     6,     0,     0,     8,     0,     0,
       6,     1,     0,     0,     6,     0,     0,     7,     1,     0,
       0,     6,     0,     0,     7,     1,     0,     0,     6,     0,
       0,     7,     0,     0,     6,     0,     0,     6,     0,     0,
       8,     0,     7,     1,     1,     1,     1,     3,     3,     5,
       5,     1,     3,     0,     2,     6,     5,     7,     8,     6,
       8,     1,     3,     3,     1,     1,     1,     3,     5,     5,
       1,     3,     4,     0,     3,    10,    10
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = DAS_YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == DAS_YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, scanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use DAS_YYerror or DAS_YYUNDEF. */
#define YYERRCODE DAS_YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if DAS_YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined DAS_YYLTYPE_IS_TRIVIAL && DAS_YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, scanner);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, yyscan_t scanner)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !DAS_YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !DAS_YYDEBUG */


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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_NAME: /* "name"  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_module_name: /* module_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_character_sequence: /* character_sequence  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_string_constant: /* string_constant  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_string_builder_body: /* string_builder_body  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_string_builder: /* string_builder  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_reader: /* expr_reader  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_require_module_name: /* require_module_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_expression_label: /* expression_label  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_goto: /* expression_goto  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_else: /* expression_else  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_if_then_else: /* expression_if_then_else  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_for_loop: /* expression_for_loop  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_unsafe: /* expression_unsafe  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_while_loop: /* expression_while_loop  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_with: /* expression_with  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_with_alias: /* expression_with_alias  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_annotation_argument_value: /* annotation_argument_value  */
            { delete ((*yyvaluep).aa); }
        break;

    case YYSYMBOL_annotation_argument_value_list: /* annotation_argument_value_list  */
            { delete ((*yyvaluep).aaList); }
        break;

    case YYSYMBOL_annotation_argument_name: /* annotation_argument_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_annotation_argument: /* annotation_argument  */
            { delete ((*yyvaluep).aa); }
        break;

    case YYSYMBOL_annotation_argument_list: /* annotation_argument_list  */
            { delete ((*yyvaluep).aaList); }
        break;

    case YYSYMBOL_annotation_declaration_name: /* annotation_declaration_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_annotation_declaration: /* annotation_declaration  */
            { delete ((*yyvaluep).fa); }
        break;

    case YYSYMBOL_annotation_list: /* annotation_list  */
            { delete ((*yyvaluep).faList); }
        break;

    case YYSYMBOL_optional_annotation_list: /* optional_annotation_list  */
            { delete ((*yyvaluep).faList); }
        break;

    case YYSYMBOL_optional_function_argument_list: /* optional_function_argument_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_optional_function_type: /* optional_function_type  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_function_name: /* function_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_expression_block: /* expression_block  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_any: /* expression_any  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expressions: /* expressions  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_pipe: /* expr_pipe  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_name_in_namespace: /* name_in_namespace  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_expression_delete: /* expression_delete  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_new: /* expr_new  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_break: /* expression_break  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_continue: /* expression_continue  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_return: /* expression_return  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_yield: /* expression_yield  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_try_catch: /* expression_try_catch  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_let: /* expression_let  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_cast: /* expr_cast  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_type_decl: /* expr_type_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_type_info: /* expr_type_info  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_block_or_simple_block: /* block_or_simple_block  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_capture_entry: /* capture_entry  */
            { delete ((*yyvaluep).pCapt); }
        break;

    case YYSYMBOL_capture_list: /* capture_list  */
            { delete ((*yyvaluep).pCaptList); }
        break;

    case YYSYMBOL_optional_capture_list: /* optional_capture_list  */
            { delete ((*yyvaluep).pCaptList); }
        break;

    case YYSYMBOL_expr_block: /* expr_block  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_numeric_const: /* expr_numeric_const  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_assign: /* expr_assign  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_assign_pipe: /* expr_assign_pipe  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_named_call: /* expr_named_call  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_method_call: /* expr_method_call  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_func_addr_expr: /* func_addr_expr  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_field: /* expr_field  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr: /* expr  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_optional_field_annotation: /* optional_field_annotation  */
            { delete ((*yyvaluep).aaList); }
        break;

    case YYSYMBOL_structure_variable_declaration: /* structure_variable_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_struct_variable_declaration_list: /* struct_variable_declaration_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_function_argument_declaration: /* function_argument_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_function_argument_list: /* function_argument_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_tuple_type: /* tuple_type  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_tuple_type_list: /* tuple_type_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_variant_type: /* variant_type  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_variant_type_list: /* variant_type_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_variable_declaration: /* variable_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_let_variable_declaration: /* let_variable_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_global_variable_declaration_list: /* global_variable_declaration_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_enum_list: /* enum_list  */
            { delete ((*yyvaluep).pEnum); }
        break;

    case YYSYMBOL_enum_name: /* enum_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_optional_structure_parent: /* optional_structure_parent  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_variable_name_with_pos_list: /* variable_name_with_pos_list  */
            { delete ((*yyvaluep).pNameWithPosList); }
        break;

    case YYSYMBOL_structure_type_declaration: /* structure_type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_auto_type_declaration: /* auto_type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_bitfield_bits: /* bitfield_bits  */
            { delete ((*yyvaluep).pNameList); }
        break;

    case YYSYMBOL_bitfield_type_declaration: /* bitfield_type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_type_declaration: /* type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_make_decl: /* make_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_struct_fields: /* make_struct_fields  */
            { delete ((*yyvaluep).pMakeStruct); }
        break;

    case YYSYMBOL_make_struct_dim: /* make_struct_dim  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_optional_block: /* optional_block  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_struct_decl: /* make_struct_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_tuple: /* make_tuple  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_map_tuple: /* make_map_tuple  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_any_tuple: /* make_any_tuple  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_dim: /* make_dim  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_dim_decl: /* make_dim_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_table: /* make_table  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_table_decl: /* make_table_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_array_comprehension_where: /* array_comprehension_where  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_array_comprehension: /* array_comprehension  */
            { delete ((*yyvaluep).pExpression); }
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined DAS_YYLTYPE_IS_TRIVIAL && DAS_YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = DAS_YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
  YY_STACK_PRINT (yyss, yyssp);

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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == DAS_YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= DAS_YYEOF)
    {
      yychar = DAS_YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == DAS_YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = DAS_YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = DAS_YYEMPTY;
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 15: /* optional_public_or_private_module: %empty  */
                        { (yyval.b) = yyextra->g_Program->policies.default_module_public; }
    break;

  case 16: /* optional_public_or_private_module: "public"  */
                        { (yyval.b) = true; }
    break;

  case 17: /* optional_public_or_private_module: "private"  */
                        { (yyval.b) = false; }
    break;

  case 18: /* module_name: '$'  */
                    { (yyval.s) = new string("$"); }
    break;

  case 19: /* module_name: "name"  */
                    { (yyval.s) = (yyvsp[0].s); }
    break;

  case 20: /* module_declaration: "module" module_name optional_shared optional_public_or_private_module  */
                                                                                                      {
        yyextra->g_Program->thisModuleName = *(yyvsp[-2].s);
        yyextra->g_Program->thisModule->isPublic = (yyvsp[0].b);
        yyextra->g_Program->thisModule->isModule = true;
        if ( yyextra->g_Program->thisModule->name.empty() ) {
            yyextra->g_Program->thisModule->name = *(yyvsp[-2].s);
        } else if ( yyextra->g_Program->thisModule->name != *(yyvsp[-2].s) ){
            das_yyerror(scanner,"this module already has a name " + yyextra->g_Program->thisModule->name,tokAt(scanner,(yylsp[-2])),
                CompilationError::module_already_has_a_name);
        }
        if ( !yyextra->g_Program->policies.ignore_shared_modules ) {
            yyextra->g_Program->promoteToBuiltin = (yyvsp[-1].b);
        }
        delete (yyvsp[-2].s);
    }
    break;

  case 21: /* character_sequence: STRING_CHARACTER  */
                                                            { (yyval.s) = new string(); *(yyval.s) += (yyvsp[0].ch); }
    break;

  case 22: /* character_sequence: STRING_CHARACTER_ESC  */
                                                            { (yyval.s) = new string(); *(yyval.s) += "\\\\"; }
    break;

  case 23: /* character_sequence: character_sequence STRING_CHARACTER  */
                                                            { (yyval.s) = (yyvsp[-1].s); *(yyvsp[-1].s) += (yyvsp[0].ch); }
    break;

  case 24: /* character_sequence: character_sequence STRING_CHARACTER_ESC  */
                                                            { (yyval.s) = (yyvsp[-1].s); *(yyvsp[-1].s) += "\\\\"; }
    break;

  case 25: /* string_constant: "start of the string" character_sequence "end of the string"  */
                                                           { (yyval.s) = (yyvsp[-1].s); }
    break;

  case 26: /* string_builder_body: %empty  */
        {
        (yyval.pExpression) = new ExprStringBuilder();
        (yyval.pExpression)->at = LineInfo(yyextra->g_FileAccessStack.back(),
            yylloc.first_column,yylloc.first_line,yylloc.last_column,yylloc.last_line);
    }
    break;

  case 27: /* string_builder_body: string_builder_body character_sequence  */
                                                           {
        bool err;
        auto esconst = unescapeString(*(yyvsp[0].s),&err);
        if ( err ) das_yyerror(scanner,"invalid escape sequence",tokAt(scanner,(yylsp[-1])), CompilationError::invalid_escape_sequence);
        auto sc = make_smart<ExprConstString>(tokAt(scanner,(yylsp[0])),esconst);
        delete (yyvsp[0].s);
        static_cast<ExprStringBuilder *>((yyvsp[-1].pExpression))->elements.push_back(sc);
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
    break;

  case 28: /* string_builder_body: string_builder_body "{" expr "}"  */
                                                                                {
        auto se = ExpressionPtr((yyvsp[-1].pExpression));
        static_cast<ExprStringBuilder *>((yyvsp[-3].pExpression))->elements.push_back(se);
        (yyval.pExpression) = (yyvsp[-3].pExpression);
    }
    break;

  case 29: /* string_builder: "start of the string" string_builder_body "end of the string"  */
                                                                   {
        auto strb = static_cast<ExprStringBuilder *>((yyvsp[-1].pExpression));
        if ( strb->elements.size()==0 ) {
            (yyval.pExpression) = new ExprConstString(tokRangeAt(scanner,(yylsp[-2]),(yylsp[0])),"");
            delete (yyvsp[-1].pExpression);
        } else if ( strb->elements.size()==1 && strb->elements[0]->rtti_isStringConstant() ) {
            auto sconst = static_pointer_cast<ExprConstString>(strb->elements[0]);
            (yyval.pExpression) = new ExprConstString(tokRangeAt(scanner,(yylsp[-2]),(yylsp[0])),sconst->text);
            delete (yyvsp[-1].pExpression);
        } else {
            (yyval.pExpression) = (yyvsp[-1].pExpression);
        }
    }
    break;

  case 30: /* reader_character_sequence: STRING_CHARACTER  */
                               {
        if ( !yyextra->g_ReaderMacro->accept(yyextra->g_Program.get(), yyextra->g_Program->thisModule.get(), yyextra->g_ReaderExpr, (yyvsp[0].ch), tokAt(scanner,(yylsp[0]))) ) {
            das_yyend_reader(scanner);
        }
    }
    break;

  case 31: /* reader_character_sequence: reader_character_sequence STRING_CHARACTER  */
                                                                {
        if ( !yyextra->g_ReaderMacro->accept(yyextra->g_Program.get(), yyextra->g_Program->thisModule.get(), yyextra->g_ReaderExpr, (yyvsp[0].ch), tokAt(scanner,(yylsp[0]))) ) {
            das_yyend_reader(scanner);
        }
    }
    break;

  case 32: /* $@1: %empty  */
                                        {
        auto macros = yyextra->g_Program->getReaderMacro(*(yyvsp[0].s));
        if ( macros.size()==0 ) {
            das_yyerror(scanner,"reader macro " + *(yyvsp[0].s) + " not found",tokAt(scanner,(yylsp[0])),
                CompilationError::unsupported_read_macro);
        } else if ( macros.size()>1 ) {
            string options;
            for ( auto & x : macros ) {
                options += "\t" + x->module->name + "::" + x->name + "\n";
            }
            das_yyerror(scanner,"too many options for the reader macro " + *(yyvsp[0].s) +  "\n" + options, tokAt(scanner,(yylsp[0])),
                CompilationError::unsupported_read_macro);
        } else if ( yychar != '~' ) {
            das_yyerror(scanner,"expecting ~ after the reader macro", tokAt(scanner,(yylsp[0])),
                CompilationError::syntax_error);
        } else {
            yyextra->g_ReaderMacro = macros.back().get();
            yyextra->g_ReaderExpr = new ExprReader(tokAt(scanner,(yylsp[-1])),yyextra->g_ReaderMacro);
            yyclearin ;
            das_yybegin_reader(scanner);
        }
    }
    break;

  case 33: /* expr_reader: '%' name_in_namespace $@1 reader_character_sequence  */
                                     {
        yyextra->g_ReaderExpr->at = tokRangeAt(scanner,(yylsp[-3]),(yylsp[0]));
        (yyval.pExpression) = yyextra->g_ReaderExpr;
        delete (yyvsp[-2].s);
        yyextra->g_ReaderMacro = nullptr;
        yyextra->g_ReaderExpr = nullptr;
    }
    break;

  case 34: /* options_declaration: "options" annotation_argument_list  */
                                                   {
        if ( yyextra->g_Program->options.size() ) {
            yyextra->g_Program->options.insert ( yyextra->g_Program->options.begin(),
                (yyvsp[0].aaList)->begin(), (yyvsp[0].aaList)->end() );
        } else {
            swap ( yyextra->g_Program->options, *(yyvsp[0].aaList) );
        }
        auto opt = yyextra->g_Program->options.find("indenting", tInt);
        if (opt)
        {
            if (opt->iValue != 0 && opt->iValue != 2 && opt->iValue != 4 && opt->iValue != 8)//this is error
                yyextra->das_tab_size = yyextra->das_def_tab_size;
            else
                yyextra->das_tab_size = opt->iValue ? opt->iValue : yyextra->das_def_tab_size;//0 is default
            yyextra->g_FileAccessStack.back()->tabSize = yyextra->das_tab_size;
        }
        delete (yyvsp[0].aaList);
    }
    break;

  case 36: /* require_module_name: "name"  */
                   {
        (yyval.s) = (yyvsp[0].s);
    }
    break;

  case 37: /* require_module_name: '%' require_module_name  */
                                     {
        *(yyvsp[0].s) = "%" + *(yyvsp[0].s);
        (yyval.s) = (yyvsp[0].s);
    }
    break;

  case 38: /* require_module_name: require_module_name '.' "name"  */
                                                {
        *(yyvsp[-2].s) += ".";
        *(yyvsp[-2].s) += *(yyvsp[0].s);
        delete (yyvsp[0].s);
        (yyval.s) = (yyvsp[-2].s);
    }
    break;

  case 39: /* require_module_name: require_module_name '/' "name"  */
                                                {
        *(yyvsp[-2].s) += "/";
        *(yyvsp[-2].s) += *(yyvsp[0].s);
        delete (yyvsp[0].s);
        (yyval.s) = (yyvsp[-2].s);
    }
    break;

  case 40: /* require_module: require_module_name is_public_module  */
                                                         {
        ast_requireModule(scanner,(yyvsp[-1].s),nullptr,(yyvsp[0].b),tokAt(scanner,(yylsp[-1])));
    }
    break;

  case 41: /* require_module: require_module_name "as" "name" is_public_module  */
                                                                              {
        ast_requireModule(scanner,(yyvsp[-3].s),(yyvsp[-1].s),(yyvsp[0].b),tokAt(scanner,(yylsp[-3])));
    }
    break;

  case 42: /* is_public_module: %empty  */
                    { (yyval.b) = false; }
    break;

  case 43: /* is_public_module: "public"  */
                    { (yyval.b) = true; }
    break;

  case 47: /* expect_error: "integer constant"  */
                   {
        yyextra->g_Program->expectErrors[CompilationError((yyvsp[0].i))] ++;
    }
    break;

  case 48: /* expect_error: "integer constant" ':' "integer constant"  */
                                      {
        yyextra->g_Program->expectErrors[CompilationError((yyvsp[-2].i))] += (yyvsp[0].i);
    }
    break;

  case 49: /* expression_label: "label" "integer constant" ':'  */
                                          {
        (yyval.pExpression) = new ExprLabel(tokAt(scanner,(yylsp[-2])),(yyvsp[-1].i));
    }
    break;

  case 50: /* expression_goto: "goto" "label" "integer constant"  */
                                                {
        (yyval.pExpression) = new ExprGoto(tokAt(scanner,(yylsp[-2])),(yyvsp[0].i));
    }
    break;

  case 51: /* expression_goto: "goto" expr  */
                               {
        (yyval.pExpression) = new ExprGoto(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 52: /* elif_or_static_elif: "elif"  */
                          { (yyval.b) = false; }
    break;

  case 53: /* elif_or_static_elif: "static_elif"  */
                          { (yyval.b) = true; }
    break;

  case 54: /* expression_else: %empty  */
                                                           { (yyval.pExpression) = nullptr; }
    break;

  case 55: /* expression_else: "else" expression_block  */
                                                           { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 56: /* expression_else: elif_or_static_elif expr expression_block expression_else  */
                                                                                          {
        auto eite = new ExprIfThenElse(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-2].pExpression)),
            ExpressionPtr((yyvsp[-1].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
        eite->isStatic = (yyvsp[-3].b);
        (yyval.pExpression) = eite;
    }
    break;

  case 57: /* if_or_static_if: "if"  */
                        { (yyval.b) = false; }
    break;

  case 58: /* if_or_static_if: "static_if"  */
                        { (yyval.b) = true; }
    break;

  case 59: /* expression_if_then_else: if_or_static_if expr expression_block expression_else  */
                                                                                      {
        auto eite = new ExprIfThenElse(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-2].pExpression)),
            ExpressionPtr((yyvsp[-1].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
        eite->isStatic = (yyvsp[-3].b);
        (yyval.pExpression) = eite;
    }
    break;

  case 60: /* expression_for_loop: "for" variable_name_with_pos_list "in" expr_list ';' expression_block  */
                                                                                                           {
        (yyval.pExpression) = ast_forLoop(scanner,(yyvsp[-4].pNameWithPosList),(yyvsp[-2].pExpression),(yyvsp[0].pExpression),tokAt(scanner,(yylsp[-5])),tokAt(scanner,(yylsp[0])));
    }
    break;

  case 61: /* expression_unsafe: "unsafe" expression_block  */
                                                 {
        auto pUnsafe = new ExprUnsafe(tokAt(scanner,(yylsp[-1])));
        pUnsafe->body = ExpressionPtr((yyvsp[0].pExpression));
        (yyval.pExpression) = pUnsafe;
    }
    break;

  case 62: /* expression_while_loop: "while" expr expression_block  */
                                                               {
        auto pWhile = new ExprWhile(tokAt(scanner,(yylsp[-2])));
        pWhile->cond = ExpressionPtr((yyvsp[-1].pExpression));
        pWhile->body = ExpressionPtr((yyvsp[0].pExpression));
        ((ExprBlock *)(yyvsp[0].pExpression))->inTheLoop = true;
        (yyval.pExpression) = pWhile;
    }
    break;

  case 63: /* expression_with: "with" expr expression_block  */
                                                         {
        auto pWith = new ExprWith(tokAt(scanner,(yylsp[-2])));
        pWith->with = ExpressionPtr((yyvsp[-1].pExpression));
        pWith->body = ExpressionPtr((yyvsp[0].pExpression));
        (yyval.pExpression) = pWith;
    }
    break;

  case 64: /* $@2: %empty  */
                                        { yyextra->das_need_oxford_comma=true; }
    break;

  case 65: /* expression_with_alias: "assume" "name" '=' $@2 expr  */
                                                                                               {
        (yyval.pExpression) = new ExprAssume(tokAt(scanner,(yylsp[-4])), *(yyvsp[-3].s), (yyvsp[0].pExpression) );
        delete (yyvsp[-3].s);
    }
    break;

  case 66: /* annotation_argument_value: string_constant  */
                                 { (yyval.aa) = new AnnotationArgument("",*(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 67: /* annotation_argument_value: "name"  */
                                 { (yyval.aa) = new AnnotationArgument("",*(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 68: /* annotation_argument_value: "integer constant"  */
                                 { (yyval.aa) = new AnnotationArgument("",(yyvsp[0].i)); }
    break;

  case 69: /* annotation_argument_value: "floating point constant"  */
                                 { (yyval.aa) = new AnnotationArgument("",float((yyvsp[0].fd))); }
    break;

  case 70: /* annotation_argument_value: "true"  */
                                 { (yyval.aa) = new AnnotationArgument("",true); }
    break;

  case 71: /* annotation_argument_value: "false"  */
                                 { (yyval.aa) = new AnnotationArgument("",false); }
    break;

  case 72: /* annotation_argument_value_list: annotation_argument_value  */
                                       {
        (yyval.aaList) = new AnnotationArgumentList();
        (yyval.aaList)->push_back(*(yyvsp[0].aa));
        delete (yyvsp[0].aa);
    }
    break;

  case 73: /* annotation_argument_value_list: annotation_argument_value_list ',' annotation_argument_value  */
                                                                                {
            (yyval.aaList) = (yyvsp[-2].aaList);
            (yyval.aaList)->push_back(*(yyvsp[0].aa));
            delete (yyvsp[0].aa);
    }
    break;

  case 74: /* annotation_argument_name: "name"  */
                    { (yyval.s) = (yyvsp[0].s); }
    break;

  case 75: /* annotation_argument_name: "type"  */
                    { (yyval.s) = new string("type"); }
    break;

  case 76: /* annotation_argument_name: "in"  */
                    { (yyval.s) = new string("in"); }
    break;

  case 77: /* annotation_argument: annotation_argument_name '=' string_constant  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))); delete (yyvsp[0].s); delete (yyvsp[-2].s); }
    break;

  case 78: /* annotation_argument: annotation_argument_name '=' "name"  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))); delete (yyvsp[0].s); delete (yyvsp[-2].s); }
    break;

  case 79: /* annotation_argument: annotation_argument_name '=' "integer constant"  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),(yyvsp[0].i),tokAt(scanner,(yylsp[-2]))); delete (yyvsp[-2].s); }
    break;

  case 80: /* annotation_argument: annotation_argument_name '=' "floating point constant"  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),float((yyvsp[0].fd)),tokAt(scanner,(yylsp[-2]))); delete (yyvsp[-2].s); }
    break;

  case 81: /* annotation_argument: annotation_argument_name '=' "true"  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),true,tokAt(scanner,(yylsp[-2]))); delete (yyvsp[-2].s); }
    break;

  case 82: /* annotation_argument: annotation_argument_name '=' "false"  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),false,tokAt(scanner,(yylsp[-2]))); delete (yyvsp[-2].s); }
    break;

  case 83: /* annotation_argument: annotation_argument_name  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[0].s),true,tokAt(scanner,(yylsp[0]))); delete (yyvsp[0].s); }
    break;

  case 84: /* annotation_argument: annotation_argument_name '=' '(' annotation_argument_value_list ')'  */
                                                                                          {
        { (yyval.aa) = new AnnotationArgument(*(yyvsp[-4].s),(yyvsp[-1].aaList),tokAt(scanner,(yylsp[-4]))); delete (yyvsp[-4].s); }
    }
    break;

  case 85: /* annotation_argument_list: annotation_argument  */
                                  {
        (yyval.aaList) = ast_annotationArgumentListEntry(scanner,new AnnotationArgumentList(),(yyvsp[0].aa));
    }
    break;

  case 86: /* annotation_argument_list: annotation_argument_list ',' annotation_argument  */
                                                                    {
        (yyval.aaList) = ast_annotationArgumentListEntry(scanner,(yyvsp[-2].aaList),(yyvsp[0].aa));
    }
    break;

  case 87: /* annotation_declaration_name: name_in_namespace  */
                                    { (yyval.s) = (yyvsp[0].s); }
    break;

  case 88: /* annotation_declaration_name: "require"  */
                                    { (yyval.s) = new string("require"); }
    break;

  case 89: /* annotation_declaration_name: "private"  */
                                    { (yyval.s) = new string("private"); }
    break;

  case 90: /* annotation_declaration: annotation_declaration_name  */
                                          {
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner,(yylsp[0]));
        if ( auto ann = findAnnotation(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0]))) ) {
            (yyval.fa)->annotation = ann;
        }
        delete (yyvsp[0].s);
    }
    break;

  case 91: /* annotation_declaration: annotation_declaration_name '(' annotation_argument_list ')'  */
                                                                                 {
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner,(yylsp[-3]));
        if ( auto ann = findAnnotation(scanner,*(yyvsp[-3].s),tokAt(scanner,(yylsp[-3]))) ) {
            (yyval.fa)->annotation = ann;
        }
        swap ( (yyval.fa)->arguments, *(yyvsp[-1].aaList) );
        delete (yyvsp[-1].aaList);
        delete (yyvsp[-3].s);
    }
    break;

  case 92: /* annotation_list: annotation_declaration  */
                                    {
            (yyval.faList) = new AnnotationList();
            (yyval.faList)->push_back(AnnotationDeclarationPtr((yyvsp[0].fa)));
    }
    break;

  case 93: /* annotation_list: annotation_list ',' annotation_declaration  */
                                                              {
        (yyval.faList) = (yyvsp[-2].faList);
        (yyval.faList)->push_back(AnnotationDeclarationPtr((yyvsp[0].fa)));
    }
    break;

  case 94: /* optional_annotation_list: %empty  */
                                        { (yyval.faList) = nullptr; }
    break;

  case 95: /* optional_annotation_list: '[' annotation_list ']'  */
                                        { (yyval.faList) = (yyvsp[-1].faList); }
    break;

  case 96: /* optional_function_argument_list: %empty  */
                                                { (yyval.pVarDeclList) = nullptr; }
    break;

  case 97: /* optional_function_argument_list: '(' ')'  */
                                                { (yyval.pVarDeclList) = nullptr; }
    break;

  case 98: /* optional_function_argument_list: '(' function_argument_list ')'  */
                                                { (yyval.pVarDeclList) = (yyvsp[-1].pVarDeclList); }
    break;

  case 99: /* optional_function_type: %empty  */
        {
        (yyval.pTypeDecl) = new TypeDecl(Type::autoinfer);
    }
    break;

  case 100: /* optional_function_type: ':' type_declaration  */
                                        {
        (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 101: /* function_name: "name"  */
                          {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyval.s) = (yyvsp[0].s);
    }
    break;

  case 102: /* function_name: "operator" '!'  */
                             { (yyval.s) = new string("!"); }
    break;

  case 103: /* function_name: "operator" '~'  */
                             { (yyval.s) = new string("~"); }
    break;

  case 104: /* function_name: "operator" "+="  */
                             { (yyval.s) = new string("+="); }
    break;

  case 105: /* function_name: "operator" "-="  */
                             { (yyval.s) = new string("-="); }
    break;

  case 106: /* function_name: "operator" "*="  */
                             { (yyval.s) = new string("*="); }
    break;

  case 107: /* function_name: "operator" "/="  */
                             { (yyval.s) = new string("/="); }
    break;

  case 108: /* function_name: "operator" "%="  */
                             { (yyval.s) = new string("%="); }
    break;

  case 109: /* function_name: "operator" "&="  */
                             { (yyval.s) = new string("&="); }
    break;

  case 110: /* function_name: "operator" "|="  */
                             { (yyval.s) = new string("|="); }
    break;

  case 111: /* function_name: "operator" "^="  */
                             { (yyval.s) = new string("^="); }
    break;

  case 112: /* function_name: "operator" "&&="  */
                                { (yyval.s) = new string("&&="); }
    break;

  case 113: /* function_name: "operator" "||="  */
                                { (yyval.s) = new string("||="); }
    break;

  case 114: /* function_name: "operator" "^^="  */
                                { (yyval.s) = new string("^^="); }
    break;

  case 115: /* function_name: "operator" "&&"  */
                             { (yyval.s) = new string("&&"); }
    break;

  case 116: /* function_name: "operator" "||"  */
                             { (yyval.s) = new string("||"); }
    break;

  case 117: /* function_name: "operator" "^^"  */
                             { (yyval.s) = new string("^^"); }
    break;

  case 118: /* function_name: "operator" '+'  */
                             { (yyval.s) = new string("+"); }
    break;

  case 119: /* function_name: "operator" '-'  */
                             { (yyval.s) = new string("-"); }
    break;

  case 120: /* function_name: "operator" '*'  */
                             { (yyval.s) = new string("*"); }
    break;

  case 121: /* function_name: "operator" '/'  */
                             { (yyval.s) = new string("/"); }
    break;

  case 122: /* function_name: "operator" '%'  */
                             { (yyval.s) = new string("%"); }
    break;

  case 123: /* function_name: "operator" '<'  */
                             { (yyval.s) = new string("<"); }
    break;

  case 124: /* function_name: "operator" '>'  */
                             { (yyval.s) = new string(">"); }
    break;

  case 125: /* function_name: "operator" ".."  */
                             { (yyval.s) = new string("interval"); }
    break;

  case 126: /* function_name: "operator" "=="  */
                             { (yyval.s) = new string("=="); }
    break;

  case 127: /* function_name: "operator" "!="  */
                             { (yyval.s) = new string("!="); }
    break;

  case 128: /* function_name: "operator" "<="  */
                             { (yyval.s) = new string("<="); }
    break;

  case 129: /* function_name: "operator" ">="  */
                             { (yyval.s) = new string(">="); }
    break;

  case 130: /* function_name: "operator" '&'  */
                             { (yyval.s) = new string("&"); }
    break;

  case 131: /* function_name: "operator" '|'  */
                             { (yyval.s) = new string("|"); }
    break;

  case 132: /* function_name: "operator" '^'  */
                             { (yyval.s) = new string("^"); }
    break;

  case 133: /* function_name: "++" "operator"  */
                             { (yyval.s) = new string("++"); }
    break;

  case 134: /* function_name: "--" "operator"  */
                             { (yyval.s) = new string("--"); }
    break;

  case 135: /* function_name: "operator" "++"  */
                             { (yyval.s) = new string("+++"); }
    break;

  case 136: /* function_name: "operator" "--"  */
                             { (yyval.s) = new string("---"); }
    break;

  case 137: /* function_name: "operator" "<<"  */
                             { (yyval.s) = new string("<<"); }
    break;

  case 138: /* function_name: "operator" ">>"  */
                             { (yyval.s) = new string(">>"); }
    break;

  case 139: /* function_name: "operator" "<<="  */
                             { (yyval.s) = new string("<<="); }
    break;

  case 140: /* function_name: "operator" ">>="  */
                             { (yyval.s) = new string(">>="); }
    break;

  case 141: /* function_name: "operator" "<<<"  */
                             { (yyval.s) = new string("<<<"); }
    break;

  case 142: /* function_name: "operator" ">>>"  */
                             { (yyval.s) = new string(">>>"); }
    break;

  case 143: /* function_name: "operator" "<<<="  */
                             { (yyval.s) = new string("<<<="); }
    break;

  case 144: /* function_name: "operator" ">>>="  */
                             { (yyval.s) = new string(">>>="); }
    break;

  case 145: /* function_name: "operator" '[' ']'  */
                             { (yyval.s) = new string("[]"); }
    break;

  case 146: /* function_name: "operator" "?[" ']'  */
                                { (yyval.s) = new string("?[]"); }
    break;

  case 147: /* function_name: "operator" '.'  */
                             { (yyval.s) = new string("."); }
    break;

  case 148: /* function_name: "operator" "?."  */
                             { (yyval.s) = new string("?."); }
    break;

  case 149: /* function_name: "operator" ":="  */
                                { (yyval.s) = new string("clone"); }
    break;

  case 150: /* function_name: "operator" "delete"  */
                                { (yyval.s) = new string("finalize"); }
    break;

  case 151: /* global_function_declaration: optional_annotation_list "def" function_declaration  */
                                                                                {
        (yyvsp[0].pFuncDecl)->atDecl = tokRangeAt(scanner,(yylsp[-1]),(yylsp[0]));
        assignDefaultArguments((yyvsp[0].pFuncDecl));
        runFunctionAnnotations(scanner, (yyvsp[0].pFuncDecl), (yyvsp[-2].faList), tokAt(scanner,(yylsp[-2])));
        if ( (yyvsp[0].pFuncDecl)->isGeneric() ) {
            if ( !yyextra->g_Program->addGeneric((yyvsp[0].pFuncDecl)) ) {
                das_yyerror(scanner,"generic function is already defined " +
                    (yyvsp[0].pFuncDecl)->getMangledName(),(yyvsp[0].pFuncDecl)->at,
                        CompilationError::function_already_declared);
            }
        } else {
            if ( !yyextra->g_Program->addFunction((yyvsp[0].pFuncDecl)) ) {
                das_yyerror(scanner,"function is already defined " +
                    (yyvsp[0].pFuncDecl)->getMangledName(),(yyvsp[0].pFuncDecl)->at,
                        CompilationError::function_already_declared);
            }
        }
        (yyvsp[0].pFuncDecl)->delRef();
    }
    break;

  case 152: /* optional_public_or_private_function: %empty  */
                        { (yyval.b) = yyextra->g_thisStructure ? !yyextra->g_thisStructure->privateStructure : yyextra->g_Program->thisModule->isPublic; }
    break;

  case 153: /* optional_public_or_private_function: "private"  */
                        { (yyval.b) = false; }
    break;

  case 154: /* optional_public_or_private_function: "public"  */
                        { (yyval.b) = true; }
    break;

  case 155: /* function_declaration_header: function_name optional_function_argument_list optional_function_type  */
                                                                                                {
        (yyval.pFuncDecl) = ast_functionDeclarationHeader(scanner,(yyvsp[-2].s),(yyvsp[-1].pVarDeclList),(yyvsp[0].pTypeDecl),tokAt(scanner,(yylsp[-2])));
    }
    break;

  case 156: /* $@3: %empty  */
                                                     {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeFunction(tak);
        }
    }
    break;

  case 157: /* function_declaration: optional_public_or_private_function $@3 function_declaration_header expression_block  */
                                                                {
        (yyvsp[-1].pFuncDecl)->body = ExpressionPtr((yyvsp[0].pExpression));
        (yyvsp[-1].pFuncDecl)->privateFunction = !(yyvsp[-3].b);
        (yyval.pFuncDecl) = (yyvsp[-1].pFuncDecl);
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterFunction((yyvsp[-1].pFuncDecl),tak);
        }
    }
    break;

  case 158: /* expression_block: '{' expressions '}'  */
                                                   {
        (yyval.pExpression) = (yyvsp[-1].pExpression);
        (yyval.pExpression)->at = tokRangeAt(scanner,(yylsp[-2]),(yylsp[0]));
    }
    break;

  case 159: /* expression_block: '{' expressions '}' "finally" '{' expressions '}'  */
                                                                                          {
        auto pB = (ExprBlock *) (yyvsp[-5].pExpression);
        auto pF = (ExprBlock *) (yyvsp[-1].pExpression);
        swap ( pB->finalList, pF->list );
        (yyval.pExpression) = (yyvsp[-5].pExpression);
        (yyval.pExpression)->at = tokRangeAt(scanner,(yylsp[-6]),(yylsp[0]));
        delete (yyvsp[-1].pExpression);
    }
    break;

  case 160: /* expression_any: ';'  */
                                            { (yyval.pExpression) = nullptr; }
    break;

  case 161: /* expression_any: expr_pipe  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 162: /* expression_any: expr_assign_pipe  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 163: /* expression_any: expr_assign ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 164: /* expression_any: expression_delete ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 165: /* expression_any: expression_let  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 166: /* expression_any: expression_while_loop  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 167: /* expression_any: expression_unsafe  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 168: /* expression_any: expression_with  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 169: /* expression_any: expression_with_alias  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 170: /* expression_any: expression_for_loop  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 171: /* expression_any: expression_break ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 172: /* expression_any: expression_continue ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 173: /* expression_any: expression_return  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 174: /* expression_any: expression_yield  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 175: /* expression_any: expression_if_then_else  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 176: /* expression_any: expression_try_catch  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 177: /* expression_any: expression_label ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 178: /* expression_any: expression_goto ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 179: /* expression_any: "pass" ';'  */
                                            { (yyval.pExpression) = nullptr; }
    break;

  case 180: /* expressions: %empty  */
        {
        (yyval.pExpression) = new ExprBlock();
        (yyval.pExpression)->at = LineInfo(yyextra->g_FileAccessStack.back(),
            yylloc.first_column,yylloc.first_line,yylloc.last_column,yylloc.last_line);
    }
    break;

  case 181: /* expressions: expressions expression_any  */
                                                        {
        (yyval.pExpression) = (yyvsp[-1].pExpression);
        if ( (yyvsp[0].pExpression) ) {
            static_cast<ExprBlock*>((yyvsp[-1].pExpression))->list.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        }
    }
    break;

  case 182: /* expressions: expressions error  */
                                 {
        delete (yyvsp[-1].pExpression); (yyval.pExpression) = nullptr; YYABORT;
    }
    break;

  case 183: /* expr_pipe: expr_assign " <|" expr_block  */
                                                        {
        Expression * pipeCall = (yyvsp[-2].pExpression)->tail();
        if ( pipeCall->rtti_isCallLikeExpr() ) {
            auto pCall = (ExprLooksLikeCall *) pipeCall;
            pCall->arguments.push_back(ExpressionPtr((yyvsp[0].pExpression)));
            (yyval.pExpression) = (yyvsp[-2].pExpression);
        } else if ( pipeCall->rtti_isVar() ) {
            // a += b <| c
            auto pVar = (ExprVar *) pipeCall;
            auto pCall = yyextra->g_Program->makeCall(pVar->at,pVar->name);
            pCall->arguments.push_back(ExpressionPtr((yyvsp[0].pExpression)));
            if ( !(yyvsp[-2].pExpression)->swap_tail(pVar,pCall) ) {
                delete pVar;
                (yyval.pExpression) = pCall;
            } else {
                (yyval.pExpression) = (yyvsp[-2].pExpression);
            }
        } else if ( pipeCall->rtti_isMakeStruct() ) {
            auto pMS = (ExprMakeStruct *) pipeCall;
            if ( pMS->block ) {
                das_yyerror(scanner,"can't pipe into [[ make structure ]]. it already has where closure",
                    tokAt(scanner,(yylsp[-1])),CompilationError::cant_pipe);
                delete (yyvsp[0].pExpression);
            } else {
                pMS->block = (yyvsp[0].pExpression);
            }
            (yyval.pExpression) = (yyvsp[-2].pExpression);
        } else {
            das_yyerror(scanner,"can only pipe into function call or [[ make structure ]]",
                tokAt(scanner,(yylsp[-1])),CompilationError::cant_pipe);
            delete (yyvsp[0].pExpression);
            (yyval.pExpression) = (yyvsp[-2].pExpression);
        }
    }
    break;

  case 184: /* expr_pipe: "@ <|" expr_block  */
                               {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 185: /* expr_pipe: "@@ <|" expr_block  */
                               {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 186: /* name_in_namespace: "name"  */
                                               { (yyval.s) = (yyvsp[0].s); }
    break;

  case 187: /* name_in_namespace: "name" "::" "name"  */
                                               {
            auto ita = yyextra->das_module_alias.find(*(yyvsp[-2].s));
            if ( ita == yyextra->das_module_alias.end() ) {
                *(yyvsp[-2].s) += "::";
            } else {
                *(yyvsp[-2].s) = ita->second + "::";
            }
            *(yyvsp[-2].s) += *(yyvsp[0].s);
            delete (yyvsp[0].s);
            (yyval.s) = (yyvsp[-2].s);
        }
    break;

  case 188: /* name_in_namespace: "::" "name"  */
                                               { *(yyvsp[0].s) = "::" + *(yyvsp[0].s); (yyval.s) = (yyvsp[0].s); }
    break;

  case 189: /* expression_delete: "delete" expr  */
                                      {
        (yyval.pExpression) = new ExprDelete(tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 190: /* expr_new: "new" type_declaration  */
                                                   {
        (yyval.pExpression) = new ExprNew(tokAt(scanner,(yylsp[-1])),TypeDeclPtr((yyvsp[0].pTypeDecl)),false);
    }
    break;

  case 191: /* expr_new: "new" type_declaration '(' ')'  */
                                                           {
        (yyval.pExpression) = new ExprNew(tokAt(scanner,(yylsp[-3])),TypeDeclPtr((yyvsp[-2].pTypeDecl)),true);
    }
    break;

  case 192: /* expr_new: "new" type_declaration '(' expr_list ')'  */
                                                                                {
        auto pNew = new ExprNew(tokAt(scanner,(yylsp[-4])),TypeDeclPtr((yyvsp[-3].pTypeDecl)),true);
        (yyval.pExpression) = parseFunctionArguments(pNew,(yyvsp[-1].pExpression));
    }
    break;

  case 193: /* expr_new: "new" make_decl  */
                                    {
        (yyval.pExpression) = new ExprAscend(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 194: /* expression_break: "break"  */
                       { (yyval.pExpression) = new ExprBreak(tokAt(scanner,(yylsp[0]))); }
    break;

  case 195: /* expression_continue: "continue"  */
                          { (yyval.pExpression) = new ExprContinue(tokAt(scanner,(yylsp[0]))); }
    break;

  case 196: /* expression_return: "return" ';'  */
                            {
        (yyval.pExpression) = new ExprReturn(tokAt(scanner,(yylsp[-1])),nullptr);
    }
    break;

  case 197: /* expression_return: "return" expr ';'  */
                                          {
        (yyval.pExpression) = new ExprReturn(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-1].pExpression)));
    }
    break;

  case 198: /* expression_return: "return" "<-" expr ';'  */
                                                 {
        auto pRet = new ExprReturn(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-1].pExpression)));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
    break;

  case 199: /* expression_return: "return" expr_pipe  */
                                           {
        (yyval.pExpression) = new ExprReturn(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 200: /* expression_return: "return" "<-" expr_pipe  */
                                                  {
        auto pRet = new ExprReturn(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[0].pExpression)));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
    break;

  case 201: /* expression_yield: "yield" expr ';'  */
                                         {
        (yyval.pExpression) = new ExprYield(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-1].pExpression)));
    }
    break;

  case 202: /* expression_yield: "yield" "<-" expr ';'  */
                                                {
        auto pRet = new ExprYield(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-1].pExpression)));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
    break;

  case 203: /* expression_yield: "yield" expr_pipe  */
                                          {
        (yyval.pExpression) = new ExprYield(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 204: /* expression_yield: "yield" "<-" expr_pipe  */
                                                 {
        auto pRet = new ExprYield(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[0].pExpression)));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
    break;

  case 205: /* expression_try_catch: "try" expression_block "recover" expression_block  */
                                                                                       {
        (yyval.pExpression) = new ExprTryCatch(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 206: /* kwd_let: "let"  */
                 { (yyval.b) = true; }
    break;

  case 207: /* kwd_let: "var"  */
                 { (yyval.b) = false; }
    break;

  case 208: /* expression_let: kwd_let let_variable_declaration  */
                                               {
        (yyval.pExpression) = ast_Let(scanner,(yyvsp[-1].b),(yyvsp[0].pVarDecl),tokAt(scanner,(yylsp[-1])),tokAt(scanner,(yylsp[0])));
    }
    break;

  case 209: /* $@4: %empty  */
                          { yyextra->das_arrow_depth ++; }
    break;

  case 210: /* $@5: %empty  */
                                                                                      { yyextra->das_arrow_depth --; }
    break;

  case 211: /* expr_cast: "cast" '<' $@4 type_declaration '>' $@5 expr  */
                                                                                                                                     {
        (yyval.pExpression) = new ExprCast(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[0].pExpression)),TypeDeclPtr((yyvsp[-3].pTypeDecl)));
    }
    break;

  case 212: /* $@6: %empty  */
                            { yyextra->das_arrow_depth ++; }
    break;

  case 213: /* $@7: %empty  */
                                                                                        { yyextra->das_arrow_depth --; }
    break;

  case 214: /* expr_cast: "upcast" '<' $@6 type_declaration '>' $@7 expr  */
                                                                                                                                       {
        auto pCast = new ExprCast(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[0].pExpression)),TypeDeclPtr((yyvsp[-3].pTypeDecl)));
        pCast->upcast = true;
        (yyval.pExpression) = pCast;
    }
    break;

  case 215: /* $@8: %empty  */
                                 { yyextra->das_arrow_depth ++; }
    break;

  case 216: /* $@9: %empty  */
                                                                                             { yyextra->das_arrow_depth --; }
    break;

  case 217: /* expr_cast: "reinterpret" '<' $@8 type_declaration '>' $@9 expr  */
                                                                                                                                            {
        auto pCast = new ExprCast(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[0].pExpression)),TypeDeclPtr((yyvsp[-3].pTypeDecl)));
        pCast->reinterpret = true;
        (yyval.pExpression) = pCast;
    }
    break;

  case 218: /* $@10: %empty  */
                         { yyextra->das_arrow_depth ++; }
    break;

  case 219: /* $@11: %empty  */
                                                                                     { yyextra->das_arrow_depth --; }
    break;

  case 220: /* expr_type_decl: "type" '<' $@10 type_declaration '>' $@11  */
                                                                                                                      {
        (yyval.pExpression) = new ExprTypeDecl(tokAt(scanner,(yylsp[-5])),TypeDeclPtr((yyvsp[-2].pTypeDecl)));
    }
    break;

  case 221: /* expr_type_info: "typeinfo" '(' name_in_namespace expr ')'  */
                                                                         {
            if ( (yyvsp[-1].pExpression)->rtti_isTypeDecl() ) {
                auto ptd = (ExprTypeDecl *)(yyvsp[-1].pExpression);
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-4])),*(yyvsp[-2].s),ptd->typeexpr);
                delete (yyvsp[-1].pExpression);
            } else {
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-4])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[-1].pExpression)));
            }
            delete (yyvsp[-2].s);
    }
    break;

  case 222: /* expr_type_info: "typeinfo" '(' name_in_namespace '<' "name" '>' expr ')'  */
                                                                                                {
            if ( (yyvsp[-1].pExpression)->rtti_isTypeDecl() ) {
                auto ptd = (ExprTypeDecl *)(yyvsp[-1].pExpression);
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-7])),*(yyvsp[-5].s),ptd->typeexpr,*(yyvsp[-3].s));
                delete (yyvsp[-1].pExpression);
            } else {
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-7])),*(yyvsp[-5].s),ExpressionPtr((yyvsp[-1].pExpression)),*(yyvsp[-3].s));
            }
            delete (yyvsp[-5].s);
            delete (yyvsp[-3].s);
    }
    break;

  case 223: /* expr_type_info: "typeinfo" '(' name_in_namespace '<' "name" ';' "name" '>' expr ')'  */
                                                                                                                     {
            if ( (yyvsp[-1].pExpression)->rtti_isTypeDecl() ) {
                auto ptd = (ExprTypeDecl *)(yyvsp[-1].pExpression);
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-9])),*(yyvsp[-7].s),ptd->typeexpr,*(yyvsp[-5].s),*(yyvsp[-3].s));
                delete (yyvsp[-1].pExpression);
            } else {
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-9])),*(yyvsp[-7].s),ExpressionPtr((yyvsp[-1].pExpression)),*(yyvsp[-5].s),*(yyvsp[-3].s));
            }
            delete (yyvsp[-7].s);
            delete (yyvsp[-5].s);
            delete (yyvsp[-3].s);
    }
    break;

  case 224: /* expr_list: expr  */
                      {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 225: /* expr_list: expr_list ',' expr  */
                                            {
            (yyval.pExpression) = new ExprSequence(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 226: /* block_or_simple_block: expression_block  */
                                    { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 227: /* block_or_simple_block: "=>" expr  */
                                        {
            auto retE = make_smart<ExprReturn>(tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[0].pExpression)));
            auto blkE = new ExprBlock();
            blkE->at = tokAt(scanner,(yylsp[-1]));
            blkE->list.push_back(retE);
            (yyval.pExpression) = blkE;
    }
    break;

  case 228: /* block_or_simple_block: "=>" "<-" expr  */
                                               {
            auto retE = make_smart<ExprReturn>(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[0].pExpression)));
            retE->moveSemantics = true;
            auto blkE = new ExprBlock();
            blkE->at = tokAt(scanner,(yylsp[-2]));
            blkE->list.push_back(retE);
            (yyval.pExpression) = blkE;
    }
    break;

  case 229: /* block_or_lambda: '$'  */
                { (yyval.i) = 0;   /* block */  }
    break;

  case 230: /* block_or_lambda: '@'  */
                { (yyval.i) = 1;   /* lambda */ }
    break;

  case 231: /* block_or_lambda: '@' '@'  */
                { (yyval.i) = 2;   /* local function */ }
    break;

  case 232: /* capture_entry: '&' "name"  */
                               { (yyval.pCapt) = new CaptureEntry(*(yyvsp[0].s),CaptureMode::capture_by_reference); delete (yyvsp[0].s); }
    break;

  case 233: /* capture_entry: '=' "name"  */
                               { (yyval.pCapt) = new CaptureEntry(*(yyvsp[0].s),CaptureMode::capture_by_copy); delete (yyvsp[0].s); }
    break;

  case 234: /* capture_entry: "<-" "name"  */
                               { (yyval.pCapt) = new CaptureEntry(*(yyvsp[0].s),CaptureMode::capture_by_move); delete (yyvsp[0].s); }
    break;

  case 235: /* capture_entry: ":=" "name"  */
                               { (yyval.pCapt) = new CaptureEntry(*(yyvsp[0].s),CaptureMode::capture_by_clone); delete (yyvsp[0].s); }
    break;

  case 236: /* capture_list: capture_entry  */
                         {
        (yyval.pCaptList) = new vector<CaptureEntry>();
        (yyval.pCaptList)->push_back(*(yyvsp[0].pCapt));
        delete (yyvsp[0].pCapt);
    }
    break;

  case 237: /* capture_list: capture_list ',' capture_entry  */
                                               {
        (yyvsp[-2].pCaptList)->push_back(*(yyvsp[0].pCapt));
        delete (yyvsp[0].pCapt);
        (yyval.pCaptList) = (yyvsp[-2].pCaptList);
    }
    break;

  case 238: /* optional_capture_list: %empty  */
        { (yyval.pCaptList) = nullptr; }
    break;

  case 239: /* optional_capture_list: "[[" capture_list ']' ']'  */
                                         { (yyval.pCaptList) = (yyvsp[-2].pCaptList); }
    break;

  case 240: /* expr_block: expression_block  */
                                            {
        ExprBlock * closure = (ExprBlock *) (yyvsp[0].pExpression);
        (yyval.pExpression) = new ExprMakeBlock(tokAt(scanner,(yylsp[0])),ExpressionPtr((yyvsp[0].pExpression)));
        closure->returnType = make_smart<TypeDecl>(Type::autoinfer);
    }
    break;

  case 241: /* expr_block: block_or_lambda optional_annotation_list optional_capture_list optional_function_argument_list optional_function_type block_or_simple_block  */
                                                                                            {
        (yyval.pExpression) = ast_makeBlock(scanner,(yyvsp[-5].i),(yyvsp[-4].faList),(yyvsp[-3].pCaptList),(yyvsp[-2].pVarDeclList),(yyvsp[-1].pTypeDecl),(yyvsp[0].pExpression),tokAt(scanner,(yylsp[0])),tokAt(scanner,(yylsp[-4])));
    }
    break;

  case 242: /* expr_numeric_const: "integer constant"  */
                                              { (yyval.pExpression) = new ExprConstInt(tokAt(scanner,(yylsp[0])),(int32_t)(yyvsp[0].i)); }
    break;

  case 243: /* expr_numeric_const: "unsigned integer constant"  */
                                              { (yyval.pExpression) = new ExprConstUInt(tokAt(scanner,(yylsp[0])),(uint32_t)(yyvsp[0].ui)); }
    break;

  case 244: /* expr_numeric_const: "long integer constant"  */
                                              { (yyval.pExpression) = new ExprConstInt64(tokAt(scanner,(yylsp[0])),(int64_t)(yyvsp[0].i64)); }
    break;

  case 245: /* expr_numeric_const: "unsigned long integer constant"  */
                                              { (yyval.pExpression) = new ExprConstUInt64(tokAt(scanner,(yylsp[0])),(uint64_t)(yyvsp[0].ui64)); }
    break;

  case 246: /* expr_numeric_const: "floating point constant"  */
                                              { (yyval.pExpression) = new ExprConstFloat(tokAt(scanner,(yylsp[0])),(float)(yyvsp[0].fd)); }
    break;

  case 247: /* expr_numeric_const: "double constant"  */
                                              { (yyval.pExpression) = new ExprConstDouble(tokAt(scanner,(yylsp[0])),(double)(yyvsp[0].d)); }
    break;

  case 248: /* expr_assign: expr  */
                                             { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 249: /* expr_assign: expr '=' expr  */
                                             { (yyval.pExpression) = new ExprCopy(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 250: /* expr_assign: expr "<-" expr  */
                                             { (yyval.pExpression) = new ExprMove(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 251: /* expr_assign: expr ":=" expr  */
                                             { (yyval.pExpression) = new ExprClone(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 252: /* expr_assign: expr "&=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"&=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 253: /* expr_assign: expr "|=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"|=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 254: /* expr_assign: expr "^=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"^=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 255: /* expr_assign: expr "&&=" expr  */
                                                { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"&&=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 256: /* expr_assign: expr "||=" expr  */
                                                { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"||=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 257: /* expr_assign: expr "^^=" expr  */
                                                { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"^^=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 258: /* expr_assign: expr "+=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"+=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 259: /* expr_assign: expr "-=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"-=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 260: /* expr_assign: expr "*=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"*=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 261: /* expr_assign: expr "/=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"/=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 262: /* expr_assign: expr "%=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"%=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 263: /* expr_assign: expr "<<=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<<=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 264: /* expr_assign: expr ">>=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">>=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 265: /* expr_assign: expr "<<<=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<<<=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 266: /* expr_assign: expr ">>>=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">>>=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 267: /* expr_assign_pipe: expr '=' "@ <|" expr  */
                                                    { (yyval.pExpression) = new ExprCopy(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 268: /* expr_assign_pipe: expr '=' "@@ <|" expr  */
                                                    { (yyval.pExpression) = new ExprCopy(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 269: /* expr_assign_pipe: expr "<-" "@ <|" expr  */
                                                    { (yyval.pExpression) = new ExprMove(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 270: /* expr_assign_pipe: expr "<-" "@@ <|" expr  */
                                                    { (yyval.pExpression) = new ExprMove(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 271: /* expr_named_call: name_in_namespace '(' '[' make_struct_fields ']' ')'  */
                                                                         {
        auto nc = new ExprNamedCall(tokAt(scanner,(yylsp[-5])),*(yyvsp[-5].s));
        nc->arguments = *(yyvsp[-2].pMakeStruct);
        delete (yyvsp[-2].pMakeStruct);
        delete (yyvsp[-5].s);
        (yyval.pExpression) = nc;
    }
    break;

  case 272: /* expr_method_call: expr "->" "name" '(' ')'  */
                                                         {
        auto pInvoke = makeInvokeMethod(tokAt(scanner,(yylsp[-3])), (yyvsp[-4].pExpression), *(yyvsp[-2].s));
        delete (yyvsp[-2].s);
        (yyval.pExpression) = pInvoke;
    }
    break;

  case 273: /* expr_method_call: expr "->" "name" '(' expr_list ')'  */
                                                                              {
        auto pInvoke = makeInvokeMethod(tokAt(scanner,(yylsp[-4])), (yyvsp[-5].pExpression), *(yyvsp[-3].s));
        auto callArgs = sequenceToList((yyvsp[-1].pExpression));
        pInvoke->arguments.insert ( pInvoke->arguments.end(), callArgs.begin(), callArgs.end() );
        delete (yyvsp[-3].s);
        (yyval.pExpression) = pInvoke;
    }
    break;

  case 274: /* func_addr_expr: '@' '@' name_in_namespace  */
                                                 {
        (yyval.pExpression) = new ExprAddr(tokAt(scanner,(yylsp[-1])),*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 275: /* $@12: %empty  */
                         { yyextra->das_arrow_depth ++; }
    break;

  case 276: /* $@13: %empty  */
                                                                                          { yyextra->das_arrow_depth --; }
    break;

  case 277: /* func_addr_expr: '@' '@' '<' $@12 type_declaration '>' $@13 name_in_namespace  */
                                                                                                                                                   {
        auto expr = new ExprAddr(tokAt(scanner,(yylsp[-6])),*(yyvsp[0].s));
        delete (yyvsp[0].s);
        expr->funcType = make_smart<TypeDecl>(Type::tFunction);
        expr->funcType->firstType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
        (yyval.pExpression) = expr;
    }
    break;

  case 278: /* $@14: %empty  */
                         { yyextra->das_arrow_depth ++; }
    break;

  case 279: /* $@15: %empty  */
                                                                                                                                   { yyextra->das_arrow_depth --; }
    break;

  case 280: /* func_addr_expr: '@' '@' '<' $@14 optional_function_argument_list optional_function_type '>' $@15 name_in_namespace  */
                                                                                                                                                                                            {
        auto expr = new ExprAddr(tokAt(scanner,(yylsp[-7])),*(yyvsp[0].s));
        delete (yyvsp[0].s);
        expr->funcType = make_smart<TypeDecl>(Type::tFunction);
        expr->funcType->firstType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
        if ( (yyvsp[-4].pVarDeclList) ) {
            varDeclToTypeDecl(scanner, expr->funcType.get(), (yyvsp[-4].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-4].pVarDeclList));
        }
        (yyval.pExpression) = expr;
    }
    break;

  case 281: /* expr_field: expr '.' "name"  */
                                              {
        (yyval.pExpression) = new ExprField(tokAt(scanner,(yylsp[-1])), tokAt(scanner,(yylsp[0])), ExpressionPtr((yyvsp[-2].pExpression)), *(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 282: /* expr_field: expr '.' '.' "name"  */
                                                  {
        (yyval.pExpression) = new ExprField(tokAt(scanner,(yylsp[-1])), tokAt(scanner,(yylsp[0])), ExpressionPtr((yyvsp[-3].pExpression)), *(yyvsp[0].s), true);
        delete (yyvsp[0].s);
    }
    break;

  case 283: /* $@16: %empty  */
                               { yyextra->das_supress_errors=true; }
    break;

  case 284: /* $@17: %empty  */
                                                                           { yyextra->das_supress_errors=false; }
    break;

  case 285: /* expr_field: expr '.' $@16 error $@17  */
                                                                                                                  {
        (yyval.pExpression) = new ExprField(tokAt(scanner,(yylsp[-3])), tokAt(scanner,(yylsp[-3])), ExpressionPtr((yyvsp[-4].pExpression)), "");
        yyerrok;
    }
    break;

  case 286: /* expr: "null"  */
                                              { (yyval.pExpression) = new ExprConstPtr(tokAt(scanner,(yylsp[0])),nullptr); }
    break;

  case 287: /* expr: name_in_namespace  */
                                              { (yyval.pExpression) = new ExprVar(tokAt(scanner,(yylsp[0])),*(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 288: /* expr: expr_numeric_const  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 289: /* expr: expr_reader  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 290: /* expr: string_builder  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 291: /* expr: make_decl  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 292: /* expr: "true"  */
                                              { (yyval.pExpression) = new ExprConstBool(tokAt(scanner,(yylsp[0])),true); }
    break;

  case 293: /* expr: "false"  */
                                              { (yyval.pExpression) = new ExprConstBool(tokAt(scanner,(yylsp[0])),false); }
    break;

  case 294: /* expr: expr_field  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 295: /* expr: '!' expr  */
                                              { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"!",ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 296: /* expr: '~' expr  */
                                              { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"~",ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 297: /* expr: '+' expr  */
                                                  { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"+",ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 298: /* expr: '-' expr  */
                                                  { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"-",ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 299: /* expr: expr "<<" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<<", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 300: /* expr: expr ">>" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">>", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 301: /* expr: expr "<<<" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<<<", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 302: /* expr: expr ">>>" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">>>", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 303: /* expr: expr '+' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"+", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 304: /* expr: expr '-' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"-", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 305: /* expr: expr '*' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"*", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 306: /* expr: expr '/' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"/", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 307: /* expr: expr '%' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"%", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 308: /* expr: expr '<' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 309: /* expr: expr '>' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 310: /* expr: expr "==" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"==", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 311: /* expr: expr "!=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"!=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 312: /* expr: expr "<=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 313: /* expr: expr ">=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 314: /* expr: expr '&' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"&", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 315: /* expr: expr '|' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"|", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 316: /* expr: expr '^' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"^", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 317: /* expr: expr "&&" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"&&", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 318: /* expr: expr "||" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"||", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 319: /* expr: expr "^^" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"^^", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 320: /* expr: expr ".." expr  */
                                             {
        auto itv = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-1])),"interval");
        itv->arguments.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        itv->arguments.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = itv;
    }
    break;

  case 321: /* expr: "++" expr  */
                                                 { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"++", ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 322: /* expr: "--" expr  */
                                                 { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"--", ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 323: /* expr: expr "++"  */
                                                 { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[0])),"+++", ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 324: /* expr: expr "--"  */
                                                 { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[0])),"---", ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 325: /* expr: '(' expr ')'  */
                                                 { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 326: /* expr: expr '[' expr ']'  */
                                                 { (yyval.pExpression) = new ExprAt(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 327: /* expr: expr '.' '[' expr ']'  */
                                                     { (yyval.pExpression) = new ExprAt(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[-4].pExpression)), ExpressionPtr((yyvsp[-1].pExpression)), true); }
    break;

  case 328: /* expr: expr "?[" expr ']'  */
                                                 { (yyval.pExpression) = new ExprSafeAt(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 329: /* expr: expr '.' "?[" expr ']'  */
                                                     { (yyval.pExpression) = new ExprSafeAt(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[-4].pExpression)), ExpressionPtr((yyvsp[-1].pExpression)), true); }
    break;

  case 330: /* expr: expr "?." "name"  */
                                                 { (yyval.pExpression) = new ExprSafeField(tokAt(scanner,(yylsp[-1])), tokAt(scanner,(yylsp[0])), ExpressionPtr((yyvsp[-2].pExpression)), *(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 331: /* expr: expr '.' "?." "name"  */
                                                     { (yyval.pExpression) = new ExprSafeField(tokAt(scanner,(yylsp[-1])), tokAt(scanner,(yylsp[0])), ExpressionPtr((yyvsp[-3].pExpression)), *(yyvsp[0].s), true); delete (yyvsp[0].s); }
    break;

  case 332: /* expr: func_addr_expr  */
                                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 333: /* expr: name_in_namespace '(' ')'  */
                                               {
            (yyval.pExpression) = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-2])),tokAt(scanner,(yylsp[0])),*(yyvsp[-2].s));
            delete (yyvsp[-2].s);
        }
    break;

  case 334: /* expr: name_in_namespace '(' expr_list ')'  */
                                                                    {
            (yyval.pExpression) = parseFunctionArguments(yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-3])),tokAt(scanner,(yylsp[0])),*(yyvsp[-3].s)),(yyvsp[-1].pExpression));
            delete (yyvsp[-3].s);
        }
    break;

  case 335: /* expr: basic_type_declaration '(' ')'  */
                                                    {
        (yyval.pExpression) = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-2])),tokAt(scanner,(yylsp[0])),das_to_string((yyvsp[-2].type)));
    }
    break;

  case 336: /* expr: basic_type_declaration '(' expr_list ')'  */
                                                                         {
        (yyval.pExpression) = parseFunctionArguments(yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-3])),tokAt(scanner,(yylsp[0])),das_to_string((yyvsp[-3].type))),(yyvsp[-1].pExpression));
    }
    break;

  case 337: /* expr: '*' expr  */
                                                   { (yyval.pExpression) = new ExprPtr2Ref(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 338: /* expr: "deref" '(' expr ')'  */
                                                   { (yyval.pExpression) = new ExprPtr2Ref(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 339: /* expr: "addr" '(' expr ')'  */
                                                   { (yyval.pExpression) = new ExprRef2Ptr(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 340: /* expr: "generator" '<' type_declaration '>' optional_capture_list '(' ')'  */
                                                                                                   {
        (yyval.pExpression) = ast_makeGenerator(scanner,(yyvsp[-4].pTypeDecl),(yyvsp[-2].pCaptList),nullptr,tokAt(scanner,(yylsp[-6])));
    }
    break;

  case 341: /* expr: "generator" '<' type_declaration '>' optional_capture_list '(' expr ')'  */
                                                                                                                 {
        (yyval.pExpression) = ast_makeGenerator(scanner,(yyvsp[-5].pTypeDecl),(yyvsp[-3].pCaptList),(yyvsp[-1].pExpression),tokAt(scanner,(yylsp[-7])));
    }
    break;

  case 342: /* expr: expr "??" expr  */
                                                   { (yyval.pExpression) = new ExprNullCoalescing(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 343: /* expr: expr '?' expr ':' expr  */
                                                          {
            (yyval.pExpression) = new ExprOp3(tokAt(scanner,(yylsp[-3])),"?",ExpressionPtr((yyvsp[-4].pExpression)),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
        }
    break;

  case 344: /* $@18: %empty  */
                                               { yyextra->das_arrow_depth ++; }
    break;

  case 345: /* $@19: %empty  */
                                                                                                           { yyextra->das_arrow_depth --; }
    break;

  case 346: /* expr: expr "is" "type" '<' $@18 type_declaration '>' $@19  */
                                                                                                                                            {
        (yyval.pExpression) = new ExprIs(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[-7].pExpression)),TypeDeclPtr((yyvsp[-2].pTypeDecl)));
    }
    break;

  case 347: /* expr: expr "is" "name"  */
                                              {
        (yyval.pExpression) = new ExprIsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 348: /* expr: expr "as" "name"  */
                                              {
        (yyval.pExpression) = new ExprAsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 349: /* expr: expr '?' "as" "name"  */
                                                  {
        (yyval.pExpression) = new ExprSafeAsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-3].pExpression)),*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 350: /* expr: expr_type_info  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 351: /* expr: expr_type_decl  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 352: /* expr: expr_cast  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 353: /* expr: expr_new  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 354: /* expr: expr_method_call  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 355: /* expr: expr_named_call  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 356: /* expr: expr_block  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 357: /* expr: expr "<|" expr  */
                                                { (yyval.pExpression) = ast_lpipe(scanner,(yyvsp[-2].pExpression),(yyvsp[0].pExpression),tokAt(scanner,(yylsp[-1]))); }
    break;

  case 358: /* expr: expr "|>" expr  */
                                                { (yyval.pExpression) =ast_rpipe(scanner,(yyvsp[-2].pExpression),(yyvsp[0].pExpression),tokAt(scanner,(yylsp[-1]))); }
    break;

  case 359: /* expr: name_in_namespace "name"  */
                                                { (yyval.pExpression) = ast_NameName(scanner,(yyvsp[-1].s),(yyvsp[0].s),tokAt(scanner,(yylsp[-1])),tokAt(scanner,(yylsp[0]))); }
    break;

  case 360: /* expr: "unsafe" '(' expr ')'  */
                                         {
        (yyvsp[-1].pExpression)->alwaysSafe = true;
        (yyvsp[-1].pExpression)->userSaidItsSafe = true;
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
    break;

  case 361: /* optional_field_annotation: %empty  */
                                                        { (yyval.aaList) = nullptr; }
    break;

  case 362: /* optional_field_annotation: "[[" annotation_argument_list ']' ']'  */
                                                        { (yyval.aaList) = (yyvsp[-2].aaList); }
    break;

  case 363: /* optional_override: %empty  */
                      { (yyval.i) = OVERRIDE_NONE; }
    break;

  case 364: /* optional_override: "override"  */
                      { (yyval.i) = OVERRIDE_OVERRIDE; }
    break;

  case 365: /* optional_override: "sealed"  */
                      { (yyval.i) = OVERRIDE_SEALED; }
    break;

  case 366: /* optional_constant: %empty  */
                        { (yyval.b) = false; }
    break;

  case 367: /* optional_constant: "const"  */
                        { (yyval.b) = true; }
    break;

  case 368: /* optional_public_or_private_member_variable: %empty  */
                        { (yyval.b) = false; }
    break;

  case 369: /* optional_public_or_private_member_variable: "public"  */
                        { (yyval.b) = false; }
    break;

  case 370: /* optional_public_or_private_member_variable: "private"  */
                        { (yyval.b) = true; }
    break;

  case 371: /* structure_variable_declaration: optional_field_annotation optional_override optional_public_or_private_member_variable variable_declaration  */
                                                                                                                                                 {
        (yyvsp[0].pVarDecl)->override = (yyvsp[-2].i) == OVERRIDE_OVERRIDE;
        (yyvsp[0].pVarDecl)->sealed = (yyvsp[-2].i) == OVERRIDE_SEALED;
        (yyvsp[0].pVarDecl)->annotation = (yyvsp[-3].aaList);
        (yyvsp[0].pVarDecl)->isPrivate = (yyvsp[-1].b);
        (yyval.pVarDecl) = (yyvsp[0].pVarDecl);
    }
    break;

  case 372: /* struct_variable_declaration_list: %empty  */
        {
        (yyval.pVarDeclList) = new vector<VariableDeclaration*>();
    }
    break;

  case 373: /* $@20: %empty  */
                                               {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeStructureFields(tak);
        }
    }
    break;

  case 374: /* struct_variable_declaration_list: struct_variable_declaration_list $@20 structure_variable_declaration ';'  */
                                               {
        (yyval.pVarDeclList) = (yyvsp[-3].pVarDeclList);
        if ( (yyvsp[-1].pVarDecl) ) (yyvsp[-3].pVarDeclList)->push_back((yyvsp[-1].pVarDecl));
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[-3]));
            for ( auto & crd : yyextra->g_CommentReaders ) {
                for ( const auto & nl : *((yyvsp[-1].pVarDecl)->pNameList) ) {
                    crd->afterStructureField(nl.name.c_str(), nl.at);
                }
            }
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterStructureFields(tak);
        }
    }
    break;

  case 375: /* $@21: %empty  */
                                                                                             {
                yyextra->das_force_oxford_comma=true;
                if ( !yyextra->g_CommentReaders.empty() ) {
                    auto tak = tokAt(scanner,(yylsp[-1]));
                    for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeFunction(tak);
                }
            }
    break;

  case 376: /* struct_variable_declaration_list: struct_variable_declaration_list optional_annotation_list "def" optional_public_or_private_member_variable "abstract" $@21 function_declaration_header ';'  */
                                                    {
                if ( !yyextra->g_CommentReaders.empty() ) {
                    auto tak = tokAt(scanner,(yylsp[-1]));
                    for ( auto & crd : yyextra->g_CommentReaders ) crd->afterFunction((yyvsp[-1].pFuncDecl),tak);
                }
                (yyval.pVarDeclList) = ast_structVarDefAbstract(scanner,(yyvsp[-7].pVarDeclList),(yyvsp[-6].faList),(yyvsp[-4].b),(yyvsp[-1].pFuncDecl));
            }
    break;

  case 377: /* $@22: %empty  */
                                                                                                                               {
                if ( !yyextra->g_CommentReaders.empty() ) {
                    auto tak = tokAt(scanner,(yylsp[0]));
                    for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeFunction(tak);
                }
            }
    break;

  case 378: /* struct_variable_declaration_list: struct_variable_declaration_list optional_annotation_list "def" optional_public_or_private_member_variable optional_override optional_constant $@22 function_declaration_header expression_block  */
                                                                        {
                if ( !yyextra->g_CommentReaders.empty() ) {
                    auto tak = tokAt(scanner,(yylsp[0]));
                    for ( auto & crd : yyextra->g_CommentReaders ) crd->afterFunction((yyvsp[-1].pFuncDecl),tak);
                }
                (yyval.pVarDeclList) = ast_structVarDef(scanner,(yyvsp[-8].pVarDeclList),(yyvsp[-7].faList),(yyvsp[-5].b),(yyvsp[-4].i),(yyvsp[-3].b),(yyvsp[-1].pFuncDecl),(yyvsp[0].pExpression),tokRangeAt(scanner,(yylsp[-6]),(yylsp[0])),tokAt(scanner,(yylsp[-7])));
            }
    break;

  case 379: /* struct_variable_declaration_list: struct_variable_declaration_list '[' annotation_list ']' ';'  */
                                                                                 {
        das_yyerror(scanner,"structure field or class method annotation expected to remain on the same line with the field or the class",
            tokAt(scanner,(yylsp[-2])), CompilationError::syntax_error);
        delete (yyvsp[-2].faList);
        (yyval.pVarDeclList) = (yyvsp[-4].pVarDeclList);
    }
    break;

  case 380: /* function_argument_declaration: optional_field_annotation variable_declaration  */
                                                                           {
            (yyval.pVarDecl) = (yyvsp[0].pVarDecl);
            (yyvsp[0].pVarDecl)->pTypeDecl->constant = true;
            (yyvsp[0].pVarDecl)->annotation = (yyvsp[-1].aaList);
        }
    break;

  case 381: /* function_argument_declaration: optional_field_annotation "var" variable_declaration  */
                                                                           {
            (yyval.pVarDecl) = (yyvsp[0].pVarDecl);
            (yyvsp[0].pVarDecl)->pTypeDecl->removeConstant = true;
            (yyvsp[0].pVarDecl)->annotation = (yyvsp[-2].aaList);
        }
    break;

  case 382: /* function_argument_list: function_argument_declaration  */
                                                                                 { (yyval.pVarDeclList) = new vector<VariableDeclaration*>(); (yyval.pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 383: /* function_argument_list: function_argument_list ';' function_argument_declaration  */
                                                                                 { (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 384: /* tuple_type: type_declaration  */
                                    {
        (yyval.pVarDecl) = new VariableDeclaration(nullptr,(yyvsp[0].pTypeDecl),nullptr);
    }
    break;

  case 385: /* tuple_type: "name" ':' type_declaration  */
                                                   {
        auto na = new vector<VariableNameAndPosition>();
        na->push_back(VariableNameAndPosition{*(yyvsp[-2].s),"",tokAt(scanner,(yylsp[-2]))});
        (yyval.pVarDecl) = new VariableDeclaration(na,(yyvsp[0].pTypeDecl),nullptr);
        delete (yyvsp[-2].s);
    }
    break;

  case 386: /* tuple_type_list: tuple_type  */
                                                       { (yyval.pVarDeclList) = new vector<VariableDeclaration*>(); (yyval.pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 387: /* tuple_type_list: tuple_type_list ';' tuple_type  */
                                                       { (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 388: /* variant_type: "name" ':' type_declaration  */
                                                   {
        auto na = new vector<VariableNameAndPosition>();
        na->push_back(VariableNameAndPosition{*(yyvsp[-2].s),"",tokAt(scanner,(yylsp[-2]))});
        (yyval.pVarDecl) = new VariableDeclaration(na,(yyvsp[0].pTypeDecl),nullptr);
        delete (yyvsp[-2].s);
    }
    break;

  case 389: /* variant_type_list: variant_type  */
                                                         { (yyval.pVarDeclList) = new vector<VariableDeclaration*>(); (yyval.pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 390: /* variant_type_list: variant_type_list ';' variant_type  */
                                                         { (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 391: /* copy_or_move: '='  */
                    { (yyval.b) = false; }
    break;

  case 392: /* copy_or_move: "<-"  */
                    { (yyval.b) = true; }
    break;

  case 393: /* variable_declaration: variable_name_with_pos_list  */
                                          {
        auto autoT = new TypeDecl(Type::autoinfer);
        autoT->at = tokAt(scanner,(yylsp[0]));
        autoT->ref = false;
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[0].pNameWithPosList),autoT,nullptr);
    }
    break;

  case 394: /* variable_declaration: variable_name_with_pos_list '&'  */
                                              {
        auto autoT = new TypeDecl(Type::autoinfer);
        autoT->at = tokAt(scanner,(yylsp[-1]));
        autoT->ref = true;
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-1].pNameWithPosList),autoT,nullptr);
    }
    break;

  case 395: /* variable_declaration: variable_name_with_pos_list ':' type_declaration  */
                                                                          {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-2].pNameWithPosList),(yyvsp[0].pTypeDecl),nullptr);
    }
    break;

  case 396: /* variable_declaration: variable_name_with_pos_list ':' type_declaration copy_or_move expr  */
                                                                                                      {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-4].pNameWithPosList),(yyvsp[-2].pTypeDecl),(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move = (yyvsp[-1].b);
    }
    break;

  case 397: /* variable_declaration: variable_name_with_pos_list copy_or_move expr  */
                                                                       {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt(scanner,(yylsp[-2]));
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-2].pNameWithPosList),typeDecl,(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move = (yyvsp[-1].b);
    }
    break;

  case 398: /* variable_declaration: variable_name_with_pos_list copy_or_move expr_pipe  */
                                                                            {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt(scanner,(yylsp[-2]));
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-2].pNameWithPosList),typeDecl,(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move = (yyvsp[-1].b);
    }
    break;

  case 399: /* copy_or_move_or_clone: '='  */
                    { (yyval.i) = CorM_COPY; }
    break;

  case 400: /* copy_or_move_or_clone: "<-"  */
                    { (yyval.i) = CorM_MOVE; }
    break;

  case 401: /* copy_or_move_or_clone: ":="  */
                    { (yyval.i) = CorM_CLONE; }
    break;

  case 402: /* optional_ref: %empty  */
            { (yyval.b) = false; }
    break;

  case 403: /* optional_ref: '&'  */
            { (yyval.b) = true; }
    break;

  case 404: /* let_variable_declaration: variable_name_with_pos_list ':' type_declaration ';'  */
                                                                             {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-3].pNameWithPosList),(yyvsp[-1].pTypeDecl),nullptr);
    }
    break;

  case 405: /* let_variable_declaration: variable_name_with_pos_list ':' type_declaration copy_or_move_or_clone expr ';'  */
                                                                                                                   {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-5].pNameWithPosList),(yyvsp[-3].pTypeDecl),(yyvsp[-1].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-2].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-2].i) & CorM_CLONE) !=0;
    }
    break;

  case 406: /* let_variable_declaration: variable_name_with_pos_list ':' type_declaration copy_or_move_or_clone expr_pipe  */
                                                                                                                    {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-4].pNameWithPosList),(yyvsp[-2].pTypeDecl),(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-1].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-1].i) & CorM_CLONE) !=0;
    }
    break;

  case 407: /* let_variable_declaration: variable_name_with_pos_list optional_ref copy_or_move_or_clone expr ';'  */
                                                                                                      {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt(scanner,(yylsp[-4]));
        typeDecl->ref = (yyvsp[-3].b);
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-4].pNameWithPosList),typeDecl,(yyvsp[-1].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-2].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-2].i) & CorM_CLONE) !=0;
    }
    break;

  case 408: /* let_variable_declaration: variable_name_with_pos_list optional_ref copy_or_move_or_clone expr_pipe  */
                                                                                                       {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt(scanner,(yylsp[-3]));
        typeDecl->ref = (yyvsp[-2].b);
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-3].pNameWithPosList),typeDecl,(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-1].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-1].i) & CorM_CLONE) !=0;
    }
    break;

  case 409: /* global_variable_declaration_list: %empty  */
        {
        (yyval.pVarDeclList) = new vector<VariableDeclaration*>();
    }
    break;

  case 410: /* $@23: %empty  */
                                               {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeGlobalVariables(tak);
        }
    }
    break;

  case 411: /* global_variable_declaration_list: global_variable_declaration_list $@23 optional_field_annotation let_variable_declaration  */
                                                                      {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders )
                for ( auto & nl : *((yyvsp[0].pVarDecl)->pNameList) )
                    crd->afterGlobalVariable(nl.name.c_str(),tak);
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterGlobalVariables(tak);
        }
        (yyval.pVarDeclList) = (yyvsp[-3].pVarDeclList);
        (yyvsp[0].pVarDecl)->annotation = (yyvsp[-1].aaList);
        (yyvsp[-3].pVarDeclList)->push_back((yyvsp[0].pVarDecl));
    }
    break;

  case 412: /* optional_shared: %empty  */
                     { (yyval.b) = false; }
    break;

  case 413: /* optional_shared: "shared"  */
                     { (yyval.b) = true; }
    break;

  case 414: /* optional_public_or_private_variable: %empty  */
                     { (yyval.b) = yyextra->g_Program->thisModule->isPublic; }
    break;

  case 415: /* optional_public_or_private_variable: "private"  */
                     { (yyval.b) = false; }
    break;

  case 416: /* optional_public_or_private_variable: "public"  */
                     { (yyval.b) = true; }
    break;

  case 417: /* global_let: kwd_let optional_shared optional_public_or_private_variable '{' global_variable_declaration_list '}'  */
                                                                                                                                       {
        ast_globalLetList(scanner,(yyvsp[-5].b),(yyvsp[-4].b),(yyvsp[-3].b),(yyvsp[-1].pVarDeclList));
    }
    break;

  case 418: /* $@24: %empty  */
                                                                                        {
        yyextra->das_force_oxford_comma=true;
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeGlobalVariables(tak);
        }
    }
    break;

  case 419: /* global_let: kwd_let optional_shared optional_public_or_private_variable $@24 optional_field_annotation let_variable_declaration  */
                                                                    {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders )
                for ( auto & nl : *((yyvsp[0].pVarDecl)->pNameList) )
                    crd->afterGlobalVariable(nl.name.c_str(),tak);
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterGlobalVariables(tak);
        }
        ast_globalLet(scanner,(yyvsp[-5].b),(yyvsp[-4].b),(yyvsp[-3].b),(yyvsp[-1].aaList),(yyvsp[0].pVarDecl));
    }
    break;

  case 420: /* enum_list: %empty  */
        {
        (yyval.pEnum) = new Enumeration();
    }
    break;

  case 421: /* enum_list: enum_list "name" ';'  */
                                     {
        das_checkName(scanner,*(yyvsp[-1].s),tokAt(scanner,(yylsp[-1])));
        if ( !(yyvsp[-2].pEnum)->add(*(yyvsp[-1].s),nullptr,tokAt(scanner,(yylsp[-1]))) ) {
            das_yyerror(scanner,"enumeration alread declared " + *(yyvsp[-1].s), tokAt(scanner,(yylsp[-1])),
                CompilationError::enumeration_value_already_declared);
        }
        delete (yyvsp[-1].s);
        (yyval.pEnum) = (yyvsp[-2].pEnum);
    }
    break;

  case 422: /* enum_list: enum_list "name" '=' expr ';'  */
                                                     {
        das_checkName(scanner,*(yyvsp[-3].s),tokAt(scanner,(yylsp[-3])));
        if ( !(yyvsp[-4].pEnum)->add(*(yyvsp[-3].s),ExpressionPtr((yyvsp[-1].pExpression)),tokAt(scanner,(yylsp[-3]))) ) {
            das_yyerror(scanner,"enumeration value alread declared " + *(yyvsp[-3].s), tokAt(scanner,(yylsp[-3])),
                CompilationError::enumeration_value_already_declared);
        }
        delete (yyvsp[-3].s);
        (yyval.pEnum) = (yyvsp[-4].pEnum);
    }
    break;

  case 423: /* $@25: %empty  */
                   {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeAlias(pubename);
        }
    }
    break;

  case 424: /* single_alias: "name" $@25 '=' type_declaration  */
                                  {
        das_checkName(scanner,*(yyvsp[-3].s),tokAt(scanner,(yylsp[-3])));
        (yyvsp[0].pTypeDecl)->alias = *(yyvsp[-3].s);
        if ( !yyextra->g_Program->addAlias(TypeDeclPtr((yyvsp[0].pTypeDecl))) ) {
            das_yyerror(scanner,"type alias is already defined "+*(yyvsp[-3].s),tokAt(scanner,(yylsp[-3])),
                CompilationError::type_alias_already_declared);
        }
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterAlias((yyvsp[-3].s)->c_str(),pubename);
        }
        delete (yyvsp[-3].s);
    }
    break;

  case 429: /* optional_public_or_private_enum: %empty  */
                     { (yyval.b) = yyextra->g_Program->thisModule->isPublic; }
    break;

  case 430: /* optional_public_or_private_enum: "private"  */
                     { (yyval.b) = false; }
    break;

  case 431: /* optional_public_or_private_enum: "public"  */
                     { (yyval.b) = true; }
    break;

  case 432: /* enum_name: "name"  */
                   {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeEnumeration(pubename);
        }
        (yyval.s) = (yyvsp[0].s);
    }
    break;

  case 433: /* enum_declaration: optional_annotation_list "enum" optional_public_or_private_enum enum_name '{' enum_list '}'  */
                                                                                                                                 {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[-1]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterEnumeration((yyvsp[-3].s)->c_str(),pubename);
        }
        ast_enumDeclaration(scanner,(yyvsp[-6].faList),tokAt(scanner,(yylsp[-6])),(yyvsp[-4].b),(yyvsp[-3].s),tokAt(scanner,(yylsp[-3])),(yyvsp[-1].pEnum),tokAt(scanner,(yylsp[-1])),Type::tInt);
    }
    break;

  case 434: /* enum_declaration: optional_annotation_list "enum" optional_public_or_private_enum enum_name ':' enum_basic_type_declaration '{' enum_list '}'  */
                                                                                                                                                                      {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[-1]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterEnumeration((yyvsp[-5].s)->c_str(),pubename);
        }
        ast_enumDeclaration(scanner,(yyvsp[-8].faList),tokAt(scanner,(yylsp[-8])),(yyvsp[-6].b),(yyvsp[-5].s),tokAt(scanner,(yylsp[-5])),(yyvsp[-1].pEnum),tokAt(scanner,(yylsp[-1])),(yyvsp[-3].type));
    }
    break;

  case 435: /* optional_structure_parent: %empty  */
                                        { (yyval.s) = nullptr; }
    break;

  case 436: /* optional_structure_parent: ':' name_in_namespace  */
                                        { (yyval.s) = (yyvsp[0].s); }
    break;

  case 437: /* optional_sealed: %empty  */
                        { (yyval.b) = false; }
    break;

  case 438: /* optional_sealed: "sealed"  */
                        { (yyval.b) = true; }
    break;

  case 439: /* structure_name: optional_sealed "name" optional_structure_parent  */
                                                                           {
        (yyval.pStructure) = ast_structureName(scanner,(yyvsp[-2].b),(yyvsp[-1].s),tokAt(scanner,(yylsp[-1])),(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
    }
    break;

  case 440: /* class_or_struct: "class"  */
                    { (yyval.b) = true; }
    break;

  case 441: /* class_or_struct: "struct"  */
                    { (yyval.b) = false; }
    break;

  case 442: /* optional_public_or_private_structure: %empty  */
                     { (yyval.b) = yyextra->g_Program->thisModule->isPublic; }
    break;

  case 443: /* optional_public_or_private_structure: "private"  */
                     { (yyval.b) = false; }
    break;

  case 444: /* optional_public_or_private_structure: "public"  */
                     { (yyval.b) = true; }
    break;

  case 445: /* $@26: %empty  */
                                                                                                        {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[-1]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeStructure(tak);
        }
    }
    break;

  case 446: /* $@27: %empty  */
                         { if ( (yyvsp[0].pStructure) ) { (yyvsp[0].pStructure)->isClass = (yyvsp[-3].b); (yyvsp[0].pStructure)->privateStructure = !(yyvsp[-2].b); } }
    break;

  case 447: /* structure_declaration: optional_annotation_list class_or_struct optional_public_or_private_structure $@26 structure_name $@27 '{' struct_variable_declaration_list '}'  */
                                                                                                                                                   {
        ast_structureDeclaration ( scanner, (yyvsp[-8].faList), tokAt(scanner,(yylsp[-7])), (yyvsp[-4].pStructure), tokAt(scanner,(yylsp[-4])), (yyvsp[-1].pVarDeclList) );
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[-7]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterStructure((yyvsp[-4].pStructure),tak);
        }
    }
    break;

  case 448: /* variable_name_with_pos_list: "name"  */
                    {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{*(yyvsp[0].s),"",tokAt(scanner,(yylsp[0]))});
        (yyval.pNameWithPosList) = pSL;
        delete (yyvsp[0].s);
    }
    break;

  case 449: /* variable_name_with_pos_list: "name" "aka" "name"  */
                                         {
        das_checkName(scanner,*(yyvsp[-2].s),tokAt(scanner,(yylsp[-2])));
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))});
        (yyval.pNameWithPosList) = pSL;
        delete (yyvsp[-2].s);
        delete (yyvsp[0].s);
    }
    break;

  case 450: /* variable_name_with_pos_list: variable_name_with_pos_list ',' "name"  */
                                                         {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-2].pNameWithPosList)->push_back(VariableNameAndPosition{*(yyvsp[0].s),"",tokAt(scanner,(yylsp[0]))});
        (yyval.pNameWithPosList) = (yyvsp[-2].pNameWithPosList);
        delete (yyvsp[0].s);
    }
    break;

  case 451: /* variable_name_with_pos_list: variable_name_with_pos_list ',' "name" "aka" "name"  */
                                                                               {
        das_checkName(scanner,*(yyvsp[-2].s),tokAt(scanner,(yylsp[-2])));
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-4].pNameWithPosList)->push_back(VariableNameAndPosition{*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))});
        (yyval.pNameWithPosList) = (yyvsp[-4].pNameWithPosList);
        delete (yyvsp[-2].s);
        delete (yyvsp[0].s);
    }
    break;

  case 452: /* basic_type_declaration: "bool"  */
                        { (yyval.type) = Type::tBool; }
    break;

  case 453: /* basic_type_declaration: "string"  */
                        { (yyval.type) = Type::tString; }
    break;

  case 454: /* basic_type_declaration: "int"  */
                        { (yyval.type) = Type::tInt; }
    break;

  case 455: /* basic_type_declaration: "int8"  */
                        { (yyval.type) = Type::tInt8; }
    break;

  case 456: /* basic_type_declaration: "int16"  */
                        { (yyval.type) = Type::tInt16; }
    break;

  case 457: /* basic_type_declaration: "int64"  */
                        { (yyval.type) = Type::tInt64; }
    break;

  case 458: /* basic_type_declaration: "int2"  */
                        { (yyval.type) = Type::tInt2; }
    break;

  case 459: /* basic_type_declaration: "int3"  */
                        { (yyval.type) = Type::tInt3; }
    break;

  case 460: /* basic_type_declaration: "int4"  */
                        { (yyval.type) = Type::tInt4; }
    break;

  case 461: /* basic_type_declaration: "uint"  */
                        { (yyval.type) = Type::tUInt; }
    break;

  case 462: /* basic_type_declaration: "uint8"  */
                        { (yyval.type) = Type::tUInt8; }
    break;

  case 463: /* basic_type_declaration: "uint16"  */
                        { (yyval.type) = Type::tUInt16; }
    break;

  case 464: /* basic_type_declaration: "uint64"  */
                        { (yyval.type) = Type::tUInt64; }
    break;

  case 465: /* basic_type_declaration: "uint2"  */
                        { (yyval.type) = Type::tUInt2; }
    break;

  case 466: /* basic_type_declaration: "uint3"  */
                        { (yyval.type) = Type::tUInt3; }
    break;

  case 467: /* basic_type_declaration: "uint4"  */
                        { (yyval.type) = Type::tUInt4; }
    break;

  case 468: /* basic_type_declaration: "float"  */
                        { (yyval.type) = Type::tFloat; }
    break;

  case 469: /* basic_type_declaration: "float2"  */
                        { (yyval.type) = Type::tFloat2; }
    break;

  case 470: /* basic_type_declaration: "float3"  */
                        { (yyval.type) = Type::tFloat3; }
    break;

  case 471: /* basic_type_declaration: "float4"  */
                        { (yyval.type) = Type::tFloat4; }
    break;

  case 472: /* basic_type_declaration: "void"  */
                        { (yyval.type) = Type::tVoid; }
    break;

  case 473: /* basic_type_declaration: "range"  */
                        { (yyval.type) = Type::tRange; }
    break;

  case 474: /* basic_type_declaration: "urange"  */
                        { (yyval.type) = Type::tURange; }
    break;

  case 475: /* basic_type_declaration: "double"  */
                        { (yyval.type) = Type::tDouble; }
    break;

  case 476: /* basic_type_declaration: "bitfield"  */
                        { (yyval.type) = Type::tBitfield; }
    break;

  case 477: /* enum_basic_type_declaration: "int"  */
                        { (yyval.type) = Type::tInt; }
    break;

  case 478: /* enum_basic_type_declaration: "int8"  */
                        { (yyval.type) = Type::tInt8; }
    break;

  case 479: /* enum_basic_type_declaration: "int16"  */
                        { (yyval.type) = Type::tInt16; }
    break;

  case 480: /* enum_basic_type_declaration: "uint"  */
                        { (yyval.type) = Type::tUInt; }
    break;

  case 481: /* enum_basic_type_declaration: "uint8"  */
                        { (yyval.type) = Type::tUInt8; }
    break;

  case 482: /* enum_basic_type_declaration: "uint16"  */
                        { (yyval.type) = Type::tUInt16; }
    break;

  case 483: /* structure_type_declaration: name_in_namespace  */
                                 {
        (yyval.pTypeDecl) = yyextra->g_Program->makeTypeDeclaration(tokAt(scanner,(yylsp[0])),*(yyvsp[0].s));
        if ( !(yyval.pTypeDecl) ) {
            (yyval.pTypeDecl) = new TypeDecl(Type::tVoid);
            (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
        }
        delete (yyvsp[0].s);
    }
    break;

  case 484: /* auto_type_declaration: "auto"  */
                       {
        (yyval.pTypeDecl) = new TypeDecl(Type::autoinfer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 485: /* auto_type_declaration: "auto" '(' "name" ')'  */
                                            {
        das_checkName(scanner,*(yyvsp[-1].s),tokAt(scanner,(yylsp[-1])));
        (yyval.pTypeDecl) = new TypeDecl(Type::autoinfer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-3]));
        (yyval.pTypeDecl)->alias = *(yyvsp[-1].s);
        delete (yyvsp[-1].s);
    }
    break;

  case 486: /* bitfield_bits: "name"  */
                    {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        auto pSL = new vector<string>();
        pSL->push_back(*(yyvsp[0].s));
        (yyval.pNameList) = pSL;
        delete (yyvsp[0].s);
    }
    break;

  case 487: /* bitfield_bits: bitfield_bits ';' "name"  */
                                           {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-2].pNameList)->push_back(*(yyvsp[0].s));
        (yyval.pNameList) = (yyvsp[-2].pNameList);
        delete (yyvsp[0].s);
    }
    break;

  case 488: /* $@28: %empty  */
                                     { yyextra->das_arrow_depth ++; }
    break;

  case 489: /* $@29: %empty  */
                                                                                            { yyextra->das_arrow_depth --; }
    break;

  case 490: /* bitfield_type_declaration: "bitfield" '<' $@28 bitfield_bits '>' $@29  */
                                                                                                                             {
            (yyval.pTypeDecl) = new TypeDecl(Type::tBitfield);
            (yyval.pTypeDecl)->argNames = *(yyvsp[-2].pNameList);
            if ( (yyval.pTypeDecl)->argNames.size()>32 ) {
                das_yyerror(scanner,"only 32 different bits are allowed in a bitfield",tokAt(scanner,(yylsp[-5])),
                    CompilationError::invalid_type);
            }
            (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
            delete (yyvsp[-2].pNameList);
    }
    break;

  case 491: /* type_declaration: basic_type_declaration  */
                                                            { (yyval.pTypeDecl) = new TypeDecl((yyvsp[0].type)); (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0])); }
    break;

  case 492: /* type_declaration: auto_type_declaration  */
                                                            { (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl); }
    break;

  case 493: /* type_declaration: bitfield_type_declaration  */
                                                            { (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl); }
    break;

  case 494: /* type_declaration: structure_type_declaration  */
                                                            { (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl); }
    break;

  case 495: /* type_declaration: type_declaration '[' expr ']'  */
                                                         {
        int32_t dI = TypeDecl::dimConst;
        if ( (yyvsp[-1].pExpression)->rtti_isConstant() ) {                // note: this shortcut is here so we don`t get extra infer pass on every array
            auto cI = (ExprConst *) (yyvsp[-1].pExpression);
            auto bt = cI->baseType;
            if ( bt==Type::tInt || bt==Type::tUInt ) {
                dI = cast<int32_t>::to(cI->value);
            }
        }
        (yyvsp[-3].pTypeDecl)->dim.push_back(dI);
        (yyvsp[-3].pTypeDecl)->dimExpr.push_back(ExpressionPtr((yyvsp[-1].pExpression)));
        (yyvsp[-3].pTypeDecl)->removeDim = false;
        (yyval.pTypeDecl) = (yyvsp[-3].pTypeDecl);
    }
    break;

  case 496: /* type_declaration: type_declaration '[' ']'  */
                                           {
        (yyvsp[-2].pTypeDecl)->dim.push_back(TypeDecl::dimAuto);
        (yyvsp[-2].pTypeDecl)->dimExpr.push_back(nullptr);
        (yyvsp[-2].pTypeDecl)->removeDim = false;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 497: /* type_declaration: type_declaration '-' '[' ']'  */
                                               {
        (yyvsp[-3].pTypeDecl)->removeDim = true;
        (yyval.pTypeDecl) = (yyvsp[-3].pTypeDecl);
    }
    break;

  case 498: /* type_declaration: type_declaration "explicit"  */
                                                {
        (yyvsp[-1].pTypeDecl)->isExplicit = true;
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
    }
    break;

  case 499: /* type_declaration: type_declaration "const"  */
                                             {
        (yyvsp[-1].pTypeDecl)->constant = true;
        (yyvsp[-1].pTypeDecl)->removeConstant = false;
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
    }
    break;

  case 500: /* type_declaration: type_declaration '-' "const"  */
                                                 {
        (yyvsp[-2].pTypeDecl)->constant = false;
        (yyvsp[-2].pTypeDecl)->removeConstant = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 501: /* type_declaration: type_declaration '&'  */
                                       {
        (yyvsp[-1].pTypeDecl)->ref = true;
        (yyvsp[-1].pTypeDecl)->removeRef = false;
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
    }
    break;

  case 502: /* type_declaration: type_declaration '-' '&'  */
                                           {
        (yyvsp[-2].pTypeDecl)->ref = false;
        (yyvsp[-2].pTypeDecl)->removeRef = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 503: /* type_declaration: type_declaration '#'  */
                                       {
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
        (yyval.pTypeDecl)->temporary = true;
    }
    break;

  case 504: /* type_declaration: type_declaration "implicit"  */
                                                {
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
        (yyval.pTypeDecl)->implicit = true;
    }
    break;

  case 505: /* type_declaration: type_declaration '-' '#'  */
                                           {
        (yyvsp[-2].pTypeDecl)->temporary = false;
        (yyvsp[-2].pTypeDecl)->removeTemporary = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 506: /* type_declaration: type_declaration '=' "const"  */
                                                 {
        (yyvsp[-2].pTypeDecl)->explicitConst = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 507: /* type_declaration: type_declaration '?'  */
                                       {
        (yyval.pTypeDecl) = new TypeDecl(Type::tPointer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-1]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-1].pTypeDecl));
    }
    break;

  case 508: /* $@30: %empty  */
                               { yyextra->das_arrow_depth ++; }
    break;

  case 509: /* $@31: %empty  */
                                                                                               { yyextra->das_arrow_depth --; }
    break;

  case 510: /* type_declaration: "smart_ptr" '<' $@30 type_declaration '>' $@31  */
                                                                                                                                {
        (yyval.pTypeDecl) = new TypeDecl(Type::tPointer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->smartPtr = true;
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 511: /* type_declaration: type_declaration "??"  */
                                      {
        (yyval.pTypeDecl) = new TypeDecl(Type::tPointer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-1]));
        (yyval.pTypeDecl)->firstType = make_smart<TypeDecl>(Type::tPointer);
        (yyval.pTypeDecl)->firstType->at = tokAt(scanner,(yylsp[-1]));
        (yyval.pTypeDecl)->firstType->firstType = TypeDeclPtr((yyvsp[-1].pTypeDecl));
    }
    break;

  case 512: /* $@32: %empty  */
                           { yyextra->das_arrow_depth ++; }
    break;

  case 513: /* $@33: %empty  */
                                                                                           { yyextra->das_arrow_depth --; }
    break;

  case 514: /* type_declaration: "array" '<' $@32 type_declaration '>' $@33  */
                                                                                                                            {
        (yyval.pTypeDecl) = new TypeDecl(Type::tArray);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 515: /* $@34: %empty  */
                           { yyextra->das_arrow_depth ++; }
    break;

  case 516: /* $@35: %empty  */
                                                                                                                                  { yyextra->das_arrow_depth --; }
    break;

  case 517: /* type_declaration: "table" '<' $@34 type_declaration ';' type_declaration '>' $@35  */
                                                                                                                                                                   {
        (yyval.pTypeDecl) = new TypeDecl(Type::tTable);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-7]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-4].pTypeDecl));
        (yyval.pTypeDecl)->secondType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 518: /* $@36: %empty  */
                               { yyextra->das_arrow_depth ++; }
    break;

  case 519: /* $@37: %empty  */
                                                                                                 { yyextra->das_arrow_depth --; }
    break;

  case 520: /* type_declaration: "iterator" '<' $@36 type_declaration '>' $@37  */
                                                                                                                                  {
        (yyval.pTypeDecl) = new TypeDecl(Type::tIterator);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 521: /* type_declaration: "block"  */
                        {
        (yyval.pTypeDecl) = new TypeDecl(Type::tBlock);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 522: /* $@38: %empty  */
                             { yyextra->das_arrow_depth ++; }
    break;

  case 523: /* $@39: %empty  */
                                                                                              { yyextra->das_arrow_depth --; }
    break;

  case 524: /* type_declaration: "block" '<' $@38 type_declaration '>' $@39  */
                                                                                                                               {
        (yyval.pTypeDecl) = new TypeDecl(Type::tBlock);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 525: /* $@40: %empty  */
                             { yyextra->das_arrow_depth ++; }
    break;

  case 526: /* $@41: %empty  */
                                                                                                                                       { yyextra->das_arrow_depth --; }
    break;

  case 527: /* type_declaration: "block" '<' $@40 optional_function_argument_list optional_function_type '>' $@41  */
                                                                                                                                                                        {
        (yyval.pTypeDecl) = new TypeDecl(Type::tBlock);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-6]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        if ( (yyvsp[-3].pVarDeclList) ) {
            varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-3].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-3].pVarDeclList));
        }
    }
    break;

  case 528: /* type_declaration: "function"  */
                           {
        (yyval.pTypeDecl) = new TypeDecl(Type::tFunction);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 529: /* $@42: %empty  */
                               { yyextra->das_arrow_depth ++; }
    break;

  case 530: /* $@43: %empty  */
                                                                                                { yyextra->das_arrow_depth --; }
    break;

  case 531: /* type_declaration: "function" '<' $@42 type_declaration '>' $@43  */
                                                                                                                                 {
        (yyval.pTypeDecl) = new TypeDecl(Type::tFunction);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 532: /* $@44: %empty  */
                               { yyextra->das_arrow_depth ++; }
    break;

  case 533: /* $@45: %empty  */
                                                                                                                                         { yyextra->das_arrow_depth --; }
    break;

  case 534: /* type_declaration: "function" '<' $@44 optional_function_argument_list optional_function_type '>' $@45  */
                                                                                                                                                                          {
        (yyval.pTypeDecl) = new TypeDecl(Type::tFunction);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-6]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        if ( (yyvsp[-3].pVarDeclList) ) {
            varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-3].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-3].pVarDeclList));
        }
    }
    break;

  case 535: /* type_declaration: "lambda"  */
                         {
        (yyval.pTypeDecl) = new TypeDecl(Type::tLambda);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 536: /* $@46: %empty  */
                             { yyextra->das_arrow_depth ++; }
    break;

  case 537: /* $@47: %empty  */
                                                                                              { yyextra->das_arrow_depth --; }
    break;

  case 538: /* type_declaration: "lambda" '<' $@46 type_declaration '>' $@47  */
                                                                                                                               {
        (yyval.pTypeDecl) = new TypeDecl(Type::tLambda);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 539: /* $@48: %empty  */
                             { yyextra->das_arrow_depth ++; }
    break;

  case 540: /* $@49: %empty  */
                                                                                                                                       { yyextra->das_arrow_depth --; }
    break;

  case 541: /* type_declaration: "lambda" '<' $@48 optional_function_argument_list optional_function_type '>' $@49  */
                                                                                                                                                                        {
        (yyval.pTypeDecl) = new TypeDecl(Type::tLambda);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-6]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        if ( (yyvsp[-3].pVarDeclList) ) {
            varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-3].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-3].pVarDeclList));
        }
    }
    break;

  case 542: /* $@50: %empty  */
                            { yyextra->das_arrow_depth ++; }
    break;

  case 543: /* $@51: %empty  */
                                                                                       { yyextra->das_arrow_depth --; }
    break;

  case 544: /* type_declaration: "tuple" '<' $@50 tuple_type_list '>' $@51  */
                                                                                                                        {
        (yyval.pTypeDecl) = new TypeDecl(Type::tTuple);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-2].pVarDeclList), true);
        deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
    }
    break;

  case 545: /* $@52: %empty  */
                              { yyextra->das_arrow_depth ++; }
    break;

  case 546: /* $@53: %empty  */
                                                                                           { yyextra->das_arrow_depth --; }
    break;

  case 547: /* type_declaration: "variant" '<' $@52 variant_type_list '>' $@53  */
                                                                                                                            {
        (yyval.pTypeDecl) = new TypeDecl(Type::tVariant);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-2].pVarDeclList), true);
        deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
    }
    break;

  case 548: /* $@54: %empty  */
                     { yyextra->das_need_oxford_comma=false; }
    break;

  case 549: /* $@55: %empty  */
                                                                           {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeVariant(atvname);
        }
    }
    break;

  case 550: /* variant_alias_declaration: "variant" $@54 "name" $@55 '{' variant_type_list ';' '}'  */
                                          {
        auto vtype = make_smart<TypeDecl>(Type::tVariant);
        vtype->alias = *(yyvsp[-5].s);
        vtype->at = tokAt(scanner,(yylsp[-5]));
        varDeclToTypeDecl(scanner, vtype.get(), (yyvsp[-2].pVarDeclList), true);
        deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
        if ( !yyextra->g_Program->addAlias(vtype) ) {
            das_yyerror(scanner,"type alias is already defined "+*(yyvsp[-5].s),tokAt(scanner,(yylsp[-5])),
                CompilationError::type_alias_already_declared);
        }
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-5]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterVariant((yyvsp[-5].s)->c_str(),atvname);
        }
        delete (yyvsp[-5].s);
    }
    break;

  case 551: /* $@56: %empty  */
                      { yyextra->das_need_oxford_comma=false; }
    break;

  case 552: /* bitfield_alias_declaration: "bitfield" $@56 "name" '{' bitfield_bits ';' '}'  */
                                                                                                            {
        auto btype = make_smart<TypeDecl>(Type::tBitfield);
        btype->alias = *(yyvsp[-4].s);
        btype->at = tokAt(scanner,(yylsp[-4]));
        btype->argNames = *(yyvsp[-2].pNameList);
        if ( btype->argNames.size()>32 ) {
            das_yyerror(scanner,"only 32 different bits are allowed in a bitfield",tokAt(scanner,(yylsp[-4])),
                CompilationError::invalid_type);
        }
        if ( !yyextra->g_Program->addAlias(btype) ) {
            das_yyerror(scanner,"type alias is already defined "+*(yyvsp[-4].s),tokAt(scanner,(yylsp[-4])),
                CompilationError::type_alias_already_declared);
        }
        delete (yyvsp[-4].s);
        delete (yyvsp[-2].pNameList);
    }
    break;

  case 553: /* make_decl: make_struct_decl  */
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 554: /* make_decl: make_dim_decl  */
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 555: /* make_decl: make_table_decl  */
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 556: /* make_decl: array_comprehension  */
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 557: /* make_struct_fields: "name" copy_or_move expr  */
                                               {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)),(yyvsp[-1].b),false);
        delete (yyvsp[-2].s);
        auto msd = new MakeStruct();
        msd->push_back(mfd);
        (yyval.pMakeStruct) = msd;
    }
    break;

  case 558: /* make_struct_fields: "name" ":=" expr  */
                                      {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)),false,true);
        delete (yyvsp[-2].s);
        auto msd = new MakeStruct();
        msd->push_back(mfd);
        (yyval.pMakeStruct) = msd;
    }
    break;

  case 559: /* make_struct_fields: make_struct_fields ',' "name" copy_or_move expr  */
                                                                           {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)),(yyvsp[-1].b),false);
        delete (yyvsp[-2].s);
        ((MakeStruct *)(yyvsp[-4].pMakeStruct))->push_back(mfd);
        (yyval.pMakeStruct) = (yyvsp[-4].pMakeStruct);
    }
    break;

  case 560: /* make_struct_fields: make_struct_fields ',' "name" ":=" expr  */
                                                                  {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)),false,true);
        delete (yyvsp[-2].s);
        ((MakeStruct *)(yyvsp[-4].pMakeStruct))->push_back(mfd);
        (yyval.pMakeStruct) = (yyvsp[-4].pMakeStruct);
    }
    break;

  case 561: /* make_struct_dim: make_struct_fields  */
                                {
        auto msd = new ExprMakeStruct();
        msd->structs.push_back(MakeStructPtr((yyvsp[0].pMakeStruct)));
        (yyval.pExpression) = msd;
    }
    break;

  case 562: /* make_struct_dim: make_struct_dim ';' make_struct_fields  */
                                                         {
        ((ExprMakeStruct *) (yyvsp[-2].pExpression))->structs.push_back(MakeStructPtr((yyvsp[0].pMakeStruct)));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
    break;

  case 563: /* optional_block: %empty  */
        { (yyval.pExpression) = nullptr; }
    break;

  case 564: /* optional_block: "where" expr_block  */
                                  { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 565: /* make_struct_decl: "[[" type_declaration make_struct_dim optional_block ']' ']'  */
                                                                                             {
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->makeType = TypeDeclPtr((yyvsp[-4].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->block = (yyvsp[-2].pExpression);
        (yyvsp[-3].pExpression)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pExpression) = (yyvsp[-3].pExpression);
    }
    break;

  case 566: /* make_struct_decl: "[[" type_declaration optional_block ']' ']'  */
                                                                        {
        auto msd = new ExprMakeStruct();
        msd->makeType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
        msd->block = (yyvsp[-2].pExpression);
        msd->at = tokAt(scanner,(yylsp[-4]));
        (yyval.pExpression) = msd;
    }
    break;

  case 567: /* make_struct_decl: "[[" type_declaration '(' ')' optional_block ']' ']'  */
                                                                                {
        auto msd = new ExprMakeStruct();
        msd->makeType = TypeDeclPtr((yyvsp[-5].pTypeDecl));
        msd->useInitializer = true;
        msd->block = (yyvsp[-2].pExpression);
        msd->at = tokAt(scanner,(yylsp[-6]));
        (yyval.pExpression) = msd;
    }
    break;

  case 568: /* make_struct_decl: "[[" type_declaration '(' ')' make_struct_dim optional_block ']' ']'  */
                                                                                                     {
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->makeType = TypeDeclPtr((yyvsp[-6].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->useInitializer = true;
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->block = (yyvsp[-2].pExpression);
        (yyvsp[-3].pExpression)->at = tokAt(scanner,(yylsp[-7]));
        (yyval.pExpression) = (yyvsp[-3].pExpression);
    }
    break;

  case 569: /* make_struct_decl: "[{" type_declaration make_struct_dim optional_block '}' ']'  */
                                                                                             {
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->makeType = TypeDeclPtr((yyvsp[-4].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->block = (yyvsp[-2].pExpression);
        (yyvsp[-3].pExpression)->at = tokAt(scanner,(yylsp[-5]));
        auto tam = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-5])),"to_array_move");
        tam->arguments.push_back(ExpressionPtr((yyvsp[-3].pExpression)));
        (yyval.pExpression) = tam;
    }
    break;

  case 570: /* make_struct_decl: "[{" type_declaration '(' ')' make_struct_dim optional_block '}' ']'  */
                                                                                                     {
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->makeType = TypeDeclPtr((yyvsp[-6].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->useInitializer = true;
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->block = (yyvsp[-2].pExpression);
        (yyvsp[-3].pExpression)->at = tokAt(scanner,(yylsp[-7]));
        auto tam = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-7])),"to_array_move");
        tam->arguments.push_back(ExpressionPtr((yyvsp[-3].pExpression)));
        (yyval.pExpression) = tam;
    }
    break;

  case 571: /* make_tuple: expr  */
                  {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 572: /* make_tuple: make_tuple ',' expr  */
                                      {
        ExprMakeTuple * mt;
        if ( (yyvsp[-2].pExpression)->rtti_isMakeTuple() ) {
            mt = static_cast<ExprMakeTuple *>((yyvsp[-2].pExpression));
        } else {
            mt = new ExprMakeTuple(tokAt(scanner,(yylsp[-2])));
            mt->values.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        }
        mt->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mt;
    }
    break;

  case 573: /* make_map_tuple: expr "=>" expr  */
                                         {
        ExprMakeTuple * mt = new ExprMakeTuple(tokAt(scanner,(yylsp[-1])));
        mt->values.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        mt->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mt;
    }
    break;

  case 574: /* make_any_tuple: make_tuple  */
                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 575: /* make_any_tuple: make_map_tuple  */
                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 576: /* make_dim: make_any_tuple  */
                            {
        auto mka = new ExprMakeArray();
        mka->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mka;
    }
    break;

  case 577: /* make_dim: make_dim ';' make_any_tuple  */
                                              {
        ((ExprMakeArray *) (yyvsp[-2].pExpression))->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
    break;

  case 578: /* make_dim_decl: "[[" type_declaration make_dim ']' ']'  */
                                                                  {
       ((ExprMakeArray *)(yyvsp[-2].pExpression))->makeType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
       (yyvsp[-2].pExpression)->at = tokAt(scanner,(yylsp[-4]));
       (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
    break;

  case 579: /* make_dim_decl: "[{" type_declaration make_dim '}' ']'  */
                                                                  {
       ((ExprMakeArray *)(yyvsp[-2].pExpression))->makeType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
       (yyvsp[-2].pExpression)->at = tokAt(scanner,(yylsp[-4]));
       auto tam = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-4])),"to_array_move");
       tam->arguments.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
       (yyval.pExpression) = tam;
    }
    break;

  case 580: /* make_table: make_map_tuple  */
                            {
        auto mka = new ExprMakeArray();
        mka->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mka;
    }
    break;

  case 581: /* make_table: make_table ';' make_map_tuple  */
                                                {
        ((ExprMakeArray *) (yyvsp[-2].pExpression))->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
    break;

  case 582: /* make_table_decl: "{{" make_table '}' '}'  */
                                              {
        auto mkt = make_smart<TypeDecl>(Type::autoinfer);
        mkt->dim.push_back(TypeDecl::dimAuto);
        ((ExprMakeArray *)(yyvsp[-2].pExpression))->makeType = mkt;
        (yyvsp[-2].pExpression)->at = tokAt(scanner,(yylsp[-3]));
        auto ttm = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-3])),"to_table_move");
        ttm->arguments.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        (yyval.pExpression) = ttm;
    }
    break;

  case 583: /* array_comprehension_where: %empty  */
                                    { (yyval.pExpression) = nullptr; }
    break;

  case 584: /* array_comprehension_where: ';' "where" expr  */
                                    { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 585: /* array_comprehension: "[[" "for" variable_name_with_pos_list "in" expr_list ';' expr array_comprehension_where ']' ']'  */
                                                                                                                                                            {
        (yyval.pExpression) = ast_arrayComprehension(scanner,tokAt(scanner,(yylsp[-8])),(yyvsp[-7].pNameWithPosList),(yyvsp[-5].pExpression),(yyvsp[-3].pExpression),(yyvsp[-2].pExpression),tokRangeAt(scanner,(yylsp[-3]),(yylsp[0])),true);
    }
    break;

  case 586: /* array_comprehension: "[{" "for" variable_name_with_pos_list "in" expr_list ';' expr array_comprehension_where '}' ']'  */
                                                                                                                                                            {
        (yyval.pExpression) = ast_arrayComprehension(scanner,tokAt(scanner,(yylsp[-8])),(yyvsp[-7].pNameWithPosList),(yyvsp[-5].pExpression),(yyvsp[-3].pExpression),(yyvsp[-2].pExpression),tokRangeAt(scanner,(yylsp[-3]),(yylsp[0])),false);
    }
    break;



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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
  yytoken = yychar == DAS_YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, scanner, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= DAS_YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == DAS_YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, scanner);
          yychar = DAS_YYEMPTY;
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != DAS_YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}



void das_yyfatalerror ( DAS_YYLTYPE * lloc, yyscan_t scanner, const string & error, CompilationError cerr ) {
    yyextra->g_Program->error(error,"","",LineInfo(yyextra->g_FileAccessStack.back(),
        lloc->first_column,lloc->first_line,lloc->last_column,lloc->last_line),cerr);
}

void das_yyerror ( DAS_YYLTYPE * lloc, yyscan_t scanner, const string & error ) {
    if ( !yyextra->das_supress_errors ) {
        yyextra->g_Program->error(error,"","",LineInfo(yyextra->g_FileAccessStack.back(),
            lloc->first_column,lloc->first_line,lloc->last_column,lloc->last_line),
                CompilationError::syntax_error);
    }
}

LineInfo tokAt ( yyscan_t scanner, const struct DAS_YYLTYPE & li ) {
    return LineInfo(yyextra->g_FileAccessStack.back(),
        li.first_column,li.first_line,
        li.last_column,li.last_line);
}

LineInfo tokRangeAt ( yyscan_t scanner, const struct DAS_YYLTYPE & li, const struct DAS_YYLTYPE & lie ) {
    return LineInfo(yyextra->g_FileAccessStack.back(),
        li.first_column,li.first_line,
        lie.last_column,lie.last_line);
}


