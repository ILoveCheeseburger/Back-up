#include <stdio.h>

void RomanCount(int,char,char,char);

int main()
{
    int num ;
    printf("Input : ");
    scanf("%d",&num);


    RomanCount(num/100,'C','D','M');

    RomanCount((num%100)/10,'X','L','C');

    RomanCount(num%10,'I','V','X');

    printf("\n");

    return 0 ;
}

void RomanCount(int num, char a, char b, char c)
{
    if(num==0){
        return;
    }
    if(1<=num && num<=3){
        for(;num>0;num--){
        printf("%c",a);
        }
    }
    else if(num==4){
        printf("%c",a);
        printf("%c",b);
    }
    else if(5<=num && num<=8){
        printf("%c",b);
        for(;num>5;num--){
        printf("%c",a);
        }
    }
    else if(num==9){
        printf("%c",a);
        printf("%c",c);
    }

}