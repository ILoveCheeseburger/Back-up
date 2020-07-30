#include <stdio.h>

int ScoreFunc(char a[]) ;

int main()
{
    int TestCount ;
    scanf("%d",&TestCount);
    
    while(TestCount > 0){
        TestCount = TestCount - 1 ;

        char arr[80] = {};

        for(int i=0 ; i<80 ; i++){
            scanf("%c",&arr[i]);
            if(i>0){
                if(arr[i] == '\n')
                break ;
            }
        }

        printf("%d\n", ScoreFunc(arr));
    }

    return 0 ;

}

int ScoreFunc(char a[])
{
    int score[80];
    int count = 0 ;

    for(int i=0 ; i<80 ; i++){
        if(a[i] == 'O'){
            count++ ;
            score[i] = count ;
        }
        else if(a[i] == 'X'){
            score[i] = 0 ;
            count = 0 ;
        }
        else{
            score[i] = 0 ;
        }
    }

    int sum = 0;
    for(int i=0 ; i<80 ; i++){
        sum = sum + score[i] ;
    }

    return sum ;
}
// 2차 배열써도 될듯..