// ConsoleApplication15.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

/*
Zadanie 1

Napisać funkcję:
int oblicz( int * tab, int ileElementow, int liczba ) { … }
która otrzymuje trzy parametry:
• tab: tablica liczb całkowitych o dowolnej liczebności;
• ileElementow: liczba elementów tablicy przekazanej parametrem pierwszym;
• liczba: dowolna liczba całkowita.

Wariant A: Wyznaczenie ile elementów tablicy jest większych od trzeciego parametru funkcji, liczba
takich elementów ma być rezultatem funkcji, dodatkowo funkcja ma wyzerować te elementy tablicy, które
są mniejsze od trzeciego parametru funkcji.
Wariant B: Wyznaczenie sumy elementów tablicy mniejszych od trzeciego parametru funkcji, suma ta ma
być rezultatem funkcji, dodatkowo funkcja ma wyzerować te elementy tablicy, które są większe od
trzeciego parametru funkcji.
*/

int obliczWariantA(int * tab, int ileElementow, int liczba) {
	int liczbaWystapien = 0;
	for (; ileElementow > 0; ileElementow--) {
		if (*(tab + ileElementow - 1) < liczba)
			* (tab + ileElementow - 1) = 0;
		else if (*(tab + ileElementow - 1) > liczba)
			liczbaWystapien++;
	}
	return liczbaWystapien;
}
int obliczWariantB(int * tab, int ileElementow, int liczba) {
	int sumaElementow = 0;
	for (; ileElementow > 0; ileElementow--) {
		if (*(tab + ileElementow - 1) > liczba)
			* (tab + ileElementow - 1) = 0;
		else if (*(tab + ileElementow - 1) < liczba)
			sumaElementow+= (*(tab + ileElementow - 1));
	}
	return sumaElementow;
}
/*
int main()
{
    int tab[10];
    int *wtab = tab;

    int ileElementow = 10;
    int liczba = 10;

    tab[0] = 5;
    for(int i=1; i<ileElementow; i++)
    {
    tab[i] = (tab[i-1] + 1);
    cout << tab[i] << endl;
    }

    cout << obliczWariantA(tab, ileElementow, liczba);

    return 0;
}
/*


/*
Zadanie 2

Napisać funkcję:
double minMaks( double * tab, int ileElementow, bool liczMin ) { … }

zadaniem funkcji jest wyznaczenie wartości minimalnej lub maksymalnej w tablicy przekazanej
parametrem tab. Parametr ileElementow określa liczbę elementów. Jeżeli wartość parametru liczMin
jest równa true, funkcja oblicza minimum, jeżeli jest równa false, funkcja oblicza maksimum. Wyznaczona
wartość (minimalna lub maksymalna) jest rezultatem funkcji.

*/

int minMaks(int * tab, int ileElementow, bool liczMin) {
	int liczbaDoZwrocenia = 0;
	if (liczMin) {
		liczbaDoZwrocenia = *tab;
		for (; ileElementow > 0; ileElementow--) {
			if (*(tab + ileElementow - 1) < liczbaDoZwrocenia)
				liczbaDoZwrocenia = *(tab + ileElementow - 1);
		}
	}
	else {
	  liczbaDoZwrocenia = *tab;
		for (; ileElementow > 0; ileElementow--) {
			if (*(tab + ileElementow - 1) > liczbaDoZwrocenia)
				liczbaDoZwrocenia = *(tab + ileElementow - 1);
		}
	}
	return liczbaDoZwrocenia;
}

/*
int main()
{
    int tab[10];
    int *wtab = tab;

    int ileElementow = 10;
    bool liczMin = false;

    tab[0] = 5;
    for(int i=1; i<ileElementow; i++)
    {
    tab[i] = (tab[i-1] + 1);
    cout << tab[i] << endl;
    }


    cout << minMaks(tab, ileElementow, liczMin);

    return 0;
}
*/


/*
Zadanie 3

Napisać funkcję:
double wariancja( double * tab, int ileElementow ) { … }

zadaniem funkcji jest wyznaczenie wariancji dla liczb zapisanych w tablicy przekazanej parametrem tab.
Parametr ileElementow określa liczbę elementów. Wyznaczona wariancja ma być rezultatem funkcji.
Wariancję oznaczaną symbolem s
2 wyznacza się ze wzoru:
Gdzie n oznacza liczbę rozważanych wartości, xi oznacza kolejne rozważane
wartości, m to średnia arytmetyczna rozważanych wartości.
W sensie obliczeniowym wariancja jest zatem średnią z kwadratów odchyleń
od wartości średniej.
*/

