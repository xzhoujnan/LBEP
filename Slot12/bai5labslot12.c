#include<stdio.h>

int main()
{
	int n;
	printf("Nhap n : ");
	scanf("%i",&n);

	int arr[n];

	printf("Nhap gia tri cho mang :\n");

	for(int i = 0; i<n; )//Nhập mảng ko tăng i
	{
		printf("arr[%d]=",i);
		scanf("%i",&arr[i]);//arr[i] là số thứ i đã đc nhập

		//Kiểm tra arr[i] có nằm trong danh sách mảng từ arr[0]=>arr[i-1].Mảng bao gồm i phần tử.

		int check = 0;

		for(int j=0;j<i;j++)
		{
			if(arr[i]=arr[j])
			{
			check=1;
			break;
			}
		}
		//Chỉ tăng i khi chưa có.
		if(check == 0)
		{
			i++;
		}
	}