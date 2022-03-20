#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	 printf("nhap x va y:\n");
	 scanf("%d%d", &x, &y);
	if ( x < 2000 || x > 3000 ){
	 printf("x hop le\n");}
	else 
	 printf("x khong hop le\n");
	if (100 <= y <= 500){
	 printf("y hop le");}
	else 
	printf("y khong hop le");
	return 0;
}
