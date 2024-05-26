//Count the number of triplets whose sum is equal to the given value x.

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cout<< "Enter  size of the array ";
    cin >> n;
    vector<int> v;
    cout<< "Enter the element of the array: ";
    for(int i=0; i<=n-1; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int x;
    cout<< "Enter the number or target number: ";
    cin >> x;
    int count = 0;
    for(int i = 0; i <= n-1; i++){
        for(int j = i+1; j<= n-1 ; j++){
            for(int k = j+1; k<= n-1; k++){
                if(v[i] + v[j] + v[k] == x){
                    count++;
                }
            }
        }
    }
    cout<< "The number of triplets whose sum is equal to the given value x is: "<< count;
    return 0;
}