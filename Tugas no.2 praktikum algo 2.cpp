#include <stdio.h>

// Menghitung nilai akhir by Rendi Aigo Brandon 23343082

int main() {
	//deklarasi 
    char nama[50];
    char nim[50];
    char prodi[50];
    char fakultas[50];
    double nilaiPraktikum, nilaiUTS, nilaiUAS, nilaiAkhir;

    //input dari user
    printf("Masukkan Nama  =  ");
    fgets(nama, sizeof(nama), stdin);
    
    printf("Masukkan Nim  =  ");
    fgets(nim, sizeof(nim), stdin);
    
    printf("Masukkan Prodi  = ");
    fgets(prodi, sizeof(prodi), stdin);

    printf("Masukkan Fakulitas  = ");
    fgets(fakultas, sizeof(fakultas), stdin);

    printf("Masukkan Nilai Pratikum  = ");
    scanf("%lf", &nilaiPraktikum);
    
    printf("Masukkan Nilai UTS  = ");
    scanf("%lf", &nilaiUTS);
    
    printf("Masukkan Nilai UAS  =");
    scanf("%lf", &nilaiUAS);

    // Menghitung nilai akhir
    nilaiAkhir = 0.3 * nilaiPraktikum + 0.3 * nilaiUTS + 0.4 * nilaiUAS;

    // Output 
    printf("\nNama = %s", nama);
    printf("NIM = %s", nim);
    printf("Prodi = %s", prodi);
    printf("Fakultas =  %s", fakultas);
    printf("Nilai Praktikum = %.2lf\n", nilaiPraktikum);
    printf("Nilai UTS = %.2lf\n", nilaiUTS);
    printf("Nilai UAS =  %.2lf\n", nilaiUAS);
    printf("Nilai Akhir = %.2lf\n", nilaiAkhir);

    return 0;
}