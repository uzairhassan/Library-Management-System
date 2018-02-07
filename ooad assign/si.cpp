#include "si.h"
#include "state.h"
#include "issued.h"
state * si::gms()
{
	if (s == nullptr)
	{
		s = new issued();
	}
	return s;
}
si::si()
{
}


si::~si()
{
}
state * si::s = nullptr;