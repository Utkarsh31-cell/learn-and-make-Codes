//problem link : https://leetcode.com/problems/frequency-of-the-most-frequent-element

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<long long>v(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(i==0){
                v[i]+=nums[i];
            }else{
                v[i]=v[i-1]+nums[i];
            }
        }
        long long ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            long long low =0;
            long long high=i;
            long long best=i;
            long long target=nums[i];
            while(low<=high){
                int mid=low+(high-low)/2;
                int currvalue=target*(i-mid+1)-(v[i]-v[mid]+nums[mid]);
                if(currvalue>k){
                    low=mid+1;
                }else{
                    high=mid-1;
                    best=mid;
                }
           
            }    
           ans=max(ans,i-best+1);
        }
        return ans;
    }
};

/*
concept behind problem :

find index which are increased to particular element so that element which are present finally has highest frequency 

How much we can increase?

For that we have k

we can increase atmost k value 
*/