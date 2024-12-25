#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void bubble_sort(int n,int a[]){
    int i;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
void selection_sort(int n,int a[]){
 
    for(int i=0;i<n;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[index]){
                index=j;
            }
        }
        swap(a[i],a[index]);
    }
}
void insertion_sort(int n,int a[]){
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
        }
            int curr_indx=i;
            for(int j=i-1;j>=0;j--){
                if(a[j]>a[curr_indx]){
                    swap(a[j],a[curr_indx]);
                    curr_indx=j;
                }
            }
        
    }
}
void merge(int l,int r,int a[],int mid){
    vector<int>ans;
    int i=l;
    int j=mid+1;
    while(i<=mid&&j<=r){
        if(a[i]<a[j]){
            ans.push_back(a[i]);
            i++;
        }else if(a[j]<a[i]){
            ans.push_back(a[j]);
            j++;
        }
    }
    while(i<=mid){
        ans.push_back(a[i]);
        i++;
    }
    while(j<=r){
        ans.push_back(a[j]);
        j++;
    }
    
    for(int i=l;i<=r;i++){
        a[i]=ans[i-l];
    }
}
void mergesort(int n,int a[],int l,int r){
    if(l>=r){
        return;
    }
    int mid=(r+l)/2;
   
    mergesort(n,a,l,mid);
    mergesort(n,a,mid+1,r);
    merge(l,r,a,mid);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],i;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ch;
        cin>>ch;
        switch(ch){
            case 1:
            bubble_sort(n,a);
            cout<<"array value after Bubble Sort is : \n";
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<"\n";
            break;
            case 2:
            insertion_sort(n,a);
            cout<<"array value after Insertion Sort is : \n";
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<"\n";
            break;
            case 3:
            selection_sort(n,a);
            cout<<"array value after Selection Sort is : \n";
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<"\n";
            break;
            case 4:
            mergesort(n,a,0,n-1);
            cout<<"array value after Merge Sort is : \n";
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<"\n";
            break;
            default:
            cout<<"Nothing is choosen among the option given\n";
            break;
        }
    }
    return 0;
}
/*
input :
1
5
5 4 3 2 1
4

output :
array value after Merge Sort is : 
1 2 3 4 5 

*/