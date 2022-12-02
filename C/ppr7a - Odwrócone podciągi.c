#include <stdio.h>
#include <stdlib.h>

int main()
{

    int ile;
    scanf("%i", &ile);
    int tab[ile];
    
    for(int i = 0; i < ile; i++){
        
        scanf("%i", &tab[i]);

    }

    int liczby = ile / (int)3; /* jezeli ilosc liczb podzielimy calkowicie przez 3 to powinno wyjsc ile mamy na koncu */

    int wynik[liczby];
    for(int i = 2, j = 0; i < ile; i+=3, j++) wynik[j] = tab[i];
    
    for(int i = liczby - 1; i >= 0; i--){
        
        printf("%i ", wynik[i]);
        
    }

    return 0;
    
}
