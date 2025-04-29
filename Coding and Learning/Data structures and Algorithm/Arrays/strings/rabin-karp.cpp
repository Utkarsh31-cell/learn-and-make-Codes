#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll; 

/* Rabin Karp Algorithm :

Basically we are checking :

is their any substring in text which matches pattern string 

How we are doing ?

here we are changing string into hash value using character values and then we compare hash value of a particular string with other string when hash value of substring of text is matching with hash value of pattern then we will match each character wise character of substring of text with pattern character's if they matches at every character then we said at particular index i we have pattern substring in text else just add new chracter from text and remove pattern.length()-1th chracter value and add new character hash value and check again when two string's hash value are equal then we return */ 
vector<int>rabin_karp(string text, string pattern, long long q){ 
    int n=text.length(); 
    int m=pattern.length(); 
    int t=0; //hash value of text 
    int p=0; //hash value of pattern 
    long long d=256; //maximum number of character in text assuming 256
    long long h=1; 
    for(int i=0;i<m-1;i++){ 
        h=(h*d)%q; 
    } 
    //first check for m length pattern with first m characters of text 
    vector<int>indexes; 
    if(n>=m){ 
        for(int i=0;i<m;i++){
            t=(t*d+((text[i]-'a')+65))%q; 
            p=(p*d+((pattern[i]-'a')+65))%q; 
            
        } 
        for(int i=0;i<=n-m;i++){ 
            if(t==p){ 
                int j=0;
                for(j=0;j<m;j++){ 
                    if(text[i+j]!=pattern[j]){
                        break; 
                        
                    } 
                    
                } 
                if(j==m){
                    indexes.push_back(i); 
                    
                } 
                
            } 
            if(i<n-m){ 
                t=(t*d+((text[i+m]-'a')+65)-((text[i]-'a')+65)*h*d)%q; //basically we are removing i-m th character which is approximately d^(m-1)*text[i] 
                if(t<0){
                    t=t+q; 
                    
                } 
                
            } 
            
        } 
        
    } 
            return indexes; 
    
} 

int main(){ 
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int t; 
    cin>>t;
    while(t--){ 
        string text,pattern,x; 
        getline(cin,x);
        getline(cin,text);
        getline(cin,pattern); // cin>>a>>b;

        long long q=INT_MAX;
        vector<int>ans=rabin_karp(text,pattern,q); 
        if(ans.size()){ 
            for(int i=0;i<ans.size();i++){ 
                cout<<ans[i]<<" ";
                } 
            
        }
        cout<<"\n";
        } 
        return 0; 
    
}
/*
input :

1 
GEEKS FOR GEEKS 
GEEK

output :
0 10 */