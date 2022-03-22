#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a;
	
	do{
		printf("nhap ki tu bat ky:\n");
		fflush(stdin);
		scanf("%c",&a);
		if(a>=48 && a<=57)
			{printf("%c la chu so\n", a);}
		else if(a>='a'&&a<='z'||a>='A'&&a<='Z')
			{printf("%c la ky tu\n", a);}
		else if(a != ' ') 
			printf("%c la ky tu dac biet\n", a);
	}
	while (a !=' ');
		printf("ket thuc chuong trinh");
	return 0;
}