double wariancja(double * tab, int ileElementow) {
	double sredniaArytElementow = 0;
	double wariancjaKwadrat = 0;
	for (; wariancjaKwadrat < ileElementow; wariancjaKwadrat++) {
		sredniaArytElementow += *(tab + ileElementow - 1);
	}
	sredniaArytElementow /= ileElementow;
	wariancjaKwadrat = 0;
	for (int i = 0; i < ileElementow; i++) {
		wariancjaKwadrat += (*(tab + i ) - sredniaArytElementow) *(*(tab + i) - sredniaArytElementow);
	}
	return sqrt(wariancjaKwadrat / ileElementow);
}

/*
Zadanie 4

Napisać funkcję:
int kopiujPowyzejSredniej( double * d, double * z, int ileElementow ) { … }

zadaniem funkcji przekopiowanie z tablicy z do tablicy d wartości tych elementów, które są większe od
wartości średniej wszystkich elementów tablicy z. Rezultatem funkcji ma być liczba przekopiowanych
elementów. Zakładamy, że w tablicy d jest wystarczająca liczba elementów.
*/

int kopiujPowyzejSredniej(double * d, double * z, int ileElementow) {
	int liczbaPrzekopoiowanychEl = 0;
	double srednia1Tablicy = 0;
	// Uzywamy liczbaPrzekopoiowanychEl jako iteratora, aby zaoszczedzic pamiec, pozniej zmienna jest zerowana
	for (; liczbaPrzekopoiowanychEl < ileElementow; liczbaPrzekopoiowanychEl++, srednia1Tablicy += *(z + liczbaPrzekopoiowanychEl - 1)) {}
	srednia1Tablicy /= ileElementow;
	liczbaPrzekopoiowanychEl = 0;
	for (; ileElementow > 0; ileElementow--) {
		if (*(z + ileElementow - 1) > srednia1Tablicy) {
			*(d + ileElementow - 1) = *(z + ileElementow - 1);
			liczbaPrzekopoiowanychEl++;
		}
	}
	return liczbaPrzekopoiowanychEl;
}

/*
Zadanie 5

Napisz funkcję:
int ileWystapienZnakuWNapisie( char z, char * napis ) { … }
której rezultatem jest liczba wystąpień znaku przekazanego parametrem z w napisie przekazanym
parametrem napis. Wielkość liter ma być ignorowana.

*/
int ileWystapienZnakuWNapisie(char z, char * napis) {
	int liczbaWystapien = 0;
	while (*(napis) != '/0') {
		if (tolower(z) == tolower(*napis))
			liczbaWystapien++;
		napis++;
	}
	return liczbaWystapien;
}

/*
Zadanie 6

Napisz funkcję:

char najczesciejWystepujacaLitera( char * napis ) { … }
której rezultatem jest litera najczęściej występująca w tablicy znaków napis, przekazanej parametrem.
Wielkość liter ma być ignorowana. Jeżeli tablica nie zawiera liter, rezultatem funkcji powinien być znak
’\0’. Wymagana jest implementacja z wykorzystaniem wskaźników.

*/
char najczesciejWystepujacaLitera(char * napis) {
	int liczbaWystapien[33] = { 0 };
	int maxIndex = 0;
	while ((*napis) != '/0') {
		*(liczbaWystapien + ((int)(tolower(*napis))) - 97) += 1;
	}
	for (int i = 0; i < 33; i++) {
		if (*(liczbaWystapien + i) > *(liczbaWystapien + maxIndex))
			maxIndex = i;
	}
	if (*(liczbaWystapien + maxIndex) == 0)
		return (char) '/0';
	else
		return char(*(liczbaWystapien + maxIndex) - 97);
}

/*
Zadanie 7

Palindrom (gr. palindromeo – biec z powrotem) – wyrażenie brzmiące tak samo czytane od lewej do
prawej i od prawej do lewej. Przykładem palindromu jest: „Kobyła ma mały bok”.
Napisz funkcję:

bool jestPalindromem( char * napis ) { … }
której rezultatem jest true, gdy napis przekazany parametrem jest palindromem, false w przeciwnym
przypadku. Wielkość liter nie jest istotna, wymagana jest implementacja z wykorzystaniem wskaźników.

*/

