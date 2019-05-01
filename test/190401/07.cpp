// 3. 함수에 대한 참조

#include <iostream>
using namespace std;

int sum(int x, int y) {return (x+y);}

int main(void)
{
 int (*pSum)(int,int);
 pSum = sum;
 
 cout << pSum(3,4) << endl;

 int a;
 int &b = a;
 int *p = &b;
 int &c = b;
 c = 5;
 cout << "a : " << a << endl;
 cout << "b : " << b << endl;
 cout << "*p : " << *p << endl;
 cout << "c : " << c << endl;

 int (&rSum)(int,int) = sum;
 cout << rSum(c,5) << endl;

 int ary[3] = {0};
 int (&rAry)[3] = ary;
 rAry[2] = c;
 cout << ary[0] << " " << ary[1] << " " << ary[2] << endl;


 return 0;
}
