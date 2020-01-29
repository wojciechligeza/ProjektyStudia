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

void add(elem* &stos1, elem* &stos2, int x)
{
    push(stos2,x);
}

int next(elem* &stos1, elem* &stos2)
{
    if(stos1!=NULL) return pop(stos1);
    else
    {
        while (stos2!=NULL)
        {
            push(stos1,pop(stos2));
        }
        if(stos1!=NULL) return pop(stos1);
        else throw runtime_error("Pusta kolejka");
    }
}