#include <iostream>
using namespace std;
#include "./include/ArrowInput.hpp"
char menu[3][10] = {"New", "Display", "Exit"};
int main() {
  int index = 0;

  drawMenu(menu, 3, index);

  printf("\nUse UP/DOWN to navigate and ENTER to select.\n");
  printf("Press Q to quit.\n");

  arrowkey(index);

  clear();
  cout << "Menu Closed.";

  return 0;
}
