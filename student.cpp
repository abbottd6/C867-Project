#include <iostream>
#include "student.h"

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
	degreeProgram = DegreeProgram::SOFTWARE;

	
}

Student::Student(string studentID, string firstName, 
		string lastName, string email, int age, 
		int daysInCourse[3], DegreeProgram degreeProgram) {
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->email = email;
	this->age = age;
	for (int i = 0; i < 3; i++) {
		this->daysInCourse[i] = daysInCourse[i];
	}
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

const int* Student::GetDaysInCourse() const {
		return daysInCourse;
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

void Student::SetDaysInCourse(int daysInCourse[3]) {
	for (int i = 0; i < 3; i++) {
		this->daysInCourse[i] = daysInCourse[i];
	}
}

void Student::SetProgram(DegreeProgram degreeProgram) {
	this->degreeProgram = degreeProgram;
}

void Student::Print() const {
	int tempVal;
	
	cout << GetID() << "	" << GetFirst() << "	" << GetLast();
	cout << "	" << GetEmail() << "	" << GetAge() << "	" << "{";
	GetDaysInCourse();
	cout << "}	";
	/*cout << "	" << GetProgram() << endl;*/
}
