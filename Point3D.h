#pragma once
#include <iostream>
using namespace std;

class Point3D {
private:
	double x, y, z;
	char* Name = new char[170];

public:
	Point3D();
	~Point3D();
	double get_x();
	double get_y();
	double get_z();
	char* get_name();
	void set_x(double x1);
	void set_y(double y1);
	void set_z(double z1);
	void set_name(const char* n);
	double Dist_From(Point3D);


	Point3D operator + (Point3D O2);
	Point3D operator += (Point3D O2);
	Point3D(Point3D& A);

	friend Point3D operator--(Point3D& O1, int);

	friend ostream& operator<< (ostream& out, Point3D& A);
	friend istream& operator>> (istream& in, Point3D& A);
	bool operator > (Point3D s);
	bool operator < (Point3D s);
	bool operator == (Point3D s);


};

