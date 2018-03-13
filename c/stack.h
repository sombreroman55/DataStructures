/* C language implementation of a stack data structure
 * Probably a somewhat naive implementation in terms
 * of trying to facilitate functionality for "generic"
 * data type stacks by creating a stack for each primitive
 * data types. Perhaps later I will try for an even more
 * generic approach so as to allow user defined data types
 * to be used as well.
 */
#ifndef _STACK_H_
#define _STACK_H_

#define ui unsigned int
#define us unsigned short
#define ul unsigned long
#define ll long long
#define ull unsigned long long

/* char stack 
 * (This will suffice for both unsigned and signed chars for now)
 */

typedef struct {
    char* _stack;
    int top;
    int capacity;
} CharStack;

CharStack* newCharStack();
int destroyCharStack(CharStack* cs);
void expandCharStack(CharStack* cs);
int pushCharStack(CharStack* cs, char element);
int popCharStack(CharStack* cs);
char topCharStack(CharStack* cs);

/* char* (string) stack 
 */

typedef struct {
    char** _stack;
    int top;
    int capacity;
} StringStack;

StringStack* newStringStack();
int destroyStringStack(StringStack* ss);
void expandStringStack(StringStack* ss);
int pushStringStack(StringStack* ss, char* element);
int popStringStack(StringStack* ss);
char* topStringStack(StringStack* ss);

/* int stack */

typedef struct {
    int* _stack;
    int top;
    int capacity;
} IntStack;

IntStack* newIntStack();
int destroyIntStack(IntStack* is);
void expandIntStack(IntStack* is);
int pushIntStack(IntStack* is, int element);
int popIntStack(IntStack* is);
int topIntStack(IntStack* is);

/* unsigned int stack */

typedef struct {
    ui* _stack;
    int top;
    int capacity;
} UIStack;

UIStack* newUIStack();
int destroyUIStack(UIStack* uis);
void expandUIStack(UIStack* uis);
int pushUIStack(UIStack* uis, ui element);
int popUIStack(UIStack* uis);
ui topUIStack(UIStack* uis);

/* long stack */

typedef struct {
    long* _stack;
    int top;
    int capacity;
} LongStack;

LongStack* newLongStack();
int destroyLongStack(LongStack* ls);
void expandLongStack(LongStack* ls);
int pushLongStack(LongStack* ls, char element);
int popLongStack(LongStack* ls);
int topLongStack(LongStack* ls);

/* long long stack */

typedef struct {
    ll* _stack;
    int top;
    int capacity;
} LLStack;

LLStack* newLLStack();
int destroyLLStack(LLStack* lls);
void expandLLStack(LLStack* lls);
int pushLLStack(LLStack* lls, ll element);
int popLLStack(LLStack* lls);
ll topLLStack(LLStack* lls);

/* unsigned long stack */

typedef struct {
    ul* _stack;
    int top;
    int capacity;
} ULStack;

ULStack* newULStack();
int destroyULStack(ULStack* uls);
void expandULStack(ULStack* uls);
int pushULStack(ULStack* uls, ul element);
int popULStack(ULStack* uls);
ul topULStack(ULStack* uls);

/* unsigned long long stack */

typedef struct {
    ull* _stack;
    int top;
    int capacity;
} ULLStack;

ULLStack* newULLStack();
int destroyULLStack(ULLStack* ulls);
void expandULLStack(ULLStack* ulls);
int pushULLStack(ULLStack* ulls, ull element);
int popULLStack(ULLStack* ulls);
ull topULLStack(ULLStack* ulls);

/* float stack */

typedef struct {
    float* _stack;
    int top;
    int capacity;
} FloatStack;

FloatStack* newFloatStack();
int destroyFloatStack(FloatStack* fs);
void expandFloatStack(FloatStack* fs);
int pushFloatStack(FloatStack* fs, float element);
int popFloatStack(FloatStack* fs);
float topFloatStack(FloatStack* fs);

/* double stack */

typedef struct {
    double* _stack;
    int top;
    int capacity;
} DoubleStack;

DoubleStack* newDoubleStack();
int destroyDoubleStack(DoubleStack* ds);
void expandDoubleStack(DoubleStack* ds);
int pushDoubleStack(DoubleStack* ds, double element);
int popDoubleStack(DoubleStack* ds);
double topDoubleStack(DoubleStack* ds);

#endif
