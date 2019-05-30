#include <iostream>
#include <cmath>
#include <string>

int main(){

    std::string n;
    std::cin >> n;
    int b = stoi(n);

    int sum = 0;

    for(int i = 0; i < b; i++){
        std::string num;
        std::cin >> num;
        
        std::string newNum = num.substr(0, num.length()-1);
        int number = stoi(newNum); 
        
        std::string raise = num.substr(num.length() - 1);
        int power = stoi(raise);
        
        int result = pow(number,power);
        sum = sum + result;
        

    }

    std::cout << sum << std::endl;

    return 0;
}