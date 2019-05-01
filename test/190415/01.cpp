// 1. 클래스와 배열

#include <iostream>
using namespace std;

class CPoint {
private :
 int x, y;

public : 
 void SetXY(int a, int b) {x = a; y = b;}
 void Print() {cout << "(" << x << ", "<< y << ")" << endl;}
};


int main(void)
{
//////////////////////// 
 int ary[5] = {1,2,3,4,5};
 for(int i = 0; i < 5; i++)
  cout << "ary[" << i <<"] = " << ary[i] << endl;

 cout << endl;
//////////////////////
 CPoint pt[5];
 int i;
 
 for (i = 0; i < 5; i++)
  pt[i].SetXY(i,i);
 
 for (i = 0; i < 5; i++)
  pt[i].Print();

///////////////////////

 return 0;
}
