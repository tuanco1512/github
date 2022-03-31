#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int check(int b);
int main(int argc, char *argv[]) {
	int i,n;
	int a[n];
	printf("nhap so phan tu ban muon nhap: \n");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("nhap phan thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
	printf("cac so da duoc nhap vao co the chia het cho 50 la:\n");
	for(i=0;i<n;i++){
		if(check(a[i])==0){
			printf("%d\t",a[i]);
		}
	}
	return 0;
}
int check(int b){
		if(b%50==0){
			return 0;
		}else return 1;
	}
