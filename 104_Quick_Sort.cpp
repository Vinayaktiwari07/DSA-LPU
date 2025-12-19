#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[high];   // pivot
        int i = low - 1;         // index for smaller elements

        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        return i + 1;            // pivot index
    }

    void quickSort(vector<int>& arr, int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }


int main() {
    vector<int> arr = {2,4,5,1,3};
    int right = arr.size();
    int left = 0;

    quickSort(arr,left,right);

    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";

    }


    return 0;
}