#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char item[20]; 
	int partno; 
	float cost;
	
	printf("input item, partno, cost\n"); 
	scanf("%s %*d %f", &item, &partno, &cost);
	printf("the value of item, partno, cost are: %s, %*d, %f", item, partno, cost); 

	return 0;
}
