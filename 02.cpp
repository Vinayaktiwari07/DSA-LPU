#include<iostream>
using namespace std;
int main() {
    int a;
    cout << "enter input: " << endl;
    cin >> a;

    while(a>0){
        int rem = a%10;
        if(rem%2 == 0){
            cout << rem;
        }
        a/=10;
    }
    

    return 0;
}