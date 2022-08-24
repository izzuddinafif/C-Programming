#include<stdio.h>
int ganjil(int);

int main(void)
{
    int a, x;
    puts("return value 1=ganjil, 2=genap");
    printf("inputkan bilangan: ");
    scanf("%d", &x);
    a=ganjil(x);
    printf("\nreturn value adalah: %d", a);
}

int ganjil(int x)
{
    if(x%2!=0)
    return 1;
    else
    return 0;
}