#pragma once
#include <iostream>
#include <string>
#include <vector>


class Student {
	public:
		Student();
		string GetID();
		string GetFirst();
		string GetLast();
		string GetEmail();
		int GetAge();
		vector<int> GetNumDays();
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
		vector<int> numDays(3);
		DegreeProgram degreeProgram;


};