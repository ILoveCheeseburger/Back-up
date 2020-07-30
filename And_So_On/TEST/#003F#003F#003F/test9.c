#include <stdio.h>

int func(int a[][4]);

int main()
{
    int a[2][4];

    for(int i=0 ; i<4 ; i++){
            scanf("%d",&a[1][i]);
    }

    func(a) ;

    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<4 ; j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}

int func(int a[][4])
{
    for(int i=0 ; i<4 ; i++){
            a[1][i] = i ;
    }

}
