#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	printf("nhap chu cai bat ky\n");
	scanf("%c", &ch);
	switch(ch){
		case 'A':
		case 'a':
			printf("Ada\n");
		break;
		case 'B':
		case 'b':
			printf("Basic\n");
		break;
		case 'C':
		case 'c':
			printf("COBOL\n");
		break;
		case 'D':
		case 'd':
			printf("dBASE III\n");
		break;
		case 'f':
		case 'F':
			printf("Fortran\n");
		break;
		case 'p':
		case 'P':
			printf("Pascal\n");
		break;
		case 'v':
		case 'V':
			printf("Visual C++\n");
		break;
		default:
			printf("Invalid\n");
		break;}
		
	return 0;
}
