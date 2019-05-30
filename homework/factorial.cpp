#include <iostream>
#include <vector>
#include <string>

int factorial(int n){
    int factor = 1;

    for(int i = 1; i <= n; i++){
        factor = factor * i;
        
    }

    std::string conversion = std::to_string(factor); // convert the factor into string
    std::string last_factor = conversion.substr(conversion.length()- 1);
    int result = stoi(last_factor);

    return result;


}

int main(){
    int tc; //number of test cases
    std::cin >> tc;
    int values [tc];
    std::vector <int> facto;

    for(int i = 0; i < tc; i++){
        std::cin >> values[i];
        
    }

    for(int i = 0; i < tc; i++){
        int a = values[i];
       int last_digit = factorial(a);
        facto.push_back(last_digit);
        std:: cout << facto[i] << std::endl;
    } 



    return 0;
}