#include<stdio.h>

int main(void)
{
	int n;
	printf("Nhập số lượng giá trị bạn cần trong một mảng : ");
	scanf("%i",&n);

	int arr[n];

	for(int i=0;i<n;i++)
	{
		printf("Nhập giá trị thứ %i : ",i+1);
		scanf("%i",&arr[i]);
	}

	int tong = 0;
	int soLuongLe = 0;

	for(int i=0;i<n;i++)
	{
		if(i%2==0 && arr[i]%2!=0)
		{
			tong+=arr[i];
			soLuongLe++;
		}
	}

	if(soLuongLe>0)
	{
		float trungBinh = (float)tong / soLuongLe;
		printf("\nTrung bình cộng của các số lẻ đứng ở vị trí chẵn trong mảng trên là : %2.f\n",trungBinh);
	}
	else
	{
		printf("Không có số lẻ trong mảng trên.\n");
	}
}