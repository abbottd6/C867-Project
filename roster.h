#ifndef Roster_h
#define Roster_h

#include <iostream>
#include "student.h"

using namespace std;

class Roster {
public:
	Roster();
	~Roster();
	Student* parse(string studentData);
	void add(string studentID, string firstName, string lastName,
		string email, int age, int daysInCourse1, int
		daysInCourse2, int daysInCourse3, DegreeProgram
		degreeProgram);
	Student* classRosterArray[5] = { 0 , 0 , 0 , 0, 0 };
	void PrintRoster(int i) const;
	
private:
	int rosterIndex;

};

#endif

		