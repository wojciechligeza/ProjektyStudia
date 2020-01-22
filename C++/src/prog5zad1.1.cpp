#include <iostream>
#include <algorithm>
#define MAX_LEN 128
using namespace std;
int str_len (char s[]);
int lwr_str_cnt (char s[]);
int upr_str_cnt (char s[]);
int dgt_str_cnt(char s[]);
int nalpha_str_cnt (char s[]);
int chr_str_cnt (char c, char s[]);
int chr_str_pos (char c, char s[]);
int chr_str_rpos (char c, char s[]);
void str_rev (char s[]);

int main() {
    char line[MAX_LEN];
    int pos;
    printf("Podaj napis");
    gets(line);

    char ce;

    cout<<"Ilosc znakow "<<str_len(line);
    cout<<endl;
    cout<<"Ilosc malych liter "<<lwr_str_cnt(line);
    cout<<endl;
    cout<<"Ilosc wielkich liter "<<upr_str_cnt(line);
    cout<<endl;
    cout<<"Ilosc cyfr "<<dgt_str_cnt(line);
    cout<<endl;
    cout<<"Ilosc liter i cyfr "<<nalpha_str_cnt(line);
    cout<<endl;
    printf("Podaj poszukiwany znak 'c': ");
    cin>>ce;
    if(chr_str_cnt(ce,line) !=0) {
        cout << "Ilosc 'c' w napisie " << chr_str_cnt(ce, line);
        cout << endl;
    }
    else{
        cout<<"Nie ma tego znaku "<<endl;
    }
    if(chr_str_pos(ce,line) != 1) {
        cout << "Pierwsze wystapienie 'c' w napisie " << chr_str_pos(ce, line);
        cout << endl;
    }
    else{
        cout<<"Znak: "<<ce<<" nie wystepuje"<<endl;
    }
    if(chr_str_rpos(ce,line) != -1) {
        cout << "Ostatnie wystapienie 'c' w napisie " << chr_str_rpos(ce, line);
        cout << endl;
    }
    else{
        cout<<"Znak nie wystepuje"<<endl;
    }
    cout<<"Odwrocony napis: ";
    str_rev(line);
    cout<<endl;
}




int str_len (char s[]){
    int len;
    for(len =0; s[len] != '\0';len++);
    return len;
}

int lwr_str_cnt (char s[]){
    int male;
    for(int i=0;s[i];i++){
        if(s[i]>='a' && s[i]<='z'){
            male++;
        }
    }
    return male;
}

int upr_str_cnt (char s[]){
    int duze;
    for(int i=0;s[i];i++){
        if(s[i]>='A' && s[i]<='Z'){
            duze++;
        }
    }
    return duze;
}

int dgt_str_cnt(char s[]){
    int cyfry;
    for(int i=0;s[i];i++){
        if(s[i]>='0' && s[i]<='9'){
            cyfry++;
        }
    }
    return cyfry;
}

int nalpha_str_cnt (char s[]){
    int licy;
    for(int i=0;s[i];i++){
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9'){
            licy++;
        }
    }
    return licy;

}

int chr_str_cnt (char c, char s[]){
    int cws=0;
    for(int i=0;s[i];i++){
        if(s[i]==c){
            cws++;
        }
    }
    return cws;
}

int chr_str_pos (char c, char s[]){
    int pos=0;
    int licznik=0;
    for(int i=0; s[i]; i++){
        if(s[i]==c && licznik==0){
            pos = i;
            licznik++;
        }
    }
    if(licznik==0){
        pos=-1;
    }
    return pos;
}
int chr_str_rpos (char c, char s[]){
    int pos;
    bool wyst = false;
    for(int i=0;s[i]!='\0';i++) {
        if (s[i] == c) {
            pos = i;
            wyst = true;
        }
    }
    if(wyst==false){
        pos=-1;
    }
    return pos;
}

void str_rev (char s[]){
    string d = s;
    reverse(d.begin(),d.end());
    cout<<d;
}