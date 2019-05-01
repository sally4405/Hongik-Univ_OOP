// 신소재공학과 4학년
// B519096 이세은

#include <iostream>
using namespace std;

class Person {
private : 
 string name;
 int tall;
 int weighs;

public : 
 Person(string a, int b, int c) { name = a; tall = b; weighs = c; }
 void Print() { 
  cout << name << " is " << tall << "cm tall and weighs " << weighs << "kg." << endl;
 }
 void Change(int b, int c) { tall = b; weighs = c; }
 ~Person() { cout << name << " died" << endl; }
};

int main(void)
{
 Person P1("Kim Byung-Gi", 180, 70);
 Person P2("Park Hye-Young", 160, 50);

 P1.Print();
 P2.Print();
 P1.Change(185, 75);
 P1.Print();


 return 0;
}
