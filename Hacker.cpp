// CS1300 Fall 2021
// Author: Kevin Buhler & Andrew Pleeter
// Recitation: 117 – Naga Sai Meenakshi Sistla
// Project 3

/*
This is the implentation for the Hacker class 
*/

#include "Hacker.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

Hacker::Hacker()
{
  string hacker_name = "";
  int carmen_progress_level = 0;
  int hacker_room_number = 0;
  int hacker_position = 0;
}

// gets the hacker name from hackers.txt
// will have to use a getline and split()
// will find the hacker's username
string Hacker::getHackerName()
{
  return hacker_name;
}

// determines whether the hacker will fight
// a randomly generated integer ranging from 0 to 100
// if the number is odd then the hacker is willing to fight
int Hacker::willHackerFight()
{
  return 1;
}

// randomly sets the next hacker position
// returns the room number, and it randomly appears
// will generate a random number and decide whether it will
void Hacker::setHackerPosition()
{
  hacker_position = 1;
}

// returns the hacker's positions
int Hacker::getHackerPosition()
{
  return hacker_position;
}
