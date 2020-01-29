/*
Function pop() recives value from a stack.
Pop recive a value and delete it from stack.
Input a stack pointer to argument.
*/
#include "struct.cpp"

int pop(elem* &stos)
{
    if (stos!=NULL)
    {
        elem* stary = stos;
        int wynik = stos->dane;
        stos = stos->nast;
        delete stary;
        return wynik;
    }
    else
        throw "Pusty stos";
}
