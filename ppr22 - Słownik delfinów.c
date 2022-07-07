#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char **str1_ptr, char **str2_ptr) 
{
    
    char *temp = *str1_ptr; 
    *str1_ptr = *str2_ptr; 
    *str2_ptr = temp; 
    
}

char *porownaj(char *jeden, char *dwa){
	
	int i = 0;
	
	while(i < strlen(jeden) && i < strlen(dwa)){
	    
//	    printf("%c < %c\n",*(jeden + i),*(dwa + i));
	    if((int)*(jeden + i) < (int)*(dwa + i)) return jeden;
	    else if((int)*(jeden + i) > (int)*(dwa + i)) return dwa;
	    
	    i++;
	    
	}
	
	if(i == strlen(dwa) && i != strlen(jeden)) return dwa;
	
	return jeden;
	
}

int main()
{
    
    int ile, i = 0, j = 0;
    scanf("%i", &ile);
    char **tab = malloc(sizeof(char*) * ile), *temp;
    for(; i < ile; i++) *(tab + i) = calloc(20, sizeof(char));
    
    for(i = 0; i < ile; i++) scanf("%s", *(tab + i));

    for(i = 0; i < ile; i++, j = 0)
        for(; j < ile - 1; j++){
            
            if(porownaj(*(tab + j), *(tab + j + 1)) != *(tab + j)){
            
//                printf("zamiana");
                swap((tab + j), (tab + j + 1));
                
            }
            
        }
            
    for(i = 0; i < ile; i++) printf("%s\n", *(tab + i));

    return 0;
    
}
