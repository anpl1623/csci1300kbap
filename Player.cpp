// CS1300 Fall 2021
// Author: Kevin Buhler & Andrew Pleeter
// Recitation: 117 – Naga Sai Meenakshi Sistla
// Project 3

/*
This is the implentation for the Player class 
*/

#include "Player.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

// Default Constructor
Player::Player()
{
  player_name_input = "";
  computer_maintenance_level = 100;
  frustration_level = 0;
  internet_level = 1;
  hackers_defeated = 0;
  player_dogecoins = 200;
  player_position = 0;
  current_num_vpn = 0;
  current_num_cpu = 0;
  current_num_gpu = 0;
  current_num_power_supplies = 0;
  current_num_computer_cases = 0;
  current_num_internet_card = 0;
  current_num_keyboards = 0;
  current_num_mouses = 0;
  current_num_premade_computers = 0;
  current_num_virus_on_computer = 0;
  current_num_anti_virus_on_computer = 0;
}

string Player::getName()
{
  return player_name_input;
}

void Player::setName(string set_name)
{
  player_name_input = set_name;
}

// returns player dogecoins
int Player::getPlayerDogeCoins()
{
  return player_dogecoins;
}

// sets player dogecoins
void Player::setPlayerDogeCoins(int set_dogecoins)
{
  player_dogecoins = set_dogecoins;
}

// adds 5 to the players number of dogecoin
void Player::addPlayerDogeCoins()
{
  player_dogecoins += 5;
}

// returns frustration level
int Player::getFrustrationLevel()
{
  return frustration_level;
}

// sets frustration level
void Player::setFrustrationLevel(int set_frustration)
{
  frustration_level = set_frustration;
}

// returns internet level
int Player::getInternetLevel()
{
  return internet_level;
}

// sets internet level
void Player::setInternetLevel(int set_internet_level)
{
  internet_level = set_internet_level;
}

// returns the VPN number
int Player::getVPNNum()
{
  return current_num_vpn;
}

// sets the VPN number
void Player::setVPNNum(int set_vpn_num)
{
  current_num_vpn = set_vpn_num;
}

// returns the hackers defeated
int Player::getHackersDefeated()
{
  return hackers_defeated;
}

// sets the number of hackers defeated
void Player::setHackersDefeated(int set_hackers_defeated)
{
  hackers_defeated = set_hackers_defeated;
}

// adds 2 to the frustration level
void Player::addFrustrationLevel()
{
  frustration_level += 2;
}

// returns the computers maintenance level
int Player::getComputerMaintenanceLevel()
{
  return computer_maintenance_level;
}

// sets the computers maintenance level based on parts used
void Player::repairComputerMaintenanceLevel(int parts_to_repair)
{
  if (parts_to_repair == 1)
  {
    computer_maintenance_level += 20;
  }
  else if (parts_to_repair == 2)
  {
    computer_maintenance_level += 40;
  }
  else if (parts_to_repair == 3)
  {
    computer_maintenance_level += 60;
  }
  else if (parts_to_repair == 4)
  {
    computer_maintenance_level += 80;
  }
  else
  {
    computer_maintenance_level += 100;
  }
}