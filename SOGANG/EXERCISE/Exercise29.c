#include <stdio.h>

int MatrixMult(int arr[][4][4]);

int main()
{
    int arr[3][4][4] ;

    printf("First matrix:\n");
    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<4 ; j++){
            scanf("%d",&arr[0][i][j]);
        }
    }

    printf("Second matrix:\n");
    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<4 ; j++){
            scanf("%d",&arr[1][i][j]);
        }
    }

    MatrixMult(arr);

    printf("Result:\n");

    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<4 ; j++){
            printf("%5d",arr[2][i][j]);
        }
        printf("\n");
    }

}

int MatrixMult(int arr[][4][4])
{
    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<4 ; j++){
            int sum = 0 ;
            for(int k=0 ; k<4 ; k++){
                sum = sum + (arr[0][i][k])*(arr[1][k][j]) ;
            }
            arr[2][i][j] = sum ;
        }
    }

}
