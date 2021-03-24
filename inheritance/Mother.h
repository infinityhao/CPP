#pragma once
class Mother //class to be inherited from call base class
{
public:
	int publicV = 0;
	Mother();
	void sayName();
	~Mother();
protected:
	int protectedV = 0;
private:
	int privateV = 0;
};

