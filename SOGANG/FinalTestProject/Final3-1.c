#include <stdio.h>

int main()
{
    FILE* file1;
    FILE* file2;

    file1 = fopen("input.txt","r");
    file2 = fopen("output.zip","w");

    char c = getc(file1);

    while(1){
        char d ;
        int count = 1 ;

        while(1){
            d = fgetc(file1);

            if(c==d) count++ ;
            else break ;
        }
        fputc(c,file2);

        if(count>1) fprintc(file2,"%d",count);

        if(d==EOF) return 0;
        c = d ;
    }
}

