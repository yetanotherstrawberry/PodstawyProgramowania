#include <stdio.h>
#include <stdlib.h>

int main()
{

    char a[30] = { '\0' };
    scanf("%s", a);

    for(int i = 29; i >= 0; i--)
        if(a[i] != '\0')
            printf("%c", a[i]);

    return 0;
    
}
