#include < iostream >
using namespace std;

struct liczba
{
	int wartosc;
	liczba* next;

};


void dodaj(liczba* root)
{
	liczba* nowa = new liczba;
	cin >> nowa->wartosc;
	nowa->next = *root;
	*root = nowa;
}


void zdejmij(liczba* root)
{
	if (*root) 
	{
		liczba* temp = *root;
		*root = (*root)->next;
		cout << temp->wartosc << endl;
		delete temp;
	}
}

int main()
{
	char warunek;
	liczba* root = NULL, * nowa = NULL;
	while (cin >> warunek)
	{
		switch (warunek)
		{
		case 'd': 
			dodaj(&root);
			break;
		case 'z':
			zdejmij(&root); 
			break;
		case 'k': 
			return 0;
		}
	}

	return 0;
}