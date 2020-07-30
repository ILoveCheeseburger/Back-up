#include <stdio.h>

int palindrome(int num, int digit);

int main()
{
	int a;
	printf("Input : ");
	scanf("%d",&a);

	if( a<0 ){
		printf("input number can not be negative.\n");
		return 0;
	}

	if(  a>10000000 ){
		printf("input number is not available.\n");
	    return 0;
    }

	(palindrome(a,1))?(printf("Y\n")):(printf("N\n"));

	return 0 ;
}

int palindrome(int num, int digit)
{
	int redigit ;
    for(redigit=1 ; redigit*digit*10<=num ; redigit*=10);
	int TestByDigit = num - (num - num%(10*digit)) ; // num - num%(10*digit) == (num/(10*digit))*(10*digit)
	int TestByRedigit = num - (num - num%(10*redigit)) ;

	if( TestByRedigit / redigit == TestByDigit / digit ){
		digit = 10 * digit ;
		if( digit >= num )
			return 1 ;
     	palindrome(num,digit);
	}
	else
		return 0 ;
}