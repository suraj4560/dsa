#include<iostream>
#include<string>
#include<vector>
using namespace std;
int solution(vector <int> a){
    int result ;
    int n=a.size();
    for (int i=0;i<n;i++){
        int count =0;
        for (int j=0;j<n;j++){
            if (i==j){
                continue;
            }
            else {
                if (a.at(i)==a.at(j)){
                    count++;
                }
            }
        }
        if (count ==0){
            result=a.at(i);
        }
    }
    return result;
}
int main(){
    vector <int> a={1,2,3,4,3,2,4};
    int final=solution(a);
    cout<<final;
return 0;
}