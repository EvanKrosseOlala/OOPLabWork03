#pragma once
#include "stdafx.h"

class Circus : protected Zoo
{
public:
	int count;
	Circus(void);
	~Circus(void);
	void setcount(int count);
	void getcount();
protected:
	std::string features;
};