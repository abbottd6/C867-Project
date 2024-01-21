#pragma once
#include <iostream>
#include "student.h"
#include "degree.h"

using namespace std;

class Roster {
	Student* classRosterArray[5];
	Student* Parse(string studentData);
};
		