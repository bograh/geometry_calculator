// #include <iostream>
// #include <cmath>
using namespace std;

void square() {
	double sqr_length;
	double squareArea;
	cout << "Enter length of square: ";
	cin >> sqr_length;
	squareArea = pow(sqr_length, 2);
	cout << "Area of square with length, " << sqr_length << "units, is: " << squareArea << " square units" << endl;
}

void rectangle() {
	double rect_length, rect_breadth, rectangleArea;
	cout << "Enter length of rectangle: ";
	cin >> rect_length;
	cout << "Enter breadth of rectangle: ";
	cin >> rect_breadth;
	rectangleArea = rect_length * rect_breadth;
	cout << "Area of rectangle with length, " << rect_length << "units and breadth " << rect_breadth << "units, is: " << rectangleArea << " square units" << endl;
}

void triangle() {
	double base, tri_heigth, triangleArea;
	cout << "Enter base length of triangle: ";
	cin >> base;
	cout << "Enter height of triangle: ";
	cin >> tri_heigth;
	triangleArea = 0.5 * base * tri_heigth;
	cout << "Area of triangle with base, " << base << "units and height " << tri_heigth << "units, is: " << triangleArea << " square units" << endl;
}

void circle() {
	double radius, circleArea;
	cout << "Enter radius of circle: ";
	cin >> radius;
	circleArea = M_PI * pow(radius, 2);
	cout << "Area of circle with radius, " << radius << "units is: " << circleArea << " square units" << endl;
}

void parallelogram() {
	double parallelogram_base, parallelogramArea, parallelogram_height;
	cout << "Enter base length of parallelogram: ";
	cin >> parallelogram_base;
	cout << "Enter height of parallelogram: ";
	cin >> parallelogram_height;
	parallelogramArea = parallelogram_base * parallelogram_height;
	cout << "Area of parallelogram with base length of " << parallelogram_base << "units and height " << parallelogram_height << "units, is: " << parallelogramArea << " square units" << endl;
}

void trapezium() {
	double a, b, trapezium_height, trapeziumArea;
	cout << "Enter parallel side a and b of trapezium (seperated by space): ";
	cin >> a >> b;
	cout << "Enter height of trapezium: ";
	cin >> trapezium_height;
	trapeziumArea = 0.5 * (a + b) * trapezium_height;
	cout << "Area of trapezium with parallel sides " << a << " and " << b << "units and perpendicular height " << trapezium_height << "units, is: " << trapeziumArea << " square units" << endl;
}