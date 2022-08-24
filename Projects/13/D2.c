#include<stdio.h>
struct data{
    char nama[10];
    int jumlah, harga;
}toko;
int main(void)
{
    printf("Masukkan nama barang: ");
    scanf("%s", toko.nama);
    printf("Masukkan jumlah barang: ");
    scanf("%d", &toko.jumlah);
    printf("Masukkan harga per barang: ");
    scanf("%d", &toko.harga);
    printf("Jadi barang yang dimasukkan adalah %s, jumlah barang %d, dan total harganya adalah %d", toko.nama, toko.jumlah, toko.harga*toko.jumlah);
}
