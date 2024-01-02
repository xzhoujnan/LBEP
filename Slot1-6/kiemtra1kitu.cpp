#include <stdio.h>

int main(){
	char x;
	printf("Nhap ki tu can kiem tra :");
	scanf("%c",&x);

	if(x>='0'&&x<='9'){
		printf(" Ki tu %c la mot so",x);
	}else{
		if(x>='A'&&x<='Z'){
			printf("Ki tu %c la mot chu cai in hoa",x);
		}else{
			if(x>='a'&&x<='z'){
				printf("Ki tu %c la mot chu cai thuong",x);
			}else{
				printf("Ki tu %c la mot ki tu dac biet",x);
			}
		}
	}
}