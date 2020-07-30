#include <stdio.h>

void units(int);
void tens(int);
void hundreds(int);

int main()
{
    int num ;
    printf("Input : ");
    scanf("%d",&num);

    hundreds(num/100);

    tens((num%100/10));

    units(num%10);

    printf("\n");

    return 0 ;
}

void units(int num)
{
    switch(num){
        case 9 : printf("IX"); break;
        case 8 : printf("VIII"); break;
        case 7 : printf("VII"); break;
        case 6 : printf("VI"); break;
        case 5 : printf("V"); break;
        case 4 : printf("IV"); break;
        case 3 : printf("III"); break;
        case 2 : printf("II"); break;
        case 1 : printf("I"); break;
        case 0 : return;
    }
}

void tens(int num)
{
    switch(num){
        case 9 : printf("XC"); break;
        case 8 : printf("LXXX"); break;
        case 7 : printf("LXX"); break;
        case 6 : printf("LX"); break;
        case 5 : printf("L"); break;
        case 4 : printf("XL"); break;
        case 3 : printf("XXX"); break;
        case 2 : printf("XX"); break;
        case 1 : printf("X"); break;
        case 0 : return;
    }
}
void hundreds(int num)
{
    switch(num){
        case 5 : printf("D"); break;
        case 4 : printf("CD"); break;
        case 3 : printf("CCC"); break;
        case 2 : printf("CC"); break;
        case 1 : printf("C"); break;
        case 0 : return;
    }
}