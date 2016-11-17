#include <iostream>

using namespace std;

class Person {
  private:
    string name;

  public:
    void setName(const string& name) {
      this->name = name;
    }

    string getName()const {
      return this->name;
    }
};

struct Hacker {
  string name;
};

int main(int argc, char** argv) {

  Person p;
 
  p.setName("Jon");
  
  cout << p.getName() << endl; // Output: Jon
  
  void *ptr= &p;
  
  struct Hacker *hacker = (Hacker*)ptr;
  
  hacker->name = "Jack";
  
  cout << p.getName() << endl; // Output: Jack

  return 0;
}
