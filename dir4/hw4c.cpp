// 신소재공학과 4학년
// B519096 이세은 

#include <iostream>
using namespace std;

int &GetArray(int *ary, int index)
{
 return ary[index];
}

void SumMul(int *ary, int num, int &s, int &m)
{
 s = 0; m = 1;
 
 for (int i = 0; i < num; i++)
 {
  s += ary[i];
  m *= ary[i];
 }
}

int main(void)
{
 int ary[5];
 int sum, mul;

 for (int i = 0; i < 5; i++)
  GetArray(ary, i) = i + 1;	//ary[i] = i +1;

 SumMul(ary, 5, sum, mul);

 cout << "합 : " << sum << "; 곱 : "
	<< mul << endl;

 return 0;
}
