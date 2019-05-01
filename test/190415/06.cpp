// 3. this 포인터

#include <iostream>
using namespace std;

struct CPoint {
 int x, y;
};

void Move(CPoint *This, int a, int b)
{
 This -> x += a;
