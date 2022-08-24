#include<stdio.h>
int main(void)
{
    int i;
    float n[3], sum=0;
    for(i=0; i<3; ++i)
    {
        printf("Masukkan nilai ");
        if(i==0)
        printf("Matematika: ");
        else if(i==1)
        printf("Fisika: ");
        else if(i==2)
        printf("Kimia: ");
        scanf("%f", &n[i]);
        fflush(stdin);
        sum+=n[i];
    }
    printf("Nilai rata-ratanya adalah %g", sum/3);
}