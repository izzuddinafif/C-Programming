#include<stdio.h>
float f_to_i(float);
float i_to_cm(float);
float cm_to_m(float);
float f, i, cm, m;
int main(void)
{
    printf("inputkan ukuran dalam satuan kaki (feet): ");
    scanf("%f", &f);
    i=f_to_i(f);
    printf("%g feet = %g i\n", f, i);
    cm=i_to_cm(i);
    printf("%g i = %g cm\n", i, cm);
    m=cm_to_m(cm);
    printf("%g cm = %g m\n", cm, m);
    printf("jadi, %g feet = %g m\n", f, m);
}
float f_to_i(float f)
{
    i=12*f;
    return i;
}
float i_to_cm(float i)
{
    cm=2.54*i;
    return cm;
}
float cm_to_m(float cm)
{
    m=0.01*cm;
    return m;
}

