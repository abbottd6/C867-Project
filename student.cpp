#include <iostream>
#include <string>
#include <vector>
#include "student.h"

Student::Student(string ID, string first, string last, string email,
	int age, vector<int> days(3),DegreeProgram program) {
	studentID = ID;
	firstName = first;
	lastName = last;
	email = email;
	age = age;
	numDays[0] = days[0];
	numDays[1] = days[1];
	numDays[2] = days[2];
	degreeProgram = program;
}

Student::GetID() {

}

Student::GetFirst() {

}

Student::GetLast() {

}

Student::GetEmail() {

}

Student::GetAge() {

}

Student::GetNumDays() {

}

Student::GetProgram() {

}

Student::SetID() {

}

Student::SetFirst() {

}

Student::SetLast() {

}

Student::SetEmail() {

}

Student::SetAge() {

}

Student::SetNumDays() {

}

Student::SetProgram() {

}

Student::Print() {

}