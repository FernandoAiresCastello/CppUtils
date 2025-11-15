#include "t_rect.h"

t_rect::t_rect() : x(0), y(0), w(0), h(0)
{
}

t_rect::t_rect(int x, int y, int w, int h) : x(x), y(y), w(w), h(h)
{
}

t_rect::t_rect(const t_rect& other) : x(other.x), y(other.y), w(other.w), h(other.h)
{
}

t_rect& t_rect::operator=(const t_rect& other)
{
	if (this == &other)
		return *this;

	x = other.x;
	y = other.y;
	w = other.w;
	h = other.h;

	return *this;
}

bool t_rect::operator==(const t_rect& other) const
{
	return x == other.x && y == other.y && w == other.w && h == other.h;
}
