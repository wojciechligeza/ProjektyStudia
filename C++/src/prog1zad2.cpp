#include <iostream>
using namespace std;

int main() {
    float cale = 30.37;
    float stopy = 3.28;
    float jardy = 1.09;
    float mile = 0.6;
    float dodajMetry;
    float metry2;
    float metryPocz;
    float metryKon;

    do{
        cout<<"Od jakiej wartosci zaczac?"<<endl;
        cin>>metryPocz;
        cout<<"Na jakies wartosci skonczyc?"<<endl;
        cin>>metryKon;
        dodajMetry = (metryKon-metryPocz)/24;

        cin.ignore();
        metry2=dodajMetry;
        if(metryPocz >= 0){
            cout<<"Metry\t\t"<<"Cale\t\t"<<"Jardy\t\t"<<"Mile\t\t"<<endl;
            for(float i = metryPocz; i<= metryKon; i += dodajMetry){
                cout<<metryPocz << 	"\t\t" << metryPocz * cale << "\t\t" << metryPocz * stopy << "\t\t"
                << metryPocz * jardy << "\t\t" << metryPocz * mile << endl;

                metryPocz = metryPocz+metry2;
            }
        }
        else {
            cout <<"Wartosc mniejsza lub rowna 0"<<endl;
        }
        cout << "Wcisnij Enter by zakonczyc...";
    }while(cin.get()!='\n');
}