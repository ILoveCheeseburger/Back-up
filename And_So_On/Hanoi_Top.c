#include <stdio.h>

void hanoi(int num, int rod);

int count = 0 ;

int main()
{
    int disk ;
    scanf("%d", &disk);

    hanoi(disk, 1);

    printf("Thus, the minimal number of moves is %d.\n", count);

    return 0;

}

void hanoi(int num, int rod)
{
    if(num == 1 && rod == 1){
        printf("The upmost disk in rod %d is moved to rod %d.\n",rod,rod+1);
        printf("The upmost disk in rod %d is moved to rod %d.\n",rod+1,rod+2);
        count = count + 2 ;
    }
    else if(num == 1 && rod == 3){
        printf("The upmost disk in rod %d is moved to rod %d.\n",rod,rod-1);
        printf("The upmost disk in rod %d is moved to rod %d.\n",rod-1,rod-2);
        count = count + 2 ;
    }
    else{
    hanoi(num-1,1);
    printf("The upmost disk in rod %d is moved to rod %d.\n",1,2);
    count++ ;
    hanoi(num-1,3);
    printf("The upmost disk in rod %d is moved to rod %d.\n",2,3);
    count++ ;
    hanoi(num-1,1);
    }
}

