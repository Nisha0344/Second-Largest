#include<bits/stdc++.h>
using namespace std; 
class Solution{
    public:
    int Getsecondlarget(vector<int> &arr){
        int n = arr.size();
        sort(arr.begin(),arr.end());
        for(int i = n-2; i>=0; i--){
            if(arr[i]!=arr[i-1]){
                return arr[i];
            }
        }
        return -1;
    }
};
int main(){
    vector<int> arr = {10,20,31,43,20};
    Solution solution;
    int secondlargest= solution.Getsecondlarget(arr);
    if(secondlargest==-1){
        cout<<"No second largest num "<<endl;
    } else{
        cout<<"Secpnd largest num is " <<secondlargest<<endl;
    }
    return 0;
}
