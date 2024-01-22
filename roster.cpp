#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
#include "roster.h"

using namespace std;

Roster::Roster() {
	for (int i = 0; i < 5; i++) {
		classRosterArray[i] = nullptr;
	}
}
Roster::~Roster() {
	for (int i = 0; i < 5; i++) {
		delete classRosterArray[i];
		classRosterArray[i] = nullptr;
	}
	cout << "DONE." << endl;
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

	int courseDays[3];
	commaLeft = commaRight + 1;
	commaRight = studentData.find(",", commaLeft);
	courseDays[0] = stoi(studentData.substr(commaLeft, commaRight - commaLeft));

	commaLeft = commaRight + 1;
	commaRight = studentData.find(",", commaLeft);
	courseDays[1] = stoi(studentData.substr(commaLeft, commaRight - commaLeft));

	commaLeft = commaRight + 1;
	commaRight = studentData.find(",", commaLeft);
	courseDays[2] = stoi(studentData.substr(commaLeft, commaRight - commaLeft));

	commaLeft = commaRight + 1;
	commaRight = studentData.find(",", commaLeft);
	string strDegree = studentData.substr(commaLeft, commaRight - commaLeft);
	DegreeProgram degreeProgram = SOFTWARE;
	if (strDegree == "SECURITY") {
		degreeProgram = SECURITY;
	}
	else if (strDegree == "NETWORK") {
		degreeProgram = NETWORK;
	}
	else if (strDegree == "SOFTWARE") {
		degreeProgram = SOFTWARE;
	}

	if (rosterIndex < 5) {
		add(studentID, firstName, lastName, email, age, courseDays[0]
			, courseDays[1], courseDays[2], degreeProgram);
	}
	else {
		rosterIndex = 0;
	}
	return classRosterArray[rosterIndex];
}

void Roster::add(string studentID, string firstName, string lastName,
	string email, int age, int daysInCourse1, int
	daysInCourse2, int daysInCourse3, DegreeProgram
	degreeProgram) {

	if (rosterIndex < 5 && rosterIndex >= 0) {
		classRosterArray[rosterIndex++] = new Student(studentID, firstName, lastName, email, age, daysInCourse1
			, daysInCourse2, daysInCourse3, degreeProgram);
	}
}

void Roster::removeID(string studentID) {
	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i] == nullptr) {
			cout << "The student with ID: " << studentID <<
				" was not found." << endl;
		}
		else if (classRosterArray[i]->GetID() == studentID) {
			//delete classRosterArray[i];
			classRosterArray[i] = nullptr;
			cout << "Removing the student with ID: " << studentID << endl;
		}
	}
}

void Roster::printAvgDaysInCourse(string studentID) {
	int avgDays = 0;
	
	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i] != nullptr && classRosterArray[i]->GetID() == studentID) {
			for (int j = 0; j < 3; j++) {
				avgDays = avgDays + classRosterArray[i]->GetDaysInCourse(j);
				if (j == 2) {
					avgDays = avgDays / 3;
				}
			}
			cout << "Student ID: " << studentID << ", average days in";
			cout << " course is : " << avgDays << endl;
		}
	}
}

void Roster::printInvalidEmails() const {
	size_t atIndex;
	cout << "Displaying invalid email addresses:" << endl << endl;

	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i]->GetEmail().find("@") == string::npos) {
		cout << classRosterArray[i]->GetEmail() << " - is invalid." << endl;
		}
		else {
			atIndex = classRosterArray[i]->GetEmail().find("@");
			if (classRosterArray[i]->GetEmail().find(".", atIndex) == string::npos) {
				cout << classRosterArray[i]->GetEmail() << " - is invalid." << endl;
			}
			else if (classRosterArray[i]->GetEmail().find(" ") != string::npos) {
				cout << classRosterArray[i]->GetEmail() << " - is invalid." << endl;
			}
		}
	}
	cout << endl;
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
	string degreeProgramStrings[] = { "SECURITY", "NETWORK", "SOFTWARE" };
	
	cout << "Showing students in the degree program: " <<
		degreeProgramStrings[static_cast<int>(degreeProgram)] << endl << endl;
	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i]->GetProgram() == degreeProgram) {
			classRosterArray[i]->Print();
		}
	}
	cout << endl;
}

void Roster::printAll(int i) const {
	if (classRosterArray[i] != nullptr) {
		classRosterArray[i]->Print();
	}
}



