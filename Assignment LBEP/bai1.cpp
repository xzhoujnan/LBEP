#include<stdio.h>

int main()
{
	int n;
	printf("Enter the number of elements in the array : ");
	scanf("%d",&n);

	if(n<0)
	{
		printf("The number of elements above is invalid, please re-enter : ");
		scanf("%d",&n);
	}

	int arr[n];

	for(int i=0;i<n;i++)
	{
		printf("Value of the arr[%i] : ",i+1);
		scanf("%d",&arr[i]);
	}

	int lastEvenNumber = -1;

	for(int i=n-1;i>=0;i--)
	{
		if(arr[i]%2==0)
		{
			lastEvenNumber=arr[i];
			break;
		}
	}

	if(lastEvenNumber!=-1)
	{
		printf("\nThe last even number of the array is : %d",lastEvenNumber);
	}
	else
	{
		printf("\nNo EVEN number");
	}

}