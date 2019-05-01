#include <stdio.h>
void swap(int x, int y) { int temp = x; x = y; y = temp; }
int main(void)
{
 int a = 2; int b = 3;
 swap(a, b); printf("a : %d, b : %d\n", a, b);
}
// c는 call by value 방식으로, 직접 값을 가져오는 것이 아니라 값을 복사해 오는 것이기 때문에
// swap을 하기 위해서는 참조에 의한 전달 방식을 사용해야한다.
