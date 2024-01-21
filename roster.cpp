
#include <iostream>
#include <string>
#include "student.h"
#include "roster.h"

using namespace std;

Roster::Roster() {}

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

	add(studentID, firstName, lastName, email, age, courseDays1
		, courseDays2, courseDays3, degreeProgram);

	return classRosterArray[rosterIndex];

}

void Roster::add(string studentID, string firstName, string lastName,
	string email, int age, int daysInCourse1, int
	daysInCourse2, int daysInCourse3, DegreeProgram
	degreeProgram) {

	if (rosterIndex < 5) {
		classRosterArray[rosterIndex++] = new Student(studentID, firstName, lastName, email, age, daysInCourse1
			, daysInCourse2, daysInCourse3, degreeProgram);
	}
	else {
		rosterIndex = 0;
	}
}

void Roster::removeID(string studentID) {
	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i] == nullptr) {
			cout << "The student with ID: " << studentID <<
				" was not found." << endl;
		}
		else if (classRosterArray[i]->GetID() == studentID) {
			delete classRosterArray[i];
			classRosterArray[i] = nullptr;
			cout << "Removing the student with ID: " << studentID <<
				"." << endl;
		}
		
	}
}

void Roster::PrintRoster(int i) const {
	if (classRosterArray[i] != nullptr)
		classRosterArray[i]->Print();
}




