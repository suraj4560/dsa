#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
bool solve(vector<int>& nums) {
    int n=nums.size();
    bool value;
    int countleft=0;
    int count=0;
    for (int i =1;i<n;i++){
        if (nums.at(i)>nums.at(i-1)){
            count++;
        }
        else 
        count=0;
        if (nums.at(i)<nums.at(i-1)){
            countleft++;
        }
        else 
        countleft=0;

    }
    if ((count)==n-1||(countleft)==n-1)
    return true;
    else 
    return false;
    
}
int main(){
    vector <int> v={1,2,3,4,5};
    bool solution=solve(v);
    cout<<solution;
return 0;
}