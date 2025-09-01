#include <stdio.h>
#include <stdlib.h>

int main(){
   // calloc is like malloc, but it also clears the memory so everything starts at zero.  
  // You tell it how many blocks you want and how big each block is (e.g., calloc(5, sizeof(int)))

  int number = 0;
  printf("Enter the number of players: ");
  scanf("%d", &number);

  int *scores = calloc(number, sizeof(int));


  if(scores == NULL){
     printf("Memory allocation failed !");
     return 1;
  }

  for(int i = 0; i < number; i++){
    printf("Enter scores #%d: ", i + 1);
    scanf("%d", &scores[i]);
  }

  for(int i = 0; i < number; i++){
    printf("%d ", scores[i]);

  }

  free(scores);
  scores = NULL;

  return 0;
}