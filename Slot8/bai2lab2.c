#include<stdio.h>

int main(void)
{
	for(int i=0;i<5;i++)
	{
		if(i % 2 == 0)
		{
			for(int j=0;j<5;j++)
			{
				printf("*");
			}
		}
		else
		{
			for(int j=0;j<4;j++)
			{
				printf("*");
			}
		}
	printf("\n");
	}
}