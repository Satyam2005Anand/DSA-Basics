//1) With extra memory, create another array of same size and copy the elements
//2) Using the swap for array from algorithm header
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[7] = {6,1,9,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n / 2; i++){
        swap(arr[i], arr[n - i - 1]);
    };
    for (int i = 0; i < n ; i++){cout << arr[i] << " ";
    };
    return 0;
}
//3) Without extra memory - swap using two pointer approach
//introduce a 3rd variable and copy any one element to it while giving value arr[i] to arr[n - i - 1]
