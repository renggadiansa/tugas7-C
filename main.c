#include <stdio.h>

int main() {
    //1
//    int n;
//
//    printf("Masukkan nilai n: ");
//    scanf("%d", &n);
//
//    if (n % 2 == 0) {
//        n--;
//    }
//
//    printf("Output: ");
//
//    for (int i = 1; i <= n; i += 2) {
//        printf("%d ", i);
//    }
//
//    printf("\n");

    //2
//    int n;
//    int sum = 0;
//
//    printf("Masukkan sebuah bilangan: ");
//    scanf("%d", &n);
//
//    if (n < 0) {
//        printf("Masukkan bilangan positif atau nol.\n");
//        return 1;
//    }
//
//    for (int i = n; i >= 1; i--) {
//        sum += i;
//        if (i == 1) {
//            printf("%d = ", i);
//        } else {
//            printf("%d + ", i);
//        }
//    }
//
//    printf("%d\n", sum);

    //3
    char karakter;

    for (karakter = 'Z'; karakter >= 'A'; karakter--) {
        printf("%c\n", karakter);
    }

    //4
    int n;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);

    printf("Output: ");

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            printf("%d ", i);
        } else {
            printf("%d ", -i);
        }
    }

    printf("\n");

    //5
    int num;
    int isPrime = 1;

    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &num);

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (num <= 1) {
        isPrime = 0;
    }

    if (isPrime) {
        printf("Bilangan adalah bilangan prima\n");
    } else {
        printf("Bilangan bukan bilangan prima\n");
    }

    //6
    int jumlahMataKuliah;
    printf("Masukkan jumlah mata kuliah: ");
    scanf("%d", &jumlahMataKuliah);

    char nilai;
    int jam, totalJam = 0;
    float totalNilai = 0.0;

    for (int i = 1; i <= jumlahMataKuliah; i++) {
        printf("Nilai Mata Kuliah %d : ", i);
        scanf(" %c", &nilai);
        printf("Jumlah jam Mata Kuliah %d : ", i);
        scanf("%d", &jam);

        float nilaiAngka;
        switch (nilai) {
            case 'A':
                nilaiAngka = 4.0;
                break;
            case 'B':
                nilaiAngka = 3.0;
                break;
            case 'C':
                nilaiAngka = 2.0;
                break;
            case 'D':
                nilaiAngka = 1.0;
                break;
            case 'E':
                nilaiAngka = 0.0;
                break;
            default:
                printf("Nilai huruf tidak valid.\n");
                return 1;
        }

        totalNilai += nilaiAngka * jam;
        totalJam += jam;
    }

    float ips = totalNilai / totalJam;

    printf("Indeks Prestasi Semester : %.2f\n", ips);
}
