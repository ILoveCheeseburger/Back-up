#include <stdio.h>

//9.999999 이런거 안된다 버려라.... 살릴수가 없다.../

int main()
{
    char arr[8];
    int digit ;

    scanf("%s %d",arr,&digit);

    if(arr[digit+1]-48>4){
        arr[digit] = arr[digit] + 1 ;
        for(int i = digit+1 ; i<=7 ; i++)
        arr[i] = '0' ;
    }
    else if(arr[digit+1]-48<5){
        for(int i = digit+1 ; i<=7 ; i++)
        arr[i] = '0' ;
    }

    printf("%s\n",arr);

    return 0;

}