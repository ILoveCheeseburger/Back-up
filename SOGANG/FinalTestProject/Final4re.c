#include <stdio.h>

void AntSeries(int*,int,int arr[],int ARR[]);

int main()
{
    int n ;
    scanf("%d",&n);

    int arr[35] = {1};
    int ARR[35];
printf("x\n");

    int place = 1 ;

    AntSeries(&place,n,arr,ARR);

    printf("place : %d", place);

    if(n%2 == 0){
        for(int i = 0 ; i<35 ; i++ )
        {
            if(i == place) break;
            else printf("%d",ARR[i]);
        }
    }
    else if(n%2 == 1){
        for(int i = 0 ; i<35 ; i++ )
        {
            if(i == place) break;
            else printf("%d",arr[i]);
        }
    }

    printf("\n");

    return 0 ;

}

void AntSeries(int* place, int n, int arr[], int ARR[])
{printf("x\n");
    if(n==1) return ;

    int num ;
    int count ;
    int i = 0 ;
    int j = 0 ;
    int arrPtr = 1 ;

    while(1){
        count = 1 ;
        if(j == *place) break;
        else num = arr[j];

        while(1){
            j++ ;
            if(num == arr[j]) count++;
            else break;
        }
        printf("%d %d\n",count,num);

        ARR[2*i] = count ;
        ARR[2*i+1] = num ;
        arrPtr+=2 ;
        
        i++;
    }

    *place = arrPtr ;
    n-- ;
    printf("n: %d", n);
    
    AntSeries(place,n,ARR,arr);
}