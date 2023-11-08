#include <stdio.h>

int main() {
    float a, b;
    char pil;

    while (1) {
        printf("Pilih operasi:\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan pilihan : ");
        scanf(" %c", &pil);

        if (pil == '1' || pil == '2' || pil == '3' || pil == '4') {
            printf("Masukkan angka pertama: ");
            scanf("%f", &a);
            printf("Masukkan angka kedua: ");
            scanf("%f", &b);

            if (pil == '1') {
                printf("Hasil pertambahan antara %.2f dengan %.2f adalah %.2f\n", a, b, a + b);
            } else if (pil == '2') {
                printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", a, b, a - b);
            } else if (pil == '3') {
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", a, b, a * b);
            } else if (pil == '4') {
                if (b != 0) {
                    printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", a, b, a / b);
                }
            }
        } else if (pil == '5') {
            printf("Terimakasih, telah menggunakan kalkulator Andra.\n");
            break;
        } else {
            printf("Input anda salah, silahkan coba lagi.\n");
        }
    }

    return 0;
}
