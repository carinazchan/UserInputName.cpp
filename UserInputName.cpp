#include <iostream>
/*using namespace std; --> If this is included at the start of the program,
std:: does NOT need to be used at the beginning of the lines.
*/

int main()
{

  //Variables
  std::string name = "";

  std::cout << "What is your name: ";
  std::cin >> name;
  std::cout << name << " is a beautiful name :)\n";
}
