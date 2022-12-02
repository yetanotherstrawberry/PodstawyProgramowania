#include <stdio.h>

int main() {
  
  int a, b, c;
  scanf("%i %i %i", &a, &b, &c);
  
  printf("%i", (2*a*b + 2*b*c + 2*a*c));
  
  return 0;
  
};
