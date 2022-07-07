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
    
    for(int i = ile; i > 0; i--){
        
        if(i % 2 == 0){
            
            printf("%i", tab[i-1]);
            if(i - 2 > 0) printf(" ");
            
        }
        
    }

    return 0;
    
}
