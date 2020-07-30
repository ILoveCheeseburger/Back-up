#include <stdio.h>

void hanoi(int num);
void move_forward(int num);
void move_backward(int num);

int count = 0 ;

int main()
{
    int disk ;
    scanf("%d", &disk);

    hanoi(disk);

    printf("Thus, the minimal number of moves is %d.\n", count);

    return 0;

}

void hanoi(int num)
{
    if(num == 1){
        printf("The upmost disk in rod %d is moved to rod %d.\n",1,2);
        printf("The upmost disk in rod %d is moved to rod %d.\n",2,3);
        count = count + 2;
    }
    else{    
    move_forward(num-1);
    printf("The upmost disk in rod %d is moved to rod %d.\n",1,2);
    count++ ;
    move_backward(num-1);
    printf("The upmost disk in rod %d is moved to rod %d.\n",2,3);
    count++ ;
    move_forward(num-1);
    }
}

void move_forward(int num)
{
    if(num == 1){
        printf("The upmost disk in rod %d is moved to rod %d.\n",1,2);
        printf("The upmost disk in rod %d is moved to rod %d.\n",2,3);
        count = count + 2;
    }
    else{
        move_forward(num-1); 
        printf("The upmost disk in rod %d is moved to rod %d.\n",1,2);
        count++ ;
        move_backward(num-1);
        printf("The upmost disk in rod %d is moved to rod %d.\n",2,3);
        count++ ;
        move_forward(num-1);
    }
}

void move_backward(int num)
{
    if(num == 1){
        printf("The upmost disk in rod %d is moved to rod %d.\n",3,2);
        printf("The upmost disk in rod %d is moved to rod %d.\n",2,1);
        count = count +2 ;
    }
    else{
        move_backward(num-1);
        printf("The upmost disk in rod %d is moved to rod %d.\n",3,2);
        count++ ;
        move_forward(num-1);
        printf("The upmost disk in rod %d is moved to rod %d.\n",2,1);
        count++ ;
        move_backward(num-1);
    }
}
