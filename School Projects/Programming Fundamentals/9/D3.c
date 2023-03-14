#include <stdio.h>
#define MAX 30
void average(void);
int i, j;
int nstd, nscr[MAX];
float avg[MAX], scr[MAX][MAX]; 
char name[MAX][MAX];
int main(void)
{
    printf("Jumlah mahasiswa    : ");
    scanf("%d", &nstd);

    for(i=0; i<nstd; ++i)
    {
        printf("Nama mahasiswa-%d    : ", i+1);
        scanf("%s", name[i]);
        printf("Jumlah nilai        : ");
        scanf("%d", &nscr[i]);
        for(j=0; j<nscr[i]; ++j)
        {
            printf("Nilai-%d             : ", j+1);
            scanf("%f", &scr[i][j]);
        }
    }
    puts("\n");
    average();
}
void average(void)
{
    for(i=0; i<nstd; ++i)
    {
        float sum=0;
        for(j=0; j<nscr[i]; ++j)
        {
            sum+=scr[i][j];
        }
        avg[i]=sum/nstd;
        printf("Nilai rata-rata %s adalah %g\n", name[i], avg[i]);
    }
}