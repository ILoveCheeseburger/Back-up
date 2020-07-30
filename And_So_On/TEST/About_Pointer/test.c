#include <stdio.h>

int func(int &a)
{
    printf("*a:%d\n",*a);
}

int main()
{
    int* a = 2 ;
    printf("a:%d\n",a);
    printf("&a:%d\n",&a);
    func(a);            //&대신 *쓰면 segmentation뜨는 이유가 함수들어가면 ** 이어서 그런건가???

    return 0;
}