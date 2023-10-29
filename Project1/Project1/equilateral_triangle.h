#pragma once
#include "Triangle.h"
class equilateral_triangle : public Triangle {
public:
	equilateral_triangle(double a) :Triangle(a, a, a, 60, 60, 60) {
	}
};