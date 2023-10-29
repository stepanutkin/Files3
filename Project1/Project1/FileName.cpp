#include "Figure.h"
#include "Triangle.h"
#include "Quadrilateral.h"
#include "right_triangle.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"
#include "parallelogram.h"
#include "rhombus.h"
#include "square.h"
#include "rectangle.h"

int main() {

	Triangle t(10, 20, 30, 40, 50, 60);
	std::cout << "Triangle:" << std::endl;
	t.print_info(&t);
	std::cout << std::endl;

	isosceles_triangle b(20, 60, 70, 30);
	std::cout << "Isosceles_Triangle:" << std::endl;
	b.print_info(&b);
	std::cout << std::endl;

	equilateral_triangle e(30);
	std::cout << "equilateral_triangle:" << std::endl;
	e.print_info(&e);
	std::cout << std::endl;

	right_trian f(30, 40, 50, 50, 60);
	std::cout << "Right_Triangle:" << std::endl;
	f.print_info(&f);
	std::cout << std::endl;

	Quadrilateral r(30, 40, 50, 60, 70, 80, 90, 100);
	std::cout << "Quadrilateral:" << std::endl;
	r.print_info(&r);
	std::cout << std::endl;

	parallelogram p(30, 40, 60, 70);
	std::cout << "parallelogram:" << std::endl;
	p.print_info(&p);
	std::cout << std::endl;

	rhombus u(10, 20, 30);
	std::cout << "rhombus:" << std::endl;
	u.print_info(&u);
	std::cout << std::endl;

	square x(30);
	std::cout << "square:" << std::endl;
	x.print_info(&x);
	std::cout << std::endl;

	rectangle y(40, 50);
	std::cout << "rectangle:" << std::endl;
	y.print_info(&y);
	std::cout << std::endl;

	return 0;
}