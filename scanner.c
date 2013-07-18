/* Generated by re2c 0.13.5 on Wed Jul 17 22:38:31 2013 */
// 1 "scanner.re"


#include "string.h"
#include "scanner.h"

#define YYCTYPE unsigned char
#define YYCURSOR (s->start)
#define YYLIMIT (s->end)
#define YYMARKER q

int xx_get_token(xx_scanner_state *s, xx_scanner_token *token) {

	char next, *q = YYCURSOR, *start = YYCURSOR;
	int status = XX_SCANNER_RETCODE_IMPOSSIBLE;

	while (XX_SCANNER_RETCODE_IMPOSSIBLE == status) {

		
// 22 "scanner.c"
		{
			YYCTYPE yych;
			unsigned int yyaccept = 0;

			yych = *YYCURSOR;
			switch (yych) {
			case 0x00:	goto yy54;
			case '\t':
			case '\r':
			case ' ':	goto yy50;
			case '\n':	goto yy52;
			case '"':	goto yy19;
			case '\'':	goto yy20;
			case '(':	goto yy24;
			case ')':	goto yy26;
			case ',':	goto yy48;
			case '-':	goto yy2;
			case '/':	goto yy21;
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto yy4;
			case ':':	goto yy44;
			case ';':	goto yy46;
			case '<':	goto yy40;
			case '=':	goto yy38;
			case '>':	goto yy42;
			case '@':	goto yy36;
			case 'A':
			case 'G':
			case 'H':
			case 'J':
			case 'K':
			case 'M':
			case 'O':
			case 'Q':
			case 'R':
			case 'U':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case 'a':
			case 'g':
			case 'h':
			case 'j':
			case 'k':
			case 'm':
			case 'o':
			case 'q':
			case 'r':
			case 'u':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy23;
			case 'B':
			case 'b':	goto yy16;
			case 'C':
			case 'c':	goto yy10;
			case 'D':
			case 'd':	goto yy15;
			case 'E':
			case 'e':	goto yy11;
			case 'F':
			case 'f':	goto yy8;
			case 'I':
			case 'i':	goto yy14;
			case 'L':
			case 'l':	goto yy13;
			case 'N':
			case 'n':	goto yy6;
			case 'P':
			case 'p':	goto yy12;
			case 'S':
			case 's':	goto yy17;
			case 'T':
			case 't':	goto yy9;
			case 'V':
			case 'v':	goto yy18;
			case '[':	goto yy32;
			case '\\':
			case '_':	goto yy22;
			case ']':	goto yy34;
			case '{':	goto yy28;
			case '}':	goto yy30;
			default:	goto yy56;
			}
yy2:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto yy169;
			default:	goto yy3;
			}
yy3:
// 238 "scanner.re"
			{
			status = XX_SCANNER_RETCODE_ERR;
			break;
		}
// 138 "scanner.c"
yy4:
			yyaccept = 0;
			yych = *(YYMARKER = ++YYCURSOR);
			goto yy170;
yy5:
// 23 "scanner.re"
			{
			token->opcode = XX_T_INTEGER;
			token->value = strndup(start, YYCURSOR - start);
			token->len = YYCURSOR - start;
			q = YYCURSOR;
			return 0;
		}
// 152 "scanner.c"
yy6:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case 'A':
			case 'a':	goto yy155;
			case 'U':
			case 'u':	goto yy156;
			default:	goto yy60;
			}
yy7:
// 149 "scanner.re"
			{
			token->opcode = XX_T_IDENTIFIER;
			token->value = strndup(start, YYCURSOR - start);
			token->len = YYCURSOR - start;
			q = YYCURSOR;
			return 0;
		}
// 171 "scanner.c"
yy8:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'A':
			case 'a':	goto yy140;
			case 'N':
			case 'n':	goto yy141;
			case 'U':
			case 'u':	goto yy143;
			default:	goto yy60;
			}
yy9:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'R':
			case 'r':	goto yy136;
			default:	goto yy60;
			}
yy10:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'L':
			case 'l':	goto yy126;
			case 'O':
			case 'o':	goto yy127;
			default:	goto yy60;
			}
yy11:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'C':
			case 'c':	goto yy115;
			case 'X':
			case 'x':	goto yy116;
			default:	goto yy60;
			}
