// BankSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "employee.h"
#include "admin.h"
#include "client.h"
int person::id = 0;

int main()
{
    person p("Ahmed", "asdasd21");
    p.displayInfo();
}

