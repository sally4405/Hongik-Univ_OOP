#include <stdio.h>

int main(void)
{
 int a = 3;
 int f = 3;
 int *b = NULL;
// int *c;
// int *d;
 int *e;

 *b = a;
// *c = &a;	//assignment makes integer from pointer without a cast
// d = a;		//assignment makes pointer from integer without a cast
 e = &f;

 printf(" *b = a : %p, %d\n *c = &a : assignment makes integer form pointer from pointer without a cast\n d = a : assignment makes pointer from integer without a cast\n e = &a : %p, %d\n", b,*b,e,*e);

 return 0;
}



/*
#include <stdio.h>

int main()
{
    int *numPtr;      // 포인터 변수 선언
    int num1 = 10;    // int형 변수를 선언하고 10 저장

    numPtr = &num1;   // num1의 메모리 주소를 포인터 변수에 저장

    printf("%p\n", numPtr);    // 0055FC24: 포인터 변수 numPtr의 값 출력
                               // 컴퓨터마다, 실행할 때마다 달라짐
                               //     
    printf("%p\n", &num1);     // 0055FC24: 변수 num1의 메모리 주소 출력
                               // 컴퓨터마다, 실행할 때마다 달라짐
                               //
    return 0;
}
*/ 
