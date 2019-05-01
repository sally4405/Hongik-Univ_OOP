// 13. explicit 생성자

#include <iostream>
using namespace std;

class CNumber {
private :
 int x;
public :
 CNumber() : x(0) {};
 explicit CNumber(int a) : x(a) {}
 // 묵시적 형변환에 의한 객체 생성 불가
};

int main(void)
{
 CNumber N1;
 CNumber N2(1);
 CNumber N3 = CNumber(2);
 //CNumber N4 = 3;
 //3 -> CNumber(3) 묵시적 변환
 
 return 0;
}
