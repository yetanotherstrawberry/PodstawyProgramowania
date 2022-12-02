#include <stdio.h>

struct Student {
    
    char imie[20];
    char nazwisko[30];
    float srednia;
    
};

int main()
{
    
    int ilu_studentow;
    scanf("%i", &ilu_studentow);
    struct Student studenci[ilu_studentow];
    
    for(int i = 0; i < ilu_studentow; i++) scanf(" %s %s %f ", studenci[i].imie, studenci[i].nazwisko, &studenci[i].srednia);
    
    int ile_testow;
    scanf("%i", &ile_testow);
    float ocena;
    char znak;
    
    for(int j = 0; j < ile_testow; j++){
        
        scanf("%f %c", &ocena, &znak);
        
        for(int z = 0; z < ilu_studentow; z++){
            
            if(studenci[z].srednia > ocena){
                
                if(znak == 'n') printf("%s\n", studenci[z].nazwisko);
                else if(znak == 'i') printf("%s\n", studenci[z].imie);
                else printf("%s %s\n", studenci[z].imie, studenci[z].nazwisko);
                
            }
            
        }
        
    }

    return 0;
    
}
