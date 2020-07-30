#include <stdio.h>

int main()
{
    double a = 0.1 ;
    printf("%f\n",a);

    double dec ;
    int i ;

    for(i=0, dec = 0.1 ; i<3 ; i++, dec = dec * 0.1){
        printf("%f\n",dec);
    }

}
