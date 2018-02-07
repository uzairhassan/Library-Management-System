#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;
class si;
class sa;
class sr;
class sh;
class hold;
class state;
class issued;
class referenced;
class ithold;
class available;
class loan;
class item
{
	int id;
	std::string title;
	std::string subject;
	std::vector<loan *> loans;
	std::queue<hold *> holds;
	friend class state;
	friend class issued;
	friend class referenced;
	friend class available;
	friend class ithold;
	state * st;
	 sa * sas;
	 si * sis;
	 sh * shs;
	 sr * srs;
public:
	void setstate(state * s);
	int returnlastid();
	static int count;
	item();
	int getid() { return id; }
	void addhold(hold * h);
	bool isissued();
	bool onhold();
	std::string gettitle(){ return title; }
	std::string getsubject() { return subject; }
	item(std::string, std::string, std::string State);
	bool comparetitle(std::string);
	bool comparesubject(std::string);
	virtual bool isbook() = 0;
	virtual bool isdvd()= 0;
	virtual void print(std::string &ans)=0;
	void printt(std::string &ans);
	int addloan(loan *);
	virtual bool compareauthor(std::string) = 0;
	virtual bool comparebooktitle(std::string)=0;
	virtual bool comparedvdtitle(std::string)=0;
	int returnback(int y,int m,int d);
	virtual void printfew()=0;
	~item();
	void printless();
	//void placeonhold(user * u);
	loan * returnlastloan();
	bool hasloan();
	void remove();
	virtual void removebook()=0;
	virtual void removedvd()=0;
	virtual void editbook() = 0;
	virtual void editdvd() = 0;
	void settitle(std::string t);
	void setsubject(std::string t);
	virtual void setauthor(std::string a) = 0;
	virtual void setpages(int p) = 0;
	virtual int getpages() = 0;
	virtual void setsize(float a) = 0;
	virtual std::string getauthor() = 0;
	virtual float getsize() = 0;
};

