#include <stdio.h>

int main()
{
    
	int ile_dzialek;
	scanf("%i", &ile_dzialek);
	
	struct Dzialka {
        
        char miasto[30];
        char symbol[30];
        int wierzcholki;
        int powierzchnia;
        
    };
	
	struct Dzialka dzialki[ile_dzialek];
    for(int i = 0; i < ile_dzialek; i++) scanf("%s %s %i %i", dzialki[i].miasto, dzialki[i].symbol, &dzialki[i].wierzcholki, &dzialki[i].powierzchnia);

    int ile_testow, temp_powierzchnia;
    char temp_znak;
    scanf("%i", &ile_testow);

    for(int i = 0; i < ile_testow; i++){
        
        scanf("%i %c", &temp_powierzchnia, &temp_znak);
        
        for(int j = 0; j < ile_dzialek; j++){
            
            if(dzialki[j].powierzchnia > temp_powierzchnia){
                
                if(temp_znak == 'p') printf("%s %s %i %i\n", dzialki[j].miasto, dzialki[j].symbol, dzialki[j].wierzcholki, dzialki[j].powierzchnia);
                else if(temp_znak == 'm') printf("%s %s\n", dzialki[j].miasto, dzialki[j].symbol);
                else printf("%i %i\n", dzialki[j].wierzcholki, dzialki[j].powierzchnia);
                
            }
            
        }
        
    }

    return 0;
    
}
