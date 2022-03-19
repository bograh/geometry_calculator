// #include <iostream>
// #include <cmath>
using namespace std;

void cube() {
	double cube_sides;
	double cubeVolume;
	cout << "Enter side of cube: ";
	cin >> cube_sides;
	cubeVolume = pow(cube_sides, 3);
	cout << "Volume of cube with sides, " << cube_sides << "units, is: " << cubeVolume << " cubic units" << endl;
}

void cuboid() {
	double cuboid_length;
	double cuboid_width;
	double cuboid_height;
	double cuboidVolume;
	cout << "Enter length of cuboid: ";
	cin >> cuboid_length;
	cout << "Enter width of cuboid: ";
	cin >> cuboid_width;
	cout << "Enter height of cuboid: ";
	cin >> cuboid_height;
	cuboidVolume = cuboid_length * cuboid_width * cuboid_height;
	cout << "Volume of cuboid with length, " << cuboid_length << "units, width, " << cuboid_width << "units and height, " << cuboid_height << "units, is: " << cuboidVolume << " cubic units." << endl;
}

void cone() {
	double cone_height;
	double base_radius;
	double coneVolume;
	cout << "Enter height of con: ";
	cin >> cone_height;
	cout << "Enter radius of base of cone: ";
	cin >> base_radius;
	coneVolume = (1 / 3) * M_PI * pow(base_radius, 2) * cone_height;
	cout << "Volume of cone with height, " << cone_height << "units and base radius, " << base_radius << "units, is: " << coneVolume << " cubic units." << endl;
}

void cylinder() {
	double cyl_height;
	double cyl_radius;
	double cylVolume;
	cout << "Enter height of cylinder: ";
	cin >> cyl_height;
	cout << "Enter radius of base of cylinder: ";
	cin >> cyl_radius;
	cylVolume = M_PI * pow(cyl_radius, 2) * cyl_height;
	cout << "Volume of cylinder with height, " << cyl_height << "units and base radius, " << cyl_radius << "units, is: " << cylVolume << " cubic units." << endl;
}

void sphere() {
	double sphere_radius;
	double sphereVolume;
	cout << "Enter radius of sphere: ";
	cin >> sphere_radius;
	sphereVolume = (4 / 3) * M_PI * pow(sphere_radius, 2);
	cout << "Volume of sphere with radius, " << sphere_radius << "units, is: " << sphereVolume << " cubic units." << endl;
}

void triangular_prism() {

}

void square_pyramid() {

}