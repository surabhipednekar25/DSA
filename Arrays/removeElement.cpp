//bruteforce tc->O(N) sc->O(N)

int removeElement(vector<int>& nums, int val) {
        vector<int>temp;
        for(auto num : nums){
            if(num != val){
            temp.push_back(num);
            }
        }
        for(int i =0;i<temp.size();i++){
            nums[i] = temp[i];
        }
        return temp.size();
    }

    //better tc->O(N) sc->O(N)
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0;i< nums.size();i++){
            if(nums[i]!=val){
                nums[k++] = nums[i];
            }
        }
        return k;
    }