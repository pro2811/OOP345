//SAVAN PANCHAL
#ifndef NOTIFICATIONS_H
#define NOTIFICATIONS_H
#include <iostream>
#include <fstream>
#include "Message.h"

using namespace std;
namespace sict{
	class Notifications{
		int no;
		Message * msg;
	public:
		Notifications(std::ifstream& CON);
		Notifications(Notifications && MOV);
		Notifications& operator=(Notifications &&OP);
	        ~Notifications();
	        void display(std::ostream& os) const;
	};
}
#endif
