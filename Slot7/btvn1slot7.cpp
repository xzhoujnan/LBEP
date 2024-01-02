#include<stdio.h>

int main(){
	int n,i,tonguoc;
	printf("Nhap so nguyen n :");
	scanf("%d",&n);
	i=1;
	tonguoc=0;
	printf("Tap hop uoc cua %d la : ",n);
	while(i<=n){
		if(n%i==0){
			printf("\n%d\n",i);
			tonguoc+=i;
		}
		i++;
	}
	printf("Tong uoc :\n %d",tonguoc);
	return 0;
}