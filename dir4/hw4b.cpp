// 신소재굥학과 4학년
// B519096 이세은

#include <iostream>
using namespace std;

int &GetArray(int *ary, int index)
{
 return ary[index];
}

int main(void)
{
 int i;
 int ary[5];

 for (i = 0; i < 5; i++)
  GetArray(ary,i) = i;

 for (i = 0; i < 5; i++)
  cout << "ary[" << i << "] " << GetArray(ary, i) << endl;


 return 0;
}

// ary[0] 0
// ary[1] 1
// ary[2] 2
// ary[3] 3
// ary[4] 4
//
// return by reference로 함수 선언시 &연산자를 사용하기 때문에 함수 호출시에 실제 return 값을 가져와서 대입할 수 있게된다.
//
// GetArray 함수 선언에서 &를 빼면 18번째 줄에서 오류가 난다. 함수 선언시 &를 사용하지 않으면 array의 실제 주소를 가져와서 대입하는게ㅔ 불가능하다.
