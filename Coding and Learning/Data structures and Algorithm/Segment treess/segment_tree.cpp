#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
class SegmentTree{
  private:
    int n;
    vector<int>tree;
    void build(vector<int>&arr,int node,int start, int end){
        if(start==end){
            tree[node] = arr[start];
        }else{
            int mid = start + (end - start)/2;
            build(arr,2*node,start,mid);
            build(arr,2*node+1,mid+1,end);
            tree[node]=tree[2*node]+tree[2*node+1];
        }
        
    }
    
    void update(int idx,int val,int node,int start,int end){
        if(start==end){
            tree[node] = val;
        }else{
            int mid = start + (end - start)/2;
            if(idx<=mid){
                update(idx,val,2*node,start,mid);
            }else{
                update(idx,val,2*node+1,mid+1,end);
                
            }
            tree[node] = tree[2*node]+tree[2*node+1];
        }
    }
    
    int query(int l,int r,int node,int start,int end){
        if(l>end||r<start){ //no overlap
            return 0;
        }
        if(l<=start&&end<=r){   //complete overlap               
            return tree[node];
        } 
        int mid = start + (end-start)/2;
        int leftsum = query(l,r,2*node,start,mid);
        int rightsum = query(l,r,2*node+1,mid+1,end);\
        return leftsum+rightsum;
    }
    public:
    SegmentTree(vector<int>&arr){
        n = arr.size();
        tree.resize(4*n);
        build(arr,1,0,n-1);
    }
    void update(int idx,int val){
        update(idx,val,1,0,n-1);
    }
    int query(int l,int r){
        return query(l,r,1,0,n-1);
    }
};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        SegmentTree st(a);
        int l,r;
        cin>>l>>r;
        cout<<st.query(l,r);
    }
    return 0;
}
/*
input :
1 
6
1 3 5 7 9 11
1 3

output:
15
*/