#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y; 
	char ch;
	printf("nhap x, y, ch\n"); 
	scanf("%2d %c %d",&x, &ch, &y); 
	printf("%d %d %d\n",x, ch, y);

	return 0;
}
