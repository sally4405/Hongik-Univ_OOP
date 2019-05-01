// 3. 함수 오버로딩

#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
 int temp = *x;
 *x = *y;
 *y = temp;
}

void swap(double *x, double *y)
{
 double temp = *x;
 *x = *y;
 *y = temp;
}

int main(void)
{
 int a = 3, b = 4;
 double c = 1.1, d = 2.2;

 swap(&a, &b);
 swap(&c, &d);

 cout << "a = " << a << ", b = " << b << endl;
 cout << "c = " << c << ", d = " << d << endl;
 

 return 0;
}
