#include <stdio.h>
int fgetc_func(FILE* fp);

int main()
{
    char file1[20];
    char file2[20];
    printf("Input first file name : ");
    scanf("%s",file1);
    printf("Input second file name : ");
    scanf("%s",file2);

    FILE* fp1;
    fp1 = fopen(file1,"r");
    FILE* fp2;
    fp2 = fopen(file2,"r");

    char ch1,ch2;
    int count = 0 ;
    int samechar = 0 ;
  
    while(1) {
        ch1 = fgetc_func(fp1);
        ch2 = fgetc_func(fp2);
        if(ch1 == -1 || ch2 == -1)  break;
        count++;
        if(ch1==ch2)
        samechar++;
    }

    printf("Total Character : %d\n",count);
    printf("Same Character : %d\n",samechar);
    printf("%0.3f%%\n",((float)samechar/count)*100);

}

int fgetc_func(FILE* fp){
    int tmp = fgetc(fp);  
    if(tmp == ' ' || tmp == '\n')   
        return fgetc_func(fp);   
    if(tmp == EOF)
        return -1; 
}