bool jestPalindromem(char * napis) {
	int liczbaZnakow = 0;
	bool czyJestPalindromem = true;
	while (*napis != '\0') {
		liczbaZnakow++;
		napis++;
	}
	napis -= liczbaZnakow;
	char * nowyNapis = new char [liczbaZnakow];
	liczbaZnakow = 0;
	do {
		if (*napis != ' ') {
			*nowyNapis = tolower(*napis);
			nowyNapis++;
			liczbaZnakow++;
		}
		napis++;
	} while (*napis != '\0');
	for (int i = 0; i < liczbaZnakow / 2; i++) {
		if ( *(nowyNapis + i ) != *(nowyNapis + liczbaZnakow - i))
			czyJestPalindromem = false;
	}
	delete nowyNapis;
	return czyJestPalindromem;
}

/*
Zadanie 8

Palindrom (gr. palindromeo – biec z powrotem) – wyrażenie brzmiące tak samo czytane od lewej do
prawej i od prawej do lewej. Przykładem palindromu jest: „Kobyła ma mały bok”.

Napisz funkcję:
bool mozeBycPalindromem( char * s ) { … }
Rezultatem funkcji ma być wartość true, jeżeli łańcuch znaków s może być palindromem, false jeżeli nie
może. Uwaga — zadaniem funkcji jest stwierdzenie czy łańcuch znaków mógłby być palindromem, nie
sprawdzamy czy nim jest. Wskazówka — należy się zastanowić jaki musi być łańcuch znaków, żeby
można było z niego „zrobić” palindrom.

*/

bool mozeBycPalindromem(char * s) { 
	int liczbaWystapien[33] = { 0 };
	int liczbaNieParzystychZnakow = 0;
	do {
		if (isalpha(*s))
			*(liczbaWystapien + (int)(tolower(*s)) - 97) =+ 1;
	} while (*s != '/0');
	while (*liczbaWystapien != '\0') {
		if (*liczbaWystapien % 2 != 0)
			liczbaNieParzystychZnakow++;
	}
	if (liczbaNieParzystychZnakow > 1)
		return false;
	else
		return true;
}

/*
Zadanie 9

Napisz funkcję:

int kopiujZZamina( char * d, char * z ) { … }
która kopiuje zawartość tablicy znaków z do tablicy d, przy czym każda litera mała zamieniana jest na
literę dużą a litera duża na literę małą. Rezultatem funkcji ma być liczba dokonanych zamian.

*/

int kopiujZZamina(char * d, char * z) {
	int liczbaZmian = 0;
	do {
		if (isalpha(*z)) {
			if (islower(*z)) {
				*d = toupper(*z);
				liczbaZmian++;
				d++;
			}
			else if (isupper(*z)) {
				*d = tolower(*z);
				liczbaZmian++;
				d++;
			}
		}
		else {
			*d = *z;
			d++;
		}
		z++;
	} while (*d != '\0');
	return liczbaZmian;
}

/*
Zadanie 10

Napisz funkcję:

int kopiujMaleLiter( char * d, char * z ) { … }
która kopiuje z tablicy znaków z do tablicy znaków d wyłącznie litery małe. Jeżeli łańcuch z nie zawiera
liter małych, po wykonaniu funkcji łańcuch d powinien być pusty. Rezultatem funkcji ma być liczba
dokonanych zamian.

*/

