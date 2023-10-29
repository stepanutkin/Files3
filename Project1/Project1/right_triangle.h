#pragma once
#include "Triangle.h"
#include "Figure.h"
class right_trian :public Triangle {
public:
	right_trian(double a, double b, double c, double A, double B) :Triangle(a, b, c, A, B, 90){}
};