

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;
void display(const vector<string>& vec);


int main()
{
	int gems = 6;
	int action = 0;

	int space = 0;
	string newitem;

	string newitem2;
	char decision[3];

	cout << "\nWelcome to this free game!" << endl;
	cout << "\nYou have a limit of 10 spaces in your inventory for the items you'll collect during the game" << endl;
	cout << "\n------------------------------" << endl;

	//Codigo para crear el vector con los espacios gratuitos para el jugador

	vector<string> inventory;
	inventory.push_back("1");
	inventory.push_back("2");
	inventory.push_back("3");
	inventory.push_back("4");
	inventory.push_back("5");

	cout << "To start your journey, you have " << inventory.size() << " spaces available in your inventory and 6 Gems FOR FREE!!" << endl;

	cout << "\n------------------------------" << endl;
	//Codigo para comenzar a ingresar los valores del jugador dentro del vector

	cout << "\nYour character will start collecting objects in your inventory now:\n" << endl;

	for (unsigned int i = 0; i < inventory.size(); i++)

	{

		cin >> inventory[i];
	}

	cout << "\n";


	//Referencia para mostrar los items que el jugador ingreso en el vector

	cout << "The current items in your inventory are:\n" << endl;

	display(inventory);


	//Codigo para mostrar las diferentes opciones que tiene el jugador

	cout << "\n------------------------------" << endl;
	
	do
	{ 
		cout << "\nYour inventory is full!!" << endl;
		cout << "What would you like to do now?" << endl;

		cout << "\n1.- Replace an existing object" << endl;
		cout << "\n2.- Continue with existing objects" << endl;
		cout << "\n3.- Use Gems to add an additional space in your inventory" << endl;

		cout << "\n" << endl;
		cin >> action;
		cout << "\n" << endl;
		system("cls");

		switch (action)
		{

		case 1:

			cout << "Enter the number of the space you would like to replace. Choose from 0 to " << inventory.size() -1 << endl;
			cin >> space;

			cout << "Enter the new item you would like to add\n" << endl;
			cin >> newitem;

			cout << "You have replaced your " << inventory[space] << " for " << newitem << endl;
			inventory[space] = newitem;

			cout << "\n" << endl;
			cout << "The current items in your inventory are: \n" << endl;

			for (unsigned int i = 0; i < inventory.size(); i++)

			{
				cout << inventory[i] << endl;
			}

			cout << "\n";
			break;

		case 2:

			cout << "You will continue playing with your existing objects.\n" << endl;
			break;


		case 3:

			cout << "The cost for a new space available is 5 Gems.\n" << endl;
			cout << "Your current balance of Gems is " << gems << endl;

			if (gems > 5)
			{
				cout << "Enter the new item you want to add to your inventory: \n" << endl;
				cin >> newitem2;
				inventory.push_back(newitem2);
				gems = gems - 5;
				cout << "Your new balance of Gems is " << gems << endl;

				cout << "\n" << endl;
				cout << "The current items in your inventory are: \n" << endl;

				for (unsigned int i = 0; i < inventory.size(); i++)

				{
					cout << inventory[i] << endl;
				}

				cout << "\n";

			}

			else

			{
				cout << "You don't have enough Gems to complete this transaction \n" << endl;

			}

			break;
		default: cout << "Please select a valid option\n";


		}

		cout << "Do you want to go back to the Inventory Menu? Enter -Yes- or -No-\n";
		cin >> decision;
		cout << "\n" << endl;
		system("cls");
	} while ((strcmp(decision, "Yes") == 0 || strcmp(decision, "yes") == 0));



	cout << "Thanks for playing!" << endl;





}

//Referencia para imprimir valores del vector dentro del juego

void display(const vector<string>& vec) 
{

	vector<string>::const_iterator iter; 
	for (iter = vec.begin(); iter != vec.end(); iter++)
	{

		cout << *iter << endl;
	}


}
