#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int numOne;
        int numTwo;
        vector<int> indices;
    
        for (int i = 0; i < nums.size(); i++) {

            numOne = nums[i];

            for (int j = 1; j < nums.size(); j++) {

                numTwo = nums[j];

                if (numOne + numTwo == target && i != j) {
                    indices.push_back(i);
                    indices.push_back(j);
                    return indices;
                }
            }
        }
        return indices;
    }
};

int main() {

    Solution a;

    vector<int> test = {2,7,11,15};
    int target = 9;
    vector<int> answer;

    answer = a.twoSum(test, target);

    for (int i = 0; i < answer.size(); i++) {

        cout << answer[i] << " ";
    }
    
}