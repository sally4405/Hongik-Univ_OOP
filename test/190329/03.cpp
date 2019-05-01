// 2장)1. 표준 입출력

#include <cstdio>
#include <iostream>
using namespace std;

int main(void)
{
 int iVar;
 double dVar;
 char str[20];

 printf("int, double, 문자열 입력 : ");
 scanf("%d %lf %s", &iVar, &dVar, str);

 printf("int 값  : %d\n", iVar);
 printf("double 값  : %f\n", dVar);
 printf("문자열  : %s\n", str);

//cin,cout의 사용
 int i2 = 55;
 double d2 = 1.11;
 char str2[20] = "C++";

 cout << i2 << endl;	//endl = \n
 cout << d2 << endl << str2 << endl;

//
 int i3;
 double d3;
 char str3[20];

 cout << "int, double, 문자열 값 입력 : ";
 cin >> i3 >> d3 >> str3;

 cout << "int 값  : " << i3 << endl;
 cout << "double 값 : " << d3 << endl;
 cout << "문자열  : " << str3 << endl;


 return 0;
}
 
