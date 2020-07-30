#include <stdio.h>

int main()
{
    int a[5] = {1} ;

    printf("%d\n",a[1]);

    char b[5] = "abc" ;

    printf("%c\n",b[1]); // []없애면 안됨... 그래서 스트링 인수 를 쓰는건가...

    printf("%s\n",b);
}
