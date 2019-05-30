#include <iostream>
#include <string>
#include <set>

int main(){
    int tc; //test cases
    std::cin >> tc;

    for (int i = 0; i < tc; i++){
        int n; //how many trips per test case
        std::cin >> n;
        std::string destination; 
        std::set <std::string> trips;//set will make sure no city gets repeated more than once

        for(int j = 0; j < n; j++){
          std::cin >> destination;  
          trips.emplace(destination);//as the user inputs cities, it will only
                                    // be added to trips if its not already in there.
        }

     std::cout << trips.size() << std::endl; 
    trips.clear(); //clears trips vector so that next list of trips may be added
    }



    return 0;
}