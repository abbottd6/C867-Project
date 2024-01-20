#include <iostream>
#include <string>
#include <vector>
#include "student.h"
#include "degree.h"

using namespace std;

Student::Student() {
	
	studentID;
	firstName;
	lastName;
	email;
	age;
	daysInCourse;
	degreeProgram;
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

void Student::GetDaysInCourse() const {
	for (int i = 0; i < 3; ++i) {
		cout << daysInCourse.at(i);
		if (i < 2) {
			cout << ", ";
		}
	}
}

DegreeProgram Student::GetProgram() {
	return degreeProgram;
}

void Student::SetID(string ID) {
	studentID = ID;
}

void Student::SetFirst(string first) {
	firstName = first;
}

void Student::SetLast(string last) {
	lastName = last;
}

void Student::SetEmail(string emailAddress) {
	email = emailAddress;
}

void Student::SetAge(int ageYrs) {
	age = ageYrs;
}

void Student::SetDaysInCourse(int course1, int course2, int course3) {
	daysInCourse = { course1, course2, course3 };
}

void Student::SetProgram(DegreeProgram program) {
	degreeProgram = program;
}

void Student::Print() {
	int tempVal;
	
	cout << GetID() << "	" << GetFirst() << "	" << GetLast();
	cout << "	" << GetEmail() << "	" << GetAge() << "	" << "{";
	GetDaysInCourse();
	cout << "}	";
	cout << "	" << GetProgram() << endl;
}
