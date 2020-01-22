#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
#include <algorithm>
#define MAX_LEN 128

using namespace std;
int str_len (char * s);
int lwr_str_cnt(char * s);
int upr_str_cnt(char * s);
int dgt_str_cnt(char * s);
int nalpha_str_cnt(char * s);
int chr_str_cnt(char c, char * s);
int chr_str_pos (char c, char * s);
int chr_str_rpos(char c, char * s);
void str_rev( char * s);

int main() {
    char * s;
    char c;
    s = new char [MAX_LEN];

    printf("Wpisz linie tekstu");
    gets(s);
    cout<<"Liczba znakow = "<<str_len(s);
    cout<<endl;
    cout<<"Liczba malych liter = "<<lwr_str_cnt(s);
    cout<<endl;
    cout<<"Liczba duzych liter = "<<upr_str_cnt(s);
    cout<<endl;
    cout<<"Liczba cyfr = "<<dgt_str_cnt(s);
    cout<<endl;
    cout<<"Liczba liter i cyfr = "<<nalpha_str_cnt(s);
    cout<<endl;
    cout<<"Podaj poszukiwany znak";
    cout<<endl;
    cin>>c;
    cout<<"Ilosc: "<<c<<" w napisie "<<chr_str_cnt(c,s);
    cout<<endl;

    if(chr_str_pos(c, s) != -1) {
        cout << "Znak 'c' wystapil na " << chr_str_pos(c, s) + 1 << " pozycji od poczatku ";
        cout<<endl;
    }
    else {
        cout << "Nie ma tego znaku";
        cout<<endl;
    }
    if(chr_str_rpos(c, s) != -1) {
        cout <<"Ostatnie wystapienie na " << chr_str_rpos(c, s) + 1 << " pozycji od konca";
        cout<<endl;
    }
    else {
        cout << "Znak nie wystapil w lini tekstu" << endl;
    }
    cout<<"Oryginalny napis = "<<s;
    cout<<endl;
    cout<<"Odwrocony napis = ";
    str_rev(s);
    cout<<endl;


    delete[] s;
    return 0;
}

int str_len (char * s){
    int liczba=0;
    for(int i=0; s[i] != '\0'; i++){
        liczba++;
    }
    return liczba;
}

int lwr_str_cnt(char * s){
    int liczba = 0;
    for(int i=0; s[i] != '\0'; i++){
        int tmp = (int)s[i];
        if(tmp>96 && tmp<123)
            liczba++;
    }
    return liczba;
}
int upr_str_cnt(char * s){
    int liczba = 0;
    for(int i=0;  s[i] != '\0'; i++){
        int tmp = (int) s[i];
        if(tmp>40 && tmp<91)
            liczba++;
    }
    return liczba;
}

int dgt_str_cnt(char * s){
    int liczba = 0;
    for(int i=0;  s[i] != '\0'; i++){
        int tmp = (int) s[i];
        if(tmp>47 && tmp<58)
            liczba++;
    }
    return liczba;
}

int nalpha_str_cnt(char * s){
    int liczbaZnakowICyfr = 0;
    for(int i=0;  s[i] != '\0'; i++){
        int tmp = (int) s[i];
        if((tmp>47 && tmp<58) || (tmp>64 && tmp<91) || (tmp>60 && tmp<123))
            liczbaZnakowICyfr++;
    }

    return liczbaZnakowICyfr;
}

int chr_str_cnt(char c, char * s){
    int licznik = 0;
    for(int i =0;  s[i] != '\0'; i++){
        if(c ==  s[i]){
            licznik++;
        }
    }
    return licznik;
}

int chr_str_pos (char c, char * s){
    int poz = 0;
    int licznik = 0;
    for(int i =0;  s[i] != '\0'; i++){
        if(( s[i] == c) && licznik==0) {
            poz = i;
            licznik++;
        }
    }
    if(licznik == 0){
        poz = -1;
    }
    return poz;
}

int chr_str_rpos(char c, char * s){
    int poz = 0;
    bool czyJest = false;
    for(int i =0;  s[i] != '\0'; i++){
        if( s[i] == c) {
            poz = i;
            czyJest = true;
        }
    }
    if(czyJest == false){
        poz = -1;
    }
    return poz;
}

void str_rev( char * s){
    string k = s;
    reverse(k.begin(), k.end());
    cout<<k;

}