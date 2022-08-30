#include<stdio.h>
struct data{
    char nama[30], huruf;
    float akhir, tugas, uts, uas, final;
}mhs[2];
int main(void)
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
            mhs[i].huruf='A';
        else if(mhs[i].akhir>=71 && mhs[i].akhir<81)
            mhs[i].huruf='AB';
        else if(mhs[i].akhir>=65 && mhs[i].akhir<71)
            mhs[i].huruf='B';
        else if(mhs[i].akhir>=61 && mhs[i].akhir<65)
            mhs[i].huruf='BC';
        else if(mhs[i].akhir>=56 && mhs[i].akhir<61)
            mhs[i].huruf='C';
        else if(mhs[i].akhir>=40 && mhs[i].akhir<56)
            mhs[i].huruf='D';
        else
            mhs[i].huruf='E';
        printf("\nNilai Huruf: %c\n", mhs[i].huruf);
        if(mhs[i].akhir>=56)
            printf("Selamat anda lulus");
        else
            printf("Mohon maaf anda belum lulus");
        puts("\n");
    }
}