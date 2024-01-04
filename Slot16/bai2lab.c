#include<stdio.h>
#include<string.h>

int main(void)
{
	//Nhập vào 1 chuỗi :
	char chuoi[100];
	printf("Nhập một chuỗi ký tự : ");
	scanf("%s",chuoi);

	for(int i=0;i<strlen(chuoi);i++)
	{
		if(chuoi[i] >= 'a' && chuoi[i] <= 'z')
		{
			chuoi[i]=chuoi[i] - ('a' - 'A');
		}
	}

	printf("Chuỗi sau khi in hoa là : %s",chuoi);
}