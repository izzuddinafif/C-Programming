#include<stdio.h>
struct dept{
    char prodi[20];
    int kelas;
};
struct person{
    char nama[20], nrp[20];
    struct dept departemen;
}mahasiswa;
int main(void)
{
    printf("Masukkan nama mahasiswa: ");
    scanf("%s", mahasiswa.nama);
    printf("Masukkan nama prodi: ");
    scanf("%s", mahasiswa.departemen.prodi);
    printf("Masukkan kelas: ");
    scanf("%d", &mahasiswa.departemen.kelas);
    printf("Masukkan NRP: ");
    scanf("%s", mahasiswa.nrp);
    printf("Nama mahasiswa %s NRP %s, prodi %s kelas %d", mahasiswa.nama, mahasiswa.nrp, mahasiswa.departemen.prodi, mahasiswa.departemen.kelas);
}