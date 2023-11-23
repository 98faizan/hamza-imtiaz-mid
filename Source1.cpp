#include<iostream>
using namespace std;
int main() {
	float initial_salary=0;
	float final_salary=0;
	int rating;
	int choice;
	do
	{
		cout << "Enter your current salary:";
		cin >> initial_salary;
		final_salary = initial_salary + (initial_salary * 0.05);
			cout << "Enter rating(1 for exceptional,0 for not):";
			cin >> rating;
			if (rating == 1) {
				final_salary = final_salary + (final_salary * 0.02);
				cout << final_salary;
			}
			else {
				cout << final_salary;
			}
			cout << "\nPress 1 to continue:";
			cin >> choice;
		} while (choice == 1);
	return 0;
}