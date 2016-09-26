#include <stdio.h>
#include <stdlib.h>

int strlen(char arr[]){
  int i = 0;
  while(arr[i] != 0){
    i++;
  }
  return i;
}

int main(){
  char arr[20];
  arr[0] = 'r';
  arr[1] = 'a';
  arr[2] = 'i';
  arr[3] = 'n';
  arr[4] = 'b';
  arr[5] = 'o';
  arr[6] = 'w';
  arr[7] = 0;

  printf("Length of rainbow: %d \n", strlen(arr));//7

  return 0;
}
