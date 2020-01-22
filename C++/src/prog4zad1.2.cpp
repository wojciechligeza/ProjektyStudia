#include <iostream>
#include <algorithm>
using namespace std;
int table[12];
int licznik=0;
char klawisz;

void menu();
void wczytaj();
void wyswietl();
void sumaisrednia();
void minimalnyimaksymalny();
void odnajmniejszego();
void nadipodsrednia();


int main() {
    menu();
    do {
        klawisz = getchar();
        fflush(stdin);
        switch (klawisz) {
            case '1' :
                wczytaj();
                break;
            case '2' :
                wyswietl();
                break;
            case '3' :
                sumaisrednia();
                break;
            case '4' :
                minimalnyimaksymalny();
                break;
            case '5' :
                odnajmniejszego();
                break;
            case '6' :
                nadipodsrednia();
                break;
            case '7':
                klawisz='z';
        }
    }while(klawisz != 'z');

}

void menu(){
    cout<<"Menu glowne: "<<endl;
    cout<<"1. Wczytaj - wczytanie dochodow"<<endl;
    cout<<"2. Wyswietl - wyswietlanie dotychczas wczytanych dochodow"<<endl;
    cout<<"3. Srednia i suma - wyznaczanie dochodu sredniego i sumarycznego"<<endl;
    cout<<"4. Minimalny i maxymalny - wyznaczanie dochodu minimalnego i maksymalnego"<<endl;
    cout<<"5. Od najmniejszego - wyswietlanie dochodow uporzadkowanych rosnaco"<<endl;
    cout<<"6. Nad i pod srednia - wyswietlanie informacji ile dochodow jest wiekszych od sredniego"<<endl<<"   i jaka jest ich suma, oraz ile dochodow jest mniejszych od sredniego i jaka jest ich suma"<<endl;
    cout<<"7. Koniec - powoduje zakonczenie programu"<<endl;
    cout<<"Wybierz operacje"<<endl;
}

void wczytaj(){
    if(licznik<12) {
        int a;
        cout << "Podaj przychod" << endl;
        cin >> a;
        table[licznik] = a;
        licznik++;
    }
    else if(licznik>=12){
        cout<<"ERROR"<<endl;
    }
}

void wyswietl(){
    int licznikdwa = licznik;
    for(int i = 0; i<licznikdwa;i++){
        licznik--;
        cout<<"Przychod nr "<<licznik+1<<" "<<table[licznik]<<endl;
    }
}

void sumaisrednia(){
    int licznikdwa = licznik;
    int suma=0;
    int srednia;
    for(int i = 0;i<licznikdwa;i++){
        licznik--;
        suma = suma + table[licznik];
    }
    srednia=suma/licznikdwa;
    cout<<"Suma: "<<suma<<endl;
    cout<<"Sednia: "<<srednia<<endl;
}

void minimalnyimaksymalny(){
    int max = 0;
    int min = 0;
    int licznikdwa = licznik;
    for(int i = 0;i<licznikdwa;i++){
        licznik--;
       if(max == 0 && min == 0){
           max = table[licznik];
           min = table[licznik];
       }
       if(table[licznik]>max){
           max = table[licznik];
       }
       else if(table[licznik]<min){
           min = table[licznik];
       }
    }
    cout<<"Max: "<<max<<endl;
    cout<<"Min: "<<min<<endl;
}

void odnajmniejszego(){
    int licznikdwa = licznik;
    sort(table,table+licznikdwa);
    for(int i = 0;i<licznikdwa;i++){
        cout<<"Przychod "<<table[i]<<endl;
    }
}

void nadipodsrednia(){
    int licznikdwa = licznik;
    int licznikpod = 0;
    int liczniknad = 0;
    int srednia;
    int sumapod;
    int sumanad;
    int suma = 0;

    for(int i = 0;i<licznikdwa;i++){
        licznik--;
        suma = suma + table[licznik];
    }
    licznik = licznikdwa;
    srednia=suma/licznikdwa;

    for(int i = 0;i<licznikdwa;i++){
        licznik--;
        if(table[licznik]<=srednia){
            sumapod = sumapod + table[licznik];
            licznikpod++;
        }
        else if(table[licznik]>srednia){
            sumanad = sumanad + table[licznik];
            liczniknad++;
        }
    }
    cout<<"Ilosc dochodow pod :"<<licznikpod<<endl;
    cout<<"Suma dochodow pod: "<<sumapod<<endl;
    cout<<"Ilosc dochodow nad: "<<liczniknad<<endl;
    cout<<"Suma dochodow nad: "<<sumanad<<endl;
}