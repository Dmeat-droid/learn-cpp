#include <iostream>

void doPrint(){
  std::cout << "Hell Yeah\n";
}

int returnFive(){
  return 5;
}

int main(){
  std::cout << "Starting main()\n";
  int x {returnFive()};
  std::cout << x << "\n";
  doPrint();
  doPrint();
  std::cout << "Back to main()\n";
  
  return 0;
}