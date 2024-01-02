#include <stdio.h>
//Khai báo cân nặng và chiều cao
int main(){
	double weight,height,bmi;
	printf("Can nang cua ban la :");
	scanf("%lf",&weight);
	printf("Chieu cao cua ban la :");
	scanf("%lf",&height);
//Phép tính chỉ số BMI
	bmi = weight/(height*height);
//Các điều kiện về chỉ số BMI
	if(bmi<16.5){
	printf("Qua gay");
	}else if(bmi>=16.5 && bmi<18.5){
	printf("Gay");
	}else if(bmi >=18.5 && bmi <25){
	printf("Binh thuong");
	}else if(bmi>25 && bmi<30){
	printf("Thua can");
	}else if(bmi>=30 && bmi<=40){
	printf("Beo phi");
	}
}