#include <stdio.h>

 void findMaxVALUE(int arr[], int size){
 	int maxValue = arr[0];
 	for(int i=0; i<size; i++){
 		if(arr[i] > maxValue){
 			maxValue = arr[i];
		 }
	 }
	 printf("Phan tu lon nhat trong mang la %d\n", maxValue);
 }

int main(){
int numbers1[]={4,6,5,9,1,3};
int size= sizeof(numbers1)/sizeof(int);
findMaxVALUE(numbers1,size);

 	return 0;
 }
