// 2. 네임스페이스 : 중첩 네임스페이스

# include <iostream>
using namespace std;

namespace CompanyA {
 int g_VarA;
 void func1() { cout << "CompanyA::func1" << endl; }
 void func2() { cout << "CompanyA::func2" << endl; }
}

namespace CompanyB {
 using namespace CompanyA;
 int g_VarB;
 void func1() { cout << "CompanyB::func1" << endl; }
 namespace DeptC {
  void func1() { cout << "CompanyB::DeptC::func1" << endl; }
 }
}



int main(void)
{
 CompanyB::func1();
 CompanyB::func2();
 CompanyB::DeptC::func1();

 return 0;
}
