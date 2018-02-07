#include "sa.h"
#include "available.h"
state * sa::gms()
{
	if (s == nullptr)
	{
		s = new available();
	}
	return s;
}
sa::sa()
{
}


sa::~sa()
{
}

state * sa::s = nullptr;