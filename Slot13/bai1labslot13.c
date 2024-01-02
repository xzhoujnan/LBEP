#include<stdio.h>

int main(void)
{
	int n;
	printf("Nhap so luong cua mang n : ");
	scanf("%i",&n);

	int arr[n];
	printf("\n");

	for(int i=0; i<n; i++)
	{
		printf("Nhap phan tu thu %i : \n",i+1);
		scanf("%i",&arr[i]);
	}

	//Đảo ngược thứ tự mảng :
	for(int i=0, j=n-1; i<j; i++, j--)
	{
		//Hoán đổi giá trị giữa i và j :
		int temp = arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}

	//In mảng sau khi đổi vị trí :
	printf("Mang sau khi dao nguoc : \n");

	for(int i=0; i<n; i++)
	{
		printf("%d\t",arr[i]);
	}

	return 0;
}