#include <iostream>
using namespace std;

class MyWater{
private:
    int duza=0;
    int srednia=0;
    int mala=0;
public:
    void addLarge(int i){
        duza =+ i;
    }
    void addMedium(int i){
        srednia =+ i;
    }
    void addSmall(int i){
        mala =+ i;
    }
    int getLarge(){
        return duza;
    }
    int getMedium(){
        return srednia;
    }
    int getSmall(){
        return mala;
    }
    double getWater(){
        return (duza*2)+(srednia)+(mala*0.5);
    }
};

int main() {
    MyWater w;
    w.addLarge(10);
    w.addMedium(10);
    w.addSmall(10);

    cout<<"Mam "<<w.getWater()<<" litrow wody"<<endl;
    cout<<"Ilosc duzych butelek: "<<w.getLarge()<<endl;
    cout<<"Ilosc srednich butelek: "<<w.getMedium()<<endl;
    cout<<"Ilosc malych butelek: "<<w.getSmall()<<endl;
}