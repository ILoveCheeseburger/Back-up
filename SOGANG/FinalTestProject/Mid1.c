#include <stdio.h>

int Test_rectangle(float,float,int,int,float,float,int,int);
int absolute_value_func(float);

int main()
{
    int x1, y1, x2, y2 ;
    printf("Input about first rectangle : ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    int FirstWidth,FirstLength ;             
    FirstWidth = x2 - x1 ;
    FirstLength = y2 - y1 ; 

    float FirstCenterX = (float)(x1 + x2)/2 ;           
    float FirstCenterY = (float)(y1 + y2)/2 ;          
    
    int x3, y3, x4, y4 ;
    printf("Input about second rectangle : ");
    scanf("%d %d %d %d", &x3, &y3, &x4, &y4);

    int SecondWidth,SecondLength;                 
    SecondWidth = x4 - x3 ;
    SecondLength = y4 - y3 ;

    float SecondCenterX,SecondCenterY ;
    SecondCenterX = (float)(x3 + x4)/2 ;          
    SecondCenterY = (float)(y3 + y4)/2 ;     

    Test_rectangle(FirstCenterX, FirstCenterY, FirstWidth, FirstLength, SecondCenterX, SecondCenterY, SecondWidth, SecondLength) ? printf("True\n") : printf("False\n") ;

}

int Test_rectangle(float X1, float Y1, int W1, int L1, float X2, float Y2, int W2, int L2)
{
    float w = (W1 + W2)/2 ;
    float l = (L1 + L2)/2 ;

    float x = absolute_value_func(X1 - X2);
    float y = absolute_value_func(Y1 - Y2);

    if(x<=w && y<=l){
        return 1 ;
    }
    else{
        return 0 ;
    }

}

int absolute_value_func(float a)
{
    if(a<0){
        return a*(-1) ;
    }
    else if(a>0){
        return a ;
    }
    else{
        return 0 ;
    }
}

// 각 직사각형 가까운 값의 차의 곲이 음수이면 겹친하든 아이디어
