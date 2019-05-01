// 5. 참조의 반환

#include <iostream>
using namespace std;

int z;

int &sum(int x, int y)
{
 z = x + y;
 return z;
}

int &min(int &x, int &y)
{
 return ((x < y) ? x : y);
}

int main(void)
{
 int a = 3, b = 4;
 min(a,b) = 5;
 int result = sum(a,b);

 cout << "a = " << a << endl;
 cout << "b = " << b << endl;
 cout << "result  = " << result << endl;
 cout << "z = " << z << endl;


 return 0;
}
