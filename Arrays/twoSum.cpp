//brute force O(N2)
vector<int> twoSum(vector<int>& nums, int target) {
        for(int i =0;i<nums.size();i++){
            for(int j =i+1;j<nums.size();j++){
                if(nums[i]+nums[j] == target){
                    return {i,j};
                }
            }
            
        }
        return {};
    }

//better O(NlogN)
vector<int> twoSum(vector<int>& nums, int target) {
        int n =nums.size();
        vector<pair<int,int>>arr;
        for(int i=0;i<n;i++){
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());
        int start = 0;
        int end = n-1;
        while(start < end) {
        if(arr[start].first +arr[end].first == target){
            return {min(arr[start].second,arr[end].second),
                    max(arr[start].second,arr[end].second)};
        }
        else if(arr[start].first+arr[end].first <target){
            start++;
        }
        else{
            end--;
        }
        }
        return {};
    }


//optimal O(N)
vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>prev;
        for(int i =0;i<n;i++){
            int diff = target - nums[i];
            if(prev.find(diff) != prev.end()){
                return{prev[diff],i};
            } 
            prev.insert({nums[i],i});
        }
        return {};
    }