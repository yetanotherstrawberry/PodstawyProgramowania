#include <stdio.h>

int main()
{
    
    int ile;

    scanf("%i", &ile);

    int tab[ile];

    for(int i = 0; i < ile; i++) scanf("%i", &tab[i]);

    for(int i = 0; i < ile; i++){

      printf("B");
      for(int j = 1; j <= tab[i]; j++) printf("I");
      printf("G B");
      for(int j = 1; j <= tab[i]; j++) printf("O");
      printf("M");
      for(int j = 1; j <= tab[i]; j++) printf("!");
      printf("\n");

    }

    return 0;

}
