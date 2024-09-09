#include "person.h"

class client : public person
{
private:
	double balance;
	/*
	I think if we created a setter for the balance we should use it inside the constructor only
	I will need to think about it more yet
	*/
	void setBalance(const double& balance) {
		this->balance = balance;
	}
public:
	client(int id, string name, string password, double balance) :
		person(id, name, password), balance(balance) {}
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
	//A getter for password goes against the privacy of the user so I won't add it
	double getBalance() {
		return balance;
	}
	void deposit(const double& amount) {
		//We can check if the value is positive first
		balance += amount;
	}
	void withdraw(const double& amount) {
		//Check if the amount is equal or less than the balance before withdrawing
		balance -= amount;
	}
	void transferTo(const double& amount, client& recipient) {
		/*
		Validate that amount equal or less than balance
		deduct from balance and send to recipient
		*/
		balance -= amount;
		recipient.balance += amount;
	}
	void checkBalance() {
		cout << "Balance is: " << balance << endl;
	}
	void displayInfo() {
		cout << "ID: " << id << endl;
		cout << "Name: " << name << endl;
		cout << "Balance: " << balance << endl;
	}

};
