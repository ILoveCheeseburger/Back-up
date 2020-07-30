#include <stdio.h>

void func(int n);
void print_func(int n);

int main()
{
    int arr ;

    func(arr);

    print_func(arr);
}

void func(int n)
{
    int arr[5] = {1,2,3,4,5};
}

void print_func(int n)
{
    printf("%d%d%d%d%d",n[0],n[1],n[2],n[3],n[4]);
}