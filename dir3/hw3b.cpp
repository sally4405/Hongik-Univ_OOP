//신소재공학과 4학년
//B519096 이세은

#include <iostream>
using namespace std;

int **make2dArray(int r, int c)
{
 int **p; //2차원 array의 이름을 p라 하자
 p = new int *[r];
 
 for (int i = 0; i < r; i++)
  p[i] = new int[c];

 for (int i = 0; i < r; i++){
  for (int j = 0; j < c; j++) {
   p[i][j] = i + j;
  }
 }

 return p; //제작한 2차원 array의 주소를 반환한다
}


void print2dArray(int r, int c, int **p)
{
 for (int i = 0; i < r; i++) {
  for (int j = 0; j < c; j++) {
   cout << p[i][j] << "\t";
  }
  cout << endl;
 }
}


void delete2dArray(int r, int **p)
{
 for (int i = 0; i < r; i++)
  delete [] p[i];
 delete [] p;
}


int main(void)
{
 int **p; //p is 2d array name
 p = make2dArray(4,5); // 4 by 5 array 제작
 print2dArray(4,5,p); // 4 by 5 array 출력
 delete2dArray(4, p); // delete 2-d array, while #rows = 4

 return 0;

}


