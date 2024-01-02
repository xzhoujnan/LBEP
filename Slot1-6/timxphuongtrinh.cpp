#include <stdio.h>
#include <math.h>

//Khai báo và nhập dữ liệu biến a,b,c,x1,x2
int main(){
	float a, b, c, x1, x2;
	printf("Nhap he so cua phuong trinh ax^2+bx+c=0:");
	scanf("%f%f%f",&a,&b,&c);

	if(a == 0){
		float x = -c/b;
		printf("Phuong trinh bac 2 tro ve phuong trinh bac 1 bx + c = 0 va co 1 nghiem duy nhat : x=%.2f",x);
	}else{
		float delta = b*b - 4*a*c;
		if(delta > 0){
			x1= (-b + sqrt(delta))/(2*a);
			x2= (-b - sqrt(delta))/(2*a);
			printf("Phuong trinh bac 2 co 2 nghiem phan biet : x1=%.2f,x2=%.2f\n",x1,x2);
		}else{
			if(delta == 0){
				 float x = -b/(2*a);
				printf("Phuong trinh bac 2 co 1 nghiem duy nhat : %f\n",x);
			}else{
				printf("Phuong trinh bac 2 vo nghiem\n");
			}
		}
	}
}