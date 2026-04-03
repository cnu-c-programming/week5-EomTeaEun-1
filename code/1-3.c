#include <stdio.h>

void print_reverse(int *arr, int size){
    for (int i = 0; i < size; i++) {
        arr++;
    }
    for (int i = 0; i < size; i++) {
        arr--;
        printf("%d ", *arr);
    }
}

int main(){
    int num[] = {1,2,3,4,5};

    print_reverse(num, 5);
    printf("\n");

    return 0;
}
