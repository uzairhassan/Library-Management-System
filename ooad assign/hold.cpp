#include "hold.h"
#include "user.h"
#include "item.h"
hold::hold(user * u, item * i)
{
	this->u = u;
	this->i = i;
	u->addhold(this);
	i->addhold(this);
}
int hold::retuserid()
{
	return(u->getid());
}
int hold::getuid()
{
	return(u->getid());
}
int hold::getiid()
{
	return(i->getid());
}
