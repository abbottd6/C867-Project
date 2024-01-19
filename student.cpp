#include <iostream>
#include <string>
#include <vector>
#include "student.h"
#include "degree.h"

using namespace std;

Student::Student(string ID = "", string first = "", string last ="",
	string emailaddress = "", int days1 = -1, int days2 = -1, 
	int days3 = -1, DegreeProgram degree = SOFTWARE) {
	
	studentID = ID;
	firstName = first;
	lastName = last;
	email = emailaddress;
	numDays1 = days1;
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

void Student::SetID() {

}

void Student::SetFirst() {

}

void Student::SetLast() {

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