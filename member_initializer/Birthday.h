#pragma once
class Birthday
{
public:
	Birthday(int m, int d, int y);
	~Birthday();
	void printDate();
private:
	int month, day, year;
};

