# define INT 257
# define CHAR 258
# define STRING 259
# define IF 260
# define ELSE 261
# define WHILE 262
# define DO 263
# define FOR 264
# define SWITCH 265
# define CASE 266
# define DEFAULT 267
# define BREAK 268
# define ESWITCH 269
# define RETURN 270
# define PERSISTENT 271
# define GET 272
# define SET 273
# define IDENT 274
# define STRINGCONST 275
# define CHARCONST 276
# define INTCONST 277
# define FLOATCONST 278
# define AND 279
# define OR 280
# define EQ 281
# define NE 282
# define PLUS_ASSERT 283
# define MINUS_ASSERT 284
# define MULT_ASSERT 285
# define DIV_ASSERT 286
# define MOD_ASSERT 287
# define LT 288
# define LE 289
# define GT 290
# define GE 291
# define UMINUS 292
# define INC 293
# define DEC 294

typedef union  {
	struct AST	*p;		/* an AST node	*/
	int		i;
	float		f;
	char		c;
	char		*s;
} YYSTYPE;
extern YYSTYPE yylval;
