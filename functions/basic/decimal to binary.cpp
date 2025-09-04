// Decimal to binary
#include <iostream>
#include<cmath>
using namespace std;

void decToBin(int n){
    int bin = 0, place = 1;
    while (n > 0){
        int rem = n % 2;
        bin = bin + (rem * place);
        place *= 10;
        n /= 2;
    }
    cout << bin;
}

int main(){
    int n;
    cin >> n;
    decToBin(n);
    return 0;
}
