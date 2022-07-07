#include <stdio.h>

int main() {
  
  // 1N = 2U
  
  int u, n, s;
  scanf("%i %i %i", &u, &n, &s);
  
  printf("%0.2f", 2*(s / (float)(2*n + u)));
  
  return 0;

};
