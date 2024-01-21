#ifndef Student_h
#define Student_h

#include <iostream>
#include "degree.h"

using namespace std;


class Student {
	public:
		Student();
		Student(string ID, string firstName, string lastName, 
			string email, int age, int daysInCourse[3],
			DegreeProgram degreeProgram);
		string GetID() const;
		string GetFirst() const;
		string GetLast() const;
		string GetEmail() const;
		int GetAge() const;
		const int* GetDaysInCourse() const;
		DegreeProgram GetProgram();
		void SetID(string studentID);
		void SetFirst(string firstName);
		void SetLast(string lastName);
		void SetEmail(string email);
		void SetAge(int age);
		void SetDaysInCourse(int daysInCourse[3]);
		void SetProgram(DegreeProgram degreeProgram);
		void Print() const;
		

	private:
		string studentID;
		string firstName;
		string lastName;
		string email;
		int age;
		int daysInCourse[3];
		DegreeProgram degreeProgram;
		
};

#endif