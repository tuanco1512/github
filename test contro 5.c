#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int *a, i, n,sum = 0;
	
	printf("Nhap so phan tu ban muon nhap:");
	scanf("%d", &n);
	
	a = (int*)calloc(n, sizeof(int));
	
	for(i=0;i<n;i++){
		printf("Nhap so thu %d: ",i+1);
		scanf("%d", a+i);
		sum += *(a+i);
	}
	free(a);
	
	printf("\nso phan tu da nhap: %d", n);
	printf("\nTong cac so phan tu: %d", sum);
	return 0;
}
