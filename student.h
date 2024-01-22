#ifndef Student_h
#define Student_h

#include <iostream>
#include "degree.h"

using namespace std;


class Student {
	public:
		Student();
		Student(string ID, string firstName, string lastName, 
			string email, int age, int daysInCourse1, 
			int daysInCourse2, int daysInCourse3,
			DegreeProgram degreeProgram);
		string GetID() const;
		string GetFirst() const;
		string GetLast() const;
		string GetEmail() const;
		int GetAge() const;
		int GetDaysInCourse1() const;
		int GetDaysInCourse2()	const;
		int GetDaysInCourse3() const;
		DegreeProgram GetProgram();
		void SetID(string studentID);
		void SetFirst(string firstName);
		void SetLast(string lastName);
		void SetEmail(string email);
		void SetAge(int age);
		void SetDaysInCourse(int daysInCourse1, int daysInCourse2
			, int daysInCourse3);
		void SetProgram(DegreeProgram degreeProgram);
		void Print() const;
		

	private:
		string studentID;
		string firstName;
		string lastName;
		string email;
		int age;
		int daysInCourse1;
		int daysInCourse2;
		int daysInCourse3;
		DegreeProgram degreeProgram;
		
};

#endif