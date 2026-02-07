#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int age;
  float grade;
  char name[50];

}Person

int main(){
int size;
printf("Enter the array size: ");
scanf("%d", &size);

Person * person = (Person*)malloc(size * sizeof(Person));
  if(person == NULL){
    perror("Malloc error: ");
    exit(EXIT_FAILURE);
  }
  for(int i = 0; int < size; ++i){
    printf("Enter the %d person's name: ", i);
    scanf("%s", person[i].name);
    printf("Enter the %d person's age: ", i);
    scanf("%d", &person[i].age);
    printf("Enter the %d person's grade: ", i);
    scanf("%f", &person[i].grade);
  }

  for(int i = 0; i < size; ++i){
    printf("the %d person's name: %s\n", i, person[i].name);
    printf("the %d person's age: %d\n", i,person[i].age);
    printf("the %d person's grade: %f\n", i, person[i].grade);
    
  }
  free(person);
  person = NULL;

  exit(EXIT_SUCCESS);
}
  
