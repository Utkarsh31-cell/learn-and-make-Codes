#include <bits/stdc++.h>
using namespace std;
class Node{
 public:
   int data;
   Node* next;
   //Below is constructor
   Node(int data){
       this->data=data;
       this->next=NULL;
   }
};
int main(){
    /*
     *
     *
        Self Made code for user based input in cpp
        creating user input linkedlist 
        problem which we are solving here is finding middle element in linkedlist
     *
     *
     */
    int n;
    cin>>n;
    int a[n];
    int val,i;
    Node* x=NULL;
    Node* ans=NULL;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i==0){
            x=new Node(a[i]);
            ans=x;
        }else{
            x->next=new Node(a[i]);
            x=x->next;
        }
    }
    Node* f1=ans;
    int len=0;
    i=0;
    while(f1!=NULL){
        f1=f1->next;
        len+=1;
    }
    Node* f2=ans;
    if(len%2){
    i=0;
    len=len/2;
    while(i<len){
        i+=1;
        f2=f2->next;
    }
    cout<<f2->data;
    }else{
    i=1;  
    len=len/2;
    while(i<len){
        i+=1;
        f2=f2->next;
    } 
    cout<<f2->data<<" "<<f2->next->data;
    }
    
    //since n can be odd or even for odd element only single middle element and in case of odd we had two middle elements
    return 0;
}

/*
O(n) solution is above solution 

One more optimise solution is using fast and slow pointer and making linkedlist into circular one 

then run slow pointer as x = x->next and fast pointer as x = x->next->next; 
point where slow is equal to fast pointer for finding 
input :
5
1 2 3 4 6 
output:
3

input :
6
1 2 3 5 6 7

output:
3 5

problems that can be solved using slow and fast pointers 

| Problem             | Why slow/fast pointer works            | Complexity            |
| ------------------- | -------------------------------------- | --------------------- |
| Detect cycle        | Fast laps slow inside a loop           | O(n) time, O(1) space |
| Find middle         | Fast traverses twice as fast           | O(n) time             |
| Find start of cycle | Distance math ensures meeting at entry | O(n) time             |
| Remove Nth from end | Maintains a fixed gap between pointers | O(n) time             |

*/