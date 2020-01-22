#include <iostream>
#include <math.h>
using namespace std;

class FiguraPlaskia{
protected:
    double a, b;
public:
    virtual void pole(){};
    virtual void obwod(){};
};

class Kolo : public FiguraPlaska{
private:
    double r;
public:
    void pole(){
        cout<<"Pole kola = "<< M_PI*r*r<<endl;
    }
    Kolo(double r=0){
        this->r = r;
    }
    void obwod(){
        cout<<"Obwod kola = "<< 2*M_PI*r<<endl;
    }

};

class Kwadrat : public FiguraPlaska{
public:
    Kwadrat(double a=0){
        this->a=a;
    }
    void obwod(){
        cout<<"Obwod kwadratu = "<< 4*a<<endl;
    }
    void pole(){
        cout<<"Pole kwadratu = "<<a*a<<endl;
    }
};

class Prostokat : public FiguraPlaska{
public:
    Prostokat(double a=0, double b=0){
        this->a=a;
        this->b=b;
    }

    void pole(){
        cout<<"Pole prostokata = "<< a*b<<endl;
    }

    void obwod(){
        cout<<"Obwod prostokata = "<< 4*a<<endl;
    }
};

int main() {

    FiguraPlaska * f[3];
    f[0] = new Kwadrat(2);
    f[1] = new Kolo(3);
    f[2] = new Prostokat(4, 5);

    for(int i=0; i<3; i++){
        f[i]->pole();
        f[i]->obwod();
    }
}