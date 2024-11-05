#include <stdio.h>
#include <string.h>

int main(){
	int i;
	char kalimat[20];

	printf("input string: ");
	fgets(kalimat, 20, stdin);
	i=strlen(kalimat);
	for(i; i>=0; i--)
		printf("%c", kalimat[i]);
}