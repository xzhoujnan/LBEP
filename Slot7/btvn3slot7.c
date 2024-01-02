#include<stdio.h>

int main(void)
{
	int i;
	printf("Nhap 1 so nguyen :");
	scanf("%i",&i);
	int sodu = 0;
	//Điều kiện tính tổng của 1 số thì số đó phải khác => điều kiện vòng lặp while
	while(i!=0)
	{
		sodu += i%10;//sodu = sodu + i%10;
		i/=10;//i = i / 10;
	}
	printf("Tong cac chu so : %i",sodu);
}