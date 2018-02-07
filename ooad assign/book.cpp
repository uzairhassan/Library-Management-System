#include "book.h"
#include "loan.h"

book::book()
{
}

book::book(std::string t, std::string s, std::string a, int n, std::string State) :item(t,s,State)
{
	author = a;
	pages = n;
}

bool book::compareauthor(std::string a)
{
	return(author == a);
}

book::~book()
{
}

void book::print(std::string &ans)
{
    item::printt(ans);
	cout << "Author is " << author << " Pages are " << pages<<endl;
    ans=ans+"Author is "+author+" Pages are " + to_string(pages) + "\n";

}

bool book::comparebooktitle(std::string t)
{
	return(item::comparetitle(t));
}

void book::printfew()
{
	item::printless();
	cout << "Author is " << author << " Pages are " << pages << endl;
}

void book::removebook()
{
	if (hasloan() == 0)
	{
		item::remove();
		author.clear();
		pages = 0;
	}
}

void book:: editbook()
{
	cout << "Enter 1 for title 2 for subject 3 for author 4 for pages\n";
	int ch; cin >> ch;
	if (ch == 1)
	{
		cout << "Enter title\n";
		std::string t;
		cin >> t;
		item::settitle(t);
	}
	else if (ch == 2)
	{
		cout << "Enter subject\n";
		std::string t;
		cin >> t;
		item::setsubject(t);
	}
	else if (ch == 3)
	{
		cout << "Enter suthor\n";
		std::string t; cin >> t;
		author = t;
	}
	else if (ch == 4)
	{
		int size;
		cout << "Enter size\n"; cin >> size;
		this->pages = size;
	}
}


