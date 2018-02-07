#pragma once
#include "slms.h"
#include "book.h"
#include "admin.h"
#include "loan.h"
#include "user.h"
#include "clerk.h"
#include "item.h"
#include "dvd.h"
#include "student.h"
#include "lms.h"
#include <string>
#include <iostream>
#include <ctime>
#include "hold.h"
#include <fstream>
using namespace std;
class computation
{
	slms sys;
public:
	computation();
	string search(string t, int choice)
	{
		lms * l = sys.getmysystem();
		string ans;
		if (choice == 0)
		{
			l->searchbytitle(t, ans);
		}
		else if (choice == 1)
		{
			l->searchbysubject(t, ans);
		}
		if (choice == 2)
		{
			l->searchbyauthor(t, ans);
		}
		return ans;
	}
	string retuser(int id)
	{
		string ans;
		lms * l = sys.getmysystem();
		l->printborrower(id, ans);
		return ans;
	}
	int addloan(user * tu, item * ti)
	{
		time_t t = time(0);
		struct tm * now = localtime(&t);
		int y = now->tm_year;
		y = y + 1900;
		int m = now->tm_mon;
		int d = now->tm_mday;
		loan * l = new loan(y, m, d, tu, ti);
		int res=(ti->addloan(l));
		if(res==1)
		{
			tu->addloan(l);
			return res;
		}
		else
		{
			return res;
		}
		
	}
	int issue(int choice, int id, std::string t)
	{
		lms * l = sys.getmysystem();
		user * tu = l->returnuser(id);
		if (tu != nullptr)
		{
			if (choice == 0)
			{
				item * ti = l->returnbook(t);
				if (ti != nullptr)
				{
					return(addloan(tu, ti));
				}
				else
				{
					return 2;
				}
			}
			else
			{
				item * ti = l->returndvd(t);
				if (ti != nullptr)
				{
					return(addloan(tu, ti));
				}
				else
				{
					return 2;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	int ret(int choice, int id, std::string t)
	{
		time_t w = time(0);
		struct tm * now = localtime(&w);
		int y = now->tm_year;
		y = y + 1900;
		int m = now->tm_mon;
		int d = now->tm_mday;
		lms * l = sys.getmysystem();
		user * tu = l->returnuser(id);
		if (tu != nullptr)
		{
			if (choice == 0)
			{
				item * ti = l->returnbook(t);
				if (ti != nullptr)
				{
					return(ti->returnback(y, m, d));
				}
				else
				{
					return 2;
				}
			}
			else
			{
				item * ti = l->returndvd(t);
				if (ti != nullptr)
				{
					return(ti->returnback(y, m, d));
				}
				else
				{
					return 2;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	void payfine(int id)
	{
		lms * l = sys.getmysystem();
		user * u = l->returnuser(id);
		u->payfine();
	}
	void addborrower(std::string n, std::string a, std::string c)
	{
		lms * l = sys.getmysystem();
		user * u = new student(n);
		u->setaddress(a);
		u->setphonenum(c);
		l->adduser(u);
	}
	void retuserdata(int id, std::string &n, std::string &a, std::string &c)
	{
		lms * l = sys.getmysystem();
		user * u = l->returnuser(id);
		n = u->getname();
		a = u->getaddress();
		c = u->getcontact();
	}
	void setuserdata(int id, std::string n, std::string a, std::string c)
	{
		lms * l = sys.getmysystem();
		user * u = l->returnuser(id);
		u->setname(n);u->setaddress(a);u->setphonenum(c);
	}
	void addbook(std::string t, std::string s, std::string a, int p,std::string state)
	{
		item * it = new book(t,s,a,p,state);
		lms * l = sys.getmysystem();
		l->additem(it);
	}
	void adddvd(std::string t, std::string s, float ss, std::string state)
	{
		item * it = new dvd(t, s, ss,state);
		lms * l = sys.getmysystem();
		l->additem(it);
	}
	void retbook(std::string search,std::string &t, std::string &s, std::string &a, int &p)
	{
		lms* l = sys.getmysystem();
		item * it=l->returnbook(search);
		t=it->gettitle();
		s = it->getsubject();
		a = it->getauthor();
		p = it->getpages();
	}
	void retdvd(std::string search, std::string &t, std::string &s, float &p)
	{
		lms* l = sys.getmysystem();
		item * it = l->returndvd(search);
		t = it->gettitle();
		s = it->getsubject();
		p = it->getsize();
	}
	void setdvd(std::string search,std::string &t, std::string &s, float &p)
	{
		lms* l = sys.getmysystem();
		item * it = l->returndvd(search);
		it->settitle(t);
		it->setsubject(s);
		it->setsize(p);
	}
	void setbook(std::string search,::string &t, std::string &s, std::string &a, int &p)
	{
		lms* l = sys.getmysystem();
		item * it = l->returnbook(search);
		it->settitle(t);it->setpages(p);it->setauthor(a);it->setsubject(s);
	}
	int delbook(std::string t)
	{
		lms * l = sys.getmysystem();
		return(l->removebook(t));
	}
	int deldvd(std::string t)
	{
		lms * l = sys.getmysystem();
		return(l->removedvd(t));
	}
	int holdd(int id, int id2)
	{
		lms * l = sys.getmysystem();
		item * it = l->searchbyid(id);
		user * u = l->returnuser(id2);
		if (u != nullptr)
		{
			if (it != nullptr)
			{
				int g=it->returnlastid();
				if (g != u->getid())
				{
					if (!it->isissued())
					{
						return 0;
					}
					else
					{
						hold * hw = new hold(u, it);
						return 1;
					}
				}
				else
				{
					return 4;
				}
			}
			else
			{
				return 2;
			}
		}
		else
		{
			return 3;
		}
	}
	void save()
	{
		ofstream sl,sh,su,si;
		sl.open("saveloans.txt");
		sh.open("saveholds.txt");
		su.open("saveusers.txt");
		si.open("saveitems.txt");
		lms * l = sys.getmysystem();
		l->saveusers(su);
		l->saveitems(si);
		l->saveloans(sl);
		l->saveholds(sh);
	}
	void load()
	{
		/*lms * l = sys.getmysystem();
		ifstream sl, sh, su, si;
		sl.open("saveloans.txt");
		sh.open("saveholds.txt");
		su.open("saveusers.txt");
		si.open("saveitems.txt");
		std::vector<std::string> commands;
		while (!su.eof())
		{
			std::string pick;
			std::getline(su, pick);
			commands.push_back(pick);
		}
		commands.pop_back();
		if (commands.size() > 0)
		{
			for (int i = 0;i < commands.size();i++)
			{
				char type = commands[i][0];
				std::string id;int index;
				for (int j = 1;commands[i][j] != ' ' && j < commands[i].size();j++)
				{
					id.push_back(commands[i][j]);
					index = j;
				}
				index = index + 2;
				int idd = stoi(id);std::string name;
				int index2;
				for (int j = index;commands[i][j] != ' '&& j < commands[i].size();j++)
				{
					name.push_back(commands[i][j]);
					index2 = j;
				}
				index2 += 2;
				std::string address;
				int index3;
				for (int j = index2;commands[i][j] != ' '&& j < commands[i].size();j++)
				{
					address.push_back(commands[i][j]);
					index3 = j;
				}
				std::string contact;
				index3 += 2;
				for (int j = index3;commands[i][j] != ' '&& j < commands[i].size();j++)
				{
					contact.push_back(commands[i][j]);
				}
				if (type == 's')
				{
					user * u = new student(name);
					u->setaddress(address);
					u->setphonenum(contact);
					u->setid(idd);
					l->adduser(u);
				}
				else if (type == 'c')
				{
					user * u = new clerk(name);
					u->setaddress(address);
					u->setphonenum(contact);
					u->setid(idd);
					l->adduser(u);
				}
				else if (type == 'a')
				{
					user * u = new admin(name);
					u->setaddress(address);
					u->setphonenum(contact);
					u->setid(idd);
					l->adduser(u);
				}
			}
		}
		commands.clear();
		while (!si.eof())
		{
			std::string pick;
			std::getline(si, pick);
			commands.push_back(pick);
		}
		commands.pop_back();
		if (commands.size() > 0)
		{
			for (int i = 0;i < commands.size();i++)
			{
				char type = commands[i][0];
				std::string id;int index;
				for (int j = 1;commands[i][j] != ' ' && j < commands[i].size();j++)
				{
					id.push_back(commands[i][j]);
					index = j;
				}
				index = index + 2;
				int idd = stoi(id);std::string name;
				int index2;
				for (int j = index;commands[i][j] != ' '&& j < commands[i].size();j++)
				{
					name.push_back(commands[i][j]);
					index2 = j;
				}
				index2 += 2;
				std::string address;
				int index3;
				for (int j = index2;commands[i][j] != ' '&& j < commands[i].size();j++)
				{
					address.push_back(commands[i][j]);
					index3 = j;
				}
				index3 += 2;
				if (type == 'd')
				{
					std::string contact;
					for (int j = index3;commands[i][j] != ' '&& j < commands[i].size();j++)
					{
						contact.push_back(commands[i][j]);
					}
					float size = stof(contact);
					item * it = new dvd(name, address, size);
					l->additem(it);
				}
				else if (type == 'b')
				{
					int index4;
					std::string contact;
					for (int j = index3;commands[i][j] != ' '&& j < commands[i].size();j++)
					{
						contact.push_back(commands[i][j]);
						index4 = j;
					}
					index4 += 2;
					std::string pag;
					for (int j = index4;commands[i][j] != ' '&& j < commands[i].size();j++)
					{
						pag.push_back(commands[i][j]);
					}
					int pages = stoi(pag);
					item * it = new book(name, address, contact, pages);
				}
			}
		}
		commands.clear();
		while (!sh.eof())
		{
			std::string pick;
			std::getline(sh, pick);
			commands.push_back(pick);
		}
		for (int i = 0;i < commands.size();i++)
		{
			std::string userid;int index0;std::string itemid;
			for (int j = 0;commands[i][j] != ' '&& j < commands[i].size();j++)
			{
				userid.push_back(commands[i][j]);
				index0 = j;
			}
			index0 += 2;
			for (int j = index0;commands[i][j] != ' '&& j < commands[i].size();j++)
			{
				itemid.push_back(commands[i][j]);
				
			}
			int uid=stoi(userid);
			int itid=stoi(itemid);
			user * uu=l->returnuser(uid);
			item * itt=l->searchbyid(itid);
			hold * h = new hold(uu, itt);
		}



		commands.clear();
		while (!sl.eof())
		{
			std::string pick;
			std::getline(sl, pick);
			commands.push_back(pick);
		}
		for (int i = 0;i < commands.size();i++)
		{
			std::string userid;int index0;std::string itemid;
			for (int j = 0;commands[i][j] != ' '&& j < commands[i].size();j++)
			{
				userid.push_back(commands[i][j]);
				index0 = j;
			}
			index0 += 2;int index01;
			for (int j = index0;commands[i][j] != ' '&& j < commands[i].size();j++)
			{
				itemid.push_back(commands[i][j]);
				index01 = j;
			}
			index01 += 2;std::string iy, im, id, ry, rm, rd;int index02, index03, index04, index05, index06;
			for (int j = index01;commands[i][j] != ' '&& j < commands[i].size();j++)
			{
				iy.push_back(commands[i][j]);
				index02 = j;
			}
			index02 += 2;
			for (int j = index02;commands[i][j] != ' '&& j < commands[i].size();j++)
			{
				im.push_back(commands[i][j]);
				index03 = j;
			}
			index03 += 2;
			for (int j = index03;commands[i][j] != ' '&& j < commands[i].size();j++)
			{
				id.push_back(commands[i][j]);
				index04 = j;
			}
			index04 += 2;
			for (int j = index04;commands[i][j] != ' '&& j < commands[i].size();j++)
			{
				ry.push_back(commands[i][j]);
				index05 = j;
			}
			index05 += 2;
			for (int j = index05;commands[i][j] != ' '&& j < commands[i].size();j++)
			{
				rm.push_back(commands[i][j]);
				index06 = j;
			}
			index06 += 2;
			for (int j = index06;commands[i][j] != ' '&& j < commands[i].size();j++)
			{
				rd.push_back(commands[i][j]);
				index06 = j;
			}
			int idy, idm, idd, rdy, rdm, rdd;
			idy = stoi(iy);
			idm = stoi(im);
			idd = stoi(id);
			bool cn = 1;
			if (ry.size() > 0 && rm.size() > 0 && rd.size() > 0)
			{
				rdy = stoi(ry);
				rdy = stoi(rm);
				rdy = stoi(rd);
				cn = 0;
			}
			int uid = stoi(userid);
			int itid = stoi(itemid);
			user * uu = l->returnuser(uid);
			item * itt = l->searchbyid(itid);
			loan * h = new loan(idy,idm,idd,uu, itt);
			if (cn == 1)
			{
				h->setreturn(rdy,rdm, rdd);
			}
		}
		*/


	}
};

