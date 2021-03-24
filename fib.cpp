#include <iostream>

using namespace std;

int addNumbers(int a, int b);

int main(){
    // Create a Fibonacci sequence


    // Limit the sequence to values bellow 4 million

    // Sum the even numbers of that sequence
    int t1 = 1;
    int t2 = 2;
    int nextValue;
    int fibSum = 0;
    while (t2 < 4000000){
        if (t2 % 2 == 0){
            fibSum += t2;
        }
        nextValue = addNumbers(t1, t2);
        t1 = t2;
        t2 = nextValue;
    }

    cout<<fibSum<<endl;
    return 0;
}

int addNumbers(int a, int b){

    return a + b;
}