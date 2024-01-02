#include <stdio.h>

int main(){
	int y;
	printf("Nhập số năm cần kiểm tra :");
	scanf("%d",&y);

	if(y%4==0)
	{
		if(y%100==0)
		{
			if(y%400==0)
				printf("Năm này là năm nhuận\n");
			else
				printf("Năm này không phải năm nhuận\n");
			}
			else
				printf("Năm này là năm nhuận\n");
			
			}else
				printf("Năm này không phải là năm nhuận\n");
		}