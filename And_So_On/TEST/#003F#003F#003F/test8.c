#include <stdio.h>

int main()
{
    char arr[3][4];

    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<4 ; j++){
            scanf("%c%*c",&arr[i][j]);
            
        }
    }

    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<4 ; j++){
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
}
