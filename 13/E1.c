#include<stdio.h>
int main(void)
{
    struct zodiak{
        char nama[20];
        int tglAwal, blnAwal, tglAkhir, blnAkhir;
    }bintang[]=
    {
        {"Aries", 21, 3, 19, 4},
        {"Taurus", 20, 4, 20, 5},
        {"Gemini", 21, 5, 20, 6},
        {"Cancer", 21, 6, 22, 7},
        {"Leo", 23, 7, 22, 8},
        {"Virgo", 23, 8, 22, 9},
        {"Libra", 23, 9, 22, 10},
        {"Scorpio", 23, 10, 21, 11},
        {"Sagitarius", 22, 11, 21, 12},
        {"Capricorn", 22, 12, 19, 1},
        {"Aquarius", 20, 1, 18, 2},
        {"Pisces", 19, 2, 20, 3}
    };
    int tglLhr, blnLhr;
    printf("Masukkan tanggal dan bulan lahir Anda (tgl-bln) : ");
    scanf("%d-%d",&tglLhr, &blnLhr);
    for(int i=0; i<=sizeof(bintang);++i)
    {
        if((tglLhr>=bintang[i].tglAwal && blnLhr==bintang[i].blnAwal) || (tglLhr<=bintang[i].tglAkhir && blnLhr==bintang[i].blnAkhir))
        printf("Bintang anda adalah %s", bintang[i].nama);
        else
        continue;
    }
}