#include <iostream>
using namespace std;

int main() {
    int liczba1;
    int liczba2;
    int wynik;
    char znak;
    do {
        cout << "Wykonuje operacje arytmetyczne na dwoch liczbach." << endl;
        cout << "Podaj pierwsza liczbe: " << endl;
        cin >> liczba1;
        cout << "Podaj dzialanie [+ - * /]:" << endl;
        cin >> znak;
        cout << "Podaj druga liczbe: " << endl;
        cin >> liczba2;
        if (znak == '+') {
            wynik = liczba1 + liczba2;
            cout << "Wynik: " << wynik << endl;
        } else if (znak == '-') {
            wynik = liczba1 - liczba2;
            cout << "Wynik: " << wynik << endl;
        } else if (znak == '*') {
            wynik = liczba1 * liczba2;
            cout << "Wynik: " << wynik << endl;
        } else if (znak == '/' && liczba2 != 0) {
            wynik = liczba1 / liczba2;
            cout << "Wynik: " << wynik << endl;
        } else if (znak == '/' && liczba2 == 0) {
            cout << "Nie dzielimy przez 0" << endl;
        }
        cin.ignore();
        cout<<"Nacisnij 'p' by powtorzyc obliczenia, inny klawisz by zakonczyc..."<<endl;
    }
    while(cin.get() == 'p');
}