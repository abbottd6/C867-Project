#ifndef Roster_h
#define Roster_h

#include <iostream>
#include "student.h"

using namespace std;

class Roster {
public:
	Roster();
	Student* Parse(string studentData);
	
private:
	Student* classRosterArray[5];
	
};

#endif

		