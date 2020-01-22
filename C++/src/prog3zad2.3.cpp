#include <iostream>
using namespace std;
float w(float a1, float b1, float a2, float b2);
float wx(float c1, float b1, float c2, float b2);
float wy(float a1, float c1, float a2, float c2);

int main() {
    float a1,b1,c1,a2,b2,c2;
    cout<<"Podaj kolejno A,B,C dla 1 funckji"<<endl;
    cin>>a1;
    cin>>b1;
    cin>>c1;
    cout<<"Podaj A,B,C dla 2 funckji"<<endl;
    cin>>a2;
    cin>>b2;
    cin>>c2;
    cout<<"Wyznacznik: "<<w(a1,b1,a2,b2)<<endl;
    cout<<"Wyznacznik wx: "<<wx(c1,b1,c2,b2)<<endl;
    cout<<"Wyznacznik wy: "<<wy(a1,c1,a2,c2)<<endl;

    if((w(a1,b1,a2,b2)&&wx(c1,b1,c2,b2)&&wy(a1,c1,a2,c2)) != 0){
        cout<<"Uklad oznaczony"<<endl;
        cout<<"X: "<<(wx(c1,b1,c2,b2)/w(a1,b1,a2,b2))<<endl;
        cout<<"Y: "<<(wy(a1,c1,a2,c2)/w(a1,b1,a2,b2))<<endl;
    }
    else if((w(a1,b1,a2,b2)&&wx(c1,b1,c2,b2)&&wy(a1,c1,a2,c2)) == 0){
        cout<<"Uklad nieoznaczony"<<endl;
    }
    else if(w(a1,b1,a2,b2)==0 && (wx(c1,b1,c2,b2)||wy(a1,c1,a2,c2) !=0)){
        cout<<"Uklad sprzeczny"<<endl;
    }
}


float w(float a1, float b1, float a2, float b2){
    return (a1*b2)-(b1*a2);
}
float wx(float c1, float b1, float c2, float b2){
    return(c1*b2)-(b1*c2);
}
float wy(float a1, float c1, float a2, float c2){
    return (a1*c2)-(c1*a2);
}