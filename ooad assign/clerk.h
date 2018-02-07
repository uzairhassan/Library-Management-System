#pragma once
#include "user.h"
class clerk: public user
{
public:
	clerk();
	clerk(std::string n);
	~clerk();
	virtual void hehe(){}
	virtual int isstudent() { return 0; }
	virtual int isclerk() { return 1; }
	virtual int isadmin() { return 0; }
};

