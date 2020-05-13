#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char loainhanvien;
	float mucluong;
	
	printf("nhap loai nhan vien: ");
	scanf ("%c",&loainhanvien);
	printf ("nhap muc luong: ");
	scanf ("%f",&mucluong);
	
	switch (loainhanvien)
	{
		case 'A':
			printf("luong duoc nhan la: %f ",mucluong+300);
			break;
		case 'B':
			printf ("luong duoc nhan la: %f",mucluong+250);
			break;
		default:
			printf ("luong duoc nhan la: %f",mucluong+100);
			break;
			}		
	return 0;
}
