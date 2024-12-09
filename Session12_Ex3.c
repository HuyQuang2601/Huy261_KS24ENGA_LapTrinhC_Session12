#include <stdio.h>

int fact(int a, int b){
	printf("Giai thua cua %d la: %d", a,b);
	return 0 ;
}

int main(){
	int a=5,b;
	for(a=5; a>0; a--){
		b*=a;
	}
	fact(5,b);
}

