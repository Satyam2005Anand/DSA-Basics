//Binary Search code
#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int start = 0, end = n - 1;
    int mid;
    while (start <= end){
        mid = (start + end) / 2;
        if (arr[mid] < target) start = mid + 1;
        else if (arr[mid] > target) end = mid - 1;
        else return mid;
    }
    return -1;
}

int main(){
    int arr[7] = {1,3,4,5,6,7,9};
    int target = 9;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << binarySearch(arr, n, target);
    return 0;
}
