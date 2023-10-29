#pragma once
#include "Triangle.h"
class isosceles_triangle : public Triangle {
public:
	isosceles_triangle(double a, double b, double A, double B) :Triangle(a, b, a, A, B, A) {
	}
};