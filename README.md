# C++ Final - Favorite Teams

**Author:** Amanullah Anis  
**Created:** May 5, 2025  
**Course:** CIS 161 - C++  
**Version:** 1.0  
**OS:** Windows 11  
**IDE:** Visual Studio 2022 Community  

---

## Overview

This program allows users to manage a list of their favorite sports teams. It asks for:

- Sport name
- League name (optional)
- Team names (3 teams)

Users can then:

1. Add items (3 teams)
2. Remove items by index
3. Display all items in the vector

The program uses object-oriented programming with inheritance, vectors, and exception handling.

---

## Technologies Used

- C++17
- Standard Template Library (vector, string, iostream)
- Exception handling (try/catch with runtime_error)

---

## File Structure

cplusplus-Final/
├── Teams.h # Class declarations (SportsTeams, AddLeague, AddTeam, DelTeam)
├── Teams1.cpp # Class method implementations
├── TeamsMain.cpp # Main function entry point
└── README.md # This file
text


---

## Class Hierarchy

SportsTeams (base class)
├── AddLeague (derived) - adds league name to output
├── AddTeam (derived) - adds teams to vector, displays vector, removes teams
└── DelTeam (derived) - removes element from vector by index
text


---

## Features

### SportsTeams (base class)
- `menu()` – Displays main menu (Add, Remove, Display, Exit)
- `league()` – Asks for sport and whether user has a league

### AddLeague (derived from SportsTeams)
- `league()` – Overrides base class to ask for league name

### AddTeam (derived from SportsTeams)
- `addinput()` – Adds 3 teams to the vector
- `display()` – Shows all teams in the vector
- `removeteam()` – Calls DelTeam to remove an element

### DelTeam (derived from SportsTeams)
- `destroyteam(vector<string> &name)` – Removes element at specified index with input validation and exception handling

---

## How to Run

### Step 1: Clone the repository

```bash
git clone https://github.com/amanullahanis12-cmyk/cplusplus-Final.git
cd cplusplus-Final

Step 2: Compile the program

Using g++ (Linux/Mac/Git Bash on Windows):
bash

g++ TeamsMain.cpp Teams1.cpp -o favorite_teams

Using Visual Studio (Windows):

    Open the project/solution file

    Build the solution (Ctrl+Shift+B)

Step 3: Run the program
bash

./favorite_teams

Or run the executable directly from Visual Studio.
Program Flow
Step 1: Enter sport and league
text

What sport do you want to use?
Soccer
Do you have a league?
yes
What is the league?
Premier League
Customize your vector of Soccer in this Premier League

Step 2: Main menu appears
text

1. Add item
2. Remove item
3. Display all items

Step 3: Add items (option 1)
text

Add item type 1
Add item type 2
Add item type 3
Manchester United
Arsenal
Chelsea

Step 4: Display items (option 3)
text

Manchester United
Arsenal
Chelsea

Step 5: Remove item (option 2)
text

Enter index: 1
Arsenal is being removed.

Step 6: Exit

Enter any number other than 1, 2, or 3 to exit the program.
Example Session
text

What sport do you want to use?
Football
Do you have a league?
yes
What is the league?
NFL
Customize your vector of Football in this NFL

1. Add item
2. Remove item
3. Display all items
1
Add item type 1
Add item type 2
Add item type 3
Chiefs
49ers
Eagles

1. Add item
2. Remove item
3. Display all items
3
Chiefs
49ers
Eagles

1. Add item
2. Remove item
3. Display all items
2
Enter index: 0
Chiefs is being removed.

1. Add item
2. Remove item
3. Display all items
3
49ers
Eagles

1. Add item
2. Remove item
3. Display all items
5

Process finished

Input Validation

    Index validation – If user enters an index outside the vector range, the program catches a runtime_error and prompts again

    Invalid index message – "Invalid index" is displayed and user can re-enter

Compilation Instructions (Detailed)
Windows (MinGW/g++):
bash

g++ TeamsMain.cpp Teams1.cpp -o TeamsApp.exe
TeamsApp.exe

Linux/Mac:
bash

g++ TeamsMain.cpp Teams1.cpp -o TeamsApp
./TeamsApp

Known Limitations

    User must add exactly 3 teams (hardcoded loop)

    Cannot add more than 3 teams without restarting

    League name is only displayed in a cout statement, not stored

    No option to edit a team without removing and re-adding

    Menu exits on any input other than 1, 2, or 3 (no confirmation)

Future Improvements

    Allow user to choose how many teams to add

    Add edit/update functionality

    Store league name in a variable

    Add confirmation before exit

    Save data to a file between sessions

Academic Honesty Statement
text

I attest that this is my original work.
I have not used unauthorized source code, either modified or unmodified.
I have not given other fellow student(s) access to my program.
— Amanullah Anis

Copyright

This is my own original work based on specifications issued by my instructor.
