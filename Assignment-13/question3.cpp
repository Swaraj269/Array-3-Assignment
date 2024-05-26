// Find the first non-repeating element in the array .

#include <iostream>
#include <vector>
#include <algorithm>
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
    for(int i=0; i<=n-1; i++){
        bool flag = false;
        for(int j=i+1; j<=n-1; j++){
            if(v[i]==v[j]){
                flag = true;
            }
        }
        if(flag == false){
            cout<<v[i]<<endl;
            break;
        }
    }
    return 0;
}