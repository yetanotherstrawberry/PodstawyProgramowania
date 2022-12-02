#include <stdio.h>
#include <stdlib.h>

int liczbaDzielnikow(int *dzielniki, int ile_dzielnikow, int kandydat){
    
    int i = 0, liczba_dzielnikow = 0;
    
    for(; i < ile_dzielnikow; i++){
        
        if(kandydat % *(dzielniki + i) == 0) liczba_dzielnikow++;
        
    }
    
    return liczba_dzielnikow;
    
}

int main()
{
    
    int i = 0, ile_dzielnikow, liczba_kandydatow;
    
    scanf("%i", &ile_dzielnikow);
    int *dzielniki = malloc(sizeof(int) * ile_dzielnikow);
    for(; i < ile_dzielnikow; i++) scanf("%i", dzielniki + i);
    
    scanf("%i", &liczba_kandydatow);
    int *kandydaci = malloc(sizeof(int) * liczba_kandydatow);
    for(i = 0; i < liczba_kandydatow; i++) scanf("%i", kandydaci + i);
    
    for(i = 0; i < liczba_kandydatow; i++) printf("%i\n", liczbaDzielnikow(dzielniki, ile_dzielnikow, *(kandydaci + i)));

    return 0;
    
}
