#include <stdio.h>

void basic_fee(int elect, float *pay);
void elect_fee(int elect, float *pay);

int main()
{
    int elect ;
    float *pay ;

    printf("Input amount of electricity used : ");
    scanf("%d",&elect);

    basic_fee(elect, pay);
    elect_fee(elect, pay);

    printf("Your electric charges : %0.0f\n",*pay);

    return 0;
}

void basic_fee(int elect, float *pay)
{
    if(elect<=200)
    *pay = 910 ;
    else if(200<elect && elect<=400)
    *pay = 1600 ;
    else if(400<elect)
    *pay = 7300 ;
}

void elect_fee(int elect, float *pay)
{
    if(elect<=200){
        *pay = *pay + 93.3*elect - 4000 ;
        if(*pay<1000)
        *pay = 1000 ;
    }
    else if(200<elect && elect<=400)
    *pay = *pay + 93.3*200 + 187.9*(elect-200) ;
    else if(400<elect)
    *pay = *pay + 93.3*200 + 187.9*200 + 280.6*(elect-400) ;
}