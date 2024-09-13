///////////////////////////////////////////////////////////
// Source.cpp
// CIS554 Object Oriented Programming in C++
// Exercise 9_2 - Simple Intheritance
//                program test
///////////////////////////////////////////////////////////

#include "CommunityMember.h"
#include "Employee.h"
#include "Student.h" // Include Student class
#include <iostream>
using std::cout;
using std::endl;

// Demonstrate CommunityMember class
void DemonstrateCommunityMember(CommunityMember &);

// Demonstrate Employee class
void DemonstrateEmployee(Employee &);

// Demonstrate Student class
void DemonstrateStudent(Student &);

int main()
{
	// demonstrate CommunityMember default constructor
	cout << "***** Demonstrating the default constructor, and member methods, for class CommunityMember" << endl;
	CommunityMember commMember;
	DemonstrateCommunityMember(commMember);
	cout << endl;

	// demonstrate CommunityMember initialization constructor
	cout << "***** Demonstrating the initialization constructor, and member methods, for class CommunityMember" << endl;
	CommunityMember commMemberHarry("Syracuse University", "Harry", "Potter", 1234);
	DemonstrateCommunityMember(commMemberHarry);
	cout << endl;

	// demonstrate Employee default constructor
	cout << "***** Demonstrating the default constructor, and member methods, for class Employee" << endl;
	Employee commMemberEmp;
	DemonstrateEmployee(commMemberEmp);
	cout << endl;

	// demonstrate Employee initialization constructor
	cout << "***** Demonstrating the initialization constructor, and member methods, for class Employee" << endl;
	Employee commMemberEmpHarry("Syracuse University", "Harry", "Potter", 1234, "Janitor", 25000);
	DemonstrateEmployee(commMemberEmpHarry);
	cout << endl;

	// demonstrate Student default constructor
	cout << "***** Demonstrating the default constructor, and member methods, for class Student" << endl;
	Student studentMember;
	DemonstrateStudent(studentMember);
	cout << endl;

	// demonstrate Student initialization constructor
	cout << "***** Demonstrating the initialization constructor, and member methods, for class Student" << endl;
	Student studentHarry("Syracuse University", "Harry", "Potter", 5678, "Electrical Engineering", 3.9);
	DemonstrateStudent(studentHarry);
	cout << endl;

	return 0;
}

void DemonstrateCommunityMember(CommunityMember &c)
{
	cout << c.GetFirstName() << " "
		 << c.GetLastName()
		 << " is a member of the " << c.GetCommunityName() << " community, with member ID " << c.GetMemberID() << endl;
}

void DemonstrateEmployee(Employee &e)
{
	cout << e.GetFirstName() << " "
		 << e.GetLastName()
		 << " is a member of the " << e.GetCommunityName() << " community, "
		 << "with member ID " << e.GetMemberID() << endl
		 << "He/She is an employee with Job Title: " << e.GetJobTitle() << ", making "
		 << e.GetYearlySalary() << " per year." << endl;
}

void DemonstrateStudent(Student &s)
{
	cout << s.GetFirstName() << " "
		 << s.GetLastName()
		 << " is a member of the " << s.GetCommunityName() << " community, "
		 << "with member ID " << s.GetMemberID() << endl // Displays overridden member ID
		 << "He/She is a student in the " << s.GetStudentDepartment() << " department, with a GPA of "
		 << s.GetStudentGPA() << "." << endl;
}
