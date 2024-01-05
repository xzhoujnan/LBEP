#include<stdio.h>

float average(int s[], int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum += s[i];
	}
	return (float)sum/n;
}

int main()
{
	int size;
	printf("Enter the number of elements in the array : ");
	scanf("%d",&size);

	if(size<=0)
	{
		printf("The number of elements above is invalid, please re-enter : ");
		scanf("%d",&size);
	}

	int numbers[size];

	for(int i=0;i<size;i++)
	{
		printf("Value of the arr[%i] : ",i+1);
		scanf("%d",&numbers[i]);
	}

	float avg = average(numbers,size);
	printf("Average : %f\n",avg);
}