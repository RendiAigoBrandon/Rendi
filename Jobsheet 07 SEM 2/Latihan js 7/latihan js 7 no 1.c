#include<stdio.h>
#include<stdlib.h>
#define ukuran 5

//Created By Rendi Aigo Brandon_23343082

void tambah();
void hapus();
void display();

int front = -1, rear = -1;
int queue[ukuran];

int main() {
    int pilihan;
    while(pilihan != 4) {
        printf("\n*************************Main Menu*****************************\n");
        printf("\n==============================================================\n");
        printf("\n1. Tambah sebuah elemen\n2. Hapus sebuah elemen\n3. Tampilkan antrian\n4. Keluar\n");
        printf("\nMasukkan pilihanmu: ");
        scanf("%d", &pilihan);
        switch(pilihan) {
            case 1:
                tambah();
                break;
            case 2:
                hapus();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("\nMasukkan pilihan yang sesuai.\n");
        }
    }
}

void tambah() {
    int item;
    printf("\nMasukkan elemen yang ingin ditambahkan: ");
    scanf("%d", &item);
    if(rear == ukuran - 1) {
        printf("\nOVERFLOW\n");
        return;
    }
    if(front == -1 && rear == -1)
        front = rear = 0;
    else
        rear = rear + 1;
    queue[rear] = item;
    printf("\nNilai berhasil ditambahkan.\n");
}

void hapus() {
    int item;
    if(front == -1 || front > rear) {
        printf("\nUNDERFLOW\n");
        return;
    }
    else {
        item = queue[front];
        if(front == rear)
            front = rear = -1;
        else
            front = front + 1;
        printf("\nNilai berhasil dihapus.\n");
    }
}

void display() {
    int i;
    if(rear == -1)
        printf("\nAntrian kosong.\n");
    else {
        printf("\nMenampilkan nilai...\n");
        for(i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
