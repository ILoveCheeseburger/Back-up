#include <stdio.h>

void AntSeries(int,int arr[]);

int main()
{
    int n ;
    scanf("%d",&n);

    int arr[35] = {1};
printf("x\n");
    AntSeries(n,arr);

    for(int i = 0 ; i<35 ; i++ )
    {
        if(arr[i]==0) break;
        else printf("%d",arr[i]);
    }
    
    printf("\n");

    return 0 ;

}

void AntSeries(int n, int arr[])
{printf("x\n");
    if(n==1) return ;

    int num ;
    int count ;
    int i = 0 ;
    int j = 0 ;

    while(1){
        count = 1 ;
        if(arr[j]==0) break;
        else num = arr[j];

        while(1){
            j++ ;
            if(num == arr[j]) count++;
            else break;
        }
        printf("%d %d\n",count,num);

        arr[2*i] = count ;
        arr[2*i+1] = num ;
        
        i++;
    }

    n--;
    
    AntSeries(n,arr);
}