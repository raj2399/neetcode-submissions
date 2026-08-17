class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Approach - First make a frequency map normally, then insert key value pairs(frequency
        // first, value second) in vector and sort in descending order

        unordered_map<int, int> m;
        vector<pair<int, int>> arr;
        vector<int> res;

        for (int i = 0; i < nums.size(); i++) {
            if (m.find(nums[i]) == m.end()) {
                m[nums[i]] = 1;
            } else {
                m[nums[i]]++;
            }
        }

        for (auto i : m) {
            cout << i.first << "" << i.second;
            arr.push_back(make_pair(i.second,i.first));
        }

        sort(arr.rbegin(),arr.rend());

        for(int i=0 ;i<k;i++){
            res.push_back(arr[i].second);
        }

        return res;
    }
};
