#include<stdio.h>
//Khai báo biến n
int main(){
	int n;
	printf("Nhap n :");
	scanf("%d",&n);
//Đặt x là điểm bắt đầu cho vòng lặp,để tiệm cận n nó sẽ được bắt đầu từ số nhỏ hơn n chỉ 1 đơn vị
	int x = n - 1;
//Để tìm ra tập hợp số nguyên thì x > 0 :
	while(x>0){
		//Điều kiện để tìm được tập hợp chia hết cho cả 2 và 3 :
		if(x%2==0&&x%3==0){
			printf("Gia tri can tim : \n%d",x);
			break;
		}
		//Giảm giá trị x xuống từ n-1 :
		x--;
	}
}