#include <iostream>

int main(){
  int a {};

  std::cout << "Enter an integer: ";
  std::cin >> a;
  std::cout << "Double " << a << " is: " << 2 * a << "\n";
  std::cout << "Triple " << a << " is: " << 3 * a << "\n";
  

  return 0;
}