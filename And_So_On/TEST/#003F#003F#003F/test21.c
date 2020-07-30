#include <stdio.h>

void func(int n,int a[],int A[]);

int main()
{
    int a[5] = {1,2,3,5};
    int A[5] = {5,6,7,8};

    int n = 2 ;

    func(n,a,A);

    for(int i=0 ; i<5 ; i++){
        printf("%d %d\n",a[i],A[i]);
    }

}

void func(int n, int a[], int A[])
{
    if(n==0) return;

    int temp = a[4-n] ;
    a[4-n] = A[4-n];
    A[4-n] = temp;

    n--;

    func(n,a,A);

}