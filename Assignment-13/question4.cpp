// Check if an array is a subset of another .
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<< "Enter the number of elements: ";
    cin>>n;
    vector<int> v;
    for(int i=0; i<=n-1; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int m;
    cout<< "Enter the number of elements in the subset array: ";
    cin>>m;
    vector<int> v2;
    for(int i=0; i<=m-1; i++){
        int x;
        cin>>x;
        v2.push_back(x);
    }
    bool flag;
    for(int i=0; i<=m-1; i++){
        flag = false;
        for(int j=0; j<=n-1; j++){
            if(v2[i]==v[j]) flag = true;
        }
        if (flag == false){
            cout<< "The given array is not a subset";
            break;
        }
    }
    if(flag == true){
        cout<< "The given array is a subset";
    }
    return 0 ;
}