#pragma once
#include <string>
#include <vector>
#include <queue>
#include <fstream>
#include <iostream>
using namespace std;
class loan;
class hold;
class user
{ 
	std::vector<loan *> loans;
	std::queue<hold *> holds;
	std::string name;
	int id;
	std::string phonenum;
	std::string address;
public:
	static int count;
	int getid(){ return id; }
	user();
	virtual void hehe() = 0;
	std::string getname(){ return name; }
	std::string getaddress() { return address; }
	std::string getcontact() { return phonenum; }
	void addloan(loan *);
	void addhold(hold * h);
	user(std::string n);
	void print(std::string &ans);
	~user();
	int totalfine();
	void setid(int i) { id = i; }
	void setname(std:: string n);
	void setphonenum(std::string n);
	void setaddress(std::string n);
	void payfine();
	virtual int isstudent() = 0;
	virtual int isclerk() = 0;
	virtual int isadmin() = 0;
	void saveloans(ofstream & sl);
	void saveholds(ofstream & sh);
};


