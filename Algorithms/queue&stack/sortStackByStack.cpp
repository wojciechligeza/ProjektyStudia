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

int topEl(elem* &stos)
{
    if (stos!=NULL)
    {
        int wynik = stos->dane;
        return wynik;
    }
    else
        throw runtime_error("Pusty stos");
}

void minimalna_kolejnosc(elem* &stos1,elem* &stos2)
{
    elem* stop = NULL;
    int min = 0;
    while(stos1!=stop)
    {
        min = pop(stos1);
        while(stos1!=stop)
        {
            if (topEl(stos1)<min)
            {
                push(stos2,min);
                min=pop(stos2);
            }
            else push(stos2,pop(stos1));
        }
        push(stos1,min);
        stop=stos1;
        while(stos2!=NULL)
            push(stos1,pop(stos2));
    }
}