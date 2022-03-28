// Nic Wetzel
// March 3, 2021
// 5th Line Diner Menu
// Menu for breakfast and lunch that a user can order from and get a total at the end.

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	// Declaring variables and string for menu choices.

	string userChoice = "";
	string breakfastChoice = "";
	string breakfastDrinkChoice = "";
	string lunchChoice = "", lunchDrinkChoice = "";
	string dessert = "";
	string dessertChoice = "";
	string customerName;
	double foodPrice = 0, drinkPrice = 0, dessertPrice = 0, totalPrice, taxAmount, mealPrice;
	const double TAX = .075;

	// Name of diner and asks for name of user. Also asks if the user would like breakfast or lunch.

	cout << "-------------5th Line Diner-------------\n" << endl;
	cout << fixed << setw(20) << "MENU\n" << endl;

	cout << "Please enter your name: ";
	cin >> customerName;

	cout << "Would you like to order breakfast or lunch?\n";
	cout << "\nB = Breakfast" << endl;
	cout << "L = Lunch" << endl;

	
	cin >> userChoice;

	// Lets the user know if they have entered an invalid choice. Program must be restarted if input is wrong.

	if (userChoice != "B" && userChoice != "L" && userChoice != "b" && userChoice != "l")
	{
		cout << "You must select either Breakfast or Lunch menu." << endl;
		cout << "Please restart the program and try again." << endl;
		return 0;
	}
	
	// If user selects B for breakfast, it displays the following menu to select from.

	if (userChoice == "B" || userChoice == "b")
	{
		cout << "--------5th Line Diner Breakfast Menu--------\n" << endl;
		cout << "S = Scrambled Eggs Breakfast:" << fixed << right << setw(10) << setprecision(2) << "$4.99" << endl;
		cout << "O = Omelet Breakfast:" << fixed << right << setw(18) << setprecision(2) << "$6.99" << endl;
		cout << "F = French Toast Breakfast:" << fixed << right << setw(12) << setprecision(2) << "$5.99" << endl;
		cout << "W = Waffle Breakfast:" << fixed << right << setw(18) << setprecision(2) << "$5.99" << endl;

		// if/else if statement going through each choice for breakfast and declares the cost of each choice.

		cin >> breakfastChoice;

		if (breakfastChoice == "S" || breakfastChoice == "s")
		{
			cout << "You have chosen the scrambled eggs breakfast." << endl;
			cout << "Each breakfast comes with toast, sausage links, and your choice of drink." << endl;
			foodPrice = 4.99;
		}

		else if (breakfastChoice == "O" || breakfastChoice == "o")
		{
			cout << "You have chosen the omelet breakfast." << endl;
			cout << "Each breakfast comes with toast, sausage links, and your choice of drink." << endl;
			foodPrice = 6.99;
		}
		else if (breakfastChoice == "F" || breakfastChoice == "f")
		{
			cout << "You have chosen the french toast breakfast." << endl;
			cout << "Each breakfast comes with toast, sausage links, and your choice of drink." << endl;
			foodPrice = 5.99;
		}
		else if (breakfastChoice == "W" || breakfastChoice == "w")
		{
			cout << "You have chosen the waffle breakfast." << endl;
			cout << "Each breakfast comes with toast, sausage links, and your choice of drink." << endl;
			foodPrice = 5.99;
		}
		else
		{
			cout << "You must enter one of the breakfast choices." << endl;
			cout << "Please restart the program and try again." << endl;
			return 0;

		}

		// If user input is a valid breakfast choice, a drink menu is given next.

		if (breakfastChoice == "S" || breakfastChoice == "s" || breakfastChoice == "O" || breakfastChoice == "o" || breakfastChoice == "F" || breakfastChoice == "f" || breakfastChoice == "W" || breakfastChoice == "w")
		{
			cout << "\n------Breakfast Drink Menu------\n" << endl;
			cout << "M = Milk:" << fixed << right << setw(18) << setprecision(2) << "$1.99" << endl;
			cout << "J = Orange Juice:" << fixed << right << setw(10) << setprecision(2) << "$1.99" << endl;
			cout << "C = Coffee:" << fixed << right << setw(16) << setprecision(2) << "$0.99" << endl;
			cout << "W = Water:" << fixed << right << setw(16) << "Free" << endl;
		}

		// if/else if statement going through each choice for breakfast drinks and declares the cost of each choice.

		cin >> breakfastDrinkChoice;

		if (breakfastDrinkChoice == "M" || breakfastDrinkChoice == "m")
		{
			cout << "You have chosen milk to drink with your breakfast." << endl;
			drinkPrice = 1.99;
		}
		else if (breakfastDrinkChoice == "J" || breakfastDrinkChoice == "j")
		{
			cout << "You have chosen orange juice to drink with your breakfast." << endl;
			drinkPrice = 1.99;
		}
		else if (breakfastDrinkChoice == "C" || breakfastDrinkChoice == "c")
		{
			cout << "You have chosen coffee to drink with your breakfast." << endl;
			drinkPrice = 0.99;
		}
		else if (breakfastDrinkChoice == "W" || breakfastDrinkChoice == "w")
		{
			cout << "You have chosen water to drink with your breakfast." << endl;
			drinkPrice = 0;
		}
		else
		{
			cout << "You must choose a drink from the menu." << endl;
			cout << "Please restart the program and try again." << endl;
			return 0;
		}
	}

	// if/else if statement going through each choice for lunch and declares the cost of each choice.

	if (userChoice == "L" || userChoice == "l")
	{
		cout << "--------5th Line Diner Lunch Menu--------\n" << endl;
		cout << "C = Cheeseburger:" << fixed << right << setw(18) << setprecision(2) << "$6.99" << endl;
		cout << "B = Bacon Cheeseburger:" << fixed << right << setw(12) << setprecision(2) << "$7.99" << endl;
		cout << "G = Grilled Cheese:" << fixed << right << setw(16) << setprecision(2) << "$4.99" << endl;
		cout << "V = Veggie Burger:" << fixed << right << setw(17) << setprecision(2) << "$8.99" << endl;

		cin >> lunchChoice;

		if (lunchChoice == "C" || lunchChoice == "c")
		{
			cout << "You have chosen the cheeseburger lunch." << endl;
			cout << "Each lunch comes with fries and a drink of your choice." << endl;
			foodPrice = 6.99;
		}
		else if (lunchChoice == "B" || lunchChoice == "b")
		{
			cout << "You have chosen the bacon cheeseburger lunch." << endl;
			cout << "Each lunch comes with fries and a drink of your choice." << endl;
			foodPrice = 7.99;
		}
		else if (lunchChoice == "G" || lunchChoice == "g")
		{
			cout << "You have chosen the grilled cheese lunch." << endl;
			cout << "Each lunch comes with fries and a drink of your choice." << endl;
			foodPrice = 4.99;
		}
		else if (lunchChoice == "V" || lunchChoice == "v")
		{
			cout << "You have chosen the veggie burger lunch." << endl;
			cout << "Each lunch comes with fries and a drink of your choice." << endl;
			foodPrice = 8.99;
		}
		else
		{
			cout << "You must enter one of the lunch choices." << endl;
			cout << "Please restart the program and try again." << endl;
			return 0;

		}

		// if/else if statement going through each choice for lunch drinks and declares the cost of each choice.
		\
		if (lunchChoice == "C" || lunchChoice == "c" || lunchChoice == "B" || lunchChoice == "b" || lunchChoice == "G" || lunchChoice == "g" || lunchChoice == "V" || lunchChoice == "v")
		{
			cout << "\n------Lunch Drink Menu------\n" << endl;
			cout << "F = Fountain Drink:" << fixed << right << setw(16) << setprecision(2) << "$1.99" << endl;
			cout << "L = Lemonade:" << fixed << right << setw(22) << setprecision(2) << "$2.49" << endl;
			cout << "T = Ice Tea:" << fixed << right << setw(23) << setprecision(2) << "$1.99" << endl;
			cout << "W = Water:" << fixed << right << setw(24) << "Free" << endl;
		}

		cin >> lunchDrinkChoice;

		if (lunchDrinkChoice == "F" || lunchDrinkChoice == "f")
		{
			cout << "You have chosen a fountain drink with your lunch." << endl;
			drinkPrice = 1.99;
		}
		else if (lunchDrinkChoice == "L" || lunchDrinkChoice == "l")
		{
			cout << "You have chosen lemonade to drink with your lunch." << endl;
			drinkPrice = 2.49;
		}
		else if (lunchDrinkChoice == "T" || lunchDrinkChoice == "t")
		{
			cout << "You have chosen iced tea to drink with your lunch." << endl;
			drinkPrice = 1.99;
		}
		else if (lunchDrinkChoice == "W" || lunchDrinkChoice == "w")
		{
			cout << "You have chosen water to drink with your lunch." << endl;
			drinkPrice = 0;
		}
		else
		{
			cout << "You must choose a drink from the menu." << endl;
			cout << "Please restart the program and try again." << endl;
			return 0;
		}
	}

	// Output asking the user if they would like dessert.

	cout << "\nWould you like a piece of pie for dessert?" << endl;
	cout << "\nY = Yes" << endl;
	cout << "N = No" << endl;

	cin >> dessert;

	// Lets the user know if they have entered an invalid choice. Program must be restarted if input is wrong.

	if (dessert != "Y" && dessert != "y" && dessert != "N" && dessert != "n")
	{
		cout << "You must enter a Y for yes or an N for no." << endl;
		cout << "Please restart the program and try again." << endl;
		return 0;
	}

	if (dessert == "N" || dessert == "n")
	{
		cout << "You have chosen not to have dessert." << endl;
	}

	// if/else if statement going through the choices for dessert.

	if (dessert == "Y" || dessert == "y")
	{

		cout << "\n-------5th Line Diner Dessert Menu-------\n" << endl;
		cout << "A = Apple Pie:" << fixed << right << setw(22) << setprecision(2) << "$2.99" << endl;
		cout << "P = Pecan Pie:" << fixed << right << setw(22) << setprecision(2) << "$3.49" << endl;
		cout << "K = Keylime Pie:" << fixed << right << setw(20) << setprecision(2) << "$4.99" << endl;



		cin >> dessertChoice;

		if (dessertChoice == "A" || dessertChoice == "a")
		{
			cout << "You have chosen an apple pie dessert." << endl;
			dessertPrice = 2.99;
		}

		else if (dessertChoice == "P" || dessertChoice == "p")
		{
			cout << "You have chosen a pecan pie dessert." << endl;
			dessertPrice = 3.49;
		}
		else if (dessertChoice == "K" || dessertChoice == "k")
		{
			cout << "You have chosen a kelime pie dessert." << endl;
			dessertPrice = 4.99;
		}
		else
		{
			cout << "You must choose a dessert from the menu." << endl;
			cout << "Please restart the program and try again." << endl;
			return 0;
		}
	}
	
	
	// Formulas for finding the cost of the food, tax amout, and the total price of the meal.

	mealPrice = foodPrice + drinkPrice + dessertPrice;
	taxAmount = (foodPrice + drinkPrice + dessertPrice) * TAX;
	totalPrice = foodPrice + drinkPrice + dessertPrice + taxAmount;


	// Output showing the cusomer name, and bill total.

	cout << "\n----5th Line Diner Bill----\n" << endl;
	cout << "Customer Name: " << customerName << endl;

	cout << "\nFood Price: " << fixed << right << setw(19) << setprecision(2) << "$" << mealPrice << endl;
	cout << "Tax: " << fixed << right << setw(27) << setprecision(2) << "$" << taxAmount << endl;
	cout << "Total Cost: " << fixed << right << setw(19) << setprecision(2) << "$" << totalPrice << endl;


	system("pause");
	return 0;

}
