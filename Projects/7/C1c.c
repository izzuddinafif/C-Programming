#include<stdio.h>
#define PI 3.14
void luas(float);
void keliling(float);

int main(void)
{
    float r;
    printf("inputkan jari-jari lingkaran: ");
    scanf("%f", &r);
    luas(r);
    keliling(r);
}

void luas(float r)
{
    float area;
    area = PI*r*r;
    printf("luas lingkaran adalah %g,", area);
}

void keliling(float r)
{
    float circ;
    circ = PI*r*2;
    printf(" dan keliling lingkaran adalah %g", circ);
}