yy12:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'R':
			case 'r':	goto yy100;
			case 'U':
			case 'u':	goto yy101;
			default:	goto yy60;
			}
yy13:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'E':
			case 'e':	goto yy97;
			default:	goto yy60;
			}
yy14:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'N':
			case 'n':	goto yy94;
			default:	goto yy60;
			}
yy15:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'O':
			case 'o':	goto yy88;
			default:	goto yy60;
			}
yy16:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'O':
			case 'o':	goto yy84;
			default:	goto yy60;
			}
yy17:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'T':
			case 't':	goto yy78;
			default:	goto yy60;
			}
yy18:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'A':
			case 'a':	goto yy75;
			default:	goto yy60;
			}
yy19:
			yyaccept = 1;
			yych = *(YYMARKER = ++YYCURSOR);
			if (yych <= 0x00) goto yy3;
			goto yy73;
yy20:
			yyaccept = 1;
			yych = *(YYMARKER = ++YYCURSOR);
			if (yych <= 0x00) goto yy3;
			goto yy68;
yy21:
			yyaccept = 1;
			yych = *(YYMARKER = ++YYCURSOR);
			switch (yych) {
			case '*':	goto yy61;
			default:	goto yy3;
			}
yy22:
			yych = *++YYCURSOR;
			goto yy60;
yy23:
			yych = *++YYCURSOR;
			goto yy60;
yy24:
			++YYCURSOR;
// 157 "scanner.re"
			{
			token->opcode = XX_T_PARENTHESES_OPEN;
			return 0;
		}
// 289 "scanner.c"
yy26:
			++YYCURSOR;
// 162 "scanner.re"
			{
			token->opcode = XX_T_PARENTHESES_CLOSE;
			return 0;
		}
// 297 "scanner.c"
yy28:
			++YYCURSOR;
// 167 "scanner.re"
			{
			token->opcode = XX_T_BRACKET_OPEN;
			return 0;
		}
// 305 "scanner.c"
yy30:
			++YYCURSOR;
// 172 "scanner.re"
			{
			token->opcode = XX_T_BRACKET_CLOSE;
			return 0;
		}
// 313 "scanner.c"
yy32:
			++YYCURSOR;
// 177 "scanner.re"
			{
			token->opcode = XX_T_SBRACKET_OPEN;
			return 0;
		}
// 321 "scanner.c"
yy34:
			++YYCURSOR;
// 182 "scanner.re"
			{
			token->opcode = XX_T_SBRACKET_CLOSE;
			return 0;
		}
// 329 "scanner.c"
yy36:
			++YYCURSOR;
// 187 "scanner.re"
			{
			token->opcode = XX_T_AT;
			return 0;
		}
// 337 "scanner.c"
yy38:
			++YYCURSOR;
// 192 "scanner.re"
			{
			token->opcode = XX_T_ASSIGN;
			return 0;
		}
// 345 "scanner.c"
yy40:
			++YYCURSOR;
// 197 "scanner.re"
			{
			token->opcode = XX_T_LESS;
			return 0;
		}
// 353 "scanner.c"
yy42:
			++YYCURSOR;
// 202 "scanner.re"
			{
			token->opcode = XX_T_GREATER;
			return 0;
		}
// 361 "scanner.c"
yy44:
			++YYCURSOR;
// 207 "scanner.re"
			{
			token->opcode = XX_T_COLON;
			return 0;
		}
// 369 "scanner.c"
yy46:
			++YYCURSOR;
// 212 "scanner.re"
			{
			token->opcode = XX_T_DOTCOMMA;
			return 0;
		}
// 377 "scanner.c"
yy48:
			++YYCURSOR;
// 217 "scanner.re"
			{
			token->opcode = XX_T_COMMA;
			return 0;
		}
// 385 "scanner.c"
yy50:
			++YYCURSOR;
			yych = *YYCURSOR;
			goto yy58;
yy51:
// 222 "scanner.re"
			{
			token->opcode = XX_T_IGNORE;
			return 0;
		}
// 396 "scanner.c"
yy52:
			++YYCURSOR;
// 227 "scanner.re"
			{
			s->active_line++;
			token->opcode = XX_T_IGNORE;
			return 0;
		}
// 405 "scanner.c"
yy54:
			++YYCURSOR;
