// 1. 클래스와 배열

#include <iostream>
using namespace std;

class CPoint {
private :
 int x, y;

public : 
 CPoint(int a, int b) : x(a), y(b) {}
 void Print() {cout << "(" << x << ", "<< y << ")" << endl;}
 void Print2() {cout << "(" << x << ", "<< y << ")";}
};


int main(void)
{
/////////////////////////
 int i;

 CPoint pt2[5] = {CPoint(0,0), CPoint(1,1), CPoint(2,2), CPoint(3,3), CPoint(4,4)};

 for (i = 0; i < 5; i++)
  pt2[i].Print();

 cout << endl;
////////////////////////
 CPoint pt3[3][2] = {{CPoint(0,0), CPoint(0,1)}, {CPoint(1,0), CPoint(1,1)}, {CPoint(2,0), CPoint(2,1)}};

 for (i = 0; i < 3; i++) {
  for (int j = 0; j < 2; j++) {
   pt3[i][j].Print2();
   cout << "\t";
  }
  cout << endl;
 }
//////////////////////

 return 0;
}
