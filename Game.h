// CS1300 Fall 2021
// Author: Kevin Buhler & Andrew Pleeter
// Recitation: 117 – Naga Sai Meenakshi Sistla
// Project 3

/*
This is the header for the Game class 
*/

#ifndef GAME_H
#define GAME_H
#include <string>
using namespace std;

class Game
{
private: // private variables
  int carmen_progress_level;
  string rps_selection;
  bool is_game_active;
  int robbed = 0;

public:
  // Default Constructor
  Game();

  // 30% chance of player being robbed
  bool isRobbed();

  // returns carmens current progress level
  int getCarmenProgressLevel();

  // adds 25% to carmens current progress level
  int addToCarmenProgressLevel();

  // generates random number from one to six
  int oneToSixRandom();

  // determines whether or not the hacker will infect a virus onto the player
  int didHackerInfectVirus();

  /*
  Generates a random number between 0 and 8:
  if number is between 0 and 2, rock was selected
  if number is between 3 and 5, paper was selected
  if number is between 6 and 8, scissor was selected 
  */
  int rockPaperScissors(int rps_selection = 0);
};

#endif