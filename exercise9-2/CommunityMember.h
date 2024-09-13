///////////////////////////////////////////////////////////
// CommunityMember.h
// CIS554 Object Oriented Programming in C++
// Exercise 9_2 - Simple Intheritance
//                Class CommunityMember interface
///////////////////////////////////////////////////////////
#ifndef __COMMUNITY_MEMBER_H__
#define __COMMUNITY_MEMBER_H__

#include <string>
using std::string;

class CommunityMember
{
public:
	// Default constructor
	CommunityMember();

	// Initialization constructor
	CommunityMember(string commName, string fName, string lName, int memID);

	// Destructor
	virtual ~CommunityMember();

	// Make GetMemberID virtual to allow overriding in derived classes
	virtual int GetMemberID() { return memberID; }

	string GetCommunityName() { return communityName; }
	string GetFirstName() { return firstName; }
	string GetLastName() { return lastName; }

private:
	string communityName;
	string firstName;
	string lastName;
	int memberID;
};

#endif
