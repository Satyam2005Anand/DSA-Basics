#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void insertElement(vector<int> &nums){
        int n, element;
        cout << "Enter the position: ";
        cin >> n;
        cout << "Enter the element: ";
        cin >> element;

        vector<int> newNums(nums.size() + 1);

        for (int i = 0; i < nums.size(); i++){
            newNums[i] = nums[i];
        }
        
        for (int x : nums)
        cout << x << " ";
        cout << endl;

        for (int i = newNums.size() - 1; i > n; i--){
            newNums[i] = newNums[i - 1];
        }
        newNums[n] = element;

        for (int x : newNums)
        cout << x << " ";

    }
};

int main(){
    vector<int> nums = {4,5,6};
    Solution s;
    s.insertElement(nums);
    return 0;
}
