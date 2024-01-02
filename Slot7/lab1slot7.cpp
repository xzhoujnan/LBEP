#include <stdio.h>

int main(){
	int n;
	int x=1;
	printf("Nhap n:");
	scanf("%d",&n);

	while(n>x){
		printf("Tap hop so le nho hon n:%d\n",x);
		x+=2;
	}
}