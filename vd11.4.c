#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a[5];
	int i;
	printf("\nEnter string: ");
	scanf("%s", a);
	printf("\nTher string is %s \n\n", a);
	for(i=0; i<5; i++)
		printf("\t%d", a[i]);
	return 0;
}
