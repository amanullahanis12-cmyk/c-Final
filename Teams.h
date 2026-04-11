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
//includes correct modules and files
#ifndef TEAMSH
#define TEAMSH
#include <iostream>
#include <vector>
#include <string>
using namespace std;
//The base class
class SportsTeams {
protected:
	//Variables initialized
	string userinput;
	int i;
	string game;
	string num;
public:
	//One regular method for menu and one to output statements and is based in this class
	void menu();
	virtual void league();
};
//Class derived from SportsTeams
class AddLeague : public SportsTeams {
private:
	//Variables for games and leagues
	string game;
	string leagues;
public:
	//Constructor
	AddLeague(string userinput) { game = userinput; };
	//Function derived from base class SportsTeams
	void league();
};
//Class used to add teams
class AddTeam : public SportsTeams {
private:
	//Variables for loop, element, and vector.
	int i;
	string team;
	vector<string> teams;
public:
	//Used to add team to vector
	void addinput();
	//Used to display vector
	void display();
	//Used to remove element from vector
	void removeteam();
};
//Used to remove an elemtn from vector
class DelTeam : public SportsTeams {
private:
	//Used for for loop
	int i;
	//Used to find element in vector
	int index;
	//Used for validation of input
	bool loopy;
public:
	//Function used to remove element from vector parameter.
	void destroyteam(vector<string> &name);
};



#endif