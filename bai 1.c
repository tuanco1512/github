#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float GetArea(float a, float b, float c);
int main(int argc, char *argv[]) {
	float a, b, c;
	printf("nhap 3 canh tam giac a, b, c lan luot la: \n");
	scanf("%f%f%f", &a, &b, &c);
	if(a+b > c && b+c >a && c+a>b){
		printf("dien tich tam giac a, b, c la: %f", GetArea(a,b,c));
	}else printf("a, b, c khong thoa man dieu kien de lam 1 tam giac");
	return 0;
}
float GetArea(float a, float b, float c){
	float P, S;
	P = (a+b+c)/2;
	S = sqrt(P*(P-a)*(P-b)*(P-c));
	return (S);
}
