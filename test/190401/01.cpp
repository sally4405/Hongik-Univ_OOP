// 5. new와 delete

#include <iostream>
using namespace std;

int main(void)
{
 int *p = new int(100);

 cout << "(&p)포인터 변수의 주소: " << &p << endl;
 cout << "(p)포인터 변수의 값 : " << p << endl;
 cout << "(*p)동적 변수의 값 : " << *p << endl;
 cout << "(&*p)동적 변수의 주소: " << &*p << endl;

 delete p;

 return 0;
}
