#pragma once
#include "state.h"
#include "sa.h"
#include "si.h"
#include "sh.h"
class referenced:public state 
{

public:
	int returnlastid(item * it) {
		return 0;
	}
	void addhold(item * it, hold * h) { }
	bool isissued(item * it) {
		return 0;
	}
	bool onhold(item * it) { return 0; }
	void printt(item * it, std::string &ans) { ans = ans + "Is referenced \n"; }
	int addloan(item * it, loan *) { return 6; }
	int returnback(item * it, int y, int m, int d) { return 3; }
	loan * returnlastloan(item * it)
	{
		return nullptr;
	}
	bool hasloan(item * it)
	{
		if (it->loans.size() > 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	referenced();
};

