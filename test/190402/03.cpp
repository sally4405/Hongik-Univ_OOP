// 5. 참조의 반환

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
 
 for(i = 0; i < 5; i++)
  GetArray(ary,i) = i;

 for(i = 0; i < 5; i++)
  cout << "ary[" << i << "] " << GetArray(ary,i) << endl;

 return 0;
}
