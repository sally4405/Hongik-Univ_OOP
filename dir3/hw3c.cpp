//신소재공학과 4학년
//B519096 이세은

#include <iostream>
using namespace std;

struct Point
{
 int x;
 int y;
};


Point **make2dArray(int r, int c)
{
 Point **p; // 2차원 array의 이름을 p라 하자
 p = new Point*[r];

 for (int i = 0; i < r; i++)
  p[i] = new Point[c];

 for (int i = 0; i < r; i++) {
  for (int j = 0; j < c; j++) {
   p[i][j].x = i + j;
   p[i][j].y = 2*(i+j);
  }
 }
 
 return p; // 제작한 2차원 array의 주소를 반환한다
}


void print2dArray(int r, int c, Point **p)
{
 for (int i = 0; i < r; i++) {
  for (int j = 0; j < c; j++) {
   cout << "(" << p[i][j].x << "," << p[i][j].y << ")" << "\t";
  }
  cout << endl;
 } 
}


void delete2dArray(int r, Point **p)
{
 for (int i = 0; i < r; i++) 
  delete [] p[i];
 delete [] p;
}


int main(void)
{
 Point **p;
 p = make2dArray(4,5);
 print2dArray(4,5,p);
 delete2dArray(4,p);

 return 0;
}




