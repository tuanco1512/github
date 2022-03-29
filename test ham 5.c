#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int z;
	main(int argc, char *argv[]) {
	int a, b, c; 
	a = b = c = 0;
	z = 0;
	printf("\nEnter 1st integer : "); 
	scanf("%d", &a);
	z++;
	printf("\nEnter 2nd integer : "); 
	scanf("%d", & b);
	z++;
	 
	c = adder(a, b); 
	
	printf("\n\na & b in main() are : %d, % d", a, b); 
	printf("\n\nc in main() is : %d", c); 
	printf("\n z = %d", z);
} 
adder(int a, int b) {
	int c; 
	c = a + b; 
	a *= a; 
	b += 5; 
	z++;
	printf("\n\na & b within adder function are: %d, %d ", a, b); 
	printf("\nc within adder function is : %d", c); 
	return(c); 
}
