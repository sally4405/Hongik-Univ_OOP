// 1. 객체의 생성과 대입

#include <iostream>
#include <cstring>
using namespace std;

class CString {
private :
 int len;
 char *str;
public :
 CString(char *s = "Unknown") {
  len = strlen(s);
  cout << len << ", ";
  
  str = new char[len + 1];
  cout << str << ", ";
  
  strcpy(str, s);
  cout << strcpy << " // ";
 }
 ~CString() { delete [] str; }
 void Print() { cout << str << endl; }
};

int main(void)
{
 CString str1 = "C++ Programming";
 //CString str2 = str1;
 //CString str3;

 //str3 = str1;
 
 cout << endl;
 
 str1.Print();
 //str2.Print();
 //str3.Print();

 return 0;
}
