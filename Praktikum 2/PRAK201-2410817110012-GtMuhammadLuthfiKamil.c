#include <stdio.h>

int main () {
    char nama [100], nim [100], kelas [100], ttl[100], alamat [100], hobby [100], no_hp[100];

    printf ("Nama                   : ");
    scanf ("%[^\n]%*c", nama);
    printf ("NIM                    : ");
    scanf ("%[^\n]%*c", nim);
    printf ("Kelas Paralel          : ");
    scanf ("%[^\n]%*c", kelas);
    printf ("Tempat/Tanggal Lahir   : ");
    scanf ("%[^\n]%*c", ttl);
    printf ("Alamat                 : ");
    scanf ("%[^\n]%*c", alamat);
    printf ("Hobby                  : ");
    scanf ("%[^\n]%*c", hobby);
    printf ("No. HP                 : ");
    scanf ("%[^\n]%*c", no_hp);
    printf ("\n");

    printf ("Nama                   : %s\n", nama);
    printf ("NIM                    : %s\n", nim);
    printf ("Kelas Paralel          : %s\n", kelas);
    printf ("Tempat/Tanggal Lahir   : %s\n", ttl);
    printf ("Alamat                 : %s\n", alamat);
    printf ("Hobby                  : %s\n", hobby);
    printf ("No. HP                 : %s\n", no_hp);
    return 0;
}