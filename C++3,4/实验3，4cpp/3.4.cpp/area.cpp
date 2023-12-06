#include"mytriangle.h"
using namespace std;
double area(double side1, double side2, double side3)
{
	double area;
	double s = (side1 + side2 + side3) / 2;
	area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
	return area;
}