// 233 "scanner.re"
			{
			status = XX_SCANNER_RETCODE_EOF;
			break;
		}
// 413 "scanner.c"
yy56:
			yych = *++YYCURSOR;
			goto yy3;
yy57:
			++YYCURSOR;
			yych = *YYCURSOR;
yy58:
			switch (yych) {
			case '\t':
			case '\r':
			case ' ':	goto yy57;
			default:	goto yy51;
			}
yy59:
			++YYCURSOR;
			yych = *YYCURSOR;
yy60:
			switch (yych) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy59;
			default:	goto yy7;
			}
yy61:
			++YYCURSOR;
			yych = *YYCURSOR;
			switch (yych) {
			case 0x00:	goto yy63;
			case '*':	goto yy64;
			default:	goto yy61;
			}
yy63:
			YYCURSOR = YYMARKER;
			switch (yyaccept) {
			case 0: 	goto yy5;
			case 1: 	goto yy3;
			}
yy64:
			yych = *++YYCURSOR;
			switch (yych) {
			case '/':	goto yy65;
			default:	goto yy63;
			}
yy65:
			++YYCURSOR;
// 140 "scanner.re"
			{
			token->opcode = XX_T_COMMENT;
			token->value = strndup(q, YYCURSOR - q - 1);
			token->len = YYCURSOR - q - 1;
			q = YYCURSOR;
			return 0;
		}
// 528 "scanner.c"
yy67:
			++YYCURSOR;
			yych = *YYCURSOR;
yy68:
			switch (yych) {
			case 0x00:	goto yy63;
			case '\'':	goto yy70;
			case '\\':	goto yy69;
			default:	goto yy67;
			}
yy69:
			++YYCURSOR;
			yych = *YYCURSOR;
			switch (yych) {
			case '\n':	goto yy63;
			default:	goto yy67;
			}
yy70:
			++YYCURSOR;
// 131 "scanner.re"
			{
			token->opcode = XX_T_STRING;
			token->value = strndup(q, YYCURSOR - q - 1);
			token->len = YYCURSOR - q - 1;
			q = YYCURSOR;
			return 0;
		}
// 556 "scanner.c"
yy72:
			++YYCURSOR;
			yych = *YYCURSOR;
yy73:
			switch (yych) {
			case 0x00:	goto yy63;
			case '"':	goto yy70;
			case '\\':	goto yy74;
			default:	goto yy72;
			}
yy74:
			++YYCURSOR;
			yych = *YYCURSOR;
			switch (yych) {
			case '\n':	goto yy63;
			default:	goto yy72;
			}
yy75:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'R':
			case 'r':	goto yy76;
			default:	goto yy60;
			}
yy76:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy59;
			default:	goto yy77;
			}
yy77:
// 125 "scanner.re"
			{
			token->opcode = XX_T_TYPE_VAR;
			return 0;
		}
// 656 "scanner.c"
yy78:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'R':
			case 'r':	goto yy79;
			default:	goto yy60;
			}
yy79:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'I':
			case 'i':	goto yy80;
			default:	goto yy60;
			}
yy80:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'N':
			case 'n':	goto yy81;
			default:	goto yy60;
			}
yy81:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'G':
			case 'g':	goto yy82;
			default:	goto yy60;
			}
yy82:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy59;
			default:	goto yy83;
			}
yy83:
// 120 "scanner.re"
			{
			token->opcode = XX_T_TYPE_STRING;
			return 0;
		}
// 760 "scanner.c"
yy84:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'O':
			case 'o':	goto yy85;
			default:	goto yy60;
			}
yy85:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'L':
			case 'l':	goto yy86;
			default:	goto yy60;
			}
yy86:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy59;
			default:	goto yy87;
			}
yy87:
// 115 "scanner.re"
			{
			token->opcode = XX_T_TYPE_BOOL;
			return 0;
		}
// 850 "scanner.c"
yy88:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'U':
			case 'u':	goto yy89;
			default:	goto yy60;
			}
yy89:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'B':
			case 'b':	goto yy90;
			default:	goto yy60;
			}
yy90:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'L':
			case 'l':	goto yy91;
			default:	goto yy60;
			}
yy91:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'E':
			case 'e':	goto yy92;
			default:	goto yy60;
			}
