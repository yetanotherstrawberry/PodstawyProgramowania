#include <stdio.h>

float srednia(int liczby[], int n){

    int suma = 0, ilosc = 0;
    for(int i = 0; i < n; i++){
    
      if(liczby[i] > 1){

        suma += liczby[i];
        ilosc++;
      
      }
    
    }

    return (float)suma / (float)ilosc;

}

void ocenki(int liczby[], int n){

    for(int i = 0; i < n; i++){

      if(liczby[i] > 1) printf("%i ", liczby[i]);

    }

    printf("\n");

}

int main()
{
    
    int tab[1010];
//    for(int i = 0; i < 1010; i++) tab[i] = -1;

    for(int i = 0; i < 1010; i++){
    
      scanf("%i", &tab[i]);
      if(tab[i] == -1) break;
    
    }

    for(int i = 0; i < 1010; i++){

      if(tab[i] == -1) break;
      else if(tab[i] == 0) ocenki(tab, i + 1);
      else if(tab[i] == 1) printf("%.2f\n", srednia(tab, i + 1));

    }


    return 0;

}
