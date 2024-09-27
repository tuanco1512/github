#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,n = 0;
	int m;
	char c[10][12];
	char temp[12];
	
	printf("Enter the name\n\n");
	printf("Type 'Done' when over\n\n");
	
	do{
		printf("The name number %d: ", n+1);
		scanf("%s", c[n]);
	}while (strcmp(c[n++], "Done"));
	n = n-1;
	for(m=0; m<n-1; ++m){
		for(i=m+1;i<n;i++){
			if(strcmp(c[m], c[i]) > 0){
				strcpy(temp, c[m]);
				strcpy(c[m], c[i]);
				strcpy(c[i], temp);
			}
		}
	}
	printf("Record list of name: \n");
	for(i=0;i<n;i++){
		printf("\nThe name number %d is %s", i+1, c[i]);
	}
	return 0;
}
