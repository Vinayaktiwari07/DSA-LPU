#include<iostream>
#include<vector>
using namespace std;
int main() {
    string s = "a boy went aaarmy school";


    int freq[26] = {0};
    
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' ') continue;
        freq[s[i] - 'a']++;
    }

    int maxi = 0;
    int maxIdx = 0;

    for(int i=0; i<26;i++){
        if(freq[i]>maxi){
            maxi = freq[i];
            maxIdx = i;
        }
    }

    char ch = maxIdx + 'a';
    cout << ch;
    


    return 0;
}