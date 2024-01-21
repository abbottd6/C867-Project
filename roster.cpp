#pragma once
#include <iostream>
#include <string>
#include "student.h"
#include "roster.h"

using namespace std;
Roster::Roster() {
	for (int i = 0; i < 5; i++) {
		classRosterArray[i] = 0;
	}
}

Student* Roster::Parse(string studentData) {
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
	int courseDays[3];
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
	return new Student(studentID, firstName, lastName, email, age, courseDays, degreeProgram);
};