int kopiujMaleLiter(char * d, char * z) {
	int liczbaZmian = 0;
	do {
		if (isalpha(*z) && islower(*z)) {
			*d = *z;
			liczbaZmian++;
			d++;
		}
		z++;
	} while (*z != '\0');
	return liczbaZmian;
}
/*
Zadanie 11

Napisz funkcję:

int kopiujZFiltrowaniem( char * d, char * z, char * filtr ) { … }
która kopiuje z tablicy znaków z do tablicy znaków d wyłącznie litery występujące w łańcuchu znaków
filtr. Jeżeli łańcuch z nie zawiera odpowiednich znaków, po wykonaniu funkcji łańcuch d powinien być
pusty. Rezultatem funkcji ma być liczba dokonanych zamian.

Wskazówka — proszę spróbować napisać i wykorzystać funkcję stwierdzającą, czy pewien znak c
występuje w łańcuchu znaków s.

*/
bool czyZawiera(char * znaki, char znak) {
	bool czyZawiera = false;
	do {
		if (*znaki == znak)
			czyZawiera = true;
		znaki++;
	} while (znaki != '\0');
	return czyZawiera;
}
int kopiujZFiltrowaniem(char * d, char * z, char * filtr) {
	int liczbaZmian = 0;
	do {
		if (isalpha(*z) && czyZawiera (filtr,*z)) {
			*d = *z;
			liczbaZmian++;
			d++;
		}
		z++;
	} while (*z != '\0');
	return liczbaZmian;
}
/*
Zadanie 1 ( Klasy )

Zaproponuj hierarchię klas dla opisanego poniżej problemu.
Zidentyfikuj klasy oraz powiązania pomiędzy nimi występujące.

1. Każdy środek transportu posiada swój numer ewidencyjny będący nieujemną liczbą całkowitą.
2. Każdy pojazd silnikowy jest specyficznym środkiem transportu, posiadającym silnik oraz nadwozie.
3. Każdy silnik opisuje jego pojemność (liczba rzeczywista).
4. Każde nadwozie posiada kolor.
5. Zarówno silnik jak i nadwozie traktowane są elementem konstrukcyjnym, a każdy element konstrukcyjny posiada
swój numer seryjny,będący nieujemną liczbą całkowitą.
6. Zakładamy, że kolor nadwozia opisywany jest liczbami całkowitymi
wg następującego schematu: czarny – 0, niebieski – 1, zielony - 2, czerwony -3, biały - 4.

Rozwiązanie ma obejmować definicję odpowiednich klas. Wykorzystaj dziedziczenie oraz związki całośćczęść
(agregacja, kompozycja). Dane charakterystyczne dla obiektu przynajmniej jednej klasy mają być
polami prywatnymi, należy zdefiniować odpowiednie funkcje dostępowe. Każda klasa ma posiadać
konstruktor parametrowy i domyślny. Konstruktor domyślny zeruje pola, konstruktor parametrowy
pozwalana na ustawienie wartości pól. Uwaga — w przypadku dziedziczenia należy pamiętać
o właściwym uaktywnieniu konstruktorów klas bazowych. W przypadku kompozycji należy zadbać
o właściwe zainicjowanie obiektów składowych.

*/
class ElementKonstrukcyjny {
private:
	unsigned int numerSeryjny;
public:
	ElementKonstrukcyjny() : numerSeryjny(0) {}
	ElementKonstrukcyjny (unsigned int newNumerSeryjny) : numerSeryjny(newNumerSeryjny) {}
	void setNumerSeryjny(unsigned int newNumerSeryjny) {
		this->numerSeryjny = newNumerSeryjny;
	}
	unsigned int getNumerSeryjny() {
		return numerSeryjny;
	}
};
class Silnik : public ElementKonstrukcyjny {
private:
	double pojemnosc;
public:
	Silnik() : pojemnosc(0), ElementKonstrukcyjny() {}
	Silnik(double newPojemnosc, unsigned int newNumerSeryjny) : pojemnosc(newPojemnosc) , ElementKonstrukcyjny(newNumerSeryjny) {}
	void setPojemnosc(double newPojemnosc) {
		this->pojemnosc = newPojemnosc;
	}
	double getPojemnosc() {
		return pojemnosc;
	}
};
enum KOLOR
{
	CZARNY,
	NIEBIESKI,
	ZIELONY,
	CZERWONY,
	BIALY
};
class Nadwozie : public ElementKonstrukcyjny {
private:
	KOLOR kolor;
public:
	Nadwozie() : kolor(CZARNY), ElementKonstrukcyjny() {}
	Nadwozie(KOLOR color, unsigned int newNumerSeryjny) : kolor(color) , ElementKonstrukcyjny(newNumerSeryjny) {}
	void setKolor(KOLOR newKolor) {
		this->kolor = newKolor;
	}
	KOLOR getKolor() {
		return kolor;
	}
};
class SrodekTransportu {
private:
	unsigned int numerEwidencyjny;
public:
	SrodekTransportu() : numerEwidencyjny(0) {}
	SrodekTransportu( unsigned int newNumerEwidencyjny ) : numerEwidencyjny (newNumerEwidencyjny){}
	void setnumerEwidencyjny(unsigned int newNumerEwidencyjny) {
		this->numerEwidencyjny = newNumerEwidencyjny;
	}
	unsigned int getnumerEwidencyjny() {
		return numerEwidencyjny;
	}
};
class PojazdSilnikowy : public SrodekTransportu {
private:
	Nadwozie nadwozieObj;
	Silnik silnikObj;
public:
	PojazdSilnikowy() : SrodekTransportu(), nadwozieObj(), silnikObj() {}
	PojazdSilnikowy(unsigned int newNumerEwidencyjny, unsigned int newNumerSeryjny, double newPojemnosc, KOLOR newColor) :
		silnikObj(newPojemnosc, newNumerSeryjny), nadwozieObj(newColor, newNumerSeryjny), SrodekTransportu(newNumerEwidencyjny) {}
};

