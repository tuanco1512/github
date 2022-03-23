#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 1512;
	int b;
	int c = 0;
	int sd = 1000000;
	int tr, sd_ht;
	int yc;
	char ch;
	
	do{
		printf("nhap mat khau: ");
		scanf("%d", &b);
		c++;
		if (b==a){
			printf("dang nhap thanh cong\n");
			do{
			printf("vui long thuc hien lua chon cua ban:\n");
			printf("1. Xem so du tai khoan:\n");
			printf("2. Rut tien:\n");
			printf("3. Nop tien:\n");
			scanf("%d", &yc);
			switch(yc){
				case 1:
					printf("xem so du tai khoan\n");
					printf("so du tai khoan hien co la: %d VND\n", sd);
					break;
				case 2:
					printf("Nhap so tien muon rut:");
					scanf("%d", &tr);
					sd_ht = sd - tr;
					if(tr>sd){
						printf("Tai khoan khong du so du de thuc hien");
					}
					else 
						printf("rut tien thanh cong, so du hien tai cua tai khoan con %d\n", sd_ht);
					break;
				case 3:
					printf("Nap tien vao tai khoan:");
					scanf("%d", &tr);
					sd_ht = sd + tr;
					printf("Nop tien thanh cong, so du hien tai cua tai khoan con %d\n", sd_ht);
					break;
			}
			printf("ban co muon tiep tuc Y/N ?");
			fflush(stdin);
			scanf("%c", &ch);
			}while(ch == 'y' || ch == 'Y');
			printf("cam on ban da su dung dich vu cua chung toi");
		}else printf("nhap sai mat khau\n");	
	} while (b != a && c < 3);
	if (b!=a){
		printf("nhap sai qua 3 lan, ban da bi khoa the");}
	return 0;
}
