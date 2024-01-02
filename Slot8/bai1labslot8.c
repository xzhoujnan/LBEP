#include<stdio.h>

int main(void)
{
	int soNguyenTo,a;
	printf("Nhap so nguyen duong : ");
	scanf("%i",&soNguyenTo);

	int kiemTra = 1;

	if(soNguyenTo<0)
	{
		printf("So nay khong phai so nguyen duong,vui long nhap lai : ");
		scanf("%i",&soNguyenTo);
	}

	for(int a=2; a <= soNguyenTo - 1; a++)
	{
		if(soNguyenTo%a==0)
		{
			kiemTra = 0;
		}
	}

	if(kiemTra==1)
	{
		printf("\n%i la so nguyen to",soNguyenTo);
	}else if(kiemTra==0)
	{
		printf("\n%i khong phai la so nguyen to",soNguyenTo);
	}
}