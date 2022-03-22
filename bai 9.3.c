#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
    b = 0;
    printf("nhap chieu cao");
    scanf("%d", &a);
    printf("\n");
    if(a>=2)
    	while(b<a)
		{
        	printf("\n");
        	b++;
        	c = 1;
    		while(c<=b)
			{
        	printf("*");
        	c++;
        	}
        }
	return 0;
}
