#include <iostream>
using namespace std;

float czytaj_liczbe_z_zakresu(float dol, float gora);

int main() {
    int zakresGora, zakresDol;
    cout<<"Podaj zakres dolny"<<endl;
    cin>>zakresDol;
    cout<<"Podaj zakres gorny"<<endl;
    cin>>zakresGora;
    cout << "Podaj liczbe z zakresu ["<<zakresDol<<" "<<zakresGora <<"]"<< endl;
    czytaj_liczbe_z_zakresu(zakresDol,zakresGora);
}

float czytaj_liczbe_z_zakresu(float dol, float gora) {
    int liczba;
    cin >> liczba;
    do {
        cout << "Bledna liczba, podaj ponownie" << endl;
        cin >> liczba;
    } while (liczba < dol || liczba > gora);
    cout<<"Liczba podana jest poprwana"<<endl;
}