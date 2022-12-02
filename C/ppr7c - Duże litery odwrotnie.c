#include <stdio.h>
#include <stdlib.h>

int main()
{

    int ile;
    scanf("%i", &ile);
    char a[ile];
    for(int i = 0; i < ile; i++) scanf(" %c", &a[i]);

    for(int i = ile-1; i >= 0; i--)
        if(a[i] >= (int)'A' && a[i] <= (int)'Z')
            printf("%c ", a[i]);

    return 0;
    
}
