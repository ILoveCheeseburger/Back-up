#include <stdio.h>

void func(int x[],int *a);

int main()
{
    int a ;
    printf("How many numbers do you INPUT? ");
    scanf("%d",&a);

    int arr[50];
    printf("Input: ");
    for(int i=0 ; i<a ; i++){
        scanf("%d",&arr[i]);
    }

    func(arr,&a);

    for(int i=0 ; i<a ; i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

    return 0;

}

void func(int x[],int *a)
{
    int i ;
    for(i=0 ; i<*a ; i++){
        if((i+1)%2 == 0)
            x[i] = x[i]%2 ;
        else
            x[i] = x[i]%3 ;
    }
}