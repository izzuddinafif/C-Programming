#include<stdio.h>
int max(int, int, int);

int main(void)
{
    int a, b, c, mx;
    printf("inputkan 3 angka a, b dan c pisahkan dengan spasi: ");
    scanf("%d %d %d", &a, &b, &c);
    mx=max(a, b, c);
    printf("\nnilai terbesar dari a, b dan c adalah %d", mx);

}

int max(int a, int b, int c)
{
    int temp;
    if(a<b)
    temp=b;
    else if(b<c)
    temp=c;
    else
    temp=a;
    return temp;
}