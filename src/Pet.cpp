/*
 * Pet.cpp
 *
 *  Created on: Nov 29, 2020
 *      Author: keith
 */

//TODO manage includes
#include "Pet.h"

using namespace std;
Pet::~Pet(){
	delete this->petname;
}

//ALREADY IMPLEMENTED DO NOT CHANGE

Pet::Pet(bool hasCollar, char *name){
	if (name==NULL) {
		this->hasCollar = hasCollar;
		this->petname = 0;
	}
	else {
		this->petname = name;
		this->hasCollar = hasCollar;
	}
}


std::string Pet::speak(){
	string s("UNKNOWN");
	if(this->petname)
		s=this->petname;

	if(this->hasCollar)
		s=s+ " has a collar";
	else
		s=s+ " has no collar";
	return s;
}

