#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
class SegmentTreeLazy{
  private:
  int n;
  vector<int>tree;
  vector<int>lazy;
  void build(vector<int>&arr,int node,int start,int end){
      if(start==end){
          tree[node] = arr[start];
      }else{
          int mid = start + (end - start)/2;
          build(arr,2*node,start,mid);
          build(arr,2*node+1,mid+1,end);
          tree[node]=tree[2*node]+tree[2*node+1];
      }
  }
  
  void push(int node,int start,int end){
      if(lazy[node]!=0){   //do add or operations only when lazy of node is not zero
         tree[node] +=  (end-start+1)*lazy[node];
         if(start!=end){
             lazy[2*node]+=lazy[node];
             lazy[2*node+1]+=lazy[node];
         }
         lazy[node]=0;
      }
  }
  void updateRange(int node,int start,int end,int l,int r,int val){ 
      push(node,start,end);
      if(l>end || r<start){
          return;
      }
      if(l<=start&&end<=r){
          lazy[node]+=val;
          push(node,start,end);
          return;
      }
      int mid =start +(end-start)/2;
      updateRange(2*node,start,mid,l,r,val);
      updateRange(2*node+1,mid+1,end,l,r,val);
      tree[node]=tree[2*node]+tree[2*node+1];
  }
  int query(int node,int start,int end,int l,int r){
      push(node,start,end);
      if(l>end || r<start){          //completely out of range
          return 0;
      }
      if(l<=start&&end<=r){
          return tree[node];          //completely in the range
      }
      int mid = start + (end - start)/2;
      int leftSum =  query(2*node,start,mid,l,r);
      int rightSum = query(2*node+1,mid+1,end,l,r);
      return leftSum+rightSum;
  }
  public:
  SegmentTreeLazy(vector<int>&arr){
      n=arr.size();
      tree.resize(4*n);
      lazy.resize(4*n);
      build(arr,1,0,n-1);
  }
  void updateRange(int l,int r,int val){
      updateRange(1,0,n-1,l,r,val);
  }
  int query(int l,int r){
      return query(1,0,n-1,l,r);
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
        SegmentTreeLazy st(a);
        int l,r;
        cin>>l>>r;
        cout<<st.query(l,r)<<"\n";
        int lr,rr,val;
        cin>>lr>>rr>>val;
        st.updateRange(lr,rr,val);
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
1 3 3
output:
15
24
*/