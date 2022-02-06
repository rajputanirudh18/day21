class Solution {
public:
    
    int subarraySum(vector<int>& nums, int k) {
        int count_subarray=0;
        map<int,int> m;
        int cur_sum=0;
        for(int i=0; i<nums.size(); i++)
        {
            cur_sum+=nums[i];
            if(cur_sum==k)
                count_subarray++;
            if(m.find(cur_sum-k)!=m.end()){
                count_subarray+=m[cur_sum-k];
            }
            if(m.find(cur_sum)!=m.end())
                m[cur_sum]+=1;
            else
                m[cur_sum]=1;
            
            
        }
        return count_subarray;
    }
};