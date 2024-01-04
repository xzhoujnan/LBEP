#include<stdio.h>

int main(void)
{
	int n;
	printf("Nhập số giá trị bạn cần trong một mảng : ");
	scanf("%i",&n);

	int arr[n];

	for(int i=0;i<n;i++)
	{
		printf("\nGiá trị thứ %i : ",i+1);
		scanf("%i",&arr[i]);
	}

	int soLeCuoi = -1;

	//Duyệt vòng từ cuối lên đầu,nếu thấy có giá trị lẻ sẽ thoát vòng lặp :
	for(int i=n-1;i>=0;i--)
	{
		if(arr[i] %2 != 0)
		{
			soLeCuoi=arr[i];
			break;
		}
	}

	if(soLeCuoi != -1)
	{
		printf("\nSố lẻ cuối trong mảng trên là : %i",soLeCuoi);
	}
	else
	{
		printf("\nKhông có số lẻ trong mảng trên.\n");
	}
}