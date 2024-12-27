#include <stdio.h>
int main(){
    float putaran = 5;
    float jaraktotal = 14;
    float jarijari = jaraktotal / (2 * 3.14 * putaran); 
printf("Diketahui :\n");
printf("Pak Dengklek mengelilingi taman = %.f Putaran\n", putaran);
printf("Jarak tempuh Pak Dengklek = %.f Kilometer\n\n", jaraktotal);
printf("Jawaban :\n");
printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jarijari);
    return 0;
}