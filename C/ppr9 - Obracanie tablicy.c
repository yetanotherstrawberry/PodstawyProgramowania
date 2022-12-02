#include <stdio.h>

int main()
{
    
    int wiersze, kolumny;
    
    scanf("%i %i", &wiersze, &kolumny);
    
    int tab[wiersze][kolumny];
    
    for(int i = 0; i < wiersze; i++)
        for(int j = 0; j < kolumny; j++)
            scanf("%i", &tab[i][j]);
    
    for(int i = 0; i < kolumny; i++){
        for(int j = wiersze -1; j >= 0; j--)
            printf("%i ", tab[j][i]);
        printf("\n");
    }

    return 0;

}
