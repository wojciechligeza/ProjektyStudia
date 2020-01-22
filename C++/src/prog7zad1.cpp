#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 255

using namespace std;

char file_name[MAX_LEN];
FILE* ask_name_and_open(void)
{
	printf("Podaj nazwe pliku: ");
	fgets(file_name, MAX_LEN, stdin);

	file_name[strlen(file_name) - 1] = '\0';
	return fopen(file_name, "rt");
}


int main()
{
	int c;
	long int liczbaLiczb = 0;
	long int liczbaLiterD = 0;
	long int liczbaLiterM = 0;
	long int liczbaZnakow = 0;

	FILE* file;
	if ((file = ask_name_and_open()) == NULL)
	{
		puts("\nBlad otwarcia pliku.");
	}
	else {
		while ((c = fgetc(file)) != EOF)
		{
			if (isdigit(c))
			{
				liczbaLiczb++;
			}
			else {
				if (isupper(c))
				{
					liczbaLiterD++;
				}
				else {
					if (islower(c))
					{
						liczbaLiterM++;
					}
					else {
						if (ispunct(c))
						{
							liczbaZnakow++;
						}
					}
				}
			}
		}
		cout << "Liczba liczb: " << liczbaLiczb << endl;
		cout << "Liczba duzych liter: " << liczbaLiterD << endl;
		cout << "Liczba malych liter: " << liczbaLiterM << endl;
		cout << "Liczba znakow: " << liczbaZnakow << endl;
		fclose(file);
	}
	return EXIT_SUCCESS;
}
