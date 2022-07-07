#include <stdio.h>

int main()
{
    
    int ile_rzedow, i = 0, ile_partii, j, poczatek_rzedu, koniec_rzedu;
    
    scanf("%i", &ile_rzedow);
    
    int rzedy[ile_rzedow];
    for(; i < ile_rzedow; i++) scanf("%i", &rzedy[i]);
    
    scanf("%i", &ile_partii);
    
    int ilu_politykow[ile_partii];
    for(i = 0; i < ile_partii; i++) ilu_politykow[i] = 0;
    
    for(i = 0; i < ile_partii; i++){ 
    
        scanf("%i %i", &poczatek_rzedu, &koniec_rzedu);
        for(j = poczatek_rzedu; j <= koniec_rzedu; j++) ilu_politykow[i] += rzedy[j-1];
        
    }
    
    for(i = 0; i < ile_partii; i++) printf("%i\n", ilu_politykow[i]);

    return 0;
    
}
