#include <string>
// instead of using namespace std;
using std::string;

class enemy {
private:
  string name;
  int health;

public:
  enemy(string givenName = "Not a good guy");
void status();
//like a set function, not quite the same.
void changeHealth(int by);
int getHealth();
void setName(string input);
string getName();
};