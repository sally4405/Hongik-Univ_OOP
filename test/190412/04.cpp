// 5. 객체의 소멸과 소멸자

#include <iostream>
using namespace std;

class CArray {
private : 
 int count;
 int *x;

public : 
 CArray(int a) { count = a; x = new int[count]; }
 //void Delete() { delete []x;}
 ~CArray() { delete []x; cout << "소멸" << endl; }
 void Print() {
  for (int i = 0; i < count; i++)
   cout << x[i] << " ";
  cout << endl;
 }
};

int main(void)
{
 CArray ary(5);
 ary.Print();
 //ary.Delete();

 return 0;
}
