#include<stdio.h>
int main(void)
{
    int a[5] = {2,4,8,1,23}; int c = 5; int *ptr1 =&c; int *ptr2 = a;
    &ptr1=c;
    printf("%d", *c); 
}