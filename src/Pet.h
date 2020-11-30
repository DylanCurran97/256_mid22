/*
 * Pet.h
 *
 *  Created on: Nov 29, 2020
 *      Author: keith
 */

#ifndef PET_H_
#define PET_H_
#include <string>

//TODO provide implementations in the cpp file for both the constructor and destructor
class Pet {
public:
	//TODO if name is not null make a deep copy of name to petname
	//if name is null then set petname to 0
	//copy hasCollar to hasCollar
	Pet(bool hasCollar, char *name);
	virtual ~Pet();

	//ALREADY IMPLEMENTED DO NOT CHANGE
	std::string speak();
private:
	const bool hasCollar;
	char *petname;
};

#endif /* PET_H_ */
