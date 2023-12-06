#include"mytriangle.h"
bool is_valid(double side1, double side2, double side3)
{
	if ((side1 < side2 + side3) && (side2 < side1 + side3) && (side3 < side1 + side2))
	{
		return true;
	}
	else
	{
		return false;
	}
}