#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int left[n1], right[n2];

    for(int i=0; i<n1; i++){
        left[i] = arr[i+l];
    }
    for(int i=0; i<n2; i++){
        right[i] = arr[i+mid+1];
    }

    int i=0, j=0, k=l;

    while(i<n1 && j<n2){
        if(left[i] < right[j]){
            arr[k] = left[i];
            i++;
            k++;
        }
        else{
            arr[k] = right[j];
            k++;
            j++;
        }
    }

    while(i<n1){
        arr[k] = left[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[],int left,int right){
    if(left==right)return ;
    int mid = (left+right)/2;
    mergeSort(arr,left,mid);
    mergeSort(arr,mid+1,right);
    
    merge(arr,left,mid,right);
}

int main() {
    int arr [] = {2,4,5,1,3};
    int right = 4;
    int left = 0;


    int mid = (right-left)/2;

    mergeSort(arr,left,right);
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";

    }


    return 0;
}