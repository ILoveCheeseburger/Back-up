#include <stdio.h>

int main()
{
    int *p ;

    printf("*p의 주소인 p: %d",p);
    printf("*p : %d",*p);

    return 0;
}

//segmentation뜨는 이유: 
// int p : address = &p, value = p
// int* p : address = p, value = *p
// &p is not allowed