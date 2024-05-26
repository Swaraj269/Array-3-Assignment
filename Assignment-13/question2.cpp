//Find the factorial of a large number.

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
void fact(vector<int>&v, int x, int* size){
    int carry = 0;
    for(int i = 0 ; i< (*size); i++){
        int prod = v[i]*x+carry;
        v[i] = prod%10;
        carry = prod/10;
    }
    while(carry){
        v[(*size)] = carry %10;
        carry/=10;
        (*size)++;
    }
}
int main(){
    int n;
    cout<< "Enter the number: ";
    cin>>n;
    vector<int> v(500,0);
    v[0] = 1;
    int size = 1;
    for(int i = 2; i<=n; i++){
        fact(v,i,&size);
    }
    for(int i = size-1; i>=0; i--){
        cout<<v[i];
    }
    return 0;
}