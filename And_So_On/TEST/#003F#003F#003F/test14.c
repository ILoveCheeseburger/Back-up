#include <stdio.h>

void snail(int n);
void print_snail(int n);
int arr[];

int main()
{
    int n =1 ;
    snail(n);
    printf("%d",arr[1]);
    print_snail(n);
}

void snail(int n)
{
    arr[0] = 1 ;
    arr[1] = 2 ;
    arr[2] = 3 ;
    arr[3] = 4 ;
    arr[4] = 5 ;
}

void print_snail(int n)
{
    snail(1);
    printf("%d",arr[1]);

}
