#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char line[80]; /* line[80] is an array which stores 80 characters */ 
	printf("Nhap KIDMAN\n"); 
	scanf("%[ABCDEFGHIJKLMNOPQRSTUVWXYZ]", line); 
	printf("chao mung %s den voi the gioi lap trinh", line);

	return 0;
}
