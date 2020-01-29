#include "struct.cpp"

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