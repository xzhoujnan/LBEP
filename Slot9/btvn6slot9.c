#include<stdio.h>

int main()
{
	int n;
	printf("Nhap n : ");
	scanf("%i",&n);

	int arr[n];

	printf("Nhap gia tri cho mang :\n");

	for(int i = 0; i<n; i++)
	{
		printf("arr[%d]=",i);
		scanf("%i",&arr[i]);
	}

	int thangmay = 0;
	int kyluc=0;

	for(int i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
			thangmay++;
			if(thangmay>kyluc)
			{
				kyluc = thangmay;
			}
		}
		else
		{
			thangmay=0;
		}
	}

	
}