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

void zmiana_stosow(elem* &stos1,elem* &stos2,elem* &stos3)
{
    while(stos1!=NULL)
        push(stos3,pop(stos1));
    while(stos3!=NULL)
        push(stos2,pop(stos3));
}