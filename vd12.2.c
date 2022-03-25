#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A[10][10],B[10][10],C[10][10];
	int r,c;
	int i,j;
	printf("Nhap khong gian cua ma tran: ");
	scanf("%d %d", &r, &c);
	printf("Nhap gia tri cua ma tran A va B: \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("A[%d][%d] , B[%d][%d] : ",i,j,i,j);
			scanf("%d %d", &A[i][i], &B[i][j]);
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("A[%d][%d]=%d, B[%d][%d]=%d, C[%d][%d]=%d\n", i, j, A[i][j], i, j, B[i][j], i, j, C[i][j]);
		}
	}
	return 0;
}
