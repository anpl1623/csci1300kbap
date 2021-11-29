// CS1300 Fall 2021
// Author: Kevin Buhler & Andrew Pleeter
// Recitation: 117 – Naga Sai Meenakshi Sistla
// Project 3

/*
This is the header for the Player class
*/

#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

class Player
{
private: // private variables
  string player_name_input;
  int computer_maintenance_level;
  int frustration_level;
  int internet_level;
  int hackers_defeated;
  int player_dogecoins;
  int player_position;
  int current_num_vpn;
  int current_num_cpu;
  int current_num_gpu;
  int current_num_power_supplies;
  int current_num_computer_cases;
  int current_num_internet_card;
  int current_num_keyboards;
  int current_num_mouses;
  int current_num_premade_computers;
  int current_num_virus_on_computer;
  int current_num_anti_virus_on_computer;

public:
  // Default Constructor
  Player();

  // return the name
  string getName();

  // sets the name
  void setName(string set_name);

  // returns player dogecoins
  int getPlayerDogeCoins();

  // sets player dogecoins
  void setPlayerDogeCoins(int set_dogecoins);

  // adds to the players number of dogecoin
  void addPlayerDogeCoins();

  // returns frustration level
  int getFrustrationLevel();

  // sets frustration level
  void setFrustrationLevel(int set_frustration);

  // adds 2 to the frustration level
  void addFrustrationLevel();

  // returns internet level
  int getInternetLevel();

  // sets internet level
  void setInternetLevel(int set_internet_level);

  // returns the VPN number
  int getVPNNum();

  // sets the VPN number
  void setVPNNum(int set_vpn_num);

  // returns the hackers defeated
  int getHackersDefeated();

  // sets the number of hackers defeated
  void setHackersDefeated(int set_hackers_defeated);

  // returns the computers maintenance level
  int getComputerMaintenanceLevel();

  // sets the computers maintenance level
  void repairComputerMaintenanceLevel(int parts_to_repair);
};

#endif