// CS1300 Fall 2021
// Author: Kevin Buhler & Andrew Pleeter
// Recitation: 117 – Naga Sai Meenakshi Sistla
// Project 3

#include "Game.h"
#include <cstdlib>
using namespace std;

Game::Game()
{
  carmen_progress_level = 0; // int
  rps_selection = "";        // string - rock paper scissors selection
  is_game_active = 1;        // bool
  robbed = 0;                // int
}

// 30% chance of player being robbed
// randomly pics a number between 0 and 100
// if number is less than 30, the player is being robbed
bool isRobbed()
{
  return false;
}

// returns carmens current progress level
int Game::getCarmenProgressLevel()
{
  return carmen_progress_level;
}

// adds carmens current progress level by 25
int Game::addToCarmenProgressLevel()
{
  carmen_progress_level += 25;
}

/*
Generates a random number between 0 and 8:
  if number is between 0 and 2, rock was selected
  if number is between 3 and 5, paper was selected
  if number is between 6 and 8, scissor was selected 
*/
int rockPaperScissors(int rps_selection = 0)
{
  return rps_selection;
}

// generates random number from one to six
int oneToSixRandom()
{
  int random = rand() % 6 + 1;
  return random;
}

// 10% chance that player gets infected after losing
// determines whether or not the hacker will infect a virus onto the player
int didHackerInfectVirus()
{
  return 1;
}