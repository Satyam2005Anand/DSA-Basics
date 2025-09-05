//Sorting an array
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[7] = {6,1,9,2,3,4,5};
    sort(arr, arr + 7);
    cout << arr[6] << " ";
    return 0;
}
