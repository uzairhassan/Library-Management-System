#pragma once
#include <string>
#include "item.h"
#include "hold.h"
#include "loan.h"
class state
{
	
public:
	virtual int returnlastid(item * it) =0;
	virtual  void addhold(item * it,hold * h)=0;
	virtual  bool isissued(item * it)=0;
	virtual  bool onhold(item * it)=0;
	virtual  void printt(item * it,std::string &ans)=0;
	virtual int addloan(item * it,loan *)=0;
	virtual int returnback(item * it,int y, int m, int d)=0;
	virtual loan * returnlastloan(item * it)=0;
	virtual bool hasloan(item * it) = 0;
	state();
};

