#pragma once
#include <vector>
#include <fstream>
#include <iostream>
using namespace std;
class user;
class item;
class lms
{
	std::vector <user *> users;
	std::vector <item *> items;
public:
	lms()
	{
		
	}
	item * searchbyid(int id);
	void adduser(user *);
	void additem(item  *);
	user * returnuser(int id);
	item * returnbook(std::string);
	item * returndvd(std::string);
	void addloan(user * u, item * i, int y, int m, int d);
    std::vector<item *> searchbytitle(std::string,std::string &ans);
	std::vector<item *> searchbysubject(std::string,std::string &ans);
	std::vector<item *> searchbyauthor(std::string,std::string &ans);
	void printborrower(int id,std::string &ans);
	void sethold(user * u,item * i);
	int removebook(std::string t);
	int removedvd(std::string t);
	void printfine();
	~lms();
	void saveusers(ofstream & su);
	void saveitems(ofstream  &si);
	void saveloans(ofstream  &sl);
	void saveholds(ofstream  &sl);
};

