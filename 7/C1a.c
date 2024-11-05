#include<stdio.h>
#define PI 3.14
void luaskeliling(void);

int main(void)
{
    luaskeliling(); 
}

void luaskeliling(void)
{
    float r;
    printf("inputkan jari-jari lingkaran: ");
    scanf("%f", &r);
    printf("luas lingkaran adalah %g, dan keliling lingkaran adalah %g", PI*r*r, PI*r*2);
}