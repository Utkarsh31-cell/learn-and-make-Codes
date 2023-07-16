/*
Main purpose of using segment tree when we have to  fnd subarray sum or subarray sum in case of some updataion
(change in element of array) and query that is range(l:r) between l and r of the subarray we have to find sum of the array

//Earlier we use normal array to find sum of subarray between l and r using O(n)
because we have to run loop(for i=l;i<r;i++){ sum+=arr[i]} and for updation  we directly change arr[i]=k in O(1)

//Other method of using  prefix sum also have in which store  sum of  previous all element to current index element of subarray of 
array in this case we can find query i.e sum of element of subarray of array from l to r in O(1) it is sum=pre[r]-pref[l-1] 
if l-1>=0 but  in case of update i.e changin element in original array at index l then we  have to change all element from l to length of arrray
in prefix array so it is o(n)

To  overcome both the problem we use segment tree, it will do query and updation in O(logn)
          
*/
//segment tree used for updation and query in both  O(logn)
#include <bits/stdc++.h>
using namespace std;
//N =100000  , 4*N size is maxsize of element of segment tree element has if N is size  of element of arrray
//By default we take size of array as 10^5
#define N 100000
int seg[4*N];
int a[N];
//now we are writing code of building of segment tree 
//it is for finding max in segment tree
void build(int ind,int low,int high){
    if(low==high){
        seg[ind]=a[low];
        return;
    }
    int mid=(low+high)/2;
    build(2*ind+1,low,mid);
    build(2*ind+2,mid+1,high);
    //seg[ind]=seg[2*ind+1]+seg[2*ind+2]; //here finding maxsum of subarray 
    seg[ind]=max(seg[2*ind+1],seg[2*ind+2]); //this is for maximum element in subarray
}
int query(int ind,int low,int high,int  l,int r){
    if(l>=low and r<=high){
        //completley lies within range
        return seg[ind];
    }
    if(l>high || r<l){  //it is not lies within the range 
        return 0;
    }
    //if above  two condition not stisfies it means it overlaps (it means it neither completley lier not completleuy out) 
    //then traveerse both left and right
    int mid=(low+high)/2;
    return max(query(2*ind+1,low,mid,l,r),query(2*ind+2,mid+1,high,l,r));

}
//if we add a value val while updating in segment tree
void update(int ind,int st,int en,int index,int val){
if(st==en){
    seg[ind]+=val;
    return;
}
int mid=(st+en)/2;
if(index<=mid){
    update(2*ind+1,st,mid,index);
}else{
    update(2*ind+2,mid+1,en,index);
   
}
 seg[index]=seg[2*index+1]+seg[2*index+2];
    
}
typedef long long  ll;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i,j,cnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        build(0,0,n-1);
        for(int i=0;i<4*n;i++){
            cout<<seg[i]<<" ";
        }
        cout<<"\n";
        cout<<query(0,0,n-1,2,4);
    }
    return 0;
}
/*
input :
1
5
1 2 3 4 5
output 
5 3 5 2 3 4 5 1 2 0 0 0 0 0 0 0 0 0 0 0 
5
here 5 is max value in range 2 to  4 
*/
