#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a, str[81], *ptr;
	printf("\nViet mot cau:");
	gets(str);
	printf("\nNhap 1 ky tu de tim kiem:");
	a = getche();
	ptr = strchr(str,a);
	
	printf("\n\nChuoi cau xuat hien o dia chi: %u",str);
	printf("\n\nDia chi dau tien cua ky tu nhap vao la: %u",ptr);
	printf("\n\nVi tri cua ky tu dau tien (bat dau tu 0) la: %d", ptr-str);
	
	getch();
	return 0;
}
