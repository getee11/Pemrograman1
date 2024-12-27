#include<stdio.h>
#include<math.h>
int main(){
float A, B;

    scanf("%f", &A);
    scanf("%f", &B);
 
float alas = sqrt((B * B) - (A * A));
float tinggi = A;
float keliling = A + B + alas;
float luas = 0.5 * alas * A;

    printf("Alas = %.f cm\n", alas);
    printf("Tinggi = %.f cm\n", tinggi);
    printf("Keliling = %.f cm\n", keliling);
    printf("Luas = %.f cm^2\n", luas);

float A1, B1;

    scanf("%f\n", &A1);
    scanf("%f", &B1);

float alas1 = sqrt((B1 * B1) - (A1 * A1));
float tinggi1 = A1;
float keliling1 = A1 + B1 + alas1;
float luas1 = 0.5 * alas1 * A1;

    printf("Alas = %.f cm\n", alas1);
    printf("Tinggi = %.f cm\n", tinggi1);
    printf("Keliling = %.f cm\n", keliling1);
    printf("Luas = %.f cm^2", luas1);
return 0;
}