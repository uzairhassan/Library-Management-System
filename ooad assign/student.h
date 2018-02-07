#pragma once
#include "user.h"
class student:public user
{
public:
	student();
	virtual void hehe(){}
	student(std::string);
	~student();
	virtual int isstudent() { return 1; }
	virtual int isclerk() { return 0; }
	virtual int isadmin() { return 0; }
};

