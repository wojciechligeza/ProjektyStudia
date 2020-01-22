#include <iostream>
#include <math.h>
using namespace std;

class Zadanie{
protected:
    double a,b;
public:
    virtual void miejscaZerowe(){
    }
};

class FunkcjaLiniowa : public Zadanie{
public:
    FunkcjaLiniowa(double a=0, double b=0){
        this->a=a;
        this->b=b;
    }
    void miejscaZerowe(){
        cout<< -b/a<<endl;
    }
};

class FunkcjaKwadratowa : public Zadanie{
private:
    double c;
public:
    FunkcjaKwadratowa(double a=0, double b=0, double c=0){
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void miejscaZerowe(){
        double x1 = 0;
        double x2 = 0;
        double delta = (b*b)-(4*a*c);

        if(delta > 0){
            cout<<"x1: "<<((-b-(sqrt(delta)))/(2*a))<<endl;
            cout<<"x2: "<<((-b+(sqrt(delta)))/(2*a))<<endl;
        }
        else if(delta ==0){
            cout<<"x0: "<<((-b)/(2*a))<<endl;
        }
        else if(delta<0){
            cout<<"Brak miejsc zerowych"<<endl;
        }
    }
};

int main() {
    Zadanie * w[3];
    w[0] = new FunkcjaLiniowa(2,1);
    w[1] = new FunkcjaKwadratowa(1,-2,2);
    w[2] = new FunkcjaKwadratowa(1,0,-1);

    for(int i=0; i<3; i++){
        w[i]->miejscaZerowe();
    }
}