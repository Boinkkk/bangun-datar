#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    bool isRun = true;
    int input;

    while (isRun == true) {
        printf("--Kalkulator Bangun Datar-- \n Silahkan pilih bangun datar yang ingin dihitung \n"
               "1. Lingkaran \n"
               "2. Segitiga \n"
               "3. Persegi Panjang \n"
               "\n"
               "Masukkan input :  ");

        scanf("%d", &input);
        int error = 0;

        switch (input) {

            case 1:
                printf("\n --Menghitung Luas Lingkaran-- \n"
                       "Masukkan Jari Jari lingkaran : ");
                float phi = 3.14;
                float jari_jari;

                scanf("%f", &jari_jari);

                float luas_lingkaran = luas_lingkaran = (jari_jari * jari_jari) * phi;
                printf("%.2f\n", luas_lingkaran);
                break;

            case 2:
                printf("\n --Menghitung Luas Segitiga-- \n "
                       "Masukkan panjang : ");

                float alas;
                float tinggi;
                scanf("%f", &alas);

                printf("\n Masukkan tinggi : ");
                scanf("%f", &tinggi);

                float luas_segitiga = luas_segitiga = (alas * tinggi) / 2;
                printf("Luas Segitiga : %.2f", luas_segitiga);
                break;


            case 3:
                printf("\n -- Menghitung Luas Persegi panjang-- \n"
                       "Masukkan Panjang : ");

                float panjang;
                float lebar;

                scanf("%f", &panjang);

                printf("\nMasukkan lebar : ");
                scanf("%f", &lebar);

                float luas_PP = panjang * lebar;
                printf("Luas Persegi Panjang : %f", luas_PP);
                break;

            default:
                printf("Input invalid, apakah anda ingin mengulanginya? ketik 1 jika iya : ");


                scanf("%d", &error);
                if (error != 1){
                    printf("--Program Selesai--");
                    exit(0);
                }
                break;

        }

        printf("\nApakah anda ingin mengulangi program? ketik 1 jika iya");

        int toogle;
        scanf("%d", &toogle);

        if (toogle != 1) {
            isRun = false;
            printf("Program Berakhir");

        }

    }
}