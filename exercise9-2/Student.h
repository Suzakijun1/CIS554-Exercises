#ifndef __STUDENT_H__
#define __STUDENT_H__

#include "CommunityMember.h"
#include <string>
using std::string;

class Student : public CommunityMember
{
public:
    // Default constructor
    Student();

    // Initialization constructor
    Student(string commName, string fName, string lName, int memID, string dept, double gpa);

    // Destructor
    ~Student();

    // Override the GetMemberID method to return memberID * 100
    int GetMemberID() override;

    // Getter methods for additional Student attributes
    string GetStudentDepartment() { return department; }
    double GetStudentGPA() { return gpa; }

private:
    string department;
    double gpa;
};

#endif
