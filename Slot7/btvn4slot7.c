#include<stdio.h>

int main(void)
{

	int n;
	printf("Nhap so nguyen duong n :");
	scanf("%i",&n);

	while(n<=0)
	{
		printf("So tren khong phai so nguyen duong,vui long nhap lai :");
		scanf("%i",&n);
	}
	
	int sodautien;
	while(n>0)
	{
		sodautien = n%10;
		n/=10;
	}
	printf("Chu so dau tien la : %i",sodautien);
}