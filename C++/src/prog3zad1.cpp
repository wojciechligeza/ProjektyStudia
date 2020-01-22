#include <iostream>
#include <math.h>;
using namespace std;

void wyswietl_menu();
void wyswietl_podmenu();
void obliczenia_do_kwadratu_pole();
void obliczenia_do_kwadratu_obwod();
void obliczenia_do_prostokata_pole();
void obliczenia_do_prostokata_obwod();
void obliczenia_do_kola_pole();
void obliczenia_do_kola_obwod();
void obliczenia_do_trojkata_pole();
void obliczenia_do_trojkata_obwod();
void obliczenia_do_trapezu_pole();
void obliczenia_do_trapezu_obwod();
float pole_kwadratu(float bok);
float obwod_kwadratu(float bok);
float pole_prostokata(float bok_a, float bok_b);
float obwod_prostokata(float bok_a, float bok_b);
float pole_kola(float promien);
float obwod_kola(float promien);
float pole_trojkata(float bok, float wysokosc);
float obwod_trojkata(float bok_a, float bok_b, float bok_c);
float pole_trapezu(float bok_a, float bok_b, float wysokosc);
float obwod_trapezu(float bok_a, float bok_b, float ramie_a, float ramie_b);


int main() {
    char numer;
    char numer2;
    cout << "Obliczam parametry figur plaskich" << endl;
    do {
        wyswietl_menu();
        cin >> numer;
        switch (numer) {
            case '1':
                wyswietl_podmenu();
                cin >> numer2;
                switch (numer2){
                    case '1':
                        obliczenia_do_kwadratu_pole();
                        break;
                    case '2':
                        obliczenia_do_kwadratu_obwod();
                        break;
                }
                break;
            case '2':
                wyswietl_podmenu();
                cin >> numer2;
                switch (numer2){
                    case '1':
                        obliczenia_do_prostokata_pole();
                        break;
                    case '2':
                        obliczenia_do_prostokata_obwod();
                        break;
                }
                break;
            case '3':
                wyswietl_podmenu();
                cin >> numer2;
                switch (numer2){
                    case '1':
                        obliczenia_do_kola_pole();
                        break;
                    case '2':
                        obliczenia_do_kola_obwod();
                        break;
                }
                break;
            case '4':
                wyswietl_podmenu();
                cin >> numer2;
                switch (numer2){
                    case '1':
                        obliczenia_do_trojkata_pole();
                        break;
                    case '2':
                        obliczenia_do_trojkata_obwod();
                        break;
                }
                break;
            case '5':
                wyswietl_podmenu();
                cin >> numer2;
                switch (numer2){
                    case '1':
                        obliczenia_do_trapezu_pole();
                        break;
                    case '2':
                        obliczenia_do_trapezu_obwod();
                        break;
                }
                break;
        }
        cout<<"Nacisnij Enter aby powtorzyc"<<endl;
        cin.ignore();
        if(cin.get() != '\n'){
            numer = 'z';
        }
    }
    while (numer != 'z');
    return EXIT_SUCCESS;
}
void wyswietl_menu(){
    cout<<"1. Kwadrat"<<endl;
    cout<<"2. Prostokat"<<endl;
    cout<<"3. Kolo"<<endl;
    cout<<"4. Trojkat"<<endl;
    cout<<"5. Trapez"<<endl;

    cout<<"Wybierz numer figury"<<endl;
}
void wyswietl_podmenu(){
    cout<<"1. Pole"<<endl;
    cout<<"2. Obwod"<<endl;

    cout<<"Wybierz co chcesz liczyc"<<endl;
}
void obliczenia_do_kwadratu_pole(){
    float bok;
    cout<<"Podaj wartosc boku"<<endl;
    cin>>bok;
    do{
        cout<<"Wartosc zla, wpisz znowu"<<endl;
        cin>>bok;
    }
    while (bok == 0 || bok < 0);
    cout<<"Pole :"<<pole_kwadratu(bok)<<endl;
}
void obliczenia_do_kwadratu_obwod(){
    float bok;
    cout<<"Podaj wartosc boku"<<endl;
    cin>>bok;
    while (bok == 0 || bok < 0){
        cout << "Wartosc zla, wpisz znowu bok"<<endl;
        cin >> bok;
    }
    cout<<"Obwod :"<<obwod_kwadratu(bok)<<endl;
}

