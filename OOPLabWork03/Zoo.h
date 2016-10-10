#pragma once
#include "stdafx.h"

class Zoo : public Mammal
{
	char *size;

public:
	Zoo(void);
	void setsize(char *size);
	void getsize();
	~Zoo(void);

};