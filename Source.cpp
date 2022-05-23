#include<iostream>
#include<string>

using namespace std;

class Person {
public:
	string firstName;
	string middleName;
	string lastName;

	void enterPerson() {
		cout << "\tEnter last name: ";
		cin >> lastName;
		cout << "\tEnter first name: ";
		cin >> firstName;
		cout << "\tEnter middle name: ";
		cin >> middleName;
	}

	void showPerson() {
		cout << "FIO: ";
		cout << lastName << " ";
		cout << firstName << " ";
		cout << middleName << endl;
	}
};

class Address {
public:
	string country;
	string city;

	void enterAddress() {
		cout << "Enter address" << endl;
		cout << "\tEnter country: ";
		cin >> country;
		cout << "\tEnter city: ";
		cin >> city;
	}

	void showAddress() {
		cout << "Addres: ";
		cout << country << " ";
		cout << city << endl;
	}
};

class University {
public:
	Address address;
	string name;
	string groupNumber;

	void enterUniver() {
		cout << "Enter university name: ";
		cin >> name;
		cout << "Enter group number: ";
		cin >> groupNumber;
		address.enterAddress();
	}

	void showUniver() {
		cout << "Univer\n";
		cout << "name: " << name << " group name: " << groupNumber << endl;
		address.showAddress();
	}
};

class Student {
public:
	Person person;
	string birthday;
	string phoneNumber;
	Address address;
	University university;

	void enterStudent() {
		cout << "Enter FIO" << endl;
		person.enterPerson();

		cout << "Enter birthday: ";
		cin >> birthday;

		cout << "Enter phone number: ";
		cin >> phoneNumber;

		address.enterAddress();
		university.enterUniver();
	}

	void showStudent() {
		cout << endl << endl;
		person.showPerson();
		cout << birthday << endl;
		cout << endl;
		cout << phoneNumber << endl;
		cout << endl;
		address.showAddress();
		university.showUniver();
	}
};

int main() {
	Student student;
	student.enterStudent();
	student.showStudent();

	return 0;
}