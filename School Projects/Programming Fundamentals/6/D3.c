#include<stdio.h>
int main(void)
{
    int i;
    float x, n, sum=0;

    printf("banyaknya data: ");
    scanf("%f", &x);
    printf("\n");
    for(i=1; i<=x; i++)
    {
        printf("data ke %d?: ", i);
        scanf("%f", &n);
        if(n<0)
        {
            i--;
            continue;
        }
        sum+=n;
    }
    printf("\nbanyaknya mahasiswa = %g\n", x);
    printf("total nilai mahasiswa = %g\n", sum);
    printf("rata-rata nilai mahasiswa = %g", sum/x);
}