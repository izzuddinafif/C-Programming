#include<stdio.h>
int main()
{
    int n, m, i, j;
    printf("masukkan nilai: ");
    scanf("%d", &n);
    m=n*2-1;
    for(i=1; i<=m; i++)
    {
        if(i<=n)
        {
            for(j=1; j<=n-i; j++)
            printf(" ");
            for(j=1; j<=i; j++)
            printf("*");           
        }
        if(i>n)
        {
            for(j=1; j<=i-n; j++)
            printf(" ");
            for(j=1; j<=m+1-i; j++)
            printf("*");           
        }
        printf("\n");
    }
}