#include "struct.cpp"

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