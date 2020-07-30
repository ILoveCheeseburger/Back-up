#include <stdio.h>

void snail(int n);
void print_snail(int n);
int arr[20][20] ;
int i ;
int j = 0 ;
int m = 1 ;


int main()
{
    int N;
    scanf("%d",&N);

    while(N>0){
        printf("\n");
        snail(N);
        print_snail(N);
        N-- ;
        j = 0 ;
        m = 1 ;
    }
    
}

void snail(int n)
{
    for(i=j ; i<n ; i++, m++ ){
        arr[j][i] = m ;
    }
    for(i=(j+1) ; i<n ; i++, m++){
        arr[i][n-1] = m ;
    }
    for(i=(n-2) ; i>=j ; i--, m++){
        arr[n-1][i] = m ;
    }
    for(i=(n-2) ; i>j ; i--, m++){
        arr[i][j] = m ;
    }

    n-- ; // n-=1
    j++ ; // j+=1     

    if((n-j)<=0)
    return;

    snail(n);
}
//N이 홀수인 경우 마지막 가운데에서 첫번째 포문만 실행되고 나머지 부터는 판정식에 성립하지 않아 실행되지 않음.
//N이 짝수인 경우 마지막 가운데에서 세번째 포문까지만 실행되고 나머지 부터는 판정식에 성립하지 않아 실행되지 않음.
void print_snail(int n)
{
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            printf("%3d ",arr[i][j]);
        }
        printf("\n");
    }
}