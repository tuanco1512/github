#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a[26];
	int i,j;
	for(i=65, j=0; i<91; i++, j++)
	{
		a[j]=i;
		printf("The character now assigned is %c\n", a[j]);
	}
	getchar();
	return 0;
}
