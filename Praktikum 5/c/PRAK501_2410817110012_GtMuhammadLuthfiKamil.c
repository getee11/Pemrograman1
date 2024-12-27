#include <stdio.h>

int MaxBilangan (int a, int b, int c, int d){
    int maxvalue = a;
    if (b > maxvalue) {
        maxvalue = b;
    }
    if (c > maxvalue){
        maxvalue = c;
    }
    if (d > maxvalue){
        maxvalue = d;
    }
    return maxvalue;
}
int main() {
int a, b, c, d;
scanf("%d %d %d %d", &a, &b, &c, &d); 
int hasil = MaxBilangan(a, b, c, d); 
printf("%d", hasil);
return 0;
}