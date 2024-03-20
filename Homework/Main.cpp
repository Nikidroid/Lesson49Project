#include <iostream>

using namespace std;

class Credit {
public:
	string name;
	string surname;
	int age;
	int period;
	long money;
	double percent;
};

int main() {
	Credit Credit1;

	cout << "Enter name of the borrower: ";
	cin >> Credit1.name;

	cout << "Enter surname of the borrower: ";
	cin >> Credit1.surname;

	cout << "Enter age of the borrower: ";
	cin >> Credit1.age;

	cout << "Enter quantity of the money that borrower takes: ";
	cin >> Credit1.money;

	cout << "Enter for what period borrower takes money (months): ";
	cin >> Credit1.period;

	cout << "Enter percent of the credit: ";
	cin >> Credit1.percent;

	cout << "\nInfo about credit: " << "Borrower " << Credit1.age << "'th year's old - "
		<< Credit1.name << " " << Credit1.surname << " takes " << Credit1.money <<
		" dollars for " << Credit1.period << " months at a percentage "
		<< Credit1.percent << endl;

	return 0;
}