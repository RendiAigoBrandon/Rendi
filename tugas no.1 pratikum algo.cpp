#include <stdio.h>

// Rendi Aigo Brandon 23343082

int main () {
	
	char name[100];
	printf("Hallo, Siapa nama lengkapmu?");
	scanf("%[^\n]s", &name);
	printf("Selamat datang %s dalam pemrograman C!\n", name);
	
	return 0;
}