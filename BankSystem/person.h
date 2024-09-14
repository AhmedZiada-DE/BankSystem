#pragma once
#include <iostream>
using namespace std;
#include "validation.h"

class person
{
protected:
	static int id;
	string name, password;
public:
	person(string name, string password) : 
		 name(name), password(password){
		id++;
	}
	/*
	-I'm creating the base and then we have to edit the class for validation later
	-This is just to start the project
	*/
	//The ID has to be also automatically assigned so as I said I'm just creating something to start with
	void setID(const int& id) {
		this->id = id;
	}
	void setName(const string& name) {
		if(validation::setName(name))
			this->name = name;
		else{
			cout << "The name must be alphabetic chars and min size 5 and max size 20" << endl;
			cout << "The name shouldn't start with a space or end with a space" << endl;
			cout << "Only one space can be used to separate names" << endl;
		}
	}
	void setPassword(const string& password) {
		if(validation::setPassword(password))
			this->password = password;
		else {
			cout <<"Password must be with min size 8 and max size 20" << endl;
		}
	}
	//Getters
	int getID() {
		return id;
	}
	string getName() {
		return name;
	}
	//Virtual impure method
	virtual void displayInfo() {
		cout << "ID: " << id << endl;
		cout << "Name: " << name << endl;
	}
};

