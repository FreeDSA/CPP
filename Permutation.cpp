#include<bits/stdc++.h>

using namespace std;

vector<vector<int> > ans;

// void permute(vector<int> &arr,int idx){
void permute(vector<int> arr,int idx){
    if(idx==arr.size()){
        ans.push_back(arr);
        return;
    }

    for(int i=idx;i<arr.size();i++){
        if(i!=idx && arr[i]==arr[idx]){
            continue;
        }
            swap(arr[i],arr[idx]);
            permute(arr,idx+1);
    }
    return;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(auto &i : arr){
        cin>>i;
    }
    // Way-1
    permute(arr,0);

    // Way-2
    // do{
    //     ans.push_back(arr);
    // }while(next_permutation(arr.begin(),arr.end()));

    for(auto a : ans){
        for(auto b : a){
            cout<<b<<" ";
        }cout<<endl;
    }
}
