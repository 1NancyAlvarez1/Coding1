#include "Enemy.h"
#include <iostream>
using std::cout;
//define the constructor
enemy::enemy(string givenName) {
  name = givenName;
  health = 10;
 cout << name << " has appeared!\n";
  
}

void enemy::status() {
  cout << "His name is " << name << " and he wants to duel! He has ";
  cout << health << " health.\n";
}

void enemy::changeHealth(int by) {
  health += by;
  if(health < 0) {
    health = 0;
  }
  if(health > 10) {
    health = 10;
  }
}

int enemy::getHealth() {
return health;

}

  void enemy::setName(string input) {
    name = input;
  }
  
  string enemy::getName() {
    return name;
}