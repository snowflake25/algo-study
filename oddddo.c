#include <stdio.h>
#include<stdlib.h>

int main(){ 
  int count; 
  int *arr; 
  int i = 0; 
  int num = 1; 
  int sum = 0; 
  int k = 1; 
  
  scanf("%d", &count); 
  arr = (int *)malloc(sizeof(int)*count); 
  //홀수 찾아서 넣기 
  while (i < count){  
    if (num % 2 == 1){   
      arr[i] = num;   
      i++;  }  num++; 
  } 
  for (i = 0; i < count; i++){  
    sum += arr[i] * arr[count - k];  
    k++; 
  } 
  printf("%d", sum); 
  return 0;
}
