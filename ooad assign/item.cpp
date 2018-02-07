#include "item.h"
#include "loan.h"
#include "hold.h"
#include "state.h"
#include "issued.h"
#include "referenced.h"
#include "ithold.h"
#include "available.h"
#include "sa.h"
#include "si.h"
#include "sh.h"
#include "sr.h"
int item::count = 0;
void item::setstate(state * s)
{
	st = s;
}
item::item()
{
	count++;
	id = count;
	//st = new issued();
	st = sas->gms();
}

item::item(std::string t, std::string s, std::string State)
{
//	st = new issued();
	title = t;
	subject = s;
	count++;
	id = count;
	if (State == "a")
	{
		st = sas->gms();
	}
	else
	{
		st = srs->gms();
	}
}

int item::returnlastid()
{
	return(st->returnlastid(this));
}

item::~item()
{
}
void item::addhold(hold * h)
{
	st->addhold(this,h);
}
bool item:: comparetitle(std::string t)
{
	return(t == title);
}
bool item::comparesubject(std::string t)
{
	return(t == subject);
}

bool item::isissued()
{
	return(st->isissued(this));
}

bool item::onhold()
{
	return(st->onhold(this));
}

int item::addloan(loan * l)
{
	return(st->addloan(this, l));
}

void item::printt(std::string &ans)
{
	ans = ans + "ID is " + to_string(id)+"\n";
	cout << "Title " << title << " Subject " << subject;
	ans = ans + title + " " + subject + "\n";
	st->printt(this, ans);
}

int item::returnback(int y, int m, int d)
{
	return(st->returnback(this,y,m,d));
}

void item::printless()
{
	cout << "Title " << title << " Subject " << subject<<endl;
}



//void item::placeonhold(user * u)
//{
//	if (isissued() == 1)
//	{
//		cout << " IS ISSUED ";
//		if (onhold() == 1)
//		{
//			cout << "AND ON HOLD \n";
//		}
//		else
//		{
//			cout << "BUT NOT ON HOLD ";
//			loans[loans.size() - 1]->sethold(u);
//		}
//	}
//}

loan * item::returnlastloan()
{
	return(st->returnlastloan(this));
}

bool item::hasloan()
{
	return(st->hasloan(this));
}

void item::remove()
{
	title.clear(); subject.clear();
}

void item::settitle(std::string t)
{
	title = t;
}

void item::setsubject(std::string t)
{
	subject = t;
}