/*
Zadanie 2 ( Klasy )

Zaproponuj hierarchię klas dla opisanego poniżej problemu. Zidentyfikuj klasy oraz powiązania pomiędzy
nimi występujące.

1. Każda broń palna posiada numer swój numer ewidencyjny będący nieujemną liczbą całkowitą.
2. Każdypistolet oraz karabinek automatyczny są bronią palną.
3. Każda broń palna posiada magazynek oraz lufę.
4. Magazynek opisuje liczba naboi, która jest nieujemną liczbą całkowitą.
5. Lufę opisuje kaliber, będący liczbą rzeczywistą.
6. Karabinek automatyczny posiada kolbę, należy zapamiętać materiał z jakiego została wykonana.
Może ona być drewniana (kod liczbowy 0), metalowa (kod liczbowy 1) bądź wykonana z kompozytu (kod liczbowy 2).

Rozwiązanie ma obejmować definicję odpowiednich klas. Wykorzystaj dziedziczenie oraz związki całośćczęść
(agregacja, kompozycja). Dane charakterystyczne dla obiektu przynajmniej jednej klasy mają być
polami prywatnymi, należy zdefiniować odpowiednie funkcje dostępowe. Każda klasa ma posiadać
konstruktor parametrowy i domyślny. Konstruktor domyślny zeruje pola, konstruktor parametrowy
pozwalana na ustawienie wartości pól. Uwaga — w przypadku dziedziczenia należy pamiętać o
właściwym uaktywnieniu konstruktorów klas bazowych. W przypadku kompozycji należy zadbać
o właściwe zainicjowanie obiektów składowych.


*/
enum KOLBA
{
	DREWNO,
	METAL,
	KOMPOZYT,
};
class Magazynek {
private:
	unsigned int liczbaNaboi;
public:
	Magazynek () : liczbaNaboi(0) {}
	Magazynek (unsigned int newLiczbaNaboi) : liczbaNaboi(newLiczbaNaboi){}
	void setLiczbaNaboi(unsigned int newLiczbaNaboi) { this->liczbaNaboi = newLiczbaNaboi; }
	unsigned int getLiczbaNaboi() { return liczbaNaboi; }
};
class Lufa {
private:
	double kaliber;
public:
	Lufa() : kaliber(0) {}
	Lufa(double newKaliber) : kaliber(newKaliber) {}
	void setKaliber(double newKaliber) { this->kaliber = newKaliber; }
	double getKaliber() { return kaliber; }
};
class BronPalna {
private:
	Lufa lufa;
	Magazynek magazynek;
	unsigned int numerEwidencyjny;
public:
	BronPalna() : lufa(), magazynek() , numerEwidencyjny(0){}
	BronPalna(unsigned int newNumerEwidencyjny,unsigned int newLiczbaNaboi, double newKaliber) : 
		numerEwidencyjny (newNumerEwidencyjny), magazynek(newLiczbaNaboi), lufa(newKaliber) {}
	Lufa getLufa() { return lufa; }
	Magazynek getMagazynel() { return magazynek; }
	unsigned int getNumerEwidencyjny() { return numerEwidencyjny; }
	void setLufa(Lufa newLufa) { this->lufa = newLufa; }
	void setMagazynek(Magazynek newMagazynek) { this->magazynek = newMagazynek; }
	void setNumerEwidencyjny(unsigned int newNumerEwidencyjny) { this->numerEwidencyjny = newNumerEwidencyjny; }
};
class Pistolet : public BronPalna {
public:
	Pistolet() : BronPalna() {}
	Pistolet(unsigned int newNumerEwidencyjny, unsigned int newLiczbaNaboi, double newKaliber) :
		BronPalna(newNumerEwidencyjny, newLiczbaNaboi, newKaliber) {}
};
class KarabinekAutomatyczny : public BronPalna {
private:
	KOLBA kolba;
public:
	KarabinekAutomatyczny() : BronPalna(), kolba(DREWNO) {}
	KarabinekAutomatyczny(unsigned int newNumerEwidencyjny, unsigned int newLiczbaNaboi, double newKaliber, KOLBA newKolba) :
		BronPalna(newNumerEwidencyjny, newLiczbaNaboi, newKaliber), kolba ( newKolba ) {}
	KOLBA getKolba() { return kolba; }
	void setKolba(KOLBA newKolba) { this->kolba = newKolba; }
};

