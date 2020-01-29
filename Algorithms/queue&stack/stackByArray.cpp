#include "struct.cpp"

const int N = 100;
int stos [N];
int rozm = 0;

void push(int x)
{
    if (rozm==N) cout<<"Stos jest pełny";
    else
    {
        stos [rozm] = x;
        rozm++;
    }
}

int pop()
{
    if (rozm==0) throw runtime_error("Pusta stos");
    else
    {
        rozm--;
        int wynik = stos[rozm];
        return wynik;
    }
}