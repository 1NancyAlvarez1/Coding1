#include "Enemy.h"
#include <iostream>
using std::cout;
using std::cin;

int main() {
  std::cout << "Hello World!\n";
  enemy duke; ("Duke");
  duke.status();

  cout << "A storm passed by, causing Duke to lose 2 health.\n";
  duke.changeHealth(-2);
  cout << "Duke's health is now " << duke.getHealth() << ".\n";

  cout << "What would you like to name Duke?\n";
  string input;
  cin >> input;
  //setting the name V
  duke.setName(input);
  //getting the name V
  cout << "Duke's new name is now " << duke.getName() << ".\n";
}