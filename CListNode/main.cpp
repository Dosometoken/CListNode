#include<iostream>
#include"circle.h"

using namespace std;

int main()
{
	Circle circle;
	circle.SetOrigin(0.0,0.0);
	circle.SetRadius(1.0);
	cout << "Բ���ܳ���:" << circle.GetPerimeter() << endl;;
	cout << "Բ�������:" << circle.GetArea() << endl;
	system("pause");
}