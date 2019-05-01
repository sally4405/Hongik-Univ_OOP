// 3. this 포인터

#include <iostream>
using namespace std;

struct CPoint {
 int x, y;
};

void Move(CPoint *This, int a, int b)
{
 This -> x += a;
 This -> y += b;
}

void Print(CPoint *This)
{
 cout << "(" << This->x << ", " << This->y << ")" << endl;
}

int main(void)
{
 CPoint P1 = {1,2};
 CPoint P2 = {3,4};

 Move(&P1,1,1);
 Move(&P2,2,2);
 
 Print(&P1);
 Print(&P2);


 return 0;
}
