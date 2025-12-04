#include<iostream>
using namespace std;

int print(int n){
    if(n==0){
        return 0;
    }
    else {
        return n%10 + print(n/10);
    }
}
int main(){
    cout << "Enter a number: ";
    int n;
    cin>>n;
    cout << print(n);
    
    return 0;
} 