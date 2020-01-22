#include <iostream>
using namespace std;

int main() {
    float dochodMiesiac;
    float sumaDochodow=0;
    float dochowSredni;
    float min=0;
    float max=0;
    int miesiace;
    cout<<"Podaj liczbe miesiecy do zliczania"<<endl;
    cin>>miesiace;
    cout<<"Podaj miesieczne przyrosty"<<endl;
    do {
        for (int i = 0; i < miesiace; i++) {
            cout << i + 1 << ":";
            cin >> dochodMiesiac;
            sumaDochodow = sumaDochodow + dochodMiesiac;
            if (min == 0) {
                min = dochodMiesiac;
            }
            if (dochodMiesiac < min) {
                min = dochodMiesiac;
            } else if (dochodMiesiac > max) {
                max = dochodMiesiac;
            }
        }
        cin.ignore();
        cout << "Dochod roczny = " << sumaDochodow << endl;
        dochowSredni = sumaDochodow / miesiace;
        cout << "Sredni dochow miesieczny " << dochowSredni << endl;
        cout << "Dochod miesieczny minimalny " << min << endl;
        cout << "Dochod miesieczny maksymalny " << max << endl;
        cout << "Nacisnij enter aby zakonczyc" << endl;
    }
    while(cin.get() != '\n');

}