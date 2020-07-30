#include <stdio.h>

void func(FILE*);

int main()
{
    FILE* file ;

    file = fopen("out.zip","w");

    fputs("abcdefg",file);

    fclose(file);

    file = fopen("out.zip","r");

   // while(1){
   //     char c = fgetc(file);

   //     if(c == EOF) {break;}
   //     else {printf("%c\n",c);}
   // }

    func(file);

}

void func(FILE* file)
{
    char c = fgetc(file);

    if(c == EOF) return;
    else{printf("%c\n",c);}

    func(file);

}