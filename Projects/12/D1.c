#include <stdio.h>
main()
{
int var_x = 20;
int *ptr1;
int **ptr2;
ptr1 = &var_x;
ptr2 = &ptr1;
*ptr1=var_x +**ptr2;
printf("Nilai var_x = *ptr1 = %d\n", *ptr1);
printf("Nilai var_x = **ptr2 = %d\n\n", **ptr2);
printf("ptr1 = &var_x = %p\n", ptr1);
printf("ptr2 = &ptr1 = %p\n", ptr2);
printf(" &ptr2 = %p\n", &ptr2);
}