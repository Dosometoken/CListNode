#include<iostream>
#include"circle.h"

using namespace std;

int main()
{
	Circle circle;
	circle.SetOrigin(0.0,0.0);
	circle.SetRadius(1.0);
	cout << "圆的周长是:" << circle.GetPerimeter() << endl;;
	cout << "圆的面积是:" << circle.GetArea() << endl;
	system("pause");
}