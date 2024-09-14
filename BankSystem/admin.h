#pragma once
#include "employee.h"

class admin : public employee
{
public:
	admin(string name, string password, double salary) :
		employee(name, password, salary) {}

	void editEmployee(employee& editEmp, string name, string password) {
		editEmp.setName(name);
		editEmp.setPassword(password);
	}
};

