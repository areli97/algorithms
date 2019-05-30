#include <iostream>
#include <string>

int main(){
    int hands;
    std::cin >> hands;
    char trump_suit; //variable that determines what is the dominant suit
    std::cin >> trump_suit;

    int total_points = 0;

   for(int i = 0; i < 4*hands; i++){
       std::string cards;
       std::cin >> cards;

    if(cards[1] == trump_suit){
    //dominant 
    int dominant = 0;
    char check1 = cards[0];
    switch (check1){  //will check what card matches with which case and then 
        case 'A':       // will add points to total based of case that was true
         dominant = 11;
         break;

        case 'K':
        dominant = 4;
        break;

        case 'Q':
        dominant = 3;
        break;

        case 'J':
        dominant = 20;
        break;

        case 'T':
        dominant = 10;
        break;

        case '9':
        dominant = 14;
        break;

        case '8':
        dominant = 0;
        break;
        
        case '7':
        dominant = 0;
        break;
    }
        total_points = total_points + dominant;
       }

    else{
    int non_dom = 0;
    char check2 = cards[0];
    switch (check2){
        case 'A':
         non_dom = 11;
         break;

        case 'K':
        non_dom = 4;
        break;

        case 'Q':
        non_dom = 3;
        break;

        case 'J':
        non_dom = 2;
        break;

        case 'T':
        non_dom = 10;
        break;

        case '9':
        non_dom = 0;
        break;

        case '8':
        non_dom = 0;
        break;
        
        case '7':
        non_dom = 0;
        break;
    }    
    total_points = total_points + non_dom;      
       }

    }
    
    std::cout<< total_points << std::endl;

   
    return 0;
}