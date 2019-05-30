#include <iostream>

int main() {
    char trump_card;
    std::cin >> trump_card;
   
    std::string card;
    std::cin>> card;

    if(card[1] == trump_card){
      std::cout << "a match";
    }

  return 0;
}