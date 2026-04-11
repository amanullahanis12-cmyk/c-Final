/***************************************************************
* Name         : Favorite Teams
* Author       : Amanullah Anis
* Created      : 5/5/2025
* Course       : CIS 161 - C++
* Version      : 1.0
* OS           : Windows 11
* IDE          : Visual Studio 2022 Community
* Copyright    : This is my own original work based on
*                      specifications issued by our instructor
* Description  : Asks user for teams and puts input into a vector and lets them customize vector and view vector
*                      Input :Sport, League, Team names, index, and menu selection
*                      Output:Prompts and vector of favorite teams.
* Academic Honesty: I attest that this is my original work.
* I have not used unauthorized source code, either modified or
* unmodified. I have not given other fellow student(s) access
* to my program.
***************************************************************/
//Including module and teams headers
//including teams header
#include "Teams.h"

//method menu for SportsTeams class
void SportsTeams::menu() {
	//Use AddTeam class for object
	AddTeam newteam;
	//Used for verification of input
	bool loop = true;
	//Used to ask for league
	league();
	//USed for verification
	while (loop)
	{
		//Correct prompts 
		cout << "1. Add item" << endl;
		cout << "2. Remove item" << endl;
		cout << "3. Display all items" << endl;
		//Used to get input
		getline(cin, num);
		//if 1 is entered addinput method is called to add elements to vector
		if (num == "1") {
			newteam.addinput();			
		}
		//IF 2 is entered removeteam is called to remove an elemtn with given index input is done
		if (num == "2") {
			newteam.removeteam();
		}
		//If 3 is entered display is called and the vector is shown
		if (num == "3") {
			newteam.display();
		}
		//If anything else is entered the program ends
		if (num != "1" && num != "2" && num != "3") {
			loop = false;
		}
	}

}
//Used to get league
void SportsTeams::league() {
	//Correct prompt and input retreival for sport and league
	cout << "What sport do you want to use?" << endl;
	getline(cin, game);
	cout << "Do you have a league? " << endl;
	getline(cin, userinput);
	//if user says anything but yes no league is added
	if (userinput != "yes") {
		cout << "Customize your vector of " << game << endl;
	}
	//If yes is inputted then league from AddLeague is called
	else {
		AddLeague league1(game);
		league1.league();
	}
}
//Used to add elements to vector
void AddTeam::addinput() {
	//Correct prompts
	cout << "Add item type 1" << endl;
	cout << "Add item type 2" << endl;
	cout << "Add item type 3" << endl;
	//Input is appended to vector
	for (i = 0;i < 3;i++) {
		getline(cin, team);
		teams.push_back(team);
	}
	}
//Used to display team
void AddTeam::display() {
	//If there are no teams in vector correct prompt is displayed
	if (teams.empty()) {
		cout << "Nothing in here" << endl;
	}
	//Iterates through the vector and displays the teams
	else {
		for (i = 0;i < teams.size();i++) {
			cout << teams.at(i) << endl;
		}
	}
}
//Used to remove an element in the vector
void AddTeam::removeteam() {
	//Calls destoryteam from another class 
	DelTeam removeteam;
	removeteam.destroyteam(teams);
}
//Used to remove an elemnt from vector takes in a vector as a parameter
void DelTeam::destroyteam(vector<string> &name) {
	//correct prompt to get input from user
	cout << "Enter index: ";
	//Used for input validation
	loopy = true;
	while (loopy) {
		try {
			//Gets input and validates that it is in the vecotr and if not thros a runtime_error and correct prompt
			cin >> index;
			if (index > name.size()) {
				throw runtime_error("Invalid index");
			}
			if (index < 0) {
				throw runtime_error("Invalid index");
			}
			//Iterates through the vector and searches for the element with the index and removes the elemtn then outputs this to user
			for (i = 0;i < name.size();i++) {
				if (index == i) {
					cout << name.at(i) << " is being removed." << endl;
					name.erase(name.begin() + index);
					//Clear the cin stream and end while loop.
					cin.clear();
					string garbage;
					getline(cin, garbage);
					loopy = false;
				}
			}
		}
		//Used to validate input
		catch (runtime_error& excpt) {
			//Outputs correct prompt and than prompts the user agains for input for index and clears the cin stream.
			cout << excpt.what() << endl;
			cout << "Enter index: ";
			cin.clear();
			string garbage;
			getline(cin, garbage);
		}
	}
}
//Used to add league to vector. Derived from base class
void AddLeague::league() {
	//Correct prompt to ask user for input and gets input
	cout << "What is the league?" << endl;
	getline(cin, leagues);
	//Correct propmt for informing user of names they have inputted.
	cout << "Customize your vector of " << game << " in this " << leagues << endl;
}

