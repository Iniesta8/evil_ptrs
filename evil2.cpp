#include <iostream>

// #define private public

using namespace std;

/*
class DumbClass
{
  private:
    int my_private_int;
  public:
    DumbClass& backdoor() {
      return *this;
    }
};
*/

class Auto 
{
  private:
    int ps;

  public:
    Auto(int ps) {
      this->ps = ps;
    }
};

int main(int argc, char **args)
{
  int x;
  int* y;
  Auto* auto_ptr;

  Auto a(136);

  auto_ptr = &a;

  x = ((int *)auto_ptr)[0];

  cout << x << endl; // Funktioniert --> Ausgabe: 136

  // Dies funktioniert nicht --> 'ps' is a private member of 'Auto' 
  // cout << auto_ptr->ps << endl;  

  // Eine Aenderung der Variable funktioniert natuerlich auch
  y = (int *)auto_ptr;
  (*y)++;
  cout << y[0] << endl; // Ausgabe: 137

  return 0;
}
