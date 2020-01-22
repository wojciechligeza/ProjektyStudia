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
	long double liczbaZnaki = 0;
	long double liczbaZnakiK = 0;
	long double liczbaogolna = 0;
	bool kom = false;

	FILE* file;
	if ((file = ask_name_and_open()) == NULL)
	{
		puts("\nBlad otwarcia pliku.");
	}
	else {
		while ((c = fgetc(file)) != EOF)
		{
			if (c == '/')
			{
				if ((c = fgetc(file)) == '*')
				{
					kom = true;
				}
			}
			if (c == '*')
			{
				if ((c = fgetc(file)) == '/')
				{
					kom = false;
				}
			}
			if (kom == true)
			{
				if (!isspace(c))
				{
					liczbaZnakiK++;
					liczbaogolna++;
				}
			}
			else {
				if (!isspace(c))
				{
					liczbaZnaki++;
					liczbaogolna++;
				}
			}

		}

		cout << "Liczba znakow normalnych: " << (liczbaZnaki / liczbaogolna) * 100 << "%" << endl;
		cout << "Liczba znakow w komentarzu: " << (liczbaZnakiK / liczbaogolna) * 100 << "%" << endl;

		fclose(file);
	}
	return EXIT_SUCCESS;
}
