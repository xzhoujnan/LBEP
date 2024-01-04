#include<stdio.h>
#include<limits.h>

//Dùng thư viện limits để có 1 số max cho một int.

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

	int soDuongNhoNhat = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] < soDuongNhoNhat) {
            soDuongNhoNhat = arr[i];
        }
    }

    if (soDuongNhoNhat != INT_MAX) {
        printf("Số dương nhỏ nhất trong mảng là : %i\n",soDuongNhoNhat);
    } else {
        printf("Không có số dương nào trong mảng.\n");
    }
}