#include <stdio.h>

int main(){
    double a = 3.141592 ;
    int digit = 5 ;
    int b = 1 ;


    while(digit>0){
        b*=10 ;
        digit--;
    }

    printf("%d\n",b);

    a = a*b ;
    printf("%lf\n",a);

    printf("%lf\n",a+1);

    a = (a+1)/b ;
    printf("%lf\n",a);


}