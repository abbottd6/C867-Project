#ifndef Roster_h
#define Roster_h

#include <iostream>
#include "student.h"

using namespace std;

class Roster {
public:
	Roster();
	Student* parse(string studentData);
	void add(string studentID, string firstName, string lastName,
		string email, int age, int daysInCourse1, int
		daysInCourse2, int daysInCourse3, DegreeProgram
		degreeProgram);
	void removeID(string studentID);
	void printAvgDaysInCourse(string studentID);
	void printInvalidEmails() const;
	void PrintRoster(int i) const;
private:
	Student* classRosterArray[5];
	int rosterIndex = 0;
};

#endif

		