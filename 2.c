#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 0;
    printf("Enter the array's size: ");
    scanf("%d", &size);

    int *ptr = (int*)malloc(size * sizeof(int));
    if(ptr == NULL){
        perror("malloc error");
        exit(EXIT_FAILURE);
    }

    for(int i = 0; i < size; ++i){
        printf("Enter %d value: ", i);
        scanf("%d", &ptr[i]);
    }

    ptr = (int*)realloc(ptr, size * 2 * sizeof(int));
    if(ptr == NULL){
        perror("realloc error");
        exit(EXIT_FAILURE);
    }

    for(int i = size; i < size * 2; ++i){
        printf("Enter %d value: ", i);
        scanf("%d", &ptr[i]);
    }

    int adder = 0;
    for(int i = 0; i < size * 2; ++i){
        adder += ptr[i];
    }
    printf("Sum of the elements: %d\n", adder);

    free(ptr);
    ptr = NULL;

    return 0;
}
