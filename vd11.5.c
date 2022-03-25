#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[2][3];
	int r,c;
	for(r=0; r<2; r++){
		for(c=0; c<3; c++){
			printf("\nEnter the number at [%d][%d] :", r, c);
			scanf("%d", &a[r][c]);
		}
	}
	for(r=0; r<2; r++){
		for(c=0; c<3; c++){
			printf("\nThe number at [%d][%d] is %d", r, c, a[r][c]);
		}
	}	
	return 0;
}
