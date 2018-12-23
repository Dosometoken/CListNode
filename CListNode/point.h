#pragma once
class Point
{
public:
	Point(int x,int y);
	~Point();
	void GetValue(int * x,int* y);
	void SetValue(int x,int y);
	bool Compare(const Point &point);
	char* TransformInfoString();
	void Print();
private:
	int x;
	int y;
};

Point::Point(int x,int y):x(x),y(y)
{
}

Point::~Point()
{
}
