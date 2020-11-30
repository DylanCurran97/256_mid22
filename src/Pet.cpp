/*
 * Pet.cpp
 *
 *  Created on: Nov 29, 2020
 *      Author: keith
 */
#include <string>
using namespace std;


//ALREADY IMPLEMENTED DO NOT CHANGE
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

