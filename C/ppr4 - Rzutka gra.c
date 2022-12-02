#include <stdio.h>

int main() {
  
  int poczatek, koniec, trafienie;
  scanf("%i %i", &poczatek, &koniec);
  scanf(" %i", &trafienie);
  
  if(trafienie >= poczatek && trafienie <= koniec) printf("BINGO");
  else if(trafienie < poczatek) printf("%i", poczatek-trafienie);
  else printf("%i", trafienie-koniec);
  
  return 0;
  
};
