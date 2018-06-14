//SAVAN PANCHAL

#ifndef MESSAGE_H
#define MESSAGE_H
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
namespace std{
	class Message{
		string US;
		string RT;
		string MS;
		public:
		Message();
		Message(std::ifstream& in, char c);
		void display(std::ostream& os) const;	
	};
}
#endif
