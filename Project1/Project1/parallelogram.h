#pragma once
#include "Quadrilateral.h"
class parallelogram :public Quadrilateral {
public:
	parallelogram(double a, double b, double A, double B) :Quadrilateral(a, b, a, b, A, B, A, B) {
	}
};

