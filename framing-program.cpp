#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "Please enter your first name: ";
  string name;
  cin >> name;
  cout << "Please enter how much padding you want: ";
  int pad;
  cin >> pad;

  const string greeting = "Hello, " + name + "!";
  const int rows = pad*2 +3;
  const string::size_type cols = greeting.size() + pad*2 + 2;
  cout << "\n";

  for (int r = 0; r < rows; ++r) {
    string::size_type c = 0;
    if (r == pad+1) { 
      cout << "*" + string(pad, ' ') + greeting + string(pad, ' ') + "*";
    } else if (r == 0 || r == rows-1) {
      cout << string(cols, '*');
    } else {
      cout << "*" + string(cols-2, ' ') + "*";
    }
    cout << "\n";
  }
  return 0;
}