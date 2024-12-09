#include <stdio.h>

void array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main(){
    int num[] = {1, 2, 3, 4, 5};
    int size = sizeof(num)/sizeof(num[0]); 
   	array(num, size);

    return 0;
}
