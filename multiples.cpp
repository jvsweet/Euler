#include <iostream>

using namespace std;

int main(){
  int multipleSum = 0;

  for (int i=1; i<1000; i++){
    if (i % 3 == 0){
      multipleSum += i;
    }
    else if (i % 5 == 0){
      multipleSum += i;
    }
  }

  cout<<"Sum of multiples of 3 and 5 upto 1000 are: "<< multipleSum<<endl;

  return 0;
}
