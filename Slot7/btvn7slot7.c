#include<stdio.h>

int main(void)
{
	int n;
	printf("Nhap so nguyen duong n : ");
	scanf("%i",&n);

	if(n<0)
	{
		printf("So nay khong hop le vui long nhap lai : ");
		scanf("%i",&n);
	}

	int x=1,a=1;

	while(a<=n)
	{
		x*=a;
		a++;
	}
	printf("Giai thua cua so %i la : %i",n,x);
}