#include<stdio.h>
int main(void) 
{
int z = 50, s = 70, *pz, *ps;   pz = &s; 
ps = &z;   
*pz=*ps+5;   
*ps=*pz-23;   
pz=&z;  
printf("z = %d\n", z);   printf("s = %d\n", s); 
}