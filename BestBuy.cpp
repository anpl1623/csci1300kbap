// CS1300 Fall 2021
// Author: Kevin Buhler & Andrew Pleeter
// Kevin's Recitation: 117 – Naga Sai Meenakshi Sistla
// Project 3

/*
This is the implentation for the BestBuy class 
*/

#include "BestBuy.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

// Default Constructor
BestBuy::BestBuy()
{
  cpu_cost = 10;
  gpu_cost = 20;
  power_supply_cost = 5;
  computer_case_cost = 15;
  internet_card_cost = 5;
  keyboard_cost = 10;
  mouse_cost = 10;
  premade_computer_cost = 100;
  antivirus_cost = 10;
  num_of_antivirus_left = 1;
  vpn_cost = 20;
  num_of_vpn_left = 2;
  total_cost = 0;
  internet_level_2_cost = 10;
  internet_level_3_cost = 25;
  internet_level_4_cost = 40;
  internet_level_5_cost = 50;
  store_percent_level = 0;
}
// returns the cost of the cpu
int BestBuy::getCPUCost()
{
  return cpu_cost;
}
// returns the cost of the gpu
int BestBuy::getGPUCost()
{
  return gpu_cost;
}
// returns the cost of the vpn
int BestBuy::getVPNCost()
{
  return vpn_cost;
}
// returns the cost of the power supply
int BestBuy::getPowerSupplyCost()
{
  return power_supply_cost;
}
// returns computer case cost
int BestBuy::getComputerCaseCost()
{
  return computer_case_cost;
}
// returns the cost of the internet card
int BestBuy::getInternetCardCost()
{
  return internet_card_cost;
}
// returns the cost of a keyboard
int BestBuy::getKeyboardCost()
{
  return keyboard_cost;
}
// returns the cost of a mouse
int BestBuy::getMouseCost()
{
  return mouse_cost;
}
// returns the price of a pre-made computer
int BestBuy::getPreMadeComputerCost()
{
  return premade_computer_cost;
}

// returns the cost of an Anti-Virus
int BestBuy::getAntiVirusCost()
{
  return antivirus_cost;
}

// gets the number of anti virus usb sticks left
int BestBuy::getNumAntiVirusLeft()
{
  return num_of_antivirus_left;
}

// returns the total cost
int BestBuy::getTotalCost()
{
  return total_cost;
}

// returns the number of vpn left
int BestBuy::getNumVPNLeft()
{
  return num_of_vpn_left;
}

// returns the internet level costs at level 2
int BestBuy::getInternetLevel2Cost()
{
  return internet_level_2_cost;
}

// returns the cost of the internet at level 3
int BestBuy::getInternetLevel3Cost()
{
  return internet_level_3_cost;
}

// returns the cost of the internet at level 4
int BestBuy::getInternetLevel4Cost()
{
  return internet_level_4_cost;
}

// returns the cost of the internet at level 5
int BestBuy::getInternetLevel5Cost()
{
  return internet_level_5_cost;
}

// returns the current store tax percentage
int BestBuy::getStorePercentLevel()
{
  return store_percent_level;
}

// sets the current store tax percentage
int BestBuy::setStorePercentLevel(int percent_increase)
{
  store_percent_level += percent_increase;
}
