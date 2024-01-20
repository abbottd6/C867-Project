#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include "degree.h"
#include "roster.h"
#include "student.h"

using namespace std;


int main() {
	Student* student1 = nullptr;
	Student* student2 = nullptr;
	Student* student3 = nullptr;
	Student* student4 = nullptr;
	Student* student5 = nullptr;
	const string studentData[] =
	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Dayton,Abbott,dabbo44@wgu.edu,137,7,9,27,SOFTWARE" };
	string tempStudentString;
	int tempStringSize;
	int iteratorStack;
	string ID = "-";
	string first = "-";
	string last = "-";
	string emailAddress = "-";
	string ageStr;
	int ageYrs;
	string daysStr1;
	int days1;
	string daysStr2;
	int days2;
	string daysStr3;
	int days3;
	string Degree;
	DegreeProgram program;
	
	for (int i = 0; i < 1; ++i) {
		tempStudentString = studentData[i];
		for (int x = 0; x < 9; ++x) {
			for (int j = 0; j < tempStudentString.size(); ++j) {

				if (tempStudentString[j] == ',') {
					++x;
				}
				else if (tempStudentString[j] != ',') {
					if (x == 0) {
						if (x == 0 && j == 0) {
							ID = "";
							first = "";
							last = "";
							emailAddress = "";
							ageStr = "";
							daysStr1 = "";
							daysStr2 = "";
							daysStr3 = "";
							Degree = "";
						}
						ID += tempStudentString[j];
					}
					else if (x == 1) {
						first += tempStudentString[j];
					}
					else if (x == 2) {
						last += tempStudentString[j];
					 }
					else if (x == 3) {
						emailAddress += tempStudentString[j];
					}
					else if (x == 4) {
						ageStr += tempStudentString[j];
					}
					else if (x == 5) {
						daysStr1 += tempStudentString[j];
					}
					else if (x == 6) {
						daysStr2 += tempStudentString[j];
					}
					else if (x == 7) {
						daysStr3 += tempStudentString[j];
					}
					else if (x == 8) {
						Degree += tempStudentString[j];
					}
					if (x == 8 && j == tempStudentString.size() -1) {
						ageYrs = stoi(ageStr);
						days1 = stoi(daysStr1);
						days2 = stoi(daysStr2);
						days3 = stoi(daysStr3);
						if (Degree == "SECURITY") {
							program = SECURITY;
						}
						else if (Degree == "NETWORK") {
							program = NETWORK;	
						}
						else if (Degree == "SOFTWARE") {
							program = SOFTWARE;
						}
						Student* student1 = new Student(ID, first,
							last, emailAddress, ageYrs, days1,
							days2, days3, program);
					}
				}
				
			}
		}
	}
	cout << student1->GetID() << "	" << student1->GetFirst() << 
		"	" << student1->GetLast() << endl;

	cout << ID << endl;
	cout << first << endl;
	cout << last << endl;
	cout << emailAddress << endl;
	cout << ageStr << endl;
	cout << daysStr1 << endl;
	cout << daysStr2 << endl;
	cout << daysStr3 << endl;
	cout << Degree << endl;

	return 0;
}