#include <stdio.h>

int main()
{
    char a[5];
    for(int i=0 ; i<5 ; i++){
        scanf("%c",&a[i]);
        if(a[i] == '\n')
        break ;
    }

    for(int i=0 ; i<5 ; i++){
        printf("%c",a[i]);
    }

    int count = 0 ;
    for(int i=0 ; i<5 ; i++){
       if(a[i] != ' '){
           count++ ;
       }
       else if(a[i] == ' ')
       break ;

       }
    
    printf("%d",count);

    
}