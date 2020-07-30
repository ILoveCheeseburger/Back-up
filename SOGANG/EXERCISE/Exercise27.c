#include <stdio.h>

int main()
{
    int arr[10] ;

    printf("Input (10 numbers): ");
    for(int i=0 ; i<10 ; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0 ; i<5 ; i++){
        int temp = arr[i] ;
        arr[i] = arr[9-i] ;
        arr[9-i] = temp ;
    }

    int Max = arr[0] ;
    int Min = arr[0] ;
    for(int i=0 ; i<10 ; i++){
        if(Max<arr[i])
        Max = arr[i];
        if(Min>arr[i])
        Min = arr[i];
    }


    for(int i=0 ; i<10 ; i++){
        printf("%d ",arr[i]);
    }

    printf("\nMax: %d,  Min: %d\n",Max,Min);

    return 0;

}