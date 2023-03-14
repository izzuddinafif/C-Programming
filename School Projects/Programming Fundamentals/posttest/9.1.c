#include<stdio.h>
#include<string.h>
int main(void)
{
    char nama[2][40];
    int i;
    for(i=0; i<2; ++i) 
    {
        switch (i)
        {
        case 0:
            printf("Masukkan nama orang pertama: ");
            gets(nama[i]);
            break;
        case 1:
             printf("masukkan nama orang kedua: ");
            gets(nama[i]);
            break;
        }
    }
    printf("Jika dibandingkan nama orang pertama dan kedua maka nilainya menjadi %d\n", strcmp(nama[0],nama[1]));
    printf("Panjang karakter dari orang pertama adalah %d, sedangkan panjang karakter dari orang kedua adalah %d\n", strlen(nama[0]), strlen(nama[1]));
    printf("Jika nama orang pertama dibalik menjadi: %s", strrev(nama[0]));
}