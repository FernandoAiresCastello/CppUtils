#pragma once
#include "t_point.h"

struct t_rect
{
	int x = 0;
	int y = 0;
	int w = 0;
	int h = 0;

	t_rect();
	t_rect(int x, int y, int w, int h);
	t_rect(const t_rect& other);

	t_rect& operator=(const t_rect& other);
	bool operator==(const t_rect& other) const;
};
