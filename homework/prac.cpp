#include <iostream>

int facto(int x){
  if(x == 1){
    return x;
  }
  else{
    return x * facto(x-1);
  }
}

int main() {

  int a = 5;
  std::cout << facto(a) << std::endl;

  return 0;
}