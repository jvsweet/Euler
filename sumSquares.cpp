///Find the difference between the sum of the squares of the first
//one hundred natural numbers and the square of the sum.
#include <iostream>
#include <cmath>

using namespace std;

int sumSquares(int num);

int squareOfSum(int num);

int main(){
    int totalSum = sumSquares(100);
    int squareSum = squareOfSum(100);
    long int answer = squareSum - totalSum;
    cout<<squareSum<<" - "<<totalSum<<" = "<<answer;
    return 0;
}

int sumSquares(int num){

    int totalSum = 0;
    for (int i = 1; i <= num; i++){
        totalSum += pow(i, 2);
    }
    return totalSum;
}

int squareOfSum(int num){
    int totalSum = 0;
    for (int i = 1; i <= num; i++){
        totalSum += i;
    }
    return pow(totalSum, 2);
}