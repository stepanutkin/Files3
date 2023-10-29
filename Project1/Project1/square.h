#pragma once
#include "rhombus.h"
class square :public rhombus {
public:
	square(double a) :rhombus(a, 90, 90) {}
};