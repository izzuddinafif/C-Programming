#include <stdio.h>
#include <stdlib.h>

int kuadrat(int angka)
{
	angka*=angka;
	return angka;
}

int main()
{
	int x, y;

	printf("input angka= ");
	scanf("%d", &x); //10
	y=kuadrat(x); //100
	printf("angka kuadrat adalah %d", y);
}
