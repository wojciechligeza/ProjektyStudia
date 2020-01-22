#include <iostream>
#include <cmath>;
using namespace std;

class FunkcjaKwadratowa{
private:
    double a;
    double b;
    double c;
public:
    FunkcjaKwadratowa(){
    }
    void SetA(int ia);
    double GetA();

    void SetB(int ib);
    double GetB();

    void SetC(int ic);
    double GetC();


    double delta(){
        return (b*b)-4*a*c;
    }
    double obliczx1(){
        return (-b-(sqrt(delta())))/(2*a);
    }
    double obliczx2(){
        return (-b+(sqrt(delta())))/(2*a);
    }
    double obliczx0(){
        return -b/(4*a);
    }
};

void FunkcjaKwadratowa::SetA(int ia) {
    a = ia;
}
double FunkcjaKwadratowa::GetA(){
    return a;
}
void FunkcjaKwadratowa::SetB(int ib) {
    b = ib;
}
double FunkcjaKwadratowa::GetB(){
    return b;
}
void FunkcjaKwadratowa::SetC(int ic) {
    c = ic;
}
double FunkcjaKwadratowa::GetC(){
    return c;
}

int main() {
    FunkcjaKwadratowa r;
    double num;
    cout<<"Podaj A";cin>>num;r.SetA(num);
    cout<<"Podaj B";cin>>num;r.SetB(num);
    cout<<"Podaj C";cin>>num;r.SetC(num);
    cout<<r.delta()<<endl;
    if(r.delta()>0){
        cout<<r.obliczx1()<<endl;
        cout<<r.obliczx2()<<endl;
    }
    else if(r.delta()==0){
        cout<<r.obliczx0()<<endl;
    }
    else{
        cout<<"Brak pierwiastkow"<<endl;
    }
}
