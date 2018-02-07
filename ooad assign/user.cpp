#include "user.h"
#include "loan.h"
#include <iostream>
#include "hold.h"
using namespace std;
void user::saveloans(ofstream & sl)
{
	for (int i = 0;i < loans.size();i++)
	{
		int y, m, d;
		loans[i]->getissuedate(y, m, d);
		int yr, mr, dr;
		loans[i]->getretdate(yr, mr, dr);
		sl << loans[i]->getid() << " " << loans[i]->getitemid() <<" "<<y<<" "<<m<<" "<<d<< endl;
	}
}
void user::saveholds(ofstream & sh)
{
		std::queue < hold * > temp;
		int size=holds.size();
		for (int i = 0;i < size;i++)
		{
			temp.push(holds.front());
			holds.pop();
		}
		for (int i = 0;i < size;i++)
		{
			hold * d = temp.front();
			sh << d->getuid() << " " << d->getiid() << endl;
			holds.push(d);
			temp.pop();
		}
}
void user::addhold(hold * h)
{
	holds.push(h);
}
void user::payfine() {
	for (int i = 0;i < loans.size();i++)
	{
		loans[i]->setfine(0);
	}
}
user::user(std::string n)
{
	name = n;
	count++;
	id = count;
	phonenum = "";
	address = "";
}
int user::count = 0;
user::user()
{
	count++;
	id = count;
	phonenum="";
	address="";
	name = "";
}

void user::addloan(loan * l)
{
	loans.push_back(l);
}

user::~user()
{
}

void user::print(std::string &ans)
{
	cout << "Name is " << name<<endl;
	ans = ans + "ID is " + to_string(id) + "\n";
	ans=ans+"Name is "+name+"\n";
	ans = ans + "Address is " + address + "\n";
	ans = ans + "Conatct # " + phonenum + "\n";
	for (int i = 0; i < loans.size(); i++)
	{
		loans[i]->print(ans);
	}
}

int user::totalfine()
{
	int sum = 0;
	for (int i = 0; i < loans.size(); i++)
	{
		sum+=loans[i]->getfine();
	}
	return sum;
}

void user::setname(std::string n)
{
	name = n;
}

void user::setphonenum(std::string n)
{
	phonenum = n;
}

void user::setaddress(std::string n)
{
	address = n;
}