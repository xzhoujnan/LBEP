#include <stdio.h>

int main(){

	int tk = 4000;
	int y;

	while (tk<1000000){
    // Trong ngoặc của while sẽ là đúng
		tk += tk * 8/100; //tk = tk + tk * 8/100;
		y++; //y+=1
	}
	//Ngoài ngoặc của no sẽ là sai
	printf("So nam de duoc 1 trieu la : %d",y);
}