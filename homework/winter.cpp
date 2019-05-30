#include <iostream>

int main(){
    int bz = 0; //below zero variable
    int n;
    std::cin >> n;
    int temps[n];

    for(int i = 0; i < n; i++){
        std:: cin >> temps[i]; //insert n temps 
        if(temps[i] < 0){
            bz = bz + 1;
        }
    }
    std::cout << bz << std::endl;
    return 0;
}
