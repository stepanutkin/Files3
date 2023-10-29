#pragma once
#include "parallelogram.h"
class rectangle :public parallelogram {
public:
	rectangle(double a, double b) :parallelogram(a, b, 90, 90) {
	}
};