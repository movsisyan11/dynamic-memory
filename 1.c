#include <stdio.h>
include <stdlib.h>
int main(){
  int size = 0;
  printf("Enter the array's size");
  scanf("%d", &size);
  int *ptr = (int*)malloc(size * sizeof(int));
  if(ptr == NULL){
    perror("malloc error: ");
  }
  for(int i = 0; i < size; ++i){
    printf("Enter %d value: ", i);
    scanf("%d", ptr + i);
  }
  int adder = 0;
  for(int i = 0; i < size; ++i){
    adder += ptr[i];
  }
  printf("Summ of the elements: ", adder);
  free(ptr);
  ptr = NULL;
  exit(EXIT_SUCCESS);

}

