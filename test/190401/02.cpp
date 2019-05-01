// 2. 네임스페이스 (배열)

#include <iostream>
using namespace std;

int main(void)
{
 int i;
 int *p = new int[5];

 for(i = 0; i < 5; i++)
  p[i] = i;

 for(i = 0; i < 5; i++)
  cout << p[i] << " ";
 cout << endl;

 delete []p;


 return 0;
}
