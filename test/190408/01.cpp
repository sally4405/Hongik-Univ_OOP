// 7. 선언과 정의

#include <iostream>
using namespace std;

int main(void)
{

 return 0;
}

 int a;
 extern int count;// = 1; 선언과 동시에 정의하면 warning뜸
 int func(int x) {return (x*x);};
 struct Point {int x; int y;};
 struct XCount {
  int x;
  static int count;
 };
 int XCount::count = 1;

 XCount anX;
 enum {up, down};
 namespace NS {int var;};
 namespace NAnother = NS;
