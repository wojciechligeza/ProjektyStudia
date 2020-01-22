#include <iostream>
#define MAX_LEN 10

using namespace std;

class Fifo {
    private:
        int licznik = 0;
        int licznikprzejsc = 0;
        int table[MAX_LEN];

    public:
        void doKolejki(int n){
            if(licznik < MAX_LEN){
                table[licznik] = n;
                cout<<"Kolejka "<<table[licznik]<<endl;
                licznik++;
            }
            else{
                cout<<"Kolejka jest pelna"<<endl;
            }
        }
        void zKolejki(){
            if(licznik>0){
                cout<<"Z kolejki wyszedl"<<table[licznikprzejsc]<<endl;
                licznikprzejsc++;
                licznik--;
            }
            else{
                cout<<"Kolejka jest pusta"<<endl;
            }
        }
        int ileWKolejce(){
            return licznik;
        }
};

int main() {
    Fifo f;
    f.doKolejki(1);
    f.doKolejki(2);
    f.doKolejki(3);
    cout<<f.ileWKolejce()<<endl;
    f.zKolejki();
    f.zKolejki();
    cout<<f.ileWKolejce()<<endl;

}