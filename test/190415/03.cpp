// 2. 객체 포인터

#include <iostream>
using namespace std;

int main(void)
{
 int *ptr;
 int i;

 ptr = new int(3);
 cout << *ptr << endl;
 delete ptr;

 cout << endl;

 ptr = new int[5];
 for (i = 0; i < 5; i++) 
 {
  ptr[i] = i;
  cout << ptr[i] << endl;
 }
 delete []ptr;

 return 0;
}
