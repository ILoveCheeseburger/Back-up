#include <stdio.h>

int func(int a[]);

int main()
{
    int a[4];

    func(a);

    for(int i=0 ; i<4 ; i++){
        printf("%d\n",a[i]);
    }

}

int func(int a[])
{
    for(int i=0 ; i<4 ; i++){
        a[i] = i ;
    }
}