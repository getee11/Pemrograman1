#include <stdio.h>

int main () {
    int n;

    scanf ("%d", &n);

    if (n>0) {
        printf ("Positif");
    }
    else if (n<0) {
        printf ("Negatif");
    }
    else {
        printf ("nol");
    }
    return 0;
}