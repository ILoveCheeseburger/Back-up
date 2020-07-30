#include <stdio.h>

int RoomNum(int,int,int);

int main()
{
    int T;
    scanf("%d",&T);

    int H[100],W[100],N[10000] ;

    int t;
    for(t=0 ; t<T ; t++){
        scanf("%d %d %d",&H[t],&W[t],&N[t]);
        printf("%d\n",RoomNum(H[t],W[t],N[t]));
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