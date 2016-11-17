#include <iostream>

using namespace std;

class A {

private:
  int private_var;

public:
    A() { private_var = 0; }
    void print() { cout << private_var << endl; }
};

int main()
{
    A ob;
    int *ptr = (int*)&ob;
    (*ptr)++; // private_var changed to 1.
    ob.print();
    return 0;
}
