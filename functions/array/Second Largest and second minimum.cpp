#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void secondLargest(vector<int> &nums){
        int maxNums = INT_MIN, minNums = INT_MAX;
        for (int i = 0; i < nums.size(); i++){
            maxNums = max(maxNums, nums[i]);
            minNums = min(minNums, nums[i]);
        }
        cout << maxNums << endl;
        cout << minNums << endl;

        int secLargest = INT_MIN, secMinimum, i = 0;
        while(i < nums.size()){
            if (nums[i] != maxNums)
            secLargest = max(nums[i], secLargest);
            i++;
        }
        cout << secLargest << endl;
        int j = 0;
        while(j < nums.size()){
            if (nums[j] != minNums)
            secMinimum = min(nums[j], secMinimum);
            j++;
        }
        cout << secMinimum << endl;

    }
};

int main(){
    vector<int> nums = {4,5,6,4,8,9,7,23,5,0,94,46,2,3,3,84,84,5,-1};
    Solution s;
    s.secondLargest(nums);
    return 0;
}
