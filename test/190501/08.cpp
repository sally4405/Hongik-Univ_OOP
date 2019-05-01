// 2. 객체의 값에 의한 전달

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
  str = new char[len + 1];
  strcpy(str, s);
 }
 ~CString() { delete [] str; }
 void Print() { cout << str << endl; }
};

void ShowString(CString str)
{
 str.Print();
}

int main(void)
{
 CString str1 = "C++ Programming";
 ShowString(str1);
 
 return 0;
}
