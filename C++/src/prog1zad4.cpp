#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    do {
        int licznik;
        int ograniczenie;
        cout << "Witaj w grze 'Za duzo, za malo'. Wpisz do jakiej liczby od 0 chcesz losowac" << endl;
        cin >> ograniczenie;
        srand(time(NULL));
        int random = rand() % ograniczenie + 1;
        int liczba;
        cout << random << endl;
        cout << "Odgadnij wylosowana liczbe (od 1 do " << ograniczenie << ")" << endl;
        cin >> liczba;

        while (liczba != random) {
            if (liczba < random) {
                licznik++;
                cout << "Za malo" << endl;
                cin >> liczba;
            } else if (liczba > random) {
                licznik++;
                cout << "Za duzo" << endl;
                cin >> liczba;
            }
        }
        if(liczba == random) {
            cout << "Brawo, to ta liczba!" << endl;
            cout <<"Liczba prob:"<< licznik+1<<endl;
        }
        cout << "Chcesz zagrac jeszcze raz? (t/n)" << endl;
        cin.ignore();
    } while (cin.get() == 't');
}
