#include "dvd.h"
#include "loan.h"

dvd::dvd()
{
}

dvd::dvd(std::string t, std::string s, float n, std::string State):item(t, s,State)
{
	size = n;
}

dvd::~dvd()
{
}

void dvd::print(std::string &ans)
{
	item::printt(ans);
	cout << "Size is " << size<<endl;
	ans = ans + "Size is " + to_string(size)+"\n";
}
bool dvd::comparedvdtitle(std::string t)
{
	return(item::comparetitle(t));
}

void dvd::printfew()
{
	item::printless();
	cout << "Size is " << size << endl;
}

void dvd::removedvd()
{
	if (hasloan() == 0)
	{
		item::remove();
		size = 0;
	}
}

void dvd::editdvd()
{
	cout << "Enter 1 for title 2 for subject 3 for size\n";
	int ch; cin >> ch;
	if (ch == 1)
	{
		cout << "Enter title\n";
		std::string t; cin >> t;
		item::settitle(t);
	}
	else if (ch == 2)
	{
		cout << "Enter subject\n";
		std::string t; cin >> t;
		item::setsubject(t);
	}
	else if (ch == 3)
	{
        float size;
		cout << "Enter size\n";
		cin >> size;
		this->size = size;
	}
}


