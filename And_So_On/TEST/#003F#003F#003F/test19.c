#include <stdio.h>

int main()
{
    int arr[5] = {1,2,3};

    int i = 0 ;
    while(1){    
        if(i==5) break ;
        printf("%d",arr[i]);
        i++ ;
    }

    arr[0] = 6 ;
    arr[1] = 7 ;

    for(i=0 ; i<5 ; i++){
    if(arr[i]==0) break;
    printf("%d",arr[i]);
    }

}