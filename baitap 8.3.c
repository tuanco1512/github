#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,y,z;
	printf("nhap x, y, z lan luot la:\n");
	scanf("%f%f%f", &x, &y, &z);
	
	if(x - y >= 0 && x - z >= 0){
		printf("x co gia tri lon nhat la: %f", x);
	}else if (y - x >= 0 && y - z >= 0){
			printf("y co gia tri lon nhat la: %f", y);
		} else printf("z co gia tri lon nhat la: %f", z);
	
	return 0;
}
