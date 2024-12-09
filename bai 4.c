#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int indexMin(int a[], int size){
	int i, min;
	for(i=0;i<size;i++){
		a[0] = min;
		if(a[i] < min){
			 min = a[i];
		}
	}
	return min;
}
int main(int argc, char *argv[]) {
	int a[10],i;
	for(i=0;i<10;i++){
		printf("Nhap so thu %d: \n",i+1);
		scanf("%d", &a[i]);
	}
	printf("Gia tri nho nhat trong day so vua nhap vao la %d", indexMin(a,10));
	return 0;
}
