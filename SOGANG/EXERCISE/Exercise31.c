#include <stdio.h>

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

    char ch;
    char FILE1[10000];
    int i = 0 ;
    while(1) {
        ch = fgetc(fp1);
        if(ch==EOF) break;
        else if(ch==' ' ||ch =='\n') continue;
        FILE1[i] = ch ;
        i++ ;
    }

    FILE* fp2;
    fp2 = fopen(file2,"r");

    char FILE2[10000];
    while(1) {
        ch = fgetc(fp2);
        if(ch==EOF) break;
        else if(ch==' ' ||ch =='\n') continue;
        FILE2[i] = ch ;
        i++ ;
    }

    int count = 0 ;
    int samechar = 0 ;
    i = 0 ;
    while(1){
        if(FILE1[i]==EOF || FILE2[i]==EOF) break;
        else if(FILE1[i]==FILE2[i]){
            samechar++;
        }
        count++;
        i++;
    }

    printf("Total Character : %d\n",count);
    printf("Same Character : %d\n",samechar);
    printf("%0.3f%%\n",((float)samechar/count)*100);

}




