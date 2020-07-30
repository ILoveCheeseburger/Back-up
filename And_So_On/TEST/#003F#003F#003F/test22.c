#include <stdio.h>

int x = 1 ;

void func()
{
    x = 2 ;
}

int main()
{
    x = 3 ;
    func();
    printf("%d",x);

}