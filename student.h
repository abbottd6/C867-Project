#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "degree.h"

using namespace std;


class Student {
	public:
		Student(string ID, string first, string last, 
			string emailaddress, int days1, int days2, int days3, 
			DegreeProgram degree);
		string GetID();
		string GetFirst();
		string GetLast();
		string GetEmail();
		int GetAge();
		int GetNumDays();
		DegreeProgram GetProgram();
		void SetID();
		void SetFirst();
		void SetLast();
		void SetEmail();
		void SetAge();
		void SetNumDays();
		void SetProgram();
		void Print();

	private:
		string studentID;
		string firstName;
		string lastName;
		string email;
		int age;
		int numDays1;
		int numDays2;
		int numDays3;
		DegreeProgram degreeProgram;


};