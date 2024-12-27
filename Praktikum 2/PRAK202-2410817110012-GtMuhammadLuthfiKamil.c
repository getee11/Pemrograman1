#include <stdio.h>

int main () {
    float a, b, c, d;

 printf("Masukkan Nilai Pertama : ");
 scanf("%f", &a);
 printf("Masukkan Nilai Kedua : ");
 scanf("%f", &b);
 printf("\n");

 printf("Hasil dari penjumlahan nilai pertama \"%.f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"", a, b, a + b);
 printf("\n");

 printf("\n");
 printf("Masukkan Nilai Pertama : ");
 scanf("%f", &c);
 printf("Masukkan Nilai Kedua : ");
 scanf("%f", &d);
 printf("\n");

 printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"", c, d, c + d);
 
 return 0;
}