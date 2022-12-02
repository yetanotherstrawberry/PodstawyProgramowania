#include <stdio.h>

void test(int x){
    
    int garscie_kwiatow = 0, garscie_lisci = 0, kroki = 0;
    
    while(x != 1){
        
        kroki++;
        if(x % 2 == 0){ garscie_kwiatow++; x /= 2; }
        else { garscie_lisci++; x = 3*x + 1; }
        
        if(kroki > 15){ printf("NIE\n"); return; } 
        
    }
    
    printf("TAK %i %i\n", garscie_kwiatow, garscie_lisci);
    
    return;
    
}

int main()
{
    
    int testy[20], i = 0;
    
    do {
        
        scanf("%i", &testy[i]);
        i++;
        
        
    } while(testy[i - 1] != 0);
    
    i = 0;
    
    while(testy[i] != 0){
        
        test(testy[i]);
        i++;
        
    }
    
    return 0;
    
}
