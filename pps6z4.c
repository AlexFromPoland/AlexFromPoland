#include <stdio.h>

void bubble_sort(int *arr, int n){
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            if(*(arr+j) < *(arr+i)){
                int temp = *(arr+i);
                *(arr+i) = *(arr+j);
                *(arr+j) = temp;
            }
        }
    }
}

int main(){
    int n = 10;
    int array[10] = {3,4,1,2,5,8,9,6,10,7};
    for(int i=0; i<n; i++){
        printf("%d ", array[i]);
    }
    int *warr = &array;
    bubble_sort(warr, n);
    printf("\n");
    for(int i=0; i<n; i++){
        printf("%d ", array[i]);
    }
    return 0;
}