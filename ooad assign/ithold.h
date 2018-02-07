#pragma once
#include "state.h"
#include "sa.h"
#include "si.h"
#include "sh.h"
 class ithold:public state
{
public:
	ithold();
	int returnlastid(item * it) {
		if (it->loans.size() > 0)
		{
			return(it->loans[it->loans.size() - 1]->getid());
		}
		else
		{
			return -1;
		}
	}
	void addhold(item * it, hold * h) { it->holds.push(h); }
	bool isissued(item * it) {
		return 1;
	}
	bool onhold(item * it) { return 1; }
	void printt(item * it, std::string &ans) { ans = ans + "Is on hold\n"; }
	int addloan(item * it, loan *) { return 4; }
	int returnback(item * it, int y, int m, int d) { return 3; }
	loan * returnlastloan(item * it)
	{
		if (!it->onhold() && it->loans.size()>0)
		{
			return(it->loans[it->loans.size() - 1]);
		}
		else
		{
			return nullptr;
		}
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
};

