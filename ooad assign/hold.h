#pragma once
class user;
class item;
class hold
{
	user * u;
	item * i;
public:
	hold(user * u,item * i);
	int retuserid();
	int getuid();
	int getiid();
};

