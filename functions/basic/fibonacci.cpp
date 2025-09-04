//fibonacci series
#include <bits/stdc++.h>
using namespace std;

void fibo(int n){
    int a = 0, b = 1;
    int nextTerm;
    cout << a << " " << b << " ";
    for (int i = 1; i < n - 1; i++){
        nextTerm = a + b;
        cout << nextTerm << " ";
        a = b; 
        b = nextTerm;
    }
}
int main(){
    int n;
    cin >> n;
    fibo(n);
    return 0;
}
