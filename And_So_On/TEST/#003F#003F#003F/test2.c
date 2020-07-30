#include <stdio.h>

int main()
{
    char a[5];
    for(int i=0 ; i<5 ; i++){
        scanf("%C",&a[i]);
    }

    for(int i=0 ; i<5 ; i++){
        printf("%C",a[i]);
    }
}