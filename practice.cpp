#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector <int> arrayform(vector <int>&num , int k  ){
        vector <int>solution;
        int sum =k;
        int num_size=num.size()-1;
        for (int i=num_size;i>=0;--i){
            int value =sum +num.at(i);
            int temp=value%10;
            solution.push_back(temp);
            sum =value /10;
        }
        reverse(solution.begin(),solution.end());
        return solution;

    }
};
int main(){
    Solution s;
    vector <int> v={2,7,4};
    vector <int> result =s.arrayform(v,181);
    for (int i:result){
        cout<<i<<" ";
    }
}
   