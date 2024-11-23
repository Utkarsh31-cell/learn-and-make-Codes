//problem link : https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1?track=DSASP-Searching&amp%253BbatchId=154&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=floor-in-a-sorted-array

class Solution {
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> &v, long long n, long long x) {

        // Your code here
        //basicallly lower bound 
        sort(v.begin(),v.end());
        int low=0;
        int high=n-1;
        int ans=n;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(v[mid]<=x){
                low=mid+1;
                ans=mid;
            }else{
                high=mid-1;
            }
        }
        if(ans==n){
            return -1;
        }else{
            return ans;
        }
    }
};
