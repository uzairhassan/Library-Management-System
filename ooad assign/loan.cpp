#include "loan.h"
#include "user.h"
#include "item.h"
#include <iostream>
using namespace std;

loan::loan()
{
	hold = nullptr; fine = 0;
}
int loan::getitemid()
{
	return(i->getid());
}
int loan::getid()
{
	return(u->getid());
}
loan::loan(int y, int m, int d, user * u, item * i)
{
	issuedate.year = y;
	issuedate.month = m;
	issuedate.day = d;
	this->u = u;
	this->i = i;
	retdate.year = 0;
	retdate.month = 0;
	retdate.day = 0;
	hold = nullptr;
	fine = 0;
}

void loan::sethold(user * h)
{
	hold = h;
}

bool loan::issued()
{
	if (retdate.year == 0 && retdate.month == 0 && retdate.day == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

bool loan::ishold()
{
	if (hold == nullptr)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

loan::~loan()
{
}

void loan::print(std::string &ans)
{
	i->printt(ans);
	cout << "issue date " << issuedate.year << "-" << issuedate.month << "-" << issuedate.day << endl;
	ans = ans + "issue date "+to_string(issuedate.year)+"-"+ to_string(issuedate.month)+"-"+ to_string(issuedate.day)+"\n";
	if (retdate.year != 0 && retdate.month != 0 && retdate.day != 0)
	{
		cout << "Return date " << retdate.year << "-" << retdate.month << "-" << retdate.day << endl;
		ans = ans + "Return date " + to_string(retdate.year) + "-" + to_string(retdate.month) + "-" + to_string(retdate.day)+"\n";
	}
	cout << "Fine " << fine<<endl;
	ans = ans + "Fine " + to_string(fine) + "\n";
}

void loan::setreturn(int y, int m, int d)
{
	retdate.year = y;
	retdate.month = m;
	retdate.day = d;
	if (retdate.datediff(issuedate) > 15)
	{
		fine = (retdate.datediff(issuedate) - 15) * 10;
	}
	else
	{
		fine = 0;
	}
}

int loan::getfine()
{
	return fine;
}
