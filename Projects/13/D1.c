#include<stdio.h>
struct person{
    char nama[10], alamat[10];
    long int gaji;
}karyawan;
int main(void)
{
    printf("Masukkan nama karyawan: ");
    scanf("%s", karyawan.nama);
    printf("Masukkan alamat karyawan: " );
    scanf("%s", karyawan.alamat);
    printf("Masukkan gaji kotor karyawan: ");
    scanf("%d", &karyawan.gaji);
    printf("Gaji bersih yang diterima: %d", (karyawan.gaji*85/100));
}