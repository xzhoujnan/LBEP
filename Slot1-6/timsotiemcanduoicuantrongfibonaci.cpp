//nhập số n,tìm số tiệm cận với số n trong dãy fibonaci.
#include<stdio.h>

int main(){
	int n;
	printf("Nhap n :");
	scanf("%d",&n);

	int x1,x2,x3;
	x1=0;
	x2=1;
	x3=1;

	for(;x2+x3<n;){
		x1=x2;
		x2=x3;
		x3=x1+x2;

	}
	printf("So tiem can duoi cua %d trong day fibonacci la : %d",n,x3);
}