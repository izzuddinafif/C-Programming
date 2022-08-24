#include<stdio.h>
#define PI 3.14
float luas(float);
float keliling(float);

int main(void)
{
    float r, area, circ;
    printf("inputkan jari-jari lingkaran: ");
    scanf("%f", &r);
    area=luas(r);
    circ=keliling(r);
    printf("luas lingkaran adalah %g, dan keliling lingkaran adalah %g", area, circ);
}

float luas(float r)
{
    float area;
    area = PI*r*r;
    return area;
}

float keliling(float r)
{
    float circ;
    circ = PI*r*2;
    return circ;
}