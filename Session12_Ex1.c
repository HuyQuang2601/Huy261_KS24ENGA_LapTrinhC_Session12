#include <stdio.h>

int sum(int a,int b){
	return a+b;
}

int main(){
	int a;
	int b;

	printf("Nhap vao so nguyen thu nhat: ");
	scanf("%d", &a);
	printf("Nhap vao so nguyen thu hai: ");
	scanf("%d", &b);

	if(sum(a,b)%2==0){
		printf("Tong cua %d va %d la so chan",a,b);
	}else {
		printf("Tong cua %d va %d la so le",a,b);
	}
	
}
