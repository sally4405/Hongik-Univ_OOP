// 6. bool 자료형 (C,C++ 비교)

#include <iostream>
using namespace std;

typedef int BOOL;

int main(void)
{
 BOOL bVal1 = 3;	// 3으로 저장함 
 bool bVal2 = 3;	// 1로 저장함

 cout << "bVal1 : " << bVal1 << endl;
 cout << "bVal2 : " << bVal2 << endl;

 int a = bVal1 + 2;	// BOOL은 int형으로 취급됨
 int b = bVal2 + 2;	// bool은 true, false로 취급됨
 
 cout << "a : " << a << endl;
 cout << "b : " << b << endl;

 return 0;
}
