#include "lms.h"
#include "item.h"
#include "user.h"
#include "loan.h"
void lms::saveusers(ofstream & su)
{
	for (int i = 0;i < users.size();i++)
	{
		if (users[i]->isstudent())
		{
			su << "s" << users[i]->getid() << " " << users[i]->getname() << " " << users[i]->getaddress() << " " << users[i]->getcontact() << endl;
		}
		else if (users[i]->isclerk())
		{
			su << "c" << users[i]->getid() << " " << users[i]->getname() << " " << users[i]->getaddress() << " " << users[i]->getcontact() << endl;
		}
		else if (users[i]->isadmin())
		{
			su << "a" << users[i]->getid() << " " << users[i]->getname() << " " << users[i]->getaddress() << " " << users[i]->getcontact() << endl;
		}
	}
}
void lms::saveitems(ofstream  &si)
{
	for (int i = 0;i < items.size();i++)
	{
		if (items[i]->isbook())
		{
			si << "b" << items[i]->getid() << " " << items[i]->gettitle() << " " << items[i]->getsubject() << " " << items[i]->getauthor() << " " << items[i]->getpages() << endl;
		}
		else if (items[i]->isdvd())
		{
			si << "d" << items[i]->getid() << " " << items[i]->gettitle() << " " << items[i]->getsubject() << " " << items[i]->getsize() << endl;
		}
	}
}
void lms::saveholds(ofstream  &sl)
{
	for (int i = 0;i < users.size();i++)
	{
		users[i]->saveholds(sl);
	}
}
void lms::saveloans(ofstream & sl)
{
	for (int i = 0;i < users.size();i++)
	{
		users[i]->saveloans(sl);
	}
}
void lms::addloan(user * u, item * i,int y,int m,int d)
{
	loan * l = new loan (y,m,d,u, i);
	u->addloan(l);
	i->addloan(l);
}

void lms::adduser(user * u)
{
	users.push_back(u);
}

void lms::additem(item  * i)
{
	items.push_back(i);
}

std::vector<item *> lms::searchbytitle(std::string t,std::string &ans)
{
	std::vector<item *> res;
	for (int i = 0; i < items.size(); i++)
	{
		if (items[i]->comparetitle(t) == 1)
		{
			res.push_back(items[i]);
		}
	}
	for (int i = 0; i < res.size(); i++)
	{
            res[i]->print(ans);
	}
	return res;
}

item * lms::searchbyid(int id)
{
	for (int i = 0;i < items.size();i++)
	{
		if (id == items[i]->getid())
		{
			return items[i];
		}
	}
	return nullptr;
}

std::vector<item *> lms::searchbysubject(std::string t,std::string &ans)
{
	std::vector<item *> res;
	for (int i = 0; i < items.size(); i++)
	{
		if (items[i]->comparesubject(t) == 1)
		{
			res.push_back(items[i]);
		}
	}
	for (int i = 0; i < res.size(); i++)
	{
		res[i]->print(ans);
	}
	return res;
}

std::vector<item *> lms::searchbyauthor(std::string a, std::string &ans)
{
	std::vector<item *> res;
	for (int i = 0; i < items.size(); i++)
	{
		if (items[i]->isbook() == 1)
		{
			if (items[i]->compareauthor(a) == 1)
			{
				res.push_back(items[i]);
			}
		}
	}
	for (int i = 0; i < res.size(); i++)
	{
    	res[i]->print(ans);
	}
	return res;
}
lms::~lms()
{
}

user * lms::returnuser(int id)
{
	for (int i = 0; i < users.size(); i++)
	{
		if (users[i]->getid() == id)
		{
			return users[i];
				break;
		}
	}
	return nullptr;
}

item * lms::returnbook(std::string t)
{
	for (int i = 0; i < items.size(); i++)
	{
		if (items[i]->comparebooktitle(t) == 1)
		{
			return items[i]; break;
		}
	}
	return nullptr;
}

item * lms::returndvd(std::string t)
{
	for (int i = 0; i < items.size(); i++)
	{
		if (items[i]->comparedvdtitle(t) == 1)
		{
			return items[i]; break;
		}
	}
	return nullptr;
}

void lms::printborrower(int id,std::string &ans)
{
	bool ch = 0;
	for (int i = 0; i < users.size(); i++)
	{
		if (id == users[i]->getid())
		{
			users[i]->print(ans); ch = 1;
			break;
		}
	}
	if (ch == 0)
	{
		cout << "Borrower does not exist\n";
		ans = ans + "Borrower does not exist\n";
	}
}

void lms::sethold(user * u, item * i)
{
	loan * temp=i->returnlastloan();
	if (temp == nullptr)
	{
		cout << "ON HOLD\n";
	}
	else
	{
		temp->sethold(u);
	}
}

int lms::removedvd(std::string t)
{
	for (int i = 0; i < items.size(); i++)
	{
		if (items[i]->comparedvdtitle(t) == 1)
		{
			if (items[i]->hasloan() == 0)
			{
				swap(items[i], items[items.size() - 1]);
				items[items.size() - 1]->removedvd();
				items.pop_back();
				return 1;
			}
			else
			{
				cout << "Item has loans can't delete\n";
				return 0;
			}
		}
	}
	return 2;
}

int lms::removebook(std::string t)
{
	for (int i = 0; i < items.size(); i++)
	{
		if (items[i]->comparebooktitle(t) == 1)
		{
			if (items[i]->hasloan() == 0)
			{
				swap(items[i], items[items.size() - 1]);
				items[items.size() - 1]->removebook();
				items.pop_back();
				return 1;
			}
			else
			{
				cout << "Item has loans can't delete\n";
				return 0;
			}
		}
	}
	return 2;
}

void lms::printfine()
{
	for (int i = 0; i < users.size(); i++)
	{
		cout<<users[i]->getname()<<" "<< users[i]->totalfine()<<endl;
	}
}
