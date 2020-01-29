/*
Function topEl() return last(top) value on a stack.
Stack in c++ is LIFO structure. Last in first out.
First input value is on he bottom. Last on the top.
Input a stack pointer to argument.
*/
#include "struct.cpp"

int topEl(elem* &stos)
{
    if (stos!=NULL)
    {
        int wynik = stos->dane;
        return wynik;
    }
    else
        throw "Pusty stos";
}
