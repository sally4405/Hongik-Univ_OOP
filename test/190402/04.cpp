// 6. linkage 지정

#include <iostream>
using namespace std;

int sum(int x, int y)
{
 return (x+y);
}

double sum(double x, double y)
{
 return (x+y);
}

int main(void)
{
 cout << sum(1,2) << endl;
 cout << sum(1.1,2.2) << endl;

 return 0;
}
