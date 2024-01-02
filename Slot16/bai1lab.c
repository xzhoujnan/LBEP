#include<stdio.h>
#include<string.h>

int main(void)
{
	char chuoi[100];
	printf("Nhập một chuỗi ký tự : ");
	scanf("%s",chuoi);

	for(int i=0,j=strlen(chuoi)-1;i<j;i++,j--)
	{
		char temp = chuoi[i];
		chuoi[i]=chuoi[j];
		chuoi[j]=temp;
	}

	printf("Chuỗi sau khi đảo ngược là : %s",chuoi);
}