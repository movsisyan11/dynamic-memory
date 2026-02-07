#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 0;
    printf("Enter the array's size: ");
    scanf("%d", &size);

    int *arr = (int*)malloc(size * sizeof(int));
     int *even = (int*)malloc(size * sizeof(int));
    if(arr == NULL || even == NULL){
        perror("malloc error");
        exit(EXIT_FAILURE);
    }

    for(int i = 0; i < size; ++i){
        printf("Enter %d value: ", i);
        scanf("%d", &arr[i]);
    }

    int count = 0;
    for(int i = 0; i < size; ++i){
      if(arr[i] % 2 == 0){
        even[count] = arr[i];
        ++count;
      }
    }
  
    free(arr);
    arr = NULL;
    even = (int*)realloc(even, count * sizeof(int));
    for(int i = 0; i < count; ++i){
      printf("%d index value: %d\n", i, even[i]);
    }
  
    free(even);
    even = NULL;

    return 0;
}
