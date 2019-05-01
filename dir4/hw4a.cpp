// 신소재공학과 4학년
// B519096 이세은

#include <iostream>
using namespace std;

void update(int var1, int &var2)
{
 var1 += var1;
 var2 += var2;
}

int main(void)
{
 int a = 1, b = 1;
 
 for (int i = 0; i < 5; i++)
 { update(a,b);
 // cout << "a,b = " << a << ", " << b << endl;
}
 cout << "a = " << a << endl;
 cout << "b = " << b << endl;

 return 0;
}

// a,b = 1,2
// a,b = 1,4
// a,b = 1,8
// a,b = 1,16
// a,b = 1,32
//
// a값은 call by value 방식으로 가져왔기 때문에 실제 a값은 변함이 없이 1로 출력이 된다.
// b값은 call by reference 방식으로 실제 b의 주소를 가져와서 b의 값을 실제로 변화시켜서 출력하게 된다.
