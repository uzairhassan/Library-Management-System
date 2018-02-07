#pragma once
#include "item.h"
#include <vector>
class dvd:public item
{
	float size;
public:
	dvd();
	dvd(std::string, std::string, float, std::string State);
	bool isbook(){ return 0; }
	bool isdvd(){ return 1; }
	bool compareauthor(std::string){ return 0; }
	~dvd();
	bool comparebooktitle(std::string){ return 0; }
	bool comparedvdtitle(std::string);
	void print(std::string &ans);
	void printfew();
	virtual void removebook(){}
	virtual void removedvd();
	virtual void editbook(){}
	virtual void editdvd();
	virtual void setauthor(std::string a)
	{
	}
	virtual void setpages(int a) { }
	virtual void setsize(float a) { size = a; }
	float getsize()
	{
		return size;
	}
	std::string getauthor() { return NULL; }
	virtual int getpages() { return 0; }
};

