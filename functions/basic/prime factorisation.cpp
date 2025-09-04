// Prime factorisation of a number
#include<iostream>
using namespace std;

void primeFactorisation(int a){
    while (a % 2 == 0){
        cout << 2 << " ";
        a /= 2;
    }

    for (int i = 3; i * i <= a; i+=2){
        while (a % i == 0){
            cout << i<< " ";
            a /= i;
        }
    }
    if (a > 2) cout << a;
}
int main(){
    int n;
    cin >> n;
    primeFactorisation(n);
    return 0;
}
