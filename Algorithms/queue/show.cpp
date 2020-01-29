#include "struct.cpp"

void print(elem* pocz)
{
    elem* tmp = pocz;
    while (tmp != NULL)
    {
        if (tmp != pocz)
        {
            cout << " <- ";
        }
        cout << tmp->dane;
        tmp = tmp->nast;
    }
    cout << endl;
}