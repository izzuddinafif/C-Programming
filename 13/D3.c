#include<stdio.h>
struct luas{
    int alas, tinggi;
    float luas;
}segitiga;
int main(void) {
    printf("Masukkan alas: ");
    scanf("%d", &segitiga.alas);
    printf("Masukkan tinggi: ");
    scanf("%d", &segitiga.tinggi);
    segitiga.luas=segitiga.alas*segitiga.tinggi/2;
    printf("Jadi luasnya adalah %g", segitiga.luas);
}