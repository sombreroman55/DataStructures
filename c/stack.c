/* C language implementation of a stack data structure
 * Probably a somewhat naive implementation in terms
 * of trying to facilitate functionality for "generic"
 * data type stacks by creating a stack for each primitive
 * data types. Perhaps later I will try for an even more
 * generic approach so as to allow user defined data types
 * to be used as well.
 */
#include <stdlib.h>
#include <string.h>
#include "../include/stack.h"

/* ------------------------CHAR----------------------- */
CharStack* newCharStack()
{
    CharStack* cs = malloc(sizeof(CharStack));
    cs->top = -1;
    cs->capacity = 16;
    cs->_stack = malloc(sizeof(char) * capacity);
    return cs;
}

int destroyCharStack(CharStack* cs)
{
    free(cs->_stack);
    free(cs);
    return 0;
}

void expandCharStack(CharStack* cs);
{
    cs->_stack = realloc(cs->_stack, cs->capacity * 2);
    cs->capacity *= 2;
}

int pushCharStack(CharStack* cs, char element)
{
    if (cs->top == cs->capacity-1)
        expandCharStack(cs);
    cs->top++;
    cs->_stack[cs->top] = element;
    return 0;
}

int popCharStack(CharStack* cs)
{
    if (cs->top == -1)  // stack is empty
        return 1;       // return non-zero: failure 
    cs->top--;
    return 0;
}

char topCharStack(CharStack* cs)
{
    if (cs->top == -1)
        return '\0';
    return (cs->_stack[cs->top]);
}

/* ----------------------STRING----------------------- */
StringStack* newStringStack()
{
    StringStack* ss = malloc(sizeof(StringStack));
    ss->top = -1;
    ss->capacity = 16;
    ss->_stack = malloc(sizeof(char*) * ss->capacity);
    return ss;
}

int destroyStringStack(StringStack* ss)
{
    int i;
    for (i = 0; i < ss->capacity; i++)
    {
        free(ss->_stack[i]);
    }
    free(ss->_stack);
    free(ss);
}

void expandStringStack(StringStack* ss)
{
    ss->_stack = realloc(ss->_stack, ss->capacity * 2);
    ss->capacity *= 2;
}

int pushStringStack(StringStack* ss, char* element)
{
    if (ss->top == ss->capacity-1)
        expandStringStack(ss);
    ss->top++;
    ss->_stack[ss->top] = malloc(sizeof(element));
    memcpy(ss->stack[ss->top], element);
    return 0;
}

int popStringStack(StringStack* ss)
{
}

char* topStringStack(StringStack* ss)
{
}

/* ------------------------INT----------------------- */
IntStack* newIntStack()
{
    IntStack* is = malloc(sizeof(IntStack));
    is->top = -1;
    is->capacity = 16;
    is->_stack = malloc(sizeof(int) * capacity);
    return is;
}

int destroyIntStack(IntStack* is);
void expandIntStack(IntStack* is);
int pushIntStack(IntStack* is, int element);
int popIntStack(IntStack* is);
int topIntStack(IntStack* is);

/* ------------------------UINT----------------------- */
UIStack* newUIStack()
int destroyUIStack(UIStack* uis);
void expandUIStack(UIStack* uis);
int pushUIStack(UIStack* uis, ui element);
int popUIStack(UIStack* uis);
ui topUIStack(UIStack* uis);

/* ------------------------LONG----------------------- */
LongStack* newLongStack()
int destroyLongStack(LongStack* cs);
void expandLongStack(LongStack* cs);
int pushLongStack(LongStack* cs, char element);
int popLongStack(LongStack* cs);
int topLongStack(LongStack* cs);

/* --------------------LONG LONG---------------------- */
LLStack* newLLStack()
int destroyLLStack(LLStack* cs);
void expandLLStack(LLStack* cs);
int pushLLStack(LLStack* cs, ll element);
int popLLStack(LLStack* cs);
ll topLLStack(LLStack* cs);

/* -----------------------ULONG----------------------- */
ULStack* newULStack()
int destroyULStack(ULStack* cs);
void expandULStack(ULStack* cs);
int pushULStack(ULStack* cs, ul element);
int popULStack(ULStack* cs);
ul topULStack(ULStack* cs);

/* ------------------UNSIGNED LONG LONG--------------- */
ULLStack* newULLStack()
int destroyULLStack(ULLStack* cs);
void expandULLStack(ULLStack* cs);
int pushULLStack(ULLStack* cs, ull element);
int popULLStack(ULLStack* cs);
ull topULLStack(ULLStack* cs);

/* -----------------------FLOAT----------------------- */
FloatStack* newFloatStack()
int destroyFloatStack(FloatStack* cs);
void expandFloatStack(FloatStack* cs);
int pushFloatStack(FloatStack* cs, float element);
int popFloatStack(FloatStack* cs);
float topFloatStack(FloatStack* cs);

/* ----------------------DOUBLE----------------------- */
DoubleStack* newDoubleStack()
int destroyDoubleStack(DoubleStack* cs);
void expandDoubleStack(DoubleStack* cs);
int pushDoubleStack(DoubleStack* cs, double element);
int popDoubleStack(DoubleStack* cs);
double topDoubleStack(DoubleStack* cs);

