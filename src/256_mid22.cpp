//============================================================================
// Name        : 256_mid22.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include <string>
#include "Pet.h"
using namespace std;

int total_points=0;
//this is a template class, its mostly here as a helper for me
//the T and U are generic params, I can substitute any type for them
//they must be comparable with ==, templates are extremely hard to get right BTW
template<typename T, typename U>
bool EXPECT_EQ(T expectedVal, U actualVal,string testnumb, int pts){
	bool bout = (expectedVal == actualVal);
	if (bout){
		total_points+=pts;
		cout<<"SUCCESS "+testnumb+ "  total points="<<total_points;

	}
	else
		cout<<"FAIL "+ testnumb<< " Expected:"<<expectedVal<<"  got:"<<actualVal;
	cout<<endl;
	return bout;
}

int main() {
	char name[]="Polly";

	Pet p1(true, name);
	string spk=p1.speak();
	EXPECT_EQ (string("Polly has a collar"), spk,"1",15);

	Pet p2(false, name);
	spk=p2.speak();
	EXPECT_EQ (string("Polly has no collar"), spk,"1",10);

	Pet p3(false, 0);
	spk=p3.speak();
	EXPECT_EQ (string("UNKNOWN has no collar"), spk,"1",15);
}
