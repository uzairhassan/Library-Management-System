#pragma once
#include "user.h"
class admin:public user
{
public:
	admin();
	admin(std::string);
	~admin();
	virtual void hehe(){}
	virtual int isstudent() { return 0; }
	virtual int isclerk() { return 0; }
	virtual int isadmin() { return 1; }
};

