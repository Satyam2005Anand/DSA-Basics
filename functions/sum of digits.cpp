#include<iostream>
using namespace std;

int sumOfDigits(int a){
    int sum = 0;
    while ( a > 0){
        sum = (sum) + (a % 10);
        a /= 10;
    }
    return sum;
}

int main(){
    int a;
    cin >> a;
    cout << sumOfDigits(a);
    return 0;
}