float pole_kwadratu(float bok){
    return bok*bok;
}
float obwod_kwadratu(float bok){
    return 4*bok;
}

void obliczenia_do_prostokata_pole(){
    float bok_a;
    float bok_b;
    cout<<"Podaj wartosc boku a"<<endl;
    cin>>bok_a;
    while (bok_a == 0 || bok_a < 0){
        cout<<"Wartosc zla, wpisz znowu bok a"<<endl;
        cin>>bok_a;
    }

    cout<<"Podaj wartosc boku b"<<endl;
    cin>>bok_b;
    while (bok_b == 0 || bok_b < 0){
        cout<<"Wartosc zla, wpisz znowu bok b"<<endl;
        cin>>bok_b;
    }

    cout<<"Pole :"<<pole_prostokata(bok_a,bok_b)<<endl;
}
void obliczenia_do_prostokata_obwod(){
    float bok_a;
    float bok_b;
    cout<<"Podaj wartosc boku a"<<endl;
    cin>>bok_a;
    while (bok_a == 0 || bok_a < 0){
        cout<<"Wartosc zla, wpisz znowu bok a"<<endl;
        cin>>bok_a;
    }

    cout<<"Podaj wartosc boku b"<<endl;
    cin>>bok_b;
    while (bok_b == 0 || bok_b < 0){
        cout<<"Wartosc zla, wpisz znowu bok b"<<endl;
        cin>>bok_b;
    }

    cout<<"Obwod :"<<obwod_prostokata(bok_a,bok_b)<<endl;
}

float pole_prostokata(float bok_a, float bok_b){
    return bok_a*bok_b;
}
float obwod_prostokata(float bok_a, float bok_b){
    return (2*bok_a)+(2*bok_b);
}

void obliczenia_do_kola_pole(){
    float promien;
    cout<<"Podaj wartosc promienia"<<endl;
    cin>>promien;
    while (promien == 0 || promien < 0){
        cout<<"Wartosc zla, wpisz znowu promien"<<endl;
        cin>>promien;
    }
    cout<<"Pole :"<<pole_kola(promien)<<endl;
}
void obliczenia_do_kola_obwod(){
    float promien;
    cout<<"Podaj wartosc promienia"<<endl;
    cin>>promien;
    while (promien == 0 || promien < 0){
        cout<<"Wartosc zla, wpisz znowu promien"<<endl;
        cin>>promien;
    }
    cout<<"Obwod :"<<obwod_kola(promien)<<endl;
}
float pole_kola(float promien){
    return M_PI * pow(promien,2);
}
float obwod_kola(float promien){
    return 2*M_PI*promien;
}

