#include <iostream>
#include <string>
#include "student.h"
#include "roster.h"
#include "degree.h"

extern const string degreeProgramStrings[] = { "SECURITY", "NETWORK", "SOFTWARE" };

using namespace std;

Student::Student() {
	studentID = "NA";
	firstName = "No";
	lastName = "Student";
	email = "-";
	age = -1;
	daysInCourse[0] = -1;
	daysInCourse[1] = -2;
	daysInCourse[2] = -3;
	degreeProgram = SOFTWARE;
}

Student::Student(string studentID, string firstName, 
		string lastName, string email, int age, 
		int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->email = email;
	this->age = age;
	this->daysInCourse[0] = daysInCourse1;
	this->daysInCourse[1] = daysInCourse2;
	this->daysInCourse[2] = daysInCourse3;
	this->degreeProgram = degreeProgram;
}

string Student::GetID() const {
	return studentID;
}

string Student::GetFirst() const {
	return firstName;
}

string Student::GetLast() const {
	return lastName;
}

string Student::GetEmail() const {
	return email;
}

int Student::GetAge() const {
	return age;
}

int Student::GetDaysInCourse(int i) const {
	return daysInCourse[i];
}

DegreeProgram Student::GetProgram() {
	return degreeProgram;
}

void Student::SetID(string studentID) {
	this->studentID = studentID;
}

void Student::SetFirst(string firstName) {
	this->firstName = firstName;
}

void Student::SetLast(string lastName) {
	this->lastName = lastName;
}

void Student::SetEmail(string email) {
	this->email = email;
}

void Student::SetAge(int age) {
	this->age = age;
}

void Student::SetDaysInCourse(int daysInCourse1, int daysInCourse2, int
	daysInCourse3) {
	this->daysInCourse[0] = daysInCourse1;
	this->daysInCourse[1] = daysInCourse2;
	this->daysInCourse[2] = daysInCourse3;
}

void Student::SetProgram(DegreeProgram degreeProgram) {
	this->degreeProgram = degreeProgram;
}

void Student::Print() const {
	cout << GetID() << "	" << GetFirst() << "		" << GetLast();
	cout << "	" << GetAge() << "		" << "{";
	for (int i = 0; i < 3; i++) {
		if (i >= 0 && i < 2) {
			cout << GetDaysInCourse(i) << ",";
		}
		else if (i == 2) {
			cout << GetDaysInCourse(i) << "}	";
		}
	}
	cout << degreeProgramStrings[static_cast<int>(degreeProgram)] << endl;
}