/*
Zadanie 3 ( Klasy )
Zdefiniuj klasę Jacht posiadającą jedno pole prywatne typu całkowitego liczbaZagli, o wartości domyślnej
ustawianej na 0.
Klasa ma zawierać odpowiednie konstruktory (ogólny, domyślny), funkcje pozwalające na pobranie jak i ustawienie wartości pola prywatnego.
Dodatkowo klasa ma posiadać funkcję składową pokazInfo, wyprowadzającą do strumienia cout wszystkie informacje na temat jachtu.
Zdefiniuj klasę JachtMotorowy posiadającą jedno pole prywatne typu rzeczywistego pojemnoscSilnika, o wartości domyślnej ustawianej na 0.
Klasa ma zawierać odpowiednie konstruktory (ogólny, domyślny), funkcje pozwalające na pobranie jak i ustawienie wartości pola prywatnego.
Dodatkowo klasa ma posiadać funkcję składową pokazInfo, wyprowadzającą do strumienia cout wszystkie informacje na temat jachtu motorowego.

Zaproponuj taką organizację klas aby można było zdefiniować tablicę przechowującą wskaźniki do
obiektu klasy Jach i JachtMotorowy, oraz wykonać poniższe operacje:

tab[ 0 ] = new Jacht( 2 );
tab[ 1 ] = new JachtMotorowy( 3000 );
tab[ 2 ] = new Jacht( 4 );
tab[ 3 ] = new JachtMotorowy( 5000 );
. . .
for( int i = 0; i < 4; ++i )
tab[ i ]->pokazInfo();
Należy tak zdefiniować klasy, aby wywołanie pokazInfo prowadziło do wywołania funkcji wskazywanego
obiektu.

*/
class Lodz {
public:
	virtual void pokazInfo() { cout << "OgolnyObiekt" << endl; };
};
class Jacht : public Lodz {
private:
	int liczbaZagli;
public:
	Jacht() {
		liczbaZagli = 0;
	}
	Jacht(int newLiczbaZagli) {
		this->liczbaZagli = newLiczbaZagli;
	}
	int getLiczbaZagli() {
		return liczbaZagli;
	}
	void setLiczbaZagli(int newLiczbaZagli) {
		this->liczbaZagli = newLiczbaZagli;
	}
	void pokazInfo() {
		cout << "To jest jacht, ktory posiada " << getLiczbaZagli() << " zagli" << endl;
	}
};
class JachtMotorowy : public Lodz {
private:
	float pojemnoscSilnika;
public:
	JachtMotorowy() {
		pojemnoscSilnika = 0;
	}
	JachtMotorowy(float newPojemnoscSilnika) {
		this->pojemnoscSilnika = newPojemnoscSilnika;
	}
	float getPojemnoscSilnika() {
		return pojemnoscSilnika;
	}
	void setPojemnoscSilnika(float newPojemnoscSilnika) {
		this->pojemnoscSilnika = newPojemnoscSilnika;
	}
	void pokazInfo() {
		cout << "To jest jacht motorowy, ktory posiada " << getPojemnoscSilnika() << " koni mechanicznych" << endl;
	}
};
void zadanie3Klasy() {
	Lodz * tab[4];
	tab[0] = new Jacht(2);
	tab[1] = new JachtMotorowy(3000);
	tab[2] = new Jacht(4);
	tab[3] = new JachtMotorowy(5000);
	for (int i = 0; i < 4; ++i)
		tab[i]->pokazInfo();
}
/*
Zadanie 4 ( Klasy )
Autobus to pojazd silnikowy przeznaczony do przewozu pasażerów.
1. Każdy autobus ma określoną maksymalną liczbę pasażerów jak może być przewożona.
2. Aktualnie nie nakłada się żadnych ograniczeń na liczbę pasażerów.
3. Autobus, jak każdy pojazd, posiada określony rok produkcji, zakładamy, że nie może on być wcześniejszy niż 1950,
 maksymalnie autobus może pochodzić z roku bieżącego (przyjmujemy rok 2017).
4. Każdy pojazd silnikowy ma oczywiście silnik, który charakteryzuje jego pojemność, zakładamy że dozwolona jest pojemność od 0 do 10000 cm^3
5. Należy zdefiniować klasy Silnik, Pojazd, Autobus pozwalające na logiczne i naturalne opisanie wskazanych wyżej zależności oraz zdolne do przechowania
wskazanych wyżej informacji.
6. Klasy powinny być tak skonstruowane, aby możliwe były następujące operacje (obiekt opisujący silnik pojazdu powinien być dynamicznie alokowany na stercie przez
konstruktor klasy Pojazd):

Autobus jelcz( 52, 2010, 5000 ), ikarus( jelcz ), jakisInny;
ikarus.ustawRokProd( 2015 );
ikarus.silnik->ustawPojemnosc( 7000 );
ikarus.lbPasaz = 48;
cout << endl << jelcz.pobierzRokProd();
cout << endl << jelcz.lbPasaz;
cout << endl << jelcz.silnik->pobierzPojemnosc();
cout << endl << ikarus.pobierzRokProd();
cout << endl << ikarus.lbPasaz;
cout << endl << ikarus.silnik->pobierzPojemnosc();
cout << endl << jakisInny.pobierzRokProd();
cout << endl << jakisInny.lbPasaz;
cout << endl << jakisInny.silnik->pobierzPojemnosc();
*/
class Engine {
private:
	double pojemnosc;
public:
	Engine() : pojemnosc(0) {}
	Engine(double newPojemnosc) : pojemnosc(0) {
		ustawPojemnosc(newPojemnosc);
	}
	void ustawPojemnosc(double newPojemnosc) {
		if (newPojemnosc >= 0 && newPojemnosc <= 10000)
			this->pojemnosc = newPojemnosc;
	}
	double pobierzPojemnosc() { return pojemnosc; }
};
class Pojazd {
public:
	Engine * silnik;
	Pojazd() : silnik() {
		silnik = new Engine;
	}
	~Pojazd() {
		delete silnik;
	}
	Pojazd(double newPojemnosc) {
		silnik = new Engine(newPojemnosc);
	}
};
class Autobus : public Pojazd {
private:
	int rokProdukcji;
public:
	int lbPasaz;
	Autobus() : Pojazd(), lbPasaz(0), rokProdukcji(1950) {}
	Autobus(double newPojemnosc, int newLiczbaPasazerow, int newRokProdukcji) : 
		Pojazd(newPojemnosc), lbPasaz(newLiczbaPasazerow), rokProdukcji(newRokProdukcji) {}
	int pobierzRokProd() { return rokProdukcji; }
	void ustawRokProd(int newRokProd) {
		if (newRokProd >= 1950 && newRokProd <= 2017)
			this->rokProdukcji = newRokProd;
	}
};
void Zadanie4Klasy() {
	Autobus jelcz(52, 2010, 5000), ikarus(jelcz), jakisInny;
	ikarus.ustawRokProd(2015);
	ikarus.silnik->ustawPojemnosc(7000);
	ikarus.lbPasaz = 48;
	cout << endl << jelcz.pobierzRokProd();
	cout << endl << jelcz.lbPasaz;
	cout << endl << jelcz.silnik->pobierzPojemnosc();
	cout << endl << ikarus.pobierzRokProd();
	cout << endl << ikarus.lbPasaz;
	cout << endl << ikarus.silnik->pobierzPojemnosc();
	cout << endl << jakisInny.pobierzRokProd();
	cout << endl << jakisInny.lbPasaz;
	cout << endl << jakisInny.silnik->pobierzPojemnosc();
}

