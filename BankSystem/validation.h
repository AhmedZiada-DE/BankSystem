#pragma once
#include <iostream>
#include <string>
using namespace std;

class validation
{
public:
	//Set a name
	/*  1) the name must be alphabetic chars and min size 5 andmax size 20
		2)	It shouldn't start with a space or end with one
		3)	One space only betweeen two names    */
	static bool setName(string name) {
		//Check length or space at first position
		if (name.length() < 5 || name[0] == ' ' || name.length()>20)
			return false;

		//Check for space at the end
		if (name[name.length() - 1] == ' ')
			return false;

		//Check for space or character
		int j = 0;
		for (int i = 1; i < name.length(); i++) {
			if ((isalpha(name[i]) || i == ' ') && j < 2;) {
				if (i == ' ') {
					j++;
					continue;
				}
				//reset j if it is not a space to prevent space repetion
				j = 0;
				continue;
			}
			else {
				return false;
			}
		}
		return true;
	}
	//Check password length
	static bool setPassword(string password) {
		if (password.length() < 8 || password.length() > 20)
			return false;
		return true;
	}

	//Check minBalance
	static bool intializeBalance(double balance) {
		if (balance >= 1500)
			return true;
		//else
		return false;
	}

	//check withdrawn amount
	static bool positiveAmount(double amount) {
		if (amount > 0)
			return true;
		return false;
	}
	/*I could have used turnary operator but I don't remember how to 
	and I have no energy to search right now*/
	static bool minSalary(double salary) {
		if (salary >= 5000)
			return true;
		return false;
	}

};

