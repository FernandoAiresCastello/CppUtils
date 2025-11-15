#include "t_point.h"

t_point::t_point() : x(0), y(0)
{
}

t_point::t_point(int x, int y) : x(x), y(y)
{
}

t_point::t_point(const t_point& other) : x(other.x), y(other.y)
{
}

t_point& t_point::operator=(const t_point& other)
{
	if (this == &other)
		return *this;

	x = other.x;
	y = other.y;

	return *this;
}

bool t_point::operator==(const t_point& other) const
{
	return x == other.x && y == other.y;
}

bool t_point::at(int x, int y) const
{
	return this->x == x && this->y == y;
}

void t_point::set(int x, int y)
{
	this->x = x;
	this->y = y;
}

void t_point::move(int dx, int dy)
{
	x += dx;
	y += dy;
}