/*
Zadanie 5 ( Klasy )

Proszę zdefiniować klasę Osoba, posiadającą dwa prywatne pola. Pierwsze pole, typu int, ma
przechowywać rok urodzenia osoby (trzeba zdefiniować funkcje ustawiania i pobierania wartości).
Dozwolone są wartości od roku 1990 aż do 2017. Drugie prywatne pole ma przechowywać informację o
nazwisku osoby (trzeba zdefiniować funkcje ustawiania i pobierania wartości ). Pole to powinno być polem
wskaźnikowym, funkcje składowe klasy Osoba (konstruktory, funkcja ustawiania wartości pola) powinny
dynamicznie przydzielać pamięć (operator new) dla łańcucha znaków opisujące nazwisko. Należy
przydzielać dokładnie tyle pamięci, ile potrzeba dla przechowania aktualnie ustawionego nazwiska.
Należy pamiętać o zwalnianiu pamięci dla nazwiska w momencie kiedy obiekt klasy Osoba jest usuwany
z pamięci.
Proszę również zdefiniować klasę Student, wykorzystując dziedzicznie. Klasa ta powinna posiadać pole
typu int, opisujące numer albumu, pole może być publiczne i nie nakładamy na nie żadnych ograniczeń,
przy czym jego wartość domyślna powinna wynosić -1. Klasy powinny być tak skonstruowane, aby
możliwe były następujące operacje:
Osoba osoba;
Student pierwszy( "Kowalski", 1996, 1234 );
Student drugi( pierwszy );
drugi.ustawRokUrodz( 2000 );
drugi.ustawNazwisko( "Nowak" );
cout << endl << "Nazwisko: " << osoba.pobierzNazwisko();
cout << endl << "Rocznik: " << osoba.pobierzRokUrodz();
cout << endl << "Nazwisko: " << pierwszy.pobierzNazwisko();
cout << endl << "Rocznik: " << pierwszy.pobierzRokUrodz();
cout << endl << "Nazwisko: " << drugi.pobierzNazwisko();
cout << endl << "Rocznik: " << drugi.pobierzRokUrodz();

*/
class Osoba {
private:
	int rokUrodz;
	char * nazwisko;
public:
	Osoba() : rokUrodz(0), nazwisko(NULL) {}
	Osoba(char * newNazwisko,int newRokUrodz ) : rokUrodz(newRokUrodz) {
		ustawNazwisko(newNazwisko);
	}
	~Osoba() {
		delete nazwisko;
	}
	char* pobierzNazwisko() { return nazwisko; }
	int pobierzRokUrodz() { return rokUrodz; }
	void ustawRokUrodz(int newRokUrodz) {
		if (newRokUrodz >= 1990 && newRokUrodz <= 2017)
			rokUrodz = newRokUrodz;
	}
	void ustawNazwisko(char * newNazwisko) {
		int liczbaZnakow = 0;
		do {
			liczbaZnakow++;
			newNazwisko++;
		} while (*newNazwisko != '\0');
		nazwisko = new char[liczbaZnakow];
		newNazwisko -= liczbaZnakow;
		do {
			*nazwisko = *newNazwisko;
			liczbaZnakow--;
		} while (liczbaZnakow > 0);
	}
};
class Student : public Osoba {
public:
	int numerAlbumu;
	Student() : Osoba () ,numerAlbumu(-1) {}
	Student(char * newNazwisko, int newRokUrodz, int newNumerAlbumu) :
		Osoba(newNazwisko, newRokUrodz), numerAlbumu(newNumerAlbumu) {}

};
void Zadanie5() {
	Osoba osoba;
	Student pierwszy("Kowalski", 1996, 1234);
	Student drugi(pierwszy);
	drugi.ustawRokUrodz(2000);
	drugi.ustawNazwisko("Nowak");
	cout << endl << "Nazwisko: " << osoba.pobierzNazwisko();
	cout << endl << "Rocznik: " << osoba.pobierzRokUrodz();
	cout << endl << "Nazwisko: " << pierwszy.pobierzNazwisko();
	cout << endl << "Rocznik: " << pierwszy.pobierzRokUrodz();
	cout << endl << "Nazwisko: " << drugi.pobierzNazwisko();
	cout << endl << "Rocznik: " << drugi.pobierzRokUrodz();
}
/*
Zadanie 6

Proszę zdefiniować klasy Zwierzak, Kot, Pies w taki sposób, aby mógł się poprawnie skompilować
poniższy program, produkując przedstawione rezultaty:
int main()
	{
	int wybor;
	Zwierzak * zwierz;
	cout << "\nWybierz zwierzaka\n1. Kot\n2. Pies\n>> ";
	cin >> wybor;
		switch( wybor )
		{
		case 1 :	zwierz = new Kot;
					break;
		case 2 :	zwierz = new Pies;
					break;
		}
		zwierz->dajGlos();
		. . .
	}

Gdy użytkownik wybierze 1:
Jestem kot, miauczę

Gdy użytkownik wybierze 2:
Jestem pies, szczekam

Uwaga, użycie poniższej instrukcji ma spowodować błąd kompilacji — utworzenie obiektu klasy Zwierzak
ma być niedozwolone:
zwierz = new Zwierzak;
Proszę przećwiczyć sytuację, w której obiekty powyższych klas będą posiadały wspólne cechy, takie jak
imię, wiek… itp.
*/
 class Zwierzak {
private:
	string imie;
	int wiek;
public:
	Zwierzak() {}
	~Zwierzak() {}
	virtual void dajGlos() = 0;
};
class Kot : public Zwierzak {
public:
	Kot() : Zwierzak() {}
	void dajGlos() {
		cout << "Jestem kot, miaucze" << endl;
	}
};
class Pies : public Zwierzak {
public:
	Pies() : Zwierzak() {}
	void dajGlos() {
		cout << "Jestem pies, szczekam" << endl;
	}
};
void zadanie6() {
	int wybor;
	Zwierzak * zwierz;
	// zwierz = new Zwierzak;
	cout << "\nWybierz zwierzaka\n1. Kot\n2. Pies\n>> ";
	cin >> wybor;
	switch (wybor)
	{
	case 1: zwierz = new Kot;
		break;
	case 2: zwierz = new Pies;
		break;
	}
	zwierz->dajGlos();
}
int main()
{
	cin.ignore();
	cin.get();
    return 0;
}