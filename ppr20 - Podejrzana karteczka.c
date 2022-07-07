#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void poka(char* slowo){
    
    int i = 0, ile_cyfr = 0, ile_liter = 0, ile_znakow = strlen(slowo);
    
    for(; i < ile_znakow; i++)
        if(*(slowo + i) >= '0' && *(slowo + i) <= '9') ile_cyfr++;
        else if((*(slowo + i) >= 'a' && *(slowo + i) <= 'z') || (*(slowo + i) >= 'A' && *(slowo + i) <= 'Z')) ile_liter++;
    
    printf("%i %i %i\n", ile_znakow, ile_liter, ile_cyfr);
    
    return;
    
}

int main()
{
    
    int ile_slow, i = 0;
    char **slowa, *ile_slow_conv = calloc(3, sizeof(char));
    gets(ile_slow_conv);
    ile_slow = atoi(ile_slow_conv);
    
    slowa = malloc(sizeof(char*) * ile_slow);
    for(; i < ile_slow; i++) *(slowa + i) = calloc(30, sizeof(char));
    for(i = 0; i < ile_slow; i++) gets(*(slowa + i));
    
    for(i = 0; i < ile_slow; i++) poka(*(slowa + i));

    return 0;
    
}
