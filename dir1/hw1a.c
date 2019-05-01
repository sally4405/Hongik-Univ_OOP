#include <stdio.h>
void func() {
int cnt1 = 0;
static int cnt2 = 0;
cnt1++; printf("cnt1 = %d; ", cnt1);
cnt2++; printf("cnt2 = %d\n", cnt2);
}
int main(void)
{
//func 함수 3차례 호출
func(); // cnt1 = 1; cnt2 = 1
func(); // cnt1 = 1; cmt2 = 2;
func(); // cnt1 = 1; cnt2 = 3;
}
// cnt2는static 변수이기 때문에 다른 클래스에서 공통으로 사용할 수 있어 func을 함에따라 값이 증가하지만
// cnt1은 인스턴스 변수이기 때문에 main 에서 값을 변경시킬 수 없다.
