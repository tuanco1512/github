#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,N;
	char c;
	
	printf("nhap N = ");
	scanf("%d", &N);
	if(N>=1 && N<=9){
	printf("Bang cuu chuong so %d\n",N);
	for(i=1; i<=9; i++){
	printf("%d*%d = %d\n", i,N,i*N);
	}
	printf("ban co muon tiep tuc in bang cuu chuong (y/n)?");
	fflush(stdin);
	scanf("%c", &c);
	while(c=='y'){
		printf("nhap N = ");
		scanf("%d", &N);
		if(N>=1 && N<=9){
		printf("Bang cuu chuong so %d\n",N);
		for(i=1; i<=9; i++){
		printf("%d*%d = %d\n", i,N,i*N);
		}
		printf("ban co muon tiep tuc in bang cuu chuong (y/n)?");
		fflush(stdin);
		scanf("%c", &c);}
		else printf("hay nhap lai\n");
		}
	if(c=='n'){
		printf("ket thuc");}
	}
	else printf("khong thoa man dk\n");
	return 0;
}
