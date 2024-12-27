#include <stdio.h>
int main(){
    int sepatuA = 400000;
    int sepatuB = 350000;
printf("Harga sepatu A adalah %d\n", sepatuA);
printf("Harga sepatu B adalah %d\n", sepatuB);
    printf("Sepatu A mendapatkan diskon 13%% sehingga harganya menjadi %d\n", sepatuA - (sepatuA * 13 / 100));
    printf("Sepatu B mendapatkan diskon 21%% sehingga harganya menjadi %d\n", sepatuB - (sepatuB * 21 / 100));
    return 0;
}
