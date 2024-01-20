#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "degree.h"

using namespace std;


class Student {
	public:
		Student();
		string GetID() const;
		string GetFirst() const;
		string GetLast() const;
		string GetEmail() const;
		int GetAge() const;
		void GetDaysInCourse() const;
		DegreeProgram GetProgram();
		void SetID(string ID);
		void SetFirst(string first);
		void SetLast(string last);
		void SetEmail(string emailAddress);
		void SetAge(int ageYrs);
		void SetDaysInCourse(int days1, int days2, int days3);
		void SetProgram(DegreeProgram program);
		void Print();


	private:
		string studentID;
		string firstName;
		string lastName;
		string email;
		int age;
		vector<int> daysInCourse;
		DegreeProgram degreeProgram;
};