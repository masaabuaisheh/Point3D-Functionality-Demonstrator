#define _CRT_SECURE_NO_WARNINGS
#include "Point3D.h"
#include <cstring>
#include <cmath>

Point3D::Point3D()
{
	x = 0.0;
	y = 0.0;
	z = 0.0;
	strcpy(Name, "...");
}

Point3D::~Point3D()
{
	if (!Name)
		delete Name;
}

double Point3D::get_x()
{
	return x;
}

double Point3D::get_y()
{
	return y;
}

double Point3D::get_z()
{
	return z;
}

char* Point3D::get_name()
{
	return Name;
}

void Point3D::set_x(double x1)
{
	x = x1;
}

void Point3D::set_y(double y1)
{
	y = y1;
}

void Point3D::set_z(double z1)
{
	z = z1;
}

void Point3D::set_name(const char* n)
{
	strcpy(Name, n);


}

double Point3D::Dist_From(Point3D D)
{
	double distance;

	distance = sqrt(pow((D.x - this->x), 2) + pow((D.y - this->y), 2) + pow((D.z - this->z), 2));

	return distance;
}

Point3D Point3D::operator+(Point3D O2)
{
	Point3D Q;
	Q.x = this->x + O2.x;
	Q.y = this->y + O2.y;
	Q.z = this->z + O2.z;
	strcpy(Q.Name, strcat(this->Name, O2.Name));

	return Q;
}

Point3D Point3D::operator+=(Point3D O2)
{

	this->x += O2.x;
	this->y += O2.y;
	this->z += O2.z;
	strcat(this->Name, O2.Name);
	return (*this);
}
//copy constructor
Point3D::Point3D(Point3D& A)
{
	this->x = A.x;
	this->y = A.y;
	this->z = A.z;
	strcpy(this->Name, A.Name);


}

bool Point3D::operator>(Point3D s)
{

	double P1 = sqrt(pow((0 - this->x), 2) + pow((0 - this->y), 2) + pow((0 - this->z), 2));
	double P2 = sqrt(pow((s.x - 0), 2) + pow((s.y - 0), 2) + pow((s.z - 0), 2));
	if (P1 > P2)
	{
		return true;
	}
	else return false;

}

bool Point3D::operator<(Point3D s)
{
	double P1 = sqrt(pow((0 - this->x), 2) + pow((0 - this->y), 2) + pow((0 - this->z), 2));
	double P2 = sqrt(pow((s.x - 0), 2) + pow((s.y - 0), 2) + pow((s.z - 0), 2));
	if (P1 < P2)
	{
		return true;
	}
	else return false;
}

bool Point3D::operator==(Point3D s)
{
	double P1 = sqrt(pow((0 - this->x), 2) + pow((0 - this->y), 2) + pow((0 - this->z), 2));
	double P2 = sqrt(pow((s.x - 0), 2) + pow((s.y - 0), 2) + pow((s.z - 0), 2));
	if (P1 == P2)
	{
		return true;
	}
	else return false;
}


Point3D operator--(Point3D& O1, int)

{
	Point3D U;
	U.x = O1.x;
	U.y = O1.y;
	U.z = O1.z;
	U.Name = O1.Name;
	O1.x--;
	O1.y--;
	O1.z--;
	return U;
}

ostream& operator<<(ostream& out, Point3D& G)
{
	out.precision(3);
	out << "Name:" << G.Name << "(" << G.x << "," << G.y << "," << G.z << ")" << endl;
	return out;
}

istream& operator>>(istream& in, Point3D& A)
{
	in >> A.Name >> A.x >> A.y >> A.z;
	return in;

}




