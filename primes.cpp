///What is the 10 001st prime number?
#include <iostream>

using namespace std;

int findPrime(int num);

int main(){

    int Prime = findPrime(10001);
    cout<<Prime<<endl;
}

int findPrime(int num){
    if (num == 1){
        return 2;
    }
    else{
    int primesFound = 1;
    int i = 2;
    while (primesFound < num){
        i++;
        //cout<<i<<endl;
        for (int j = 2; j < i; j++){
            if (i % j == 0){
                break;
            }
            if (j == i-1){
                primesFound++;
            }

        }
    } 
    return i;
    }

}


