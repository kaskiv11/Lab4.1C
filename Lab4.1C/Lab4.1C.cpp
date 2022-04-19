#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;


int ProcessTXT(char* fname) {
	FILE* f;
	if ((f = fopen(fname, "r")) == NULL) {
		cerr << "Помилка при відкритті файлу.\n";
		exit(1);
	};
	char ch = getc(f);
	int k = 0;
	while (ch != EOF)
	{
		if (ch == 'B' || ch == 'A' || ch == 'S' || ch == 'I' || ch == 'C') {
			k++;
		}
		ch = getc(f);
	}
	fclose(f);
	return k;
}

int main()
{
	char name[6] = "t.txt";
	cout << "Count of symbols which included in word BASIC: " << ProcessTXT(name) << endl;

	cin.get();
	return 0;
}
