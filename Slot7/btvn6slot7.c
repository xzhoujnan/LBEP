#include<stdio.h>

int main(void)
{
	int n;
	printf("Nhap so nguyen n : ");
	scanf("%i",&n);

	while(n<=0)
	{
		printf("\nSo tren khong hop le,vui long nhap lai : ");
		scanf("%i",&n);
	}

	double S=0.0;
	int i=1;

	while(i<=n)
	{
		S += 1.0/i;
		i = i + 1;
	}
	printf("\nTong cua ctrinh tren la : %lf",S);
}