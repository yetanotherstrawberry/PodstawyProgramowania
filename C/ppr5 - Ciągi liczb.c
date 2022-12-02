#include <stdio.h>

int main() {
  
  int od, koniec;
  scanf("%i %i", &od, &koniec);
  
  char jakie;
  scanf(" %c", &jakie);
  
  for(; od <= koniec; od++){
   
    if(jakie == 'p' && od % 2 == 0) printf("%i ", od);
    else if(jakie == 'n' && od % 2 != 0) printf("%i ", od);
    
  }
  
  return 0;
  
};
