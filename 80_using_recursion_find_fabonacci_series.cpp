#include<iostream>
using namespace std;

void fibonacci(int first,int second,int n){
    if(n==1){
        return;
    }
    int next =first+second;
    cout<<next<<" ";
    return fibonacci(second,next,n-1);

}



int main(){
    int first=0;
    int second=1;
    cout<<first<<" ";
    cout<<second<<" ";

    fibonacci(first,second,7);

}