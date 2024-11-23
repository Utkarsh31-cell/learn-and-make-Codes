Hello World!

============================================================================================================================================

Way to find lower bound and upper bound using vector without using binary search basically stl has inbult binary search implementation 

condition is vector must be sorted
============================================================================================================================================


//example

 int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        int a[n];
        vector<int>v;
    //First condition for Binary Search is Array/Data Structure must be sorted 
    for(int i=0;i<n;i++){
        cin>>a[i];
        v.push_back(a[i]);
    }
    
    sort(a,a+n);
    sort(v.begin(),v.end());
    auto lower=lower_bound(v.begin(),v.end(),3)-v.begin();
    auto upper=upper_bound(v.begin(),v.end(),3)-v.begin();
    cout<<lower<<" "<<upper<<"\n";
}
return 0;
}
/*
example test case :
2
5 5
3 3 3 3 4
4 2
1 4 8 13
output:
0 4
1 1

example test case :

2
5 5
1 2 3 3 4
4 2
1 4 8 13
output:
2 4
1 1
*/
=============================================================================================================================================