/*
Function push() insert value to a stack.
New value will be on the top of stack.
Input a stack pointer to argument and a value to input.
*/
#include "struct.cpp"

void push(elem* &stos, int x)
{
    elem* nowy = new elem;
    nowy->dane = x;
    nowy->nast = stos;
    stos = nowy;
}
