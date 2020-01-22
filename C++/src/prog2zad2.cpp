#include <iostream>
using namespace std;
int main() {
    float ocena;
    float suma = 0;
    float srednia;
    float min = 0;
    float max = 0;
    float sumaOblicz;
    int liczbaSedizow;

    do {
        cout << "Podaj liczbe sedziow od 3 do 10" << endl;
        for (int i = 0; i < 1; i++) {
            cin >> liczbaSedizow;
            while (liczbaSedizow < 3 || liczbaSedizow > 10) {
                cout << "bledna liczba sedziow, podaj jeszcze raz" << endl;
                cin >> liczbaSedizow;
            }
        }
        cout << "Podaj oceny sedziow od 0 do 10" << endl;
        for (int i = 0; i < liczbaSedizow; i++) {
            cout << i + 1 << ": ";
            cin >> ocena;
            while (ocena < 0 || ocena > 10) {
                cout << "bledna ocena, podaj jeszcze raz" << endl;
                cout << i + 1 << ": " << endl;
                cin >> ocena;
            }
            if (min == 0 && max == 0) {
                min = ocena;
                max = ocena;
            }
            if (ocena < min) {
                min = ocena;
            }
            if (ocena > max) {
                max = ocena;
            }
            suma = suma + ocena;
        }
        sumaOblicz = suma - min - max;
        srednia = sumaOblicz/(liczbaSedizow-2);
        cout << "Suma " << suma << endl;
        cout << "Min: " << min << endl;
        cout << "Max: " << max << endl;
        cout << "Suma do obliczenia: " << sumaOblicz << endl;
        cout<<"Srednia bez max, min: " << srednia << endl;
        cin.ignore();
        cout<<"Nacisnij enter aby zakonczyc"<<endl;
    }
    while(cin.get() != '\n');
}