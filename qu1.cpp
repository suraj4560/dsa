#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
       vector <int>solution;
       int n=num.size();
       vector <int>v1={num.at(n-6),num.at(n-1)};
       vector<int>v2={num.at(0),num.at(n-7)};
       int sum =0;
       int nv1=v1.size();
       int nv2=v2.size();
       for (int i=0;i<v1.size();i++){
           int temp=pow(10,nv1);
           sum =sum +(v1.at(i)*temp);
           nv1--;
       }
       sum =sum +k;
       for (int i=0;i<nv2;i++){
           solution.push_back(v2.at(i));
       }
       string s=to_string(sum);
       vector <int >temp;
       for (int i=0;i<s.length();i++){
           int value =s[i]-'0';
           temp.push_back(value);
       }
       for (int i=0;i<temp.size();i++){
           solution.push_back(temp.at(i));
       }
       return solution;
}
};
int main(){
    Solution ans;
    vector <int>arrayform={1,2,0,0,0,0,0,0};
    vector <int>result=ans.addToArrayForm(arrayform,34);
    for (int i=0;i<arrayform.size();i++){
        cout<<result.at(i)<<" ";
    }
    
return 0;
}