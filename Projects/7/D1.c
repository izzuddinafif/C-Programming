#include<stdio.h>
void add(int);
int sum=0;

int main(void)
{
    int i, x, n;
    printf("inputkan jumlah data: ");
    scanf("%d", &n);
    for(i=1; i<=n; ++i)
    {
        printf("inputkan data ke-%d: ", i);
        scanf("%d", &x);
        add(x);
    }
    printf("total data yang genap adalah: %d", sum);
}

void add(int x)
{
    if(x%2==0)
    sum+=x;
}