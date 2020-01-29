#include "struct.cpp"

int firstEl(elem* pocz)
{
    if(pocz!=NULL)
    {
        int wynik = pocz->dane;
        return wynik;
    }
    else
        throw runtime_error("Pusta kolejka");
}