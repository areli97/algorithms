#include <iostream>

//b = beats
//s = seconds


int main(){
    int tc ;
    std::cin >> tc;
    int beats;
    float seconds;
    
    for(int i = 0; i < tc; i++){
    
        std::cin >> beats;
        std::cin >> seconds;

        float a = 60.0 / seconds;
        float bpm = a * beats;

        float min = bpm - a;

        float max = bpm + a;

        std::cout << min << " " << bpm << " " << max << std::endl;


    }
    
    return 0;
}