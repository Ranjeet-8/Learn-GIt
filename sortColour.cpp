#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> vec = {2,1,2,0,1,0,2,0,1,1,2};
    int low=0;
    int mid=0;
    int high=vec.size()-1;
    
    // cout<<high<<mid<<low<<endl;
    
    while(mid<=high){
        if(vec[mid]==2){
            swap(vec[mid],vec[high]);
            high--;
        }
        else if(vec[mid]==0){
            swap(vec[mid],vec[low]);
            low++;
        }
        else{
            mid++;
        }
    }
    
    for(auto i : vec){
        cout<<i<<endl;
    }
    
    return 0;
}
