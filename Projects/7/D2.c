#include<stdio.h>
float avg(void);
void add(int);
float sum=0, n;

int main(void)
{
    int i, x;
    float av;
    printf("inputkan jumlah data: ");
    scanf("%g", &n);
    for(i=1; i<=n; ++i)
    {
        printf("inputkan data ke-%d: ", i);
        scanf("%d", &x);
        add(x);
    }
    av=avg();
    printf("rata-rata data adalah: %g", av);
}

void add(int x)
{
    sum+=x;
}

float avg(void)
{
    float z;
    z=sum/n;
    return z;
}