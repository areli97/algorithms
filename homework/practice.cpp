#include <iostream>


int main(){

    std::string hello = "helloooooo";

    if(hello.size() == 0){
        std::cout << true << std::endl;
    }
    else{
        std::cout << false<< std::endl;

    }

    std::cout << hello.length() << std::endl;
    
}
