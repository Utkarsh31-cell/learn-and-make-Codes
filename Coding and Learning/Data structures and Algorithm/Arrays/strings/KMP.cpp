#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void computeLps(string &pat,vector<int>&lps){
    int len=0;  //longest length of substring which is proper of prefix as well as suffix 
    lps[0]=0;  //lps (longes prefix which is also suffix) of first index is 0 
    int i=1;
    while(i<pat.length()){
        if(pat[i]==pat[len]){
            len++;
            lps[i]=len;
            i++;
        }else{
            if(len!=0){
                len=lps[len-1];
            }else{
                lps[i]=0;
                i++;
            }
        }
    }
    
}
vector<int>kmp(string &text,string &pat){
    int i=0;
    int j=0;
    int n=text.length();
    int m=pat.length();
    vector<int>ans;
    vector<int>lps(m,0);
    computeLps(pat,lps);
    while(i<n){
        if(text[i]==pat[j]){
            i++;
            j++;
            if(j==m){
                ans.push_back(i-j);
                j=lps[j-1];
            }
        }else{
            if(j!=0){
                j=lps[j-1];
            }else{
                i++;
            }
        }
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string space,text,pat;
        getline(cin,space); //in cpp for taking input as string with lines we have to use one string as for one line space 
        getline(cin,text);
        getline(cin,pat);
        vector<int>ans=kmp(text,pat);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
/*
input :
1
aacecaaa#aacecaaa
aacecaaa

output :
0 9 

input :
1
aacecaaa   #    aacecaaa
aacecaaa

output :
0 16 


basically in ans we are storing indexes of string text where pat string starts in text 
*/