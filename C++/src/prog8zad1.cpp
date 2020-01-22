
#include <iostream>
#include <string.h>
using namespace std;
struct ksiazka
{
	string tytul;
	string autor;
	int liczbaStron;
	bool wypozyczona;
	bool rekordSkasowany=true;

};
ksiazka Ksiazki[20];

void dodaj ();
void edit (int x);
void usun ();
void wyporzycz (int x);
void zwruc (int x);
void wyswietlALL ();
void wyswietlR ();
int i = 0;
int main()
{
	bool b = true;
	int z,x;
	do
	{
		cin >> z;
		switch (z)
		{
		case 1:
			dodaj();
			break;
		case 2:
			cin >> x;
			edit( x);
			break;
		case 3:
			usun();
			break;
		case 4:
			cin >> x;
			wyporzycz(x);
			break;
		case 5:
			cin >> x;
			zwruc(x);
			break;
		case 6:
			wyswietlALL();
			break;
		case 7:
			wyswietlR();
			break;
		default:
			b = false;
			break;
		}
	} while (b == true);
}

void dodaj()
{
	if (i < 20)
	{
		cin >> Ksiazki[i].tytul;
		cin >> Ksiazki[i].autor;
		cin >> Ksiazki[i].liczbaStron;
		Ksiazki[i].rekordSkasowany = false;
		i++;
	}

}

void edit(int x)
{
	cin >> Ksiazki[x].tytul;
	cin >> Ksiazki[x].autor;
	cin >> Ksiazki[x].liczbaStron;
}

void usun()
{
	Ksiazki[i].rekordSkasowany = true;
}

void wyporzycz(int x)
{
	Ksiazki[x].wypozyczona = true;
}

void zwruc(int x)
{
	Ksiazki[x].wypozyczona = false;
}

void wyswietlALL()
{
	for(int j=0;j<20;j++)
	{
		if(Ksiazki[j].rekordSkasowany==false)
		cout << Ksiazki[j].tytul<<endl;
		cout << Ksiazki[j].autor<<endl;
		cout << Ksiazki[j].liczbaStron<<endl;
	}
}

void wyswietlR()
{
	for (int j = 0; j < 20; j++)
	{
		if ((Ksiazki[j].rekordSkasowany == false)&&(Ksiazki[j].wypozyczona==true))
			cout << Ksiazki[j].tytul;
		cout << Ksiazki[j].autor;
		cout << Ksiazki[j].liczbaStron;
	}
}
