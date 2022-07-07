#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    
    int ile_postow, i = 0, ilosc = 0;;
    char **nicki, *poszukiwany = calloc(20, sizeof(char));
    scanf("%i", &ile_postow);
    
    nicki = malloc(sizeof(char*) * ile_postow);
    for(; i < ile_postow; i++) *(nicki + i) = calloc(20, sizeof(char));
    for(i = 0; i < ile_postow; i++) scanf("%s", *(nicki + i));
    
    scanf("%s", poszukiwany);
    
    for(i = 0; i < ile_postow; i++) if(strcmp(poszukiwany, *(nicki + i)) == 0) ilosc++;
    
    printf("%i", ilosc);

    return 0;
    
}
