//brute force ==>O(N2)
bool containsDuplicate(vector<int>& nums) {
        for(int i = 0;i<nums.size();i++){
            for(int j =i+1;j<nums.size();j++){
                if(nums[i] == nums[j]){
                    return true;
                }
            }
        }
        return false;
    }

    //better ==>O(NlogN)
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i = 1;i<nums.size();i++){
            if(nums[i] == nums[i-1]){
                return true;
            }
        }
        return false;
    }


//best ==>O(N)
bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>seen;
        for(auto num : nums){
            if(seen.count(num)){
                return true;
            }
            seen.insert(num);
        }
        return false;
    }