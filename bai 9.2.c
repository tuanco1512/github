#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	int tong;
	printf("nhap a\t");
	scanf("%d",& a);
	for(;a!=0;){
		b = a%10;
		tong += b;
		a/=10;
	}
	printf("tong cac chu so nhap vao la: %d", tong);
	return 0;
}
