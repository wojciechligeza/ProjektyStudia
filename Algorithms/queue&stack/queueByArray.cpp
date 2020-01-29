#include "struct.cpp"

const int N = 100;
int kolejka[N];
int kon = 0, pocz = 0, rozm = 0;

void add(int x)
{
    if (rozm==N) cout<<"Kolejka jest pełna";
    else
    {
        kolejka[kon] = x;
        rozm++;
        kon++;
        if (kon==N) kon=0;
    }
}

int next()
{
    if (rozm==0) throw runtime_error("Pusty stos");
    else
    {
        int wynik = kolejka[pocz];
        rozm--;
        pocz++;
        if (pocz==N) pocz=0;
        return wynik;
    }
}