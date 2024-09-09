#pragma once
#include <iostream>
using namespace std;

class person
{
protected:
	int id;
	string name, password;
public:
	person(int id, string name, string password) : 
		id(id), name(name), password(password){}
	/*
	-I'm creating the base and then we have to edit the class for validation later
	-This is just to start the project
	*/
	//The ID has to be also automatically assigned so as I said I'm just creating something to start with
	void setID(const int& id) {
		this->id = id;
	}
	void setName(const string& name) {
		this->name = name;
	}
	void setPassword(const string& password) {
		this->password = password;
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

