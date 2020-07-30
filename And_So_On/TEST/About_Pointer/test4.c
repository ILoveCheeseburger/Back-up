#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;
    char *c = p;

    printf("%p\n",p);
    printf("%p\n",p+1);
    printf("%p\n",c);
    printf("%p\n",c+1);
}
// a=10
// p:&a:a
// c:p
// c:p:&a:10