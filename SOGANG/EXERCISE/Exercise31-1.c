#include <stdio.h>
//my_fgetc는 공백이나 줄바꿈이 아닌 문자를 만나면 그걸 리턴함
//만약 파일의 끝에 도달하면 -1리턴
int my_fgetc(FILE* fp){
    int tmp = fgetc(fp);    //tmp를 리턴할까?
    if(tmp == ' ' || tmp == '\n')   //공백이나 줄바꿈이네.. 다음 문자를 리턴하자
        return my_fgetc(fp);    //my_fgetc가 잘구해주겠지
    if(tmp == EOF)
        return -1; //끝났다는 표시
}
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
    FILE *fp2;
    fp2 = fopen(file2, "r");
    int i = 0 ;
    int charCount = 0;
    int sameCount = 0;
    char char1, char2;
    while(1){
        char1 = my_fgetc(fp1);
        char2 = my_fgetc(fp2);
        if(char1 == -1 || char2 == -1)  //둘중에 짧은 파일이 끝남
            break;
        charCount++;
        printf("%c : %c\n",char1,char2);
        if(char1 == char2){
            sameCount++;
        }
    }
    printf("total: %d\n",charCount);
    double sameRate = (sameCount) / ((float)(charCount));
    printf("same: %.3f%%\n", sameRate * 100);
}
