#include <stdio.h>

long long int wyraz(int n, int k){
    
    long long int iloczyn = 1;
    
    for(int i = 1; i <= k; i++){
        
        iloczyn *= n--;
        iloczyn /= i;
        
    }
    
    return iloczyn;
    
}

long long int bell(int n){
    
    long long int bell[n + 1];
    bell[0] = 1;
    long long int temp;
    
    for(int i = 1; i <= n; i++){
        
        temp = 0;
        
        for(int k = 0; k < i; k++){
            
            temp += bell[k] * wyraz(i - 1, k);
            
        }
        
        bell[i] = temp;
        
    }

    return bell[n];
    
}

void wykonaj(){
    
    int a, b, temp;
    
    scanf("%i %i", &a, &b);
    
    if(a > b){
        
        temp = b;
        b = a;
        a = temp;
        
    }
    
    if(a < 0) a = 0;
    if(b > 15) b = 15;
    
    for(int i = a; i <= b; i++) printf("B(%i)=%lli ", i, bell(i));
    
}

int main()
{
    
    int ile_testow;
    
    scanf("%i", &ile_testow);
    for(int z = 0; z < ile_testow; z++){
        
        wykonaj();
        printf("\n");
        
    }

    return 0;
    
}
