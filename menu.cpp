// CS1300 Fall 2021
// Author: Kevin Buhler & Andrew Pleeter
// Recitation: 117 – Naga Sai Meenakshi Sistla
// Project 3

/*
This program gives the user 9 options in a menu. They then choose and input about songs and listeners until they quit out of the menu.
Options:
  1. 
  2. 
  3. 
  4. 
  5. 
  6. 
  7. 
  8. 
  9. 
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{

  // user input for initial menu option
  int menu_option;

  do // do this first, then check after
  {
    cout << "Select a numerical option:\n======Main Menu=====\n1. Read songs from file\n2. Print all songs\n3. Song-count by genre\n4. Songs from most common genre\n5. Add listener\n6. Read listens from file\n7. Get number of listens by a listener\n8. Get listener statistics\n9. Quit" << endl;
    cin >> menu_option;

    if (menu_option > 9 || menu_option <= 0) // check if input is invalid
    {
      cout << "Invalid input." << endl;
    }

    switch (menu_option) // switch that reads the user input
    {
    case 1:

      break;

    case 2: //

      break;

    default:
      break;
    }
  } while (menu_option != 2); // do this while the user doesn't quit

  return 0;
}