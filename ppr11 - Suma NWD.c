#include <stdio.h>

int nwd(int a, int b){
    
    while(a != b){
        
        if(a > b) a -= b;
        else b -= a;
        
    }
    
    return a;
    
}

int main()
{
    
    int temp, i = 0, ostatnia, przedostatnia, suma = 0;
    
    while(1){
        
        scanf("%i ", &temp);
        
        if(temp == 0){
            
            printf("%i", suma);
            break;
            
        }
        else if(temp == 1){
            
            suma += nwd(przedostatnia, ostatnia);
            
        }
        else{
            
            przedostatnia = ostatnia;
            ostatnia = temp;
            
        }
        
    }

    return 0;
    
}
