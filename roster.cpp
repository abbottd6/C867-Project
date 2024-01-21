
#include <iostream>
#include <string>
#include "student.h"
#include "roster.h"

using namespace std;

Roster::Roster() {
	for (int i = 0; i < 5; ++i) {
		classRosterArray[i] = 0;
	}
}

Roster::~Roster() {
	for (int i = 0; i < 5; ++i) {
		delete classRosterArray[i];
	}
}

Student* Roster::parse(string studentData) {
	size_t commaRight = studentData.find(",");
	string studentID = studentData.substr(0, commaRight);

	size_t commaLeft = commaRight + 1;
	commaRight = studentData.find(",", commaLeft);
	string firstName = studentData.substr(commaLeft, commaRight - commaLeft);

	commaLeft = commaRight + 1;
	commaRight = studentData.find(",", commaLeft);
	string lastName = studentData.substr(commaLeft, commaRight - commaLeft);

	commaLeft = commaRight + 1;
	commaRight = studentData.find(",", commaLeft);
	string email = studentData.substr(commaLeft, commaRight - commaLeft);

	commaLeft = commaRight + 1;
	commaRight = studentData.find(",", commaLeft);
	int age = stoi(studentData.substr(commaLeft, commaRight - commaLeft));

	commaLeft = commaRight + 1;
	commaRight = studentData.find(",", commaLeft);
	int courseDays1 = stoi(studentData.substr(commaLeft, commaRight - commaLeft));

	commaLeft = commaRight + 1;
	commaRight = studentData.find(",", commaLeft);
	int courseDays2 = stoi(studentData.substr(commaLeft, commaRight - commaLeft));

	commaLeft = commaRight + 1;
	commaRight = studentData.find(",", commaLeft);
	int courseDays3 = stoi(studentData.substr(commaLeft, commaRight - commaLeft));

	commaLeft = commaRight + 1;
	commaRight = studentData.find(",", commaLeft);
	string strDegree = studentData.substr(commaLeft, commaRight - commaLeft);
	DegreeProgram degreeProgram;
	if (strDegree == "SECURITY") {
		degreeProgram = DegreeProgram::SECURITY;
	}
	else if (strDegree == "NETWORK") {
		degreeProgram = DegreeProgram::NETWORK;
	}
	else if (strDegree == "SOFTWARE") {
		degreeProgram = DegreeProgram::SOFTWARE;
	}
	if (studentID == "A1") {
		rosterIndex = 0;
	}
	else if (studentID == "A2") {
		rosterIndex = 1;
	}
	else if (studentID == "A3") {
		rosterIndex = 2;
	}
	else if (studentID == "A4") {
		rosterIndex = 3;
	}
	else if (studentID == "A5") {
		rosterIndex = 4;
	}
	add(studentID, firstName, lastName, email, age, courseDays1
		, courseDays2, courseDays3, degreeProgram);
	
	

	return classRosterArray[rosterIndex];

};

void Roster::add(string studentID, string firstName, string lastName,
	string email, int age, int daysInCourse1, int
	daysInCourse2, int daysInCourse3, DegreeProgram
	degreeProgram) {

	if (studentID == "A1") {
		classRosterArray[0] = new Student(studentID, firstName, lastName, email, age, daysInCourse1
			, daysInCourse2, daysInCourse3, degreeProgram);
	}
	else if (studentID == "A2") {
		classRosterArray[1] = new Student(studentID, firstName, lastName, email, age, daysInCourse1
			, daysInCourse2, daysInCourse3, degreeProgram);
	}
	else if (studentID == "A3") {
		classRosterArray[2] = new Student(studentID, firstName, lastName, email, age
			, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
	}
	else if (studentID == "A4") {
		classRosterArray[3] = new Student(studentID, firstName, lastName, email, age, daysInCourse1
			, daysInCourse2, daysInCourse3, degreeProgram);
	}
	else if (studentID == "A5") {
		classRosterArray[4] = new Student(studentID, firstName, lastName, email, age, daysInCourse1
			, daysInCourse2, daysInCourse3, degreeProgram);
	}
};

void Roster::PrintRoster(int i) const {

		classRosterArray[i]->Print();
		
}




