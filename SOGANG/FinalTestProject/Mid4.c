#include <stdio.h>

int ThatNum(double,int);

int main(){
    
    double num ;
    int digit ;
    scanf("%lf %d",&num,&digit);

    int a = digit ;
    int b = 1 ;
    while(a>1){
        b*=10 ;
        a--;
    }

    if(ThatNum(num,digit)>4){
        int temp = num*b + 1 ;
        num = (double)temp/b ;
    }
    else if(ThatNum(num,digit)<5){
        int temp = num*b ;
        num = (double)temp/b ;
    }

    printf("%lf\n",num);

    return 0 ;

}

int ThatNum(double num, int digit)
{
    int result;

    while(digit>0){
        num*=10 ;
        digit--;
    }

    result = (int)num%10 ;

    return result;
}