#include <stdio.h>

int main()
{
    int k = 1;

    while(1){
        while(1){
            printf("%d\n",k);
            k++;
            if(k==2) break;
        }
        printf("%d\n",k);
        if(k==2) break;
    }
}