#include<stdio.h>

int main(void)
{
	//Ng dùng nhập số lượng giá trị trong mảng n:
	int n;
	printf("Nhập số lượng giá trị trong mảng n : ");
	scanf("%i",&n);

	//Điều kiện số lượng giá trị :
	if(n<=0)
	{
		printf("Số lượng trên không hợp lệ.Vui lòng nhập laị số lượng giá trị của mảng n : ");
		scanf("%i",&n);
	}
	
	//Ng dùng nhập giá trị của từng ô nhớ :
	int arr[n];

	for(int i=0; i<n; i++)
	{
		printf("Nhập giá trị số %i của mảng n : ",i+1);
		scanf("%i",&arr[i]);
	}

	//Sắp xếp mảng theo thứ tự tăng dần :
	

	//Khai báo giá trị xuất hiện nhiều nhất trong mảng :
	int a = 0;
	int frequentValue;

	//Tìm giá trị xuất hiện nhiều nhất trong mảng :
	for(int i=0; i<n; i++)
	{
		int b = 1;
		//Kiểm tra số lần xuất hiện của arr[i]
		for(int j=i+1; j<n; j++)
		{
			if(arr[i] == arr[j])
			{
				b++;
			}
		}
		//Cập nhật giá trị nhiều nhất nếu cần 
		if(b > a)
		{
			a = b;
			frequentValue = arr[i];
		}
	}

	//In giá trị xuất hiện nhiều nhất trong mảng :
	printf("\nGiá trị được xuất hiện nhiều nhất trong mảng : %i",frequentValue);
}