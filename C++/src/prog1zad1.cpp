#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    do{

    int liczba;

        cout << "Przeliczam dlugosc wyrazona w metrach na: cale, stopy, jardy i mile " << endl;
        cout << "Podaj dlugosc w metrach: ";
        cin >> liczba;

        double cale = liczba * 39.3700787;
        double stopy = liczba * 3.2808399;
        double jardy = liczba * 1.0936133;
        double mile = liczba * 0.000621371192;
        double saznieNP = liczba * 1.1728;
        double mileMorkie = liczba * 0.0005399568;
        double angstremy = liczba*10000000000;
        double kable = liczba*185.2;
        double lokcie = liczba*(2*3.2808399);
        double wiorsty = liczba*0.00013993842;
        cout<<fixed<<showpoint;

        cout << "cale: " << setprecision(4) << cale << endl;
        cout << "stopy: " << setprecision(4) << stopy << endl;
        cout << "jardy: " << setprecision(4) << jardy << endl;
        cout << "mile: " << setprecision(4) << mile << endl;
        cout << "saznie Nowopolskie: " << setprecision(4) << saznieNP << endl;
        cout << "mile morskie: " << setprecision(4) << mileMorkie << endl;
        cout << "angstremy: " << setprecision(4) << angstremy << endl;
        cout << "kable: " << setprecision(4) << kable << endl;
        cout << "lokcie: " << setprecision(4) << lokcie << endl;
        cout << "wiorsty: " << setprecision(4) << wiorsty << endl;

        cin.ignore();
        cout<<"Nacisnij 'p' by powtorzyc obliczenia, inny klawisz by zakonczyc..."<<endl;
    }
    while (cin.get() == 'p');

}