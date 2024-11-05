#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    while(i<=10){
	if(i==3 || i==8){
        i++;
		continue;
	}
	printf("%d ", i);
	i++;
}}

