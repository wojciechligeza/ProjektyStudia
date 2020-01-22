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
	long int liczbaLini = 0;


	FILE* file;
	if ((file = ask_name_and_open()) == NULL)
	{
		puts("\nBlad otwarcia pliku.");
	}
	else {
		while ((c = fgetc(file)) != EOF)
		{
			if (c == '\n')
			{
				liczbaLini++;
			}
		}
		cout << "Liczba lini: " << liczbaLini << endl;

		fclose(file);
	}
	return EXIT_SUCCESS;
