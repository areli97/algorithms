#include <iostream>
#include <string>

std::string stones(int n){

    if (n % 2 == 1){
        return "Alice";
    }

    else{
        return "Bob";
    }

}

int main(){

    int n;
    std::cin >> n;

    std::string winner = stones(n);
    std::cout << winner << std::endl;

    return 0;

}