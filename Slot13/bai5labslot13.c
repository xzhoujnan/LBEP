#include<stdio.h>

int main(void)
{

	int n;
	printf("Nhập số lượng phần tử trong một mảng n : ");
	scanf("%i",&n);

	if(n<=0)
	{
		printf("Số lượng phần tử trên không hợp lệ,vui lòng nhập lại : ");
		scanf("%i",&n);
	}

	int arr[n];

	for(int i=0; i<n;i++)
	{
		printf("Nhập phần tử thứ %i : ",i+1);
		scanf("%i",&arr[i]);
	}

	for(int i=0; i<n-1; i++)
	{
		arr[i]
	}
}