#include<stdio.h>

int main(void)
{
	int n;
	printf("Nhap so nguyen duong n : ");
	scanf("%i",&n);

	while(n<=0)
	{
		printf("\nSo tren khong phai so nguyen duong,vui long nhap lai : ");
		scanf("%i",&n);
	}

	int numbig1=0;

	while(n!=0)
	{
		int numbig2=n%10;
		if(numbig2>numbig1)
		{
			numbig1=numbig2;
		}
		n/=10;
	}
	printf("\nChu so lon nhat trong day so tren la : %d",numbig1);
}