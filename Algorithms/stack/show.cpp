/*
Function print() show all values on a stack.
Stack in c++ is LIFO structure. Last in first out.
First input value is on he bottom. Last on the top.
Input a stack pointer to argument.
*/
#include "struct.cpp"

void print(elem* stos)
{
    elem* tmp = stos;
    while (tmp != NULL)
    {
        if (tmp != stos)
        {
            cout << " <- ";
        }
        cout << tmp->dane;
        tmp = tmp->nast;
    }
    cout << endl;
}
