#include <stdio.h>
main()
{
int a=16,b=20,*ia,*ib;
ia=&a;
ib=&b;
*ia=5;
ia=ib;
*ib=*ia+7;
ia=&a;
b=*ib/4*5;
printf("a=%d,b=%d,*ia=%d,*ib=%d",a,b,*ia,*ib);
}