#include <iostream>
#include <cmath>

int planina(int n){

    //(2^n + 1) ^2 

    int a = pow(2,n) + 1; 

    int result = pow(a, 2);

    return result;

}

int main(){

    int n;
    std::cin >> n;

    std::cout << planina(n) << std::endl;
    return 0;
}