yy92:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy59;
			default:	goto yy93;
			}
yy93:
// 110 "scanner.re"
			{
			token->opcode = XX_T_TYPE_DOUBLE;
			return 0;
		}
// 954 "scanner.c"
yy94:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'T':
			case 't':	goto yy95;
			default:	goto yy60;
			}
yy95:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy59;
			default:	goto yy96;
			}
yy96:
// 105 "scanner.re"
			{
			token->opcode = XX_T_TYPE_INTEGER;
			return 0;
		}
// 1037 "scanner.c"
yy97:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'T':
			case 't':	goto yy98;
			default:	goto yy60;
			}
yy98:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy59;
			default:	goto yy99;
			}
yy99:
// 90 "scanner.re"
			{
			token->opcode = XX_T_LET;
			return 0;
		}
// 1120 "scanner.c"
yy100:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'O':
			case 'o':	goto yy107;
			default:	goto yy60;
			}
yy101:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'B':
			case 'b':	goto yy102;
			default:	goto yy60;
			}
yy102:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'L':
			case 'l':	goto yy103;
			default:	goto yy60;
			}
yy103:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'I':
			case 'i':	goto yy104;
			default:	goto yy60;
			}
yy104:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'C':
			case 'c':	goto yy105;
			default:	goto yy60;
			}
yy105:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy59;
			default:	goto yy106;
			}
yy106:
// 70 "scanner.re"
			{
			token->opcode = XX_T_PUBLIC;
			return 0;
		}
// 1231 "scanner.c"
yy107:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'T':
			case 't':	goto yy108;
			default:	goto yy60;
			}
yy108:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'E':
			case 'e':	goto yy109;
			default:	goto yy60;
			}
yy109:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'C':
			case 'c':	goto yy110;
			default:	goto yy60;
			}
yy110:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'T':
			case 't':	goto yy111;
			default:	goto yy60;
			}
yy111:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'E':
			case 'e':	goto yy112;
			default:	goto yy60;
			}
yy112:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'D':
			case 'd':	goto yy113;
			default:	goto yy60;
			}
yy113:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy59;
			default:	goto yy114;
			}
yy114:
// 75 "scanner.re"
			{
			token->opcode = XX_T_PROTECTED;
			return 0;
		}
// 1349 "scanner.c"
yy115:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'H':
			case 'h':	goto yy123;
			default:	goto yy60;
			}
yy116:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'T':
			case 't':	goto yy117;
			default:	goto yy60;
			}
yy117:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'E':
			case 'e':	goto yy118;
			default:	goto yy60;
			}
yy118:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'N':
			case 'n':	goto yy119;
			default:	goto yy60;
			}
yy119:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'D':
			case 'd':	goto yy120;
			default:	goto yy60;
			}
yy120:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'S':
			case 's':	goto yy121;
			default:	goto yy60;
			}
yy121:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy59;
			default:	goto yy122;
			}
yy122:
// 65 "scanner.re"
			{
			token->opcode = XX_T_EXTENDS;
			return 0;
		}
// 1467 "scanner.c"
yy123:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'O':
			case 'o':	goto yy124;
			default:	goto yy60;
			}
yy124:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy59;
			default:	goto yy125;
			}
yy125:
// 95 "scanner.re"
			{
			token->opcode = XX_T_ECHO;
			return 0;
		}
// 1550 "scanner.c"
yy126:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'A':
			case 'a':	goto yy132;
			default:	goto yy60;
			}
yy127:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'N':
			case 'n':	goto yy128;
			default:	goto yy60;
			}
yy128:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'S':
			case 's':	goto yy129;
			default:	goto yy60;
			}
yy129:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'T':
			case 't':	goto yy130;
			default:	goto yy60;
			}
yy130:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy59;
			default:	goto yy131;
			}
yy131:
// 100 "scanner.re"
			{
			token->opcode = XX_T_CONST;
			return 0;
		}
// 1654 "scanner.c"
yy132:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'S':
			case 's':	goto yy133;
			default:	goto yy60;
			}
yy133:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'S':
			case 's':	goto yy134;
			default:	goto yy60;
			}
yy134:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy59;
			default:	goto yy135;
			}
yy135:
// 60 "scanner.re"
			{
			token->opcode = XX_T_CLASS;
			return 0;
		}
