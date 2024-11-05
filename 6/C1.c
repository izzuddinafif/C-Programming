#include<stdio.h>
int main(void)
{
    int i, j, b, k;
    
    printf("Masukkan jumlah baris: ");
    scanf("%d", &b);
    printf("Masukkan jumlah kolom: ");
    scanf("%d", &k);
    printf("\n");
    for(i=1; i<=b; i++)
    {
        for (j=1; j<=k; j++)
        {
            printf("A ");
        }
        printf("\n");
    }  
}