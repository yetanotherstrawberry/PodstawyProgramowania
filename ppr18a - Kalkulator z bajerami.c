#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int czyDaSiePrzekonwertowac(char *slowo){
    
    int i = 0;
    
    for(; i < strlen(slowo); i++){
        
        if(*(slowo + i) < '0' || *(slowo + i) > '9') return 0;
        
    }
    
    return 1;
    
}

int suma(char *lewo, char *prawo){
    
    return atoi(lewo) + atoi(prawo);
    
}

int main()
{

    int ile, i = 0;
    char wejscie[20] = { '\0' };
    scanf("%i", &ile);
    
    for(; i < ile; i++){
        
        scanf(" %[^\n\r]", wejscie);
        
        char *delim = " ";
        char *lewo = strtok(wejscie, delim);
        char *prawo = strtok(NULL, delim);
        
        if(czyDaSiePrzekonwertowac(lewo) && czyDaSiePrzekonwertowac(prawo)) printf("%i\n", suma(lewo, prawo));
        else if(!czyDaSiePrzekonwertowac(lewo) && !czyDaSiePrzekonwertowac(prawo)) printf("%s%s\n", lewo, prawo);
        else if(czyDaSiePrzekonwertowac(lewo) && !czyDaSiePrzekonwertowac(prawo)) printf("%c\n", *(prawo + atoi(lewo) - 1));
        else if(!czyDaSiePrzekonwertowac(lewo) && czyDaSiePrzekonwertowac(prawo)) printf("%c\n", *(lewo + atoi(prawo) - 1));
        
    }
    
    return 0;
    
}
