#pragma once
#include <string>
class user;
class item;
class loan
{
	class date
	{
	public:
		int month;
		int year;
		int day;
		date(){ month = year = day = 0; }
		date(int y, int m, int d)
		{
			month = m; year = y; day = d;
		}
		int datediff(date d)
		{
			return abs((d.year * 365 + d.month * 30 + d.day) - (year * 365 + month * 30 + day));
		}
		~date(){}
	};
	date issuedate;
	date retdate;
	user * u;
	item * i;
	user * hold;
	int fine;
public:
	loan();
	void getissuedate(int &y,int &m,int &d)
	{
		y = issuedate.year;
		m = issuedate.month;
		d = issuedate.day;
	}
	void getretdate(int &y, int &m, int &d)
	{
		y = retdate.year;
		m = retdate.month;
		d = retdate.day;
	}
	int getid();
	int getitemid();
	void print(std::string &ans);
	bool issued();
	bool ishold();
	void sethold(user *);
	loan(int y,int m,int d,user * u,item * i);
	void setreturn(int y, int m, int d);
	int getfine();
	void setfine(int g) { fine = g; }
	~loan();
};

