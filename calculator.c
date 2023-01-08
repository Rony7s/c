#include <stdio.h>

int main() {
  printf("A simple calculator for + - * / \n");
  int x, y, z, p;
  char c;
  scanf("%d %c %d", &x, &c, &y);
  switch (c){
  
  	case '+':
    z = x+y;
    break;
    
    case '-':
    z = x-y;
    break;
    
    case '*':
    z = x*y;
    break;
    
    case '/':
    z = x/y;
    break;
    
    default:
    z = 0;
    p =1;
    break;
  
  }
  if(p==1){
      printf("\nMath Error!");
  }else{
      printf("\nResult: %d", z);
  }
  
  
  return 0;
}
