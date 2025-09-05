//Negative Decimal to binary
#include<iostream>
#include<bitset>
using namespace std;
int main(){
    int n;
    cin >> n;
    const int bits = 8;
    bitset<bits> binary(n);
    cout << binary;
    return 0;
}
