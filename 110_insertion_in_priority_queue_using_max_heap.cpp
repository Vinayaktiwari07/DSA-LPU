#include<bits/stdc++.h>
using namespace std;

void insertion(vector<int> &heap,int val){
    heap.push_back(val);
    int i=heap.size()-1;
    while(i>0){
        int parent=(i-1)/2;
        if(heap[parent]<heap[i]){
            swap(heap[parent],heap[i]);
            i=parent;
        }
        else{
            break;
        }
    }
}
int main(){
    vector<int> heap={35,25,30,15,10,5,20};

    int val=27;
    insertion(heap,val);
    for(int i=0;i<heap.size();i++){
        cout<<heap[i]<<" ";
    }
}