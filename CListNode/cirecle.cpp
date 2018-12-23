#include "circle.h"
const double PI = 3.141592653689793;

void Circle::Getorigin(double* x, double* y)
{
	*x = this->x;
	*y = this->y;
}

void Circle::SetOrigin(double x,double y)
{
	this->x = x;
	this->y = y;
}

double Circle::GetRadius()
{
	return r;
}
void Circle::SetRadius(double r)
{
	this->r = r;
}

double Circle::GetPerimeter()
{
	return 2 * PI * r;
}

double Circle::GetArea()
{
	return PI*r*r;
}