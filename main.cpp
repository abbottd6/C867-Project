#include <iostream>
#include "degree.h"
#include "roster.h"
#include "student.h"

using namespace std;

int main() {
	Roster classRoster;
	string strID;
	const string studentData[] =
	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Dayton,Abbott,dabbo44@wgu.edu,137,7,9,27,SOFTWARE" };
	
	cout << "C867 - Scripting and Programming: Applications" << endl;
	cout << "Language: C++" << endl;

	for (int i = 0; i < 5; i++) {
		classRoster.parse(studentData[i]);
	}

	cout << "Displaying all students:" << endl << endl;

	for (int i = 0; i < 5; i++) {
			classRoster.printAll(i);
	}

	cout << endl;

	classRoster.printInvalidEmails();
	
	for (int i = 0; i < 5; i++) {
		strID = classRoster.classRosterArray[i]->GetID();
		classRoster.printAvgDaysInCourse(strID);
	}
	
	cout << endl;

	classRoster.printByDegreeProgram(SOFTWARE);
	
	classRoster.removeID("A3");

	cout << endl;

	for (int i = 0; i < 5; i++) {
		classRoster.printAll(i);
	}

	cout << endl;

	classRoster.removeID("A3");
	//classRoster.~Roster();

	return 0;
}