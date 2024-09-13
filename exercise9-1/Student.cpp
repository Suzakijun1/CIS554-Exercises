#include "Student.h"
#include <iostream>
using std::cout;
using std::endl;

// Default constructor
// Initialize data to default values
Student::Student()
    : department("Non-matriculated"), gpa(0.0)
{
    // No body needed, everything is initialized in the list
}

// Initialization constructor
// Initialize base class and derived class data
Student::Student(string cName, string fName, string lName, int memID, string dept, double gpaVal)
    : CommunityMember(cName, fName, lName, memID), department(dept), gpa(gpaVal)
{
    // No body needed, everything is initialized in the list
}

// Destructor
Student::~Student()
{
    // Nothing to do for now
}
