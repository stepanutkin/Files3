#pragma once
#include "parallelogram.h"
class rhombus :public parallelogram {
public:
	rhombus(double a, double A, double B) :parallelogram(a, a, A, B) {
	}
};
