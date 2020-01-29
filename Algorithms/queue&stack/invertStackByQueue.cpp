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

int next(elem* & pocz, elem* &kon)
{
    if(pocz!=NULL)
    {
        elem* stary = pocz;
        int wynik = stary->dane;
        if (pocz==kon) kon=NULL;
        pocz = stary->nast;
        delete stary;
        return wynik;
    }
    else
    {
        throw runtime_error("Pusta kolejka");
    }
}

void add(elem* &pocz, elem* &kon, int x)
{
    if(kon!=NULL)
    {
        elem* nowy = new elem;
        nowy->dane = x;
        nowy->nast = NULL;
        kon->nast = nowy;
        kon = nowy;
    }
    else
    {
        elem* nowy = new elem;
        nowy->dane = x;
        nowy->nast = NULL;
        kon = nowy;
        pocz = nowy;
    }
}


void obroc(elem* &stos, elem* &pocz, elem* &kon)
{
    while(stos!=NULL)
    {
        add(pocz, kon, pop(stos));
    }
    while(kon!=NULL)
    {
        push(stos,next(pocz,kon));
    }
}