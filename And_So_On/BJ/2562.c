#include <stdio.h>

int main()
{
    int a[8];

    int h;
    for(h=0;h<9;h++){
        scanf("%d",&a[h]);  
    }

    int Max = a[0];
    int num;

    int i;

    for(i=0;i<9;i++){
        if(a[i]>=Max){
        Max = a[i];
        num = i+1 ;
        }
    }

   

    printf("%d\n",Max);
    printf("%d\n",num);

    return 0;
}






