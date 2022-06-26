#include <iostream>
#include <string>

int main() {
  std::cout << "Please enter your first name: ";
  std::string name;
  std::cin >> name;

  const std::string greeting = "Hello, " + name + "!";
  const std::string spaces(greeting.size(), ' ');
  const std::string second = "* " + spaces + " *";
  const std::string first(second.size(), '*');

  std::cout << "Hello, " << name << "!\n";
  std::cout << first << "\n";
  std::cout << second << "\n";
  std::cout << "* " << greeting << " *\n";
  std::cout << second << "\n";
  std::cout << first << "\n";
  return 0;
}