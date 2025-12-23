#include<bits/stdc++.h>
using namespace std;

void deletion(vector<int> &heap){
    int n = heap.size()-1;
    heap[0] = heap[n];
    heap.pop_back();

    int i=0;
    while(i<n){
        int leftChild = 2*i+1;
        int rightChild = 2*i+2;

        int maxi = i;

        if(leftChild < n && heap[leftChild] > heap[maxi]){
            maxi = leftChild;
        }
        if(rightChild < n && heap[rightChild] > heap[maxi]){
            maxi = rightChild;
        }
        if(maxi == i){
            break;
        }
        else{
            swap(heap[maxi], heap[i]);
            i = maxi;
        }
    }
    
}
int main(){
    vector<int> heap={35,25,30,15,10,5,20};

    // int val=27;
    deletion(heap);
    for(int i=0;i<heap.size();i++){
        cout<<heap[i]<<" ";
    }
}