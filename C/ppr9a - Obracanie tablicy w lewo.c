#include <stdio.h>

int main()
{
    
    int wiersze, kolumny;
    
    scanf("%i %i", &wiersze, &kolumny);
    
    int tab[wiersze][kolumny];
    
    for(int i = 0; i < wiersze; i++)
        for(int j = 0; j < kolumny; j++)
            scanf("%i", &tab[i][j]);
    
    for(int i = kolumny - 1; i >= 0; i--){
        for(int j = 0; j < wiersze; j++)
            printf("%i ", tab[j][i]);
        printf("\n");
    }

    return 0;

}
