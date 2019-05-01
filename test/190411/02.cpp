// 1. 클래스와 객체

#include <iostream>
using namespace std;

class Car {
public : 
 int m_color;
 int m_CC;
 int m_speed;

 void Accelerate() {m_speed++;}
 void Stop() {}
 void TurnOn() {}
};


int main(void)
{
 Car MyCar1, MyCar2;
 MyCar1.m_speed = 0;
 MyCar2.m_CC = 1000;
 MyCar1.Accelerate();

 return 0;
}
