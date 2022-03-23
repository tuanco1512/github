#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	char ch;
	int tv=20000, sv = 25000, sd = 25000, qt = 20000, dt = 30000, bb = 45000, cd = 35000;
	int sl;
	int sum = 0;
	
	printf("chao mung quy khach den voi quan 3 coc say mem\n");
		do{
		printf("vui long chon thuc don:\n");
		printf("1. cafe thu vien\n");
		printf("2. Dia dang sac vang\n");
		printf("3. Bau troi sao dem\n");
		printf("4. Qua thong ngao duong\n");
		printf("5. Ben cang dem trang\n");
		printf("6. Bot bien san ho\n");
		printf("7. Chuong dem\n");
		scanf("%d", &a);
		switch(a){
			case 1:
				printf("Quy khach lua chon do uong cafe thu vien tri gia %d\n\n", tv);
				printf("Quy khach vui long nhap so luong: ");
				scanf("%d", &sl);
				sum += sl*tv;
				break;
			case 2:
				printf("Quy khach lua chon do uong Dia dang sac vang tri gia %d\n\n", sv);
				printf("Quy khach vui long nhap so luong: ");
				scanf("%d", &sl);
				sum += sl*sv;
				break;
			case 3:
				printf("Quy khach lua chon do uong Bau troi sao dem tri gia %d\n\n", sd);
				printf("Quy khach vui long nhap so luong: ");
				scanf("%d", &sl);
				sum += sl*sd;
				break;
			case 4:
				printf("Quy khach lua chon do uong Qua thong ngao duong %d\n\n", qt);
				printf("Quy khach vui long nhap so luong: ");
				scanf("%d", &sl);
				sum += sl*qt;
				break;
			case 5:
				printf("Quy khach lua chon do uong Ben cang dem trang %d\n\n", dt);
				printf("Quy khach vui long nhap so luong: ");
				scanf("%d", &sl);
				sum += sl*dt;
				break;
			case 6:
				printf("Quy khach lua chon do uong Bot bien san ho %d\n\n", bb);
				printf("Quy khach vui long nhap so luong: ");
				scanf("%d", &sl);
				sum += sl*bb;
				break;
			case 7:
				printf("Quy khach lua chon do uong Chuong dem %d\n\n", cd);
				printf("Quy khach vui long nhap so luong: ");
				scanf("%d", &sl);
				sum += sl*cd;
				break;
			}
			printf("Quy khach co muon goi them do uong khong (Y/N)?");
			fflush(stdin);
			scanf("%c", &ch);
		}while(ch=='Y'||ch=='y');
			printf("Tong so tien quy khach can thanh toan la: %d\n", sum);
			printf("cam on quy khach da su dung dich vu cua chung toi");	
				
	return 0;
}
