#include<stdio.h>

int main(){
	int x;
	printf("Nhap so can kiem tra :");
	scanf("%d",&x);

	switch(x){
	case 1 :
		printf("\nChu Nhat");
		break;
	case 2:
		printf("\nThu hai");
		break;
	case 3:
		printf("\nThu ba");
		break;
	case 4:
		printf("\nThu tu");
		break;
	case 5:
		printf("\nThu nam");
		break;
	case 6:
		printf("\nThu sau");
		break;
	case 7:
		printf("\nThu bay");
		break;
	default:
		printf("\nSo tren khong phai so dung");
	}
}