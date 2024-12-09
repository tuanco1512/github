#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sum(int a, int b);
int sub(int a, int b);
int multi(int a, int b);
double divi(int a, int b);
int main(int argc, char *argv[]) {
	int a,b,i;
	int s1, s2, m;
	float d;
	int c1, c2;
	printf("\tTINH TOAN");
    printf("\n=================\n");
    printf("1.Nhap so\n");
    printf("2.Tinh tong\n");
    printf("3.Tinh hieu\n");
    printf("4.Tinh tich\n");
    printf("5.Tinh thuong\n");
    printf("6.Thoat\n");
    printf("=================\n");
    for(i=0;i<7;i++){
    	printf("Chon:");
    	scanf("%d", &c1);
    	switch(c1){
    		case 1:
    			printf("Nhap so:\t");
    			scanf("%d%d", &a, &b);
    			printf("chon phep tinh:\t");
    			scanf("%d", &c2);
    			switch (c2){
				case 2:s1 = sum(a,b);
    				printf("tong 2 so a va b la: %d\n", s1);
    				break;
    			case 3:s2 = sub(a,b);
    				printf("hieu 2 so a va b la %d\n", s2);
    				break;
	    		case 4:m = multi(a,b);
	    			printf("tich 2 so a va b la %d\n", m);
	    			break;
	    		case 5:d = divi(a,b);
	    			printf("thuong 2 so a va b ;a %f\n", d);
	    			break;
	    		}
	    	case 6:
	    		printf("Ket thuc.");
						
		}
	}
	return 0;
}
int sum(int a, int b){
	int s1;
	s1 = a+b;
	return s1;
}
int sub(int a, int b){
	int s2;
	s2 = a-b;
	return s2;
}
int multi(int a, int b){
	int m;
	m = a*b;
	return m;
}
double divi(int a, int b){
	float d;
	if(b==0){
		return 0;
	}else
	d = a/b;
	return d;
}
