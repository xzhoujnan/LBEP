#include<stdio.h>

int main(void)
{
	int n;
	printf("Nhập số lượng phần tử của mảng n : ");
	scanf("%i",&n);

	int arr[n];

	for(int i=0;i<n;i++)
	{
		printf("\nNhập phần tử thứ %i : ",i+1);
		scanf("%i",&arr[i]);
	}

	int x;
	printf("\nNhập số x cần tìm từ mảng trên : ");
	scanf("%i",&x);

	int flag = 0;

	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			flag = 1;
		}
	}

	if(flag==1)
	{
		printf("\nSố %i cần tìm có trong mảng.",x);
	}
	else
	{
		printf("\nSố %i cần tìm không có trong mảng.",x);
	}
}