#include <stdio.h>

void count_char(FILE*,char,FILE*);

int main()
{
    FILE* file1;
    FILE* file2;

    file1 = fopen("input.txt","r");
    file2 = fopen("output.zip","w");

    char c = getc(file1);

    count_char(file1,c,file2);

}

void count_char(FILE* file1,char c,FILE* file2)
{
    char d ;
    int count = 1 ;

    while(1){
        d = fgetc(file1);

        if(c==d) count++ ;
        else break ;
    }

    fputc(c,file2);

    if(count>1) fprintf(file2,"%d",count);
    if(d==EOF) return ;
    count_char(file1,d,file2);

}