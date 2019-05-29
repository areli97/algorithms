#include <iostream>

int quad(int x, int y){
    if(x >= 1 && y >= 1){
        return 1;
    }
    else if(x <= -1 && y>=1){
        return 2;
    }
    else if(x <= -1 && y <= -1){
        return 3;
    }
    else{
        return 4;
    }
}

int main(){
    int x;
    std::cin >> x;
    int y;
    std::cin >> y;

    int quadrant = quad(x,y);
    std::cout << quadrant << std::endl;

    return 0;
}