#include <stdio.h>

double CharToDou(char a[],int *num);

int main()
{
    int digit =0 ;

    char arr[12] ;                 //음수이고, 소수점 있다면 12자리 받아야 10자리 실수를 받을 수 있음.
    for(int i=0 ; i<12 ; i++){
        scanf("%c",&arr[i]);
        if(arr[i] == '\n'){
            break ;
        }
        digit++ ;
    }

    printf("Result: %0.6f\n",CharToDou(arr,&digit));

    return 0;
}

double CharToDou(char a[], int *num)
{
    int dot ;
    int DotTest = 1 ;
    int PositiveTest = 1 ;
    int digit = *num ;

    if(a[0] == '-')
    PositiveTest = 0 ;             //음수인지 아닌지 판별

    for(int i=0 ; i<12 ; i++){
        if(a[i] == '.'){
        dot = i ;                 //소수점 위치 확인
        DotTest = 0;              //소수인지 판별 (소수점 있어도 정수 가능)
        break ;
        }

    }                             

    int type ;

    if(DotTest == 1 && PositiveTest == 1)
    type = 1 ;                                 // type1 : 양수인 정수
    else if(DotTest == 1 && PositiveTest == 0)
    type = 2 ;                                 // type2 : 음수인 정수
    else if(DotTest == 0 && PositiveTest == 1)
    type = 3 ;                                 // type3 : 양수인 소수
    else if(DotTest == 0 && PositiveTest == 0)
    type = 4 ;                                 // type4 : 음수인 소수


    double result ;
    double dec ;
    int i ;

    switch(type)
    {
        case 1 : 
            for(i = digit-1 , dec = 1 ; i>=0 ; i=i-1 , dec = dec * 10){
                result = result + ((double)a[i]-48)*dec ;}
            break ;

        case 2 : 
            for(i = digit-1 , dec = 1 ; i>0 ; i=i-1 , dec = dec * 10){
                result = result + ((double)a[i]-48)*dec ;} 
            result = (-1)*result ; 
            break ;

        case 3 : 
            for(i = dot-1 , dec = 1 ; i>=0 ; i=i-1 , dec = dec * 10){
                result = result + ((double)a[i]-48)*dec ;}
            for(i = dot+1 , dec = (0.1) ; i <= (digit-1) ; i++ , dec = dec * (0.1)){
                result = result + ((double)a[i]-48)*dec ;}
            break ;

        case 4 :
            for(i = dot-1 , dec = 1 ; i>0 ; i=i-1 , dec = dec * 10){
                result = result + ((double)a[i]-48)*dec ;}
            for(i = dot+1 , dec = (0.1) ; i <= (digit-1) ; i++ , dec = dec * (0.1)){
                result = result + ((double)a[i]-48)*dec ;}
            result = (-1)*result ;
            break ;
    }

    return result ;
}










