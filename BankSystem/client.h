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
		if(validation::intializeBalance(balance))
			this->balance = balance;
		else {
			cout << "Balance is less than 1500, min is 1500" << endl;
		}
	}
public:
	client(string name, string password, double balance) :
		person(name, password), balance(balance) {}
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
		if(validation::intializeBalance(amount))
			balance += amount;
		else {
			cout << "Invalid amount" << endl;
		}
	}
	void withdraw(const double& amount) {
		//Check if the amount is equal or less than the balance before withdrawing
		if (validation::intializeBalance(amount) && balance >= amount)
			balance -= amount;
		else {
			cout << "Insufficient Balance" << endl;
		}
	}
	void transferTo(const double& amount, client& recipient) {
		/*
		Validate that amount equal or less than balance
		deduct from balance and send to recipient
		*/
		if (validation::intializeBalance(amount) && balance >= amount) {
		balance -= amount;
		recipient.balance += amount;
		}
		else {
			cout << "Insufficient Balance" << endl;
		}
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
