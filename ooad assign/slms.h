#ifndef SLMS_H
#define SLMS_H
#include "lms.h"
#include "book.h"
#include "dvd.h"
#include "student.h"
#include <string>
class slms
{
    static lms * mysystem;
public:
    slms(){}
	lms * getmysystem()
	{
		if (mysystem == nullptr)
		{
			std::string a = "a";
			mysystem = new lms;
			item * temp1 = new book("c++", "c++", "dsmalik", 100,a);
			item * temp2 = new book("c#", "c#", "uzair", 100, a);
			item * temp3 = new book("asp", "asp", "hussain", 100, a);
			item * temp4 = new book("sql", "sql", "ammar", 100, a);
			mysystem->additem(temp1); mysystem->additem(temp2); mysystem->additem(temp3); mysystem->additem(temp4);
			item * temp5 = new dvd("c++", "c++", 1.5, a);
			item * temp6 = new dvd("c#", "c#", 1.5, a);
			item * temp7 = new dvd("asp", "asp", 1.5, a);
			item * temp8 = new dvd("sql", "sql", 1.5, a);
			mysystem->additem(temp5); mysystem->additem(temp6); mysystem->additem(temp7); mysystem->additem(temp8);
			user * u1 = new student("jawad");
			u1->setaddress("q");u1->setphonenum("090078601");
			user * u2 = new student("abubakar");
			user * u3 = new student("zain");
			user * u4 = new student("adnan");
			mysystem->adduser(u1); mysystem->adduser(u2); mysystem->adduser(u3); mysystem->adduser(u4);
		}
		return mysystem;
	}
	~slms()
	{

	}
};

#endif // SLMS_H
