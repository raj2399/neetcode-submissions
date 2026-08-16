class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seen_numbers; 

        for(int i=0;i<nums.size();i++){
            int compliment = target - nums[i];

            if(seen_numbers.find(compliment) != seen_numbers.end()){
                return {seen_numbers[compliment],i};
            }

            else{
                seen_numbers[nums[i]]=i;
            }
        }

        return {};
    }
};
