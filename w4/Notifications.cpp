//SAVAN PANCHAL

#include "Notifications.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace sict;

Notifications::Notifications(std::ifstream& CON){
	std::string str;
	while(getline(CON,str)){
		no++;
	}
	CON.clear();
	CON.seekg(0,ios::beg);

	if(this->msg == nullptr){
	this->msg = new Message[no];
	}

	for(int i = 0; i<no;i++){
		this->msg[i]= Message(CON,10);
	}

}

Notifications::Notifications(Notifications &&MOV){

	this->msg = nullptr;
	*this = std::move(MOV);
}

Notifications & Notifications::operator=(Notifications && OP){
	if(this != &OP){
		delete[] msg;
		this->msg = OP.msg;
		this->no=OP.no;
		OP.msg=nullptr;
		OP.no = 0;
	}
	return (*this);
}

Notifications::~Notifications(){
	delete[] msg;
}

void Notifications::display(ostream & os) const{
		for(int a = 0; a<no; a++)
		msg[a].display(os);	
	}

