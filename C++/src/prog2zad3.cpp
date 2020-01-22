#include <iostream>
using namespace std;

int main() {
    float czas;
    float najlepszy = 0;
    float najgorszy = 0;
    float sredni = 0;
    float suma = 0;
    float licznik = 0;
    cout << "Program bedzie podawaj czas najlepszy, sredni i najgorszy" << endl;

    do {
        do {
            cout << "Wprowadz czas (wpisz 0 aby zakonczyc)" << endl;
            cin >> czas;
            if (najlepszy == 0 && najgorszy == 0) {
                najgorszy = czas;
                najlepszy = czas;
            }
            if (czas != 0 && czas > 0) {
                if (czas < najgorszy && czas > 0) {
                    najgorszy = czas;
                }
                if (czas > najlepszy && czas > 0) {
                    najlepszy = czas;

                }
                licznik++;
                suma = suma + czas;
                sredni = suma / licznik;
            } else if (czas < 0) {
                cout << "Bledny czas, wpisz ponownie" << endl;
            }

        } while (czas != 0);
        cout << "Najlepszy wynik: " << najlepszy << endl;
        cout << "Najgorszy wynik: " << najgorszy << endl;
        cout << "Sredni wynik: " << sredni << endl;

        cin.ignore();
        cout<<"Wcisnij Enter aby zakonczyc"<<endl;
    } while (cin.get() != '\n');
}