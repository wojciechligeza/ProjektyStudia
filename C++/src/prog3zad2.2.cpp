#include <iostream>
#include <math.h>
using namespace std;

float delta(float a, float b, float c);
float x0 (float a, float b);
float x1 (float a, float b, float c, float delta);
float x2 (float a, float b, float c, float delta);


int main() {
    float a,b,c;
    cout<<"Wpisz kolejno A, B, C"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"Delta: "<<delta(a,b,c)<<endl;
    if(delta(a,b,c)>0){
        cout<<"x1: "<<x1(a,b,c,delta(a,b,c))<<endl;
        cout<<"x2: "<<x2(a,b,c,delta(a,b,c))<<endl;
    }
    else if(delta(a,b,c)==0){
        cout<<"x0: "<<x0(a,b)<<endl;
    }
    else{
        cout<<"Funkcja nie ma miejsc zerowych"<<endl;
    }
}

float delta(float a, float b, float c){
    return (b*b)-4*a*c;
}
float x0 (float a, float b){
    return -b/(2*a);
}
float x1 (float a, float b, float c, float delta){
    delta = (b*b)-4*a*c;
    return (-b-(sqrt(delta)))/(2*a);
}
float x2 (float a, float b, float c, float delta){
    delta = (b*b)-4*a*c;
    return (-b+(sqrt(delta)))/(2*a);
}


