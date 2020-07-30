#include <stdio.h>

void func(FILE*,FILE*);

int main()
{
    FILE* file1 ;
    FILE* file2 ;

    file1 = fopen("out.zip","r+");
    file2 = fopen("in.zip","r+");

    while(1){
        char c = fgetc(file1);

        if(c == EOF) break;
        else{
            fputc(c,file2);
        }
    }

    //func(file1,file2);

}

void func(FILE* file1,FILE* file2)
{
    char c = fgetc(file1);

    if(c == EOF) return;
    else{
        fputc(c,file2);
    }

    func(file1,file2);

}