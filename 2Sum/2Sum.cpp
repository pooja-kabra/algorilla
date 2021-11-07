class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size(); 
        int n = 0;
        vector<int> sol;
        map<int, int> h;
        for(int i = 0; i<len; i++) {
           n = target - nums[i];
           if(h.count(n)){
               sol.push_back(i);
               sol.push_back(h[n]);
           } else {
               h[nums[i]]=i;
          }         
                    
        }
       return sol; 
}
