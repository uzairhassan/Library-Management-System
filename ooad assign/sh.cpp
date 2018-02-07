#include "sh.h"
#include "ithold.h"


sh::sh()
{
}
state * sh::s = nullptr;

sh::~sh()
{
}

state * sh::gms()
{
	if (s == nullptr)
	{
		s = new ithold();
	}
	return s;
}