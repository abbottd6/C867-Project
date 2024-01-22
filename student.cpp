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
	daysInCourse1 = -1;
	daysInCourse2 = -2;
	daysInCourse3 = -3;
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
	this->daysInCourse1 = daysInCourse1;
	this->daysInCourse2 = daysInCourse2;
	this->daysInCourse3 = daysInCourse3;
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

int Student::GetDaysInCourse1() const {
	return daysInCourse1;
}
int Student::GetDaysInCourse2() const {
	return daysInCourse2;
}
int Student::GetDaysInCourse3() const {
	return daysInCourse3;
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
	this->daysInCourse1 = daysInCourse1;
	this->daysInCourse2 = daysInCourse2;
	this->daysInCourse3 = daysInCourse3;
}

void Student::SetProgram(DegreeProgram degreeProgram) {
	this->degreeProgram = degreeProgram;
}

void Student::Print() const {
	cout << GetID() << "	" << GetFirst() << "	" << GetLast();
	cout << "	" << GetAge() << "	" << "{" << GetDaysInCourse1() 
		<< ", " << GetDaysInCourse2() << ", " << GetDaysInCourse3() << "}	";
	cout << degreeProgramStrings[static_cast<int>(degreeProgram)] << endl;
}

