#include <stdio.h>
void ubah(int *, int*);
main()
{
int a = 4;
int b = 7;
printf("SEMULA : a = %d b = %d\n", a, b);
ubah(&a, &b);
printf("KINI : a = %d b = %d\n", a, b);
}
void ubah(int *x, int *y)
{
    *x = *x * 4;
    *y = *y + *x;
}