#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;
bool solution(vector <int> v, int k){
    int n=v.size();
    stack <int> s;
    for (int i=0;i<n;i++){
        s.push(v.at(i));
    }
    for (int i=0;i<n;i++){
        int solution=0;
        stack <int> temp=s;
        while (temp.size()!=0){
            solution=v.at(i)+temp.top();
            if((solution)==k){
                return true;
                break;
            }
            temp.pop();
        }
    }
    return false;
}
int main(){
    vector <int> v={2,9,4,3,8,6};
    bool value =solution(v,4);
    cout<<value;
    
return 0;
}