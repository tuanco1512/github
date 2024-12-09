#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void reverse(int a[], int size){
	int i;
	printf("Day so da duoc dao nguoc:\n");
	for(i=size-1;i>=0;i--){
		printf("%d\t", a[i]);
	}
}
int main(int argc, char *argv[]) {
	int a[5];
	int i;
	for(i=0;i<5;i++){
		printf("nhap so thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
	reverse(a,5);
	return 0;
}
