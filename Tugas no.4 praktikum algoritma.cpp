#include <stdio.h>

// program untuk menghitung luas persegi panjang by Rendi Aigo Brandon 23343082

int main() {
	
	//deklarasi variabel
	double panjang = 10.0;
	double lebar = 5.0;
	double luas;

	// Menghitung luas persegi panjang 
	luas = panjang * lebar;
	
	// Output
	printf("Panjang: %.2lf cm\n", panjang);
    printf("Lebar: %.2lf cm\n", lebar);
    printf("Maka Luas Persegi Panjang Adalah %.2lf cm^2\n", luas);

    return 0;
}