void obliczenia_do_trojkata_pole(){
    float bok_a;
    float bok_b;
    float wysokosc;
    cout<<"Podaj wartosc boku a"<<endl;
    cin>>bok_a;
    while (bok_a == 0 || bok_a < 0){
        cout<<"Wartosc zla, wpisz znowu bok a"<<endl;
        cin>>bok_a;
    }

    cout<<"Podaj wartosc boku b"<<endl;
    cin>>bok_b;
    while (bok_b == 0 || bok_b < 0){
        cout<<"Wartosc zla, wpisz znowu bok b"<<endl;
        cin>>bok_b;
    }

    cout<<"Podaj wartosc wysokosci"<<endl;
    cin>>wysokosc;
    while (wysokosc == 0 || wysokosc < 0){
        cout<<"Wartosc zla, wpisz znowu wysokosc"<<endl;
        cin>>wysokosc;
    }

    cout<<"Pole :"<<pole_trojkata(bok_a,wysokosc)<<endl;
}
void obliczenia_do_trojkata_obwod() {
    float bok_a;
    float bok_b;
    float bok_c;
    cout << "Podaj wartosc boku a" << endl;
    cin >> bok_a;
    while (bok_a == 0 || bok_a < 0){
        cout<<"Wartosc zla, wpisz znowu bok a"<<endl;
        cin>>bok_a;
    }

    cout << "Podaj wartosc boku b" << endl;
    cin >> bok_b;
    while (bok_b == 0 || bok_b < 0){
        cout<<"Wartosc zla, wpisz znowu bok b"<<endl;
        cin>>bok_b;
    }

    cout << "Podaj wartosc boku c" << endl;
    cin >> bok_c;
    while (bok_c == 0 || bok_c < 0){
        cout<<"Wartosc zla, wpisz znowu bok c"<<endl;
        cin>>bok_c;
    }

    cout << "Obwod :" << obwod_trojkata(bok_a, bok_b, bok_c) << endl;
}

float pole_trojkata(float bok, float wysokosc){
    return (bok*wysokosc)/2;
}
float obwod_trojkata(float bok_a, float bok_b, float bok_c){
    return bok_a+bok_b+bok_c;
}

void obliczenia_do_trapezu_pole(){
    float bok_a;
    float bok_b;
    float wysokosc;
    cout<<"Podaj wartosc boku a"<<endl;
    cin>>bok_a;
    while (bok_a == 0 || bok_a < 0){
        cout<<"Wartosc zla, wpisz znowu bok a"<<endl;
        cin>>bok_a;
    }

    cout<<"Podaj wartosc boku b"<<endl;
    cin>>bok_b;
    while (bok_b == 0 || bok_b < 0){
        cout<<"Wartosc zla, wpisz znowu bok b"<<endl;
        cin>>bok_b;
    }

    cout<<"Podaj wartosc wysokosci"<<endl;
    cin>>wysokosc;
    while (wysokosc == 0 || wysokosc < 0){
        cout<<"Wartosc zla, wpisz znowu wysokosc"<<endl;
        cin>>wysokosc;
    }

    cout<<"Pole :"<<pole_trapezu(bok_a,bok_b,wysokosc)<<endl;
}

void obliczenia_do_trapezu_obwod(){
    float bok_a;
    float bok_b;
    float ramie_a;
    float ramie_b;
    cout<<"Podaj wartosc boku a"<<endl;
    cin>>bok_a;
    while (bok_a == 0 || bok_a < 0){
        cout<<"Wartosc zla, wpisz znowu bok a"<<endl;
        cin>>bok_a;
    }

    cout<<"Podaj wartosc boku b"<<endl;
    cin>>bok_b;
    while (bok_b == 0 || bok_b < 0){
        cout<<"Wartosc zla, wpisz znowu bok b"<<endl;
        cin>>bok_b;
    }

    cout<<"Podaj wartosc ramienia a"<<endl;
    cin>>ramie_a;
    while (ramie_a == 0 || ramie_a < 0){
        cout<<"Wartosc zla, wpisz znowu ramie a"<<endl;
        cin>>ramie_a;
    }

    cout<<"Podaj wartosc ramienia b"<<endl;
    cin>>ramie_b;
    while (ramie_b == 0 || ramie_b < 0){
        cout<<"Wartosc zla, wpisz znowu ramie b"<<endl;
        cin>>ramie_b;
    }

    cout<<"Obowd :"<<obwod_trapezu(bok_a,bok_b,ramie_a,ramie_b);
}

float pole_trapezu(float bok_a, float bok_b, float wysokosc){
    return ((bok_a+bok_b)*wysokosc)/2;
}
float obwod_trapezu(float bok_a, float bok_b, float ramie_a, float ramie_b){
    return bok_a+bok_b+ramie_a+ramie_b;
}