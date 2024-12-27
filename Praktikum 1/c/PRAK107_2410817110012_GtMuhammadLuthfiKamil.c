#include <stdio.h>
int main(){
    int sisi1, sisi2, sisi3;
    sisi1 = 4;
    sisi2 = 5;
    sisi3 = 7;
    int biayapermeter = 85000;
    int keliling = sisi1 + sisi2 + sisi3;
    int biayatotal = keliling * biayapermeter;
printf("Diketahui:\n");
printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", sisi1, sisi2, sisi3);
printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
printf("Harga tanah Per Meter adalah %d\n", biayapermeter);
printf("Jawaban:\n");
printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", biayatotal);
    return 0;
}
