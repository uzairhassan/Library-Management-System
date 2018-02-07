#pragma once

#include "state.h"
#include "sa.h"
#include "si.h"
#include "sh.h"
 class issued: public state 
{
	 
public:
	bool hasloan(item * it)
	{
		if (it->loans.size() > 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	  int returnlastid(item * it) {
		  if (it->loans.size() > 0)
		  {
			  return(it->loans[it->loans.size() - 1]->getid());
		  }
		  else
		  {
			  return -1;
		  }
	  }
	  void addhold(item * it, hold * h)
	  {
		  it->holds.push(h);
		  it->st=it->shs->gms();
	  }
	  bool isissued(item * it) {
		if (it->loans.size() > 0)
		{
			return(it->loans[it->loans.size() - 1]->issued());
		}
		return 0;
	}
	  bool onhold(item * it) { return 0; }
	  void printt(item * it, std::string &ans) { ans = ans + "Is issued\n"; }
	  int addloan(item * it, loan *) { return 3; }
	  int returnback(item * it, int y, int m, int d)
	  {
		  it->loans[it->loans.size() - 1]->setreturn(y, m, d);
		  it->st = it->sas->gms();
		  return 1;
	  }
	issued();
	 loan * returnlastloan(item * it) 
	 {
		 if (!it->onhold() && it->loans.size()>0)
		 {
			 return(it->loans[it->loans.size() - 1]);
		 }
		 else
		 {
			 return nullptr;
		 }
	 }
};

