#include<iostream>
#include<conio.h>
using namespace std;


void menu();


int main()
{



	int option, balance = 0;
	string a;


	do
	{
		menu();
		cout << "\nenter the option:";
		cin >> option;



		switch (option)
		{

		case 1:cout << "Your Balance:" << balance;
			getch();
			break;
		case 2:cout << "Enter amount to deposit:";
			int deposit;
			cin >> deposit;
			balance += deposit;
			_getch();
			break;
		case 3:cout << "enter withdraw amout:";
			int withdraw;
			cin >> withdraw;
			if (withdraw < balance)
			{
				balance -= withdraw;
				cout << "\nsuccessfuly withdraw\n";
			}
			else
			{
				cout << "not enough money";
			}
			_getch();
			break;
		case 4:cout << "enter Money to Transfer:";
			int transfer;
			cin >> transfer;

			if (transfer > balance)
			{
				cout << "not enough money";
			}
			else
			{
				cout << "enter sender address:";
				cin >> a;
				balance -= transfer;

				cout << "money send sucessfuly";
			}
			_getch();
			break;
		}
		system("cls");

	} while (option < 5);

	system("pause  0");
}


void menu()
{
	cout << "\n***********MENU***********"<<endl;
	cout << "1.check balance" <<endl;
	cout << "2.deposit" << endl;
	cout << "3.withdraw"<<endl;
	cout << "4.money transfer" << endl;
	cout << "5.exit"<<endl;


}

