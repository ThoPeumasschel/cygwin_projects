#include<stdio.h>

int main() {
	int zahl;
	int *ptr;
	zahl = 88;
	ptr = &zahl;

	printf("Der Wert von zahl ist %i\n", zahl);
	printf("Die Adresse von Zahl ist %p\n", &zahl);
	printf("Die Groesse von ptr ist %i\n", (int)sizeof(ptr));
	printf("Die Groesse von int ist %i\n", sizeof(int));

}
