#include "sr.h"
#include "state.h"

state * sr::gms()
{
	if (s == nullptr)
	{
		s = new referenced();
	}
	return s;
}
sr::sr()
{
}

state * sr::s = nullptr;
sr::~sr()
{
}
