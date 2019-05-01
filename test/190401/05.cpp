// (3장) 1. 인라인 함수 

#include <iostream>
using namespace std;

//#define MIN(x,y) ((x) < (y)? (x) : (y))

int MIN(int X, int Y)
{
 return (X < Y ? X : Y);
}

inline int Fact(int n)
{
 return ((n <= 1) ? 1 : n * Fact(n-1));
}

int main(void)
{
 cout << MIN(4,5) << endl;
 cout << MIN((2+3), (1+2)) << endl;
 cout << "5! = " << Fact(5) << endl;

 return 0;
}
