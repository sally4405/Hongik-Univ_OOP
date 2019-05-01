// 2. 네임스페이스 (2차원 배열의 동적 할당)

#include <iostream>
using namespace std;

int main(void)
{
 int **p;
 int i, j;
 p = new int *[4];

 for (i = 0; i < 4; i++)
  p[i] = new int[5];

 for (i = 0; i < 4; i++){
  for (j = 0; j < 5; j++){
   p[i][j] = i + j;
  }
 }

 for (i = 0; i < 4; i++){
  for (j = 0; j < 5; j++){
   cout << p[i][j] << "\t";
  }
  cout << endl;
 }

 for (i = 0; i < 4; i++)
  delete []p[i];
 delete []p;

 return 0;
}
