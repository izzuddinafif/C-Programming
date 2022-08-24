#include<stdio.h>
void swap(int *, int *);

int main(void)
{
    int a, b;
    printf("inputkan a dan b pisahkan dengan spasi: ");
    scanf("%d %d", &a, &b);
    printf("\na dan b sebelum ditukar adalah %d dan %d", a, b);
    swap(&a, &b);
    printf("\na dan b setelah ditukar adalah %d dan %d", a, b);

}

void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}