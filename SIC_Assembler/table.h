#pragma once
#define TABLE_CHAR_LINE 10

typedef struct _LOCCTR {
	char loc[TABLE_CHAR_LINE];
} LOCCTR;

typedef struct _Symbol_Table {
	char label[TABLE_CHAR_LINE];
	char location[TABLE_CHAR_LINE];
	int error_flag;
} Symbol;

typedef struct _MIS {
	char mnemonic[TABLE_CHAR_LINE];
	char code[TABLE_CHAR_LINE];
} MIS;

static MIS OPTAB[59] = {
	{"ADD", "18"},{"ADDF", "58"},{"ADDR","90"},{"AND","40"},
	{"CLEAR","B4"},{"COMP","28"},{"COMPF","88"},{"COMPR","A0"},
	{"DIV","24"},{"DIVF","64"},{"DIVR","9C"},{"FIX","C4"},
	{"FLOAT","C0"},{"HIO","F4"},{"J","3C"},{"JEQ","30"},
	{"JQT","34"},{"JLT","38"},{"JSUB","48"},{"LDA","00"},
	{"LDB","68"},{"LDCH","50"},{"LDF","70"},{"LDL","08"},
	{"LDS","6C"},{"LDT","74"},{"LDX","04"},{"LPS","D0"},
	{"MUL","20"},{"MULF","60"},{"MULR","98"},{"NORM","C8"},
	{"OR","44"},{"RD","D8"},{"RMO","AC"},{"RSUB","4C"},
	{"SHIFTL","A4"},{"SHIFTR","A8"},{"SIO","F0"},{"SSK","EC"},
	{"STA","0C"},{"STB","78"},{"STCH","54"},{"STF","80"},
	{"STI","D4"},{"STL","14"},{"STS","7C"},{"STSW","E8"},
	{"STT","84"},{"STX","10"},{"SUB","1C"},{"SUBF","5C"},
	{"SUBR","94"},{"SVC","B0"},{"TD","E0"},{"TIO","F8"},
	{"TIX","2C"},{"TIXR","B8"},{"WD","DC"}
};