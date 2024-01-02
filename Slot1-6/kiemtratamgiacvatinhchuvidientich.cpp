#include <stdio.h>
#include <math.h>

//Đặt 3 số A,B,C

int main(){
	int A;
	printf("Nhap so thu nhat :");
	scanf("%d",&A);
	int B;
	printf("Nhap so thu hai :");
	scanf("%d",&B);
	int C;
	printf("Nhap so thu ba :");
	scanf("%d",&C);

	if((A+B>C) && (B+C>A) && (C+A>B)){

//Hàm tính chu vi của một tam giác

	float tinhchuvi = A+B+C;

//Hàm tính nửa chu vi và diện tích của tam giác theo công thức Heron

	float p = tinhchuvi/2.0;
	float S=(p*(p-A)*(p-B)*(p-C));

	printf("Tam giac co chu vi : % va Dien tich cua tam giac la : %f\n", tinhchuvi, S);

	}else{
		printf("3 canh tren khong phai 3 canh cua mot tam giac\n"); 
	}
}


