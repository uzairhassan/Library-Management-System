#pragma once
#include "item.h"
#include <vector>
class book :public item 
{
	std::string author;
	int pages;
public:
	book();
	book(std::string, std::string, std::string, int, std::string state);
	bool isbook(){ return 1; }
	bool isdvd(){ return 0; }
	bool compareauthor(std::string);
	bool comparebooktitle(std::string);
	void print(std::string &ans);
	bool comparedvdtitle(std::string){ return 0; }
	~book();
	void printfew();
	virtual void removebook();
	virtual void removedvd(){}
	virtual void editbook();
	virtual void editdvd(){}
	virtual void setauthor(std::string a)
	{
		author = a;
	}
	virtual void setpages(int a) { pages = a; }
	virtual void setsize(float a){}
	std::string getauthor()
	{
		return author;
	}
	float getsize() { return 0; }
	virtual int getpages() { return pages; }
};

