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

void obroc(elem* &stos1, elem* &stos2)
{
    int tmp = 0;
    elem* stop = NULL;
    while(stop!=stos1)
    {
        tmp=pop(stos1);
        while(stos1!=stop)
        {
            push(stos2,pop(stos1));
        }
        push(stos1,tmp);
        stop=stos1;
        while(stos2!=NULL)
        {
            push(stos1,pop(stos2));
        }
    }
}