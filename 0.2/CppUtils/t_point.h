#pragma once

struct t_point
{
	int x = 0;
	int y = 0;

	t_point();
	t_point(int x, int y);
	t_point(const t_point& other);
	
	t_point& operator=(const t_point& other);
	bool operator==(const t_point& other) const;

	bool at(int x, int y) const;
	void set(int x, int y);
	void move(int dx, int dy);
};