// 1744 "scanner.c"
yy136:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'U':
			case 'u':	goto yy137;
			default:	goto yy60;
			}
yy137:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'E':
			case 'e':	goto yy138;
			default:	goto yy60;
			}
yy138:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy59;
			default:	goto yy139;
			}
yy139:
// 50 "scanner.re"
			{
			token->opcode = XX_T_TRUE;
			return 0;
		}
// 1834 "scanner.c"
yy140:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'L':
			case 'l':	goto yy151;
			default:	goto yy60;
			}
yy141:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy59;
			default:	goto yy142;
			}
yy142:
// 85 "scanner.re"
			{
			token->opcode = XX_T_FUNCTION;
			return 0;
		}
// 1917 "scanner.c"
yy143:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'N':
			case 'n':	goto yy144;
			default:	goto yy60;
			}
yy144:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'C':
			case 'c':	goto yy145;
			default:	goto yy60;
			}
yy145:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'T':
			case 't':	goto yy146;
			default:	goto yy60;
			}
yy146:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'I':
			case 'i':	goto yy147;
			default:	goto yy60;
			}
yy147:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'O':
			case 'o':	goto yy148;
			default:	goto yy60;
			}
yy148:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'N':
			case 'n':	goto yy149;
			default:	goto yy60;
			}
yy149:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy59;
			default:	goto yy150;
			}
yy150:
// 80 "scanner.re"
			{
			token->opcode = XX_T_FUNCTION;
			return 0;
		}
// 2035 "scanner.c"
yy151:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'S':
			case 's':	goto yy152;
			default:	goto yy60;
			}
yy152:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'E':
			case 'e':	goto yy153;
			default:	goto yy60;
			}
yy153:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy59;
			default:	goto yy154;
			}
yy154:
// 45 "scanner.re"
			{
			token->opcode = XX_T_FALSE;
			return 0;
		}
// 2125 "scanner.c"
yy155:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'M':
			case 'm':	goto yy160;
			default:	goto yy60;
			}
yy156:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'L':
			case 'l':	goto yy157;
			default:	goto yy60;
			}
yy157:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'L':
			case 'l':	goto yy158;
			default:	goto yy60;
			}
yy158:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy59;
			default:	goto yy159;
			}
yy159:
// 40 "scanner.re"
			{
			token->opcode = XX_T_NULL;
			return 0;
		}
// 2222 "scanner.c"
yy160:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'E':
			case 'e':	goto yy161;
			default:	goto yy60;
			}
yy161:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'S':
			case 's':	goto yy162;
			default:	goto yy60;
			}
yy162:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'P':
			case 'p':	goto yy163;
			default:	goto yy60;
			}
yy163:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'A':
			case 'a':	goto yy164;
			default:	goto yy60;
			}
yy164:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'C':
			case 'c':	goto yy165;
			default:	goto yy60;
			}
yy165:
			yych = *++YYCURSOR;
			switch (yych) {
			case 'E':
			case 'e':	goto yy166;
			default:	goto yy60;
			}
yy166:
			++YYCURSOR;
			switch ((yych = *YYCURSOR)) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'N':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '\\':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'f':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 't':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto yy59;
			default:	goto yy167;
			}
yy167:
// 55 "scanner.re"
			{
			token->opcode = XX_T_NAMESPACE;
			return 0;
		}
// 2340 "scanner.c"
yy168:
			yych = *++YYCURSOR;
			switch (yych) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto yy171;
			default:	goto yy63;
			}
yy169:
			yyaccept = 0;
			YYMARKER = ++YYCURSOR;
			yych = *YYCURSOR;
yy170:
			switch (yych) {
			case '.':	goto yy168;
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto yy169;
			default:	goto yy5;
			}
yy171:
			++YYCURSOR;
			yych = *YYCURSOR;
			switch (yych) {
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto yy171;
			default:	goto yy173;
			}
yy173:
// 32 "scanner.re"
			{
			token->opcode = XX_T_DOUBLE;
			token->value = strndup(start, YYCURSOR - start);
			token->len = YYCURSOR - start;
			q = YYCURSOR;
			return 0;
		}
// 2400 "scanner.c"
		}
// 243 "scanner.re"

	}

	return status;
}
