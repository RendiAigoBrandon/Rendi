#include <stdio.h>

// program untuk menghitung luas dari segitiga by Rendi Aigo Brandon 23343082

int main() {
    // Deklarasi 
    double panjang_alas = 8.0;
    double tinggi = 5.0;      
    double luas;

    // Menghitung luas segitiga
    luas = 0.5 * panjang_alas * tinggi;

    // Output
    printf("Panjang Alas = %.2lf cm\n", panjang_alas);
    printf("Tinggi = %.2lf cm\n", tinggi);
    printf("Luas Segitiga = %.2lf cm^2\n", luas);
    
    return 0;
}