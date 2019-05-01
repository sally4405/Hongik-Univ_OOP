// 2장) 2. 네임스페이스

#include <iostream>
using namespace std;

namespace Microsoft {
 int g_MVar;
 int Plus(int x, int y)
 {
  return (x+y);
 }
 int Minus(int x, int y)
 {
  return (x-y);
 }
}

namespace Samsung {
 int g_SVar;
 int Plus(int x,int y)
 {
  return (x+y);
 }
 int Minus(int x, int y);
}

int Samsung::Minus(int x, int y)
{
 return (x-y);
}

int main(void)
{
 Microsoft::g_MVar = Microsoft::Minus(5,2);
 cout << Microsoft::g_MVar << endl;

 return 0;
}





