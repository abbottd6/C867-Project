#include <iostream>
#include <string>
#include <vector>
#include "student.h"
#include "degree.h"

using namespace std;

Student::Student(string ID = "", string first = "", string last ="",
	string emailAddress = "",int ageYrs = -1, int days1 = -1, int days2 = -1, 
	int days3 = -1, DegreeProgram degree = SOFTWARE) {
	
	studentID = ID;
	firstName = first;
	lastName = last;
	email = emailAddress;
	age = ageYrs;
	numDays1 = days1;
	numDays2 = days2;
	numDays3 = days3;
	degreeProgram = degree;
}

string Student::GetID() {
	return studentID;
}

string Student::GetFirst() {
	return firstName;
}

string Student::GetLast() {
	return lastName;
}

string Student::GetEmail() {
	return email;
}

int Student::GetAge() {
	return age;
}

int Student::GetNumDays() {
	return numDays1;
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

void Student::SetEmail() {

}

void Student::SetAge() {

}

void Student::SetNumDays() {

}

void Student::SetProgram() {

}

void Student::Print() {

}