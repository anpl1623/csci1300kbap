// CS1300 Fall 2021
// Author: Kevin Buhler & Andrew Pleeter
// Recitation: 117 – Naga Sai Meenakshi Sistla
// Project 3

/*
This is the header for the Hacker class 
*/

#ifndef HACKER_H
#define HACKER_H
#include <string>
using namespace std;

class Hacker
{
private: // private variables
  string hacker_name;
  int hacker_level;
  int hacker_room_number;
  int hacker_position;

public:
  // Default Constructor
  Hacker();

  // gets the hacker name from hackers.txt
  string getHackerName();

  // determines whether the hacker will fight
  int willHackerFight();

  // randomly sets the next hacker position
  void setHackerPosition();

  // returns the hacker's positions
  int getHackerPosition();
};

#endif