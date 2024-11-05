#include<stdio.h>
int main(void)
{
    float a, b, c;

    puts("program pembagian. bila pembagi 0, hasil tak terhingga");
    printf("input nilai a dan b: ");
    scanf("%f %f", &a, &b);
    if(b==0)
    goto Tak_berhingga;
    else
    {
        c=a/b;
        printf("hasilnya adalah %g", c);
        goto selesai;
    }
    Tak_berhingga:
    printf("hasilnya tak berhingga");
    selesai:
    ;
}