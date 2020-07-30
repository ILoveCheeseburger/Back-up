#include <stdio.h>

int main() {
  int *p = NULL;  // int* p == int * p 모두 같음
  int num = 15;

  p = &num;

  printf("포인터 p의 값 : %d \n", p);
	printf("int 변수 num의 주소 : %d \n", &num);
  printf("포인터 p가 가리키는 값 : %d \n", *p);
  printf("num의 값: %d\n",num);


	return 0;
}