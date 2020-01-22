#include <iostream>
#define MAX_LEN 10

using namespace std;

class Stack {
private:

    int licznik =0;
    int table [MAX_LEN];

public:

    Stack() {
    }

    void naStos(int n){
        if(licznik<MAX_LEN){
            table[licznik]=n;
            licznik++;
        }
        else{
            cout<<"Stos jest pelen"<<endl;
        }
    }
    void zeStosu(){
        if(licznik>0){
            cout<<table[licznik-1]<<endl;
            licznik--;
        }
        else {
            cout<<"Stos jest pusty"<<endl;
        }

    }
    int ileNaStosie(){
       return licznik;
    }
    void oproznijStos(){
        if(licznik>0){
            for(int i =0; table[i] != '\0';i++){
                table[i]=0;
            }
        }
        licznik = 0;
    }
};

int main() {
    Stack s;
    s.naStos(1);
    s.naStos(2);
    cout<<s.ileNaStosie()<<endl;
    s.zeStosu();
    cout<<s.ileNaStosie()<<endl;
    s.oproznijStos();
    cout<<s.ileNaStosie()<<endl;
}