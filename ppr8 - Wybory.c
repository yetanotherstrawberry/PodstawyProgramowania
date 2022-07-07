#include <stdio.h>

int main()
{
    
    int ilu_kandydatow, ile_glosow, temp, max = 0, kandy;
    scanf("%i %i", &ilu_kandydatow, &ile_glosow);
    
    int tab[ilu_kandydatow];
    
    for(int i = 0; i < ilu_kandydatow; i++) tab[i] = 0;
    
    for(int i = 0; i < ile_glosow; i++) {
        
        scanf("%i", &temp);
        temp -= 1;
        tab[temp]++;
        
        if(tab[temp] > max) max = tab[temp];
        
    }
    
    for(int i = 0; i < ilu_kandydatow; i++) if(tab[i] == max){ kandy = (i + 1); break; }
    
    for(int i = 0; i < ilu_kandydatow; i++) {
        
        printf("%i: %i\n", (i + 1), tab[i]);
        
    }
    
    printf("%i", kandy);

    return 0;
    
}
