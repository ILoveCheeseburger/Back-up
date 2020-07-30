#include <stdio.h>

int isDivisor(int,int);
int isPrime(int);

int main()
{
	int n;
	printf("Input : ");
	scanf("%d",&n);

	for(int i=1 ; i <= n ; i++){
		if(isDivisor(i,n)==1 && isPrime(i)==1){
			printf("%d    ",i);
		}
	}

	printf("\n");

	return 0;
}

int isDivisor(int m, int n)
{
	if(n%m==0)
		return 1;
	else
		return 0;

}

int isPrime(int m)
{
	int gcd ;
	for(int i=1 ; i < m ; i++){
		if(m%i==0){
			gcd = i;
		}
	}

	if(gcd == 1)
		return 1;
	else
     	return 0;
}