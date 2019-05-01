// 7. friend 클래스

#include <iostream>
using namespace std;

class CController;
class CCar;

class CCar {
private : 
 bool OnOff;
 int price;
 int speed;

public : 
 CCar(int p) : OnOff(false), price(p), speed(0) {}
 void PrintSpeed() { cout << "현재속도 : " << speed << endl; }
 void SetPrice(CController &controller, int p);

 friend class CController;
};

class CController {
private : 
 int price;

public :
 CController(int p) : price(p) {}
 void TurnOn(CCar &car) { car.OnOff = true; }
 void TurnOff(CCar &car) { car.OnOff = false; }
 void SpeedChange(CCar &car, int v) { car.speed += v; }
 
 friend void CCar::SetPrice(CController &controller, int p);
};

void CCar::SetPrice(CController &controller, int p)
{
 controller.price = p;
}

int main(void)
{
 CCar MyCar(100);
 CController MyController(10);

 MyController.TurnOn(MyCar);
 MyController.SpeedChange(MyCar, 5);
 MyCar.PrintSpeed();
 MyCar.SetPrice(MyController, 15);
 MyController.TurnOff(MyCar);

 return 0;
}
