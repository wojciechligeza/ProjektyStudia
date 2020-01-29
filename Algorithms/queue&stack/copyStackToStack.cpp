#include "struct.cpp"

void push(elem* &stos, int x)
{
    elem* nowy = new elem;
    nowy->dane = x;
    nowy->nast = stos;
    stos = nowy;
}

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
    else throw runtime_error("Pusty stos");
}

void move(elem* &stos1, elem* &stos2)
{
    int x, i = 0;
    while (stos1 != NULL)
    {
        while (stos1 != NULL)
        {
            push(stos2, pop(stos1));
            i++;
        }
        int x = pop(stos2);
        i--;
        while (i > 0)
        {
            push(stos1, pop(stos2));
            i--;
        }
        push(stos2, x);
    }
}