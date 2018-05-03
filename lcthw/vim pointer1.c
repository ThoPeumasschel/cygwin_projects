#include<stdio.h>

main() {
	int zahl;
	int *ptr;
	zahl = 80;
	ptr = &zahl;
	printf("Der Wert von Zahl ist %i\n", zahl);
	printf("Die Adresse von Zahl ist %p\n", ptr);
	printf("Die Groesse von Zahl ist %d\n", sizeof(zahl));

}



