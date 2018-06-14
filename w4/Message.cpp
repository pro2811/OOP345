//SAVAN PANCHAL

#include "Message.h"
using namespace std;

Message::Message(){}
Message::Message(ifstream & in, char c){
	string len;
	getline(in,len,c);
        std::istringstream is(len);

	if(US.empty()){
		is>>US;
		if((int)US.find('@')>0){
			US.clear();
		}
 	}

	if(RT.empty()){
	is>>RT;
	if((int)RT.find('@')<0){
		MS = RT;
		RT.clear();
	      }
	}

	if(MS.empty()){
		getline(is, MS);
	}
	is.clear();
}

void Message::display(ostream &os) const{

	os<<"Message"<<endl;
	os<<"User : "<<US<<endl;

	if(RT != "" ){
		os<<"Reply : " <<MS<<endl;
	}
	os<<"Tweet : " <<MS<<endl<<endl;
}

