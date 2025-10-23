#include<iostream>
using namespace std;
int main() {
    int arr[5] = {1,2,3,2,1};
    int n = 5;
    int f = 0;
    int l = n-1;
    bool palindrome = true;

    while(f<l){
        if(arr[f] != arr[l]){
            palindrome = false;  
            break;         
        }
        f++;
        l--;
    }

    if(palindrome){
        cout << "palindrome" << endl;
    }
    else{
        cout << "Not a palindrome" << endl;
    }
    return 0;
}