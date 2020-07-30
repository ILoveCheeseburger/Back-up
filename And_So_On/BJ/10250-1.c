#include <stdio.h>

int RoomNum(int,int,int);

int main()
{
    int T ;
    scanf("%d",&T);

    int H,W,N ;
    while(T>0){
        scanf("%d %d %d",&H,&W,&N);
        printf("%d\n",RoomNum(H,W,N));
        T-- ;
    }

    return 0;

}

int RoomNum(int h, int w, int t)
{
    int result ;
    int Fir,Last ;

    if(t%h == 0){
        Fir = h ;
        Last = t/h ;
    }
    else{
    Fir = t%h ;

    Last = (t/h)+1 ;
    }

    result = Fir*100 + Last ;

    return result;
}