#pragma once
class Circle
{
public:

	void Getorigin(double* x,double* y);
	void SetOrigin(double x, double y);
	double GetRadius();
	void SetRadius(double r);
	double GetPerimeter();
	double GetArea();
private:
	double r, x, y;
};
