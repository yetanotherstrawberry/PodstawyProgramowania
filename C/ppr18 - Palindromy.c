#include <stdio.h>
#include <stdlib.h>

void test(char* slowo){
    
    int i = 30, j, j2;
    
    for(; i >= 0; i--) if(*(slowo + i) != '\0'){ j = i; break; }
    
    j2 = j;
    i = 0;
    
    while(i <= j){
        
        if(*(slowo + i) != *(slowo + j)){
        
            printf("%s!=", slowo);
            
            for(i = j2; i >= 0; i--) printf("%c", *(slowo + i));
            
            printf("\n");
            
            return;
            
        }
        
        i++;
        j--;
        
    }
    
    for(i = 0; i >= 0; i--){
        
        if(*(slowo + i) == '\0'){ break; }
        
        printf("%s==%s\n", slowo, slowo);
        
    }
    
    return;
    
}

int main()
{
    
    int ile_testow, i = 0, j;
    scanf("%i", &ile_testow);
    
    char **slowa = malloc(sizeof(char*) * ile_testow);
    for(; i < ile_testow; i++) *(slowa + i) = malloc(sizeof(char) * 30);
    for(i = 0; i < ile_testow; i++, j = 0)
        for(; j < 30; j++)
            *(*(slowa + i) + j) = '\0';
    
    for(i = 0; i < ile_testow; i++) scanf("%s", *(slowa + i));
    
    for(i = 0; i < ile_testow; i++){ /*printf("%s\n", *(slowa + i));*/ test(*(slowa + i)); }
    
    return 0;
    
}
