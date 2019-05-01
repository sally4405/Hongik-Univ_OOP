// 4. 참조와 함수

#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
 int temp = x;
 x = y;
 y = temp;
}

int main(void)
{
 int a = 3, b = 4;
 swap(a,b);

 cout << "a = " << a << endl;
 cout << "b = " << b << endl;


 return 0;
}
