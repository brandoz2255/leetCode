#include <iostream>
#include <cstdlib>
#include <vector>
#include <unordered_map>


using namespace std;



class Solution {
    public: 

    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> num_to_index;

        for (int i = 0; i < nums.size(); ++i ){
            int complement = target - nums[i];

            if(num_to_index.find(complement) != num_to_index.end()){
                return {num_to_index[complement], i}; // Found a matching pair

            }
            num_to_index[nums[i]] = i; // Store the current number and its index
        }
        return {};

    }


};


int main() {
    Solution sol;


    vector<int> nums = {2,7,11,15};

    /* adds a little error handling !! */
    
    if (nums.empty()){
        cout << " error theres nothing here :(" << endl; 
        return 1;
    }

    int target = 9;


    auto result = sol.twoSum(nums, target);
    if (!result.empty()){
        cout << "first index-> " << result[0] << ", Second index-> "<< result[1] << endl;
    }else {
        cout << "No sulution found." << endl;
    }

    return 0; 


}