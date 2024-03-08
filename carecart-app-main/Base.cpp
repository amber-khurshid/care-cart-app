#include "Base.h"
#include "admin.h"
#include "User.h"

Base::Base()
{
}

void Base::menu()
{
	system("cls");

	User us;
	string usn;
	int choice;
	welcome();
	cout << "Press 1 for Admin login:         " << endl;
	cout << " Press 2 for User login:          " << endl;
	cout << "Press 3 to REGISTER:            " << endl;
	cout << "Press 4 for Forget Password:     " << endl;
	cout << "Enter your choice:              " << endl;
	cin >> choice;
	system("cls");
	Beep(2000, 350);
	cin.get();
	if (choice == 1)
	{
		cout << "--------------------------------------------Welcome to our system!------------------------------------------------------\n";
		admin ad;
		ad.login();
	}
	else if (choice == 2)
	{
		us.userLogin();
	}
	else if (choice == 3)
	{
		us.registers();
	}
	else if (choice == 4)
	{
		us.forget();
	}
}

