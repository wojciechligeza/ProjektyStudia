#include<iostream>
using namespace std;

struct element
{
	int liczba;
	element* nastepny; 
	element* poprzedni; 
};

int main()
{
	element* wierzcholek_kolejki = NULL;
	element* koniec_kolejki = NULL; 
	element* pomoc = NULL; 
	cout << "Podaj jedna z instrukcji:\n"
		<< "d liczba - aby dodac liczbe do stosu\n"
		<< "u - aby usunac liczbe ze stosu\n"
		<< "w - aby wyswietlic zawartosc stosu\n"
		<< "CTRL+Z - aby zakonczyc\n";
	char instrukcja;
	while (cin >> instrukcja)
	{
		switch (instrukcja)
		{
		case 'd':
			pomoc = new element; 
			cin >> pomoc->liczba;
			if (wierzcholek_kolejki == NULL) 
			{
				pomoc->nastepny = pomoc->poprzedni = NULL;
				koniec_kolejki = wierzcholek_kolejki = pomoc; 
			}
			else
			{
				pomoc->nastepny = NULL;
				koniec_kolejki->nastepny = pomoc; 
				pomoc->poprzedni = koniec_kolejki; 
				koniec_kolejki = pomoc; 
			}
			break;
		case 'u':
			if (wierzcholek_kolejki != NULL)
			{
				pomoc = wierzcholek_kolejki; 
				if (wierzcholek_kolejki == koniec_kolejki) 
					wierzcholek_kolejki = koniec_kolejki = NULL; 
				else 
					wierzcholek_kolejki = wierzcholek_kolejki->nastepny; 
				delete pomoc; 
			}
			else
				cout << "Kolejka jest pusta\n";
			break;
		case 'w':
			if (wierzcholek_kolejki != NULL)
			{
				cout << "Zawartosc kolejki:\n";
				pomoc = wierzcholek_kolejki;
				while (pomoc != NULL) 
				{
					cout << pomoc->liczba << " ";
					pomoc = pomoc->nastepny; 
				}
			}
			else
				cout << "Kolejka jest pusta";
			cout << endl;
			break;
		default:
			cout << "Musisz wybrac jedna z instrukcji:\nd - aby dodac element do stosu, "
				<< "u - aby usunac element ze stosu lub w - aby wyswietlic zawartosc stosu\n";
			break;
		}
	}

	return 0;
}