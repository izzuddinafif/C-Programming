#include<stdio.h>
#include<string.h>
//#define MAKS 10
struct data{
    char nama[30];
    char huruf[3];
    float akhir, tugas, uts, uas, final;
};
struct data mhs[2];
void nilai(void)
{
    for(int i=0; i<2; ++i)    
    {
        printf("Nama: "); scanf("%s", mhs[i].nama);
        printf("Nilai tugas: "); scanf("%f", &mhs[i].tugas);
        printf("Nilai UTS: "); scanf("%f", &mhs[i].uts);
        printf("Nilai UAS: "); scanf("%f", &mhs[i].uas);
        mhs[i].akhir=0.2*mhs[i].tugas+0.4*mhs[i].uts+0.4*mhs[i].uas;
        printf("Nilai Akhir: %g", mhs[i].akhir);
        if(mhs[i].akhir>=81)
            strcpy(mhs[i].huruf, "A");
        else if(mhs[i].akhir>=71 && mhs[i].akhir<81)
            strcpy(mhs[i].huruf, "AB");
        else if(mhs[i].akhir>=65 && mhs[i].akhir<71)
            strcpy(mhs[i].huruf, "B");
        else if(mhs[i].akhir>=61 && mhs[i].akhir<65)
            strcpy(mhs[i].huruf, "BC");
        else if(mhs[i].akhir>=56 && mhs[i].akhir<61)
            strcpy(mhs[i].huruf, "C");
        else if(mhs[i].akhir>=40 && mhs[i].akhir<56)
            strcpy(mhs[i].huruf, "D");
        else
            strcpy(mhs[i].huruf, "E");
        printf("\nNilai Huruf: %s\n", mhs[i].huruf);
        if(mhs[i].akhir>=56)
            printf("Selamat anda lulus");
        else
            printf("Mohon maaf anda belum lulus");
        puts("\n");
    }
}
void tertinggi(void)
{
    struct data tng;
    for(int i=0; i<2; ++i)
    {
        if(mhs[i].akhir>tng.akhir)
        {
        tng.akhir=mhs[i].akhir;
        strcpy(tng.nama, mhs[i].nama);
        }
    }
    printf("Pemilik nilai Akhir tertinggi adalah %s dengan nilai sebesar %g", tng.nama, tng.akhir);
}
int main(void)
{
    nilai();
    tertinggi();
}