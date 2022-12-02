#include <stdio.h>

int main()
{
    
    int ile, i = 0, temp_a, temp_b;
    char temp_dzialanie;
    scanf("%i", &ile);
    
    for(; i < ile; i++){
        
        scanf("%i %c %i", &temp_a, &temp_dzialanie, &temp_b);
        if(temp_dzialanie == '+') printf("%i\n", (temp_a + temp_b));
        else if(temp_dzialanie == '-') printf("%i\n", (temp_a - temp_b));
        else if(temp_dzialanie == '*') printf("%i\n", (temp_a * temp_b));
        
    }

    return 0;
    
}
