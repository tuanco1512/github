#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	
	for(i=0;i<10;i++){
		printf("\nBinh phuong cua so %d la %d",i, s(i));
	}
	getch();
}
int s(int a){
	int j;
	j = a*a;
	return (j